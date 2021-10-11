#*****************************************************************************
#                                                                            *
# model_unc.py - This macro takes the proper data, subtracts out the MC      *
#               background estimations, and then gets the (data-bkgd)/MC     *
#               ratio at each bin. We can then fit the values with a generic *
#               polynomials.                                                 *
#                                                                            *
#               created June 2021, Peter W. Young                            *
#                                                                            *
#****************************************************************************/

#== IMPORT STATEMENTS ========================================================
import ROOT
import os,sys
import math
import array
import ConfigParser


#== GET LUMI SCALE ===========================================================

def scaleToLumi(fName, xSec, lumi):
	f = ROOT.TFile.Open(fName, "read")
	hTmp = f.Get("Nevt")
	nP = hTmp.GetBinContent(3)
	nN = hTmp.GetBinContent(1)
	return float(lumi)*float(xSec)/float(nP-nN)

#== MAIN CODE ================================================================

# Turn on/off necessary features for output perspectives
#ROOT.gROOT.SetBatch(ROOT.kTRUE)
ROOT.gStyle.SetOptStat(0)
debug = True

print "======================================="
print "Model Uncertainty Macro (June 2020, v2)"
print "======================================="
print "Reading configure files...\n"

#=============================================================================
# Get the config file & proper information
#=============================================================================
cfg = ConfigParser.RawConfigParser()
cfg.read("../Configs/config.ini")

# Get the luminosities from the config file
lumis = {}
totLumis = 0
for y in ['16','17','18']:
	lumis[y] = float(cfg.get('General', 'lumi_'+y))
	totLumis += lumis[y]
	
variables = ["pt_b1", "pt_b2", "pt_Z", "dPhi_2b", "dR_2b", "dRmin_Z2b", "m_2b", "m_Z2b"]
channels = ["Electron", "Muon"]

#=============================================================================
# loop over plot name
#=============================================================================
for pltName in variables:
	print "####################################################"
	print "Checking for: ", pltName
	print "####################################################"
	
	#===========================================================================
	# Get the binning skims
	#===========================================================================
	recobins = []; xAtitle = ""
	if pltName in ['pt_b1']:
		recobins = array.array('d', [30,40,50,60,70,80,90,110,130,150,200])
		if pltName == 'pt_b1': xAtitle='Leading b jet p_{T} [GeV]'
	if pltName in ['pt_b2']:
		recobins = array.array('d', [30,40,50,60,80,90,110,130,150,200])
		if pltName == 'pt_b2': xAtitle='Sub-leading b jet p_{T} [GeV]'
	if pltName in ['pt_Z']:
		recobins = array.array('d', [0,10,20,30,40,50,60,80,100,120,150,200,300])
  	if pltName == 'pt_Z': xAtitle='Z p_{T} [GeV]'
	if pltName == 'dR_2b':
		recobins = array.array('d', [0.4,0.8,1.2,1.6,2.0,2.4,2.8,3.0,3.4,4,4.5,5]) 
  	xAtitle='#DeltaR_{bb}'
	if pltName =='dPhi_2b':
		recobins = array.array('d', [0.,0.25,0.5,0.75,1.0,1.25,1.5,1.75,2.0,
		2.25,2.5,2.75,ROOT.TMath.Pi()]) 
		xAtitle='#Delta#Phi_{bb}'
	if pltName =='dRmin_Z2b':
		recobins = array.array('d', [0.,0.3,0.6,0.9,1.2,1.5,1.8,2.1,2.4,
		2.7,3,3.3,3.6,4,5])
		xAtitle='Min(#DeltaR_{Zbb})'
	if pltName =='A_Z2b':
		recobins = array.array('d', [0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,
		0.45,0.5,0.6,0.7,0.8,1])
		xAtitle='A_{Zbb}'
	if pltName =='m_2b':
		recobins = array.array('d', [20,50,75,100,125,150,175,200,225,250,
		275,300,350,400,500])
		xAtitle='M_{bb} [GeV]'
	if pltName =='m_Z2b':
		recobins = array.array('d', [150,200,225,250,275,300,325,350,375,
		400,425,450,500,600])
		xAtitle='M_{Zbb} [GeV]'
	
	#===========================================================================
	# Loop through the channels
	#===========================================================================
	for chan in channels:
		print "Channel: ", chan
		
		# create the proper histogram name
		name1 = 'Zmm'
		if chan == 'Electron': name1 = 'Zee'
		name2 = '2bjet'
		name3 = pltName
		if pltName == 'pt_b1': name3 = 'pt_jet'
		if pltName == 'pt_b2': name3 = 'pt_jet1'
		if pltName == 'pt_Z': name3 = 'pt_dilepton'
		nameAll = name1 + '_' + name2 + '_' + name3
    
    # we need to go through each year
		for yr in ['16','17','18']:
			
			print "\tYear: 20" + yr
    	
    	#=======================================================================
    	# Get the proper data file 
    	#=======================================================================
			file_loc = "../root_files/check/"
			fName = file_loc + cfg.get(chan, 'file_' + yr)
			f = ROOT.TFile.Open(fName, "read")
			
			data = f.Get(nameAll)
						
			#=======================================================================
			# Rebin the histograms so we can properly use
			#=======================================================================
			nBins = 5
			if pltName in ["m_2b", "m_Z2b"]: nBins = 10
			if pltName in ["pt_b1", "pt_b2", "pt_Z"]: nBins = 20
			data.Rebin(nBins)
			
			#=======================================================================
			# Get all of the proper backgrounds
			#=======================================================================
			full_bckg = data.Clone("full_bckg"); full_bckg.Reset()
			MC = data.Clone("MC"); MC.Reset()
			bckg_list = ['TT', 'ST', 'WW', 'WZ', 'ZZ', 'ZH']
			
			# for each background...
			for bckg in bckg_list:
				
				# get the files for the given year...
				files = cfg.get(bckg, 'file_'+yr).split(',')
				xSecs = cfg.get(bckg, 'xSec_'+yr).split(',')
				for i in range(len(files)):
					
					# get the proper histogram (& don't forget to scale it)
					fName = file_loc + files[i]
					fTemp = ROOT.TFile.Open(fName, "read")
					hTemp = fTemp.Get(nameAll)
					hTemp.Rebin(nBins)
					scale = scaleToLumi(fName, xSecs[i], lumis[yr])
					hTemp.Scale(scale)
					full_bckg.Add(hTemp)
			
			# now let's get the DY backgrounds properly

			dy_list = ['DY_0J', 'DY_1J', 'DY_2J']
			
			for dy in dy_list:
				
				# get the file & cross section for the given year...
				fName = file_loc + cfg.get(dy, 'file_'+yr)
				xSec = cfg.get(dy, 'xSec_'+yr)
				bits = xSec.split('*')
				xSec = float(bits[0])*float(bits[1])
				
				fTemp = ROOT.TFile.Open(fName, "read")
				
				# get the bX information (part of background)
				nameAll = name1 + '_' + name2 + '_bX_' + name3
				hTemp = fTemp.Get(nameAll)
				hTemp.Rebin(nBins)
				scale = scaleToLumi(fName, xSec, lumis[yr])
				hTemp.Scale(scale)
				full_bckg.Add(hTemp)
				
				# get the XX information (part of background)
				nameAll = name1 + '_' + name2 + '_XX_' + name3
				hTemp = fTemp.Get(nameAll)
				hTemp.Rebin(nBins)
				hTemp.Scale(scale)
				full_bckg.Add(hTemp)
				
				# get the bb information (MC for comparison)
				nameAll = name1 + '_' + name2 + '_bb_' + name3
				hTemp = fTemp.Get(nameAll)
				hTemp.Rebin(nBins)
				hTemp.Scale(scale)
				MC.Add(hTemp)

			# Remove the background from the data & divide by the MC
			# Make sure to normalize them first
			data.Add(full_bckg, -1)
			data.Scale(1./data.Integral())
			MC.Scale(1./MC.Integral())
			
			## TEMPORARY - IGNORE ########################################################
			#cTemp = ROOT.TCanvas()
			#data.Draw()
			#cTemp.SaveAs("model_results/" + chan + "_" + pltName + "_" + yr + "_DATA.pdf")
			#cTemp2 = ROOT.TCanvas()
			#MC.Draw()
			#cTemp2.SaveAs("model_results/" + chan + "_" + pltName + "_" + yr + "_MC.pdf")
			###############################################################################
			
			data.Divide(MC)
			
			#=======================================================================
			# Fit the data & manipulate the plot as necessary
			#=======================================================================
			data.Fit("pol3")
			
			data.GetYaxis().SetTitle("Data-bckg/MC")
			data.GetXaxis().SetTitle(xAtitle)
			data.SetLineColor(ROOT.kRed)
			data.SetMarkerStyle(ROOT.kFullDotMedium)
			data.SetMarkerColor(ROOT.kRed)
			data.SetMinimum(0.2)
			data.SetMaximum(1.8)
			
			if pltName in ["pt_b1", "pt_b2", "pt_Z"]:
				data.GetXaxis().SetRangeUser(0, 400)
			if pltName == "dPhi_2b":
				data.GetXaxis().SetRangeUser(0, ROOT.TMath.Pi())
			if pltName in ["dR_2b", "dRmin_Z2b"]:
				data.GetXaxis().SetRangeUser(0, 5)
			if pltName in ["m_2b"]:
				data.GetXaxis().SetRangeUser(20, 500)
			if pltName in ["m_Z2b"]:
				data.GetXaxis().SetRangeUser(20, 600)
			
			
			# Get the fit back so we can use the parameters
			params = []; errs = []
			fit = data.GetFunction("pol3")
			for i in range(4):
				params.append(fit.GetParameter(i))
				errs.append(fit.GetParError(i))
				
			# Create the legend so we can display this information
			leg = ROOT.TLegend(0.6, 0.7, 0.9, 0.9)
			for i in range(4):
				par = str(round(params[i],5))
				err = str(round(errs[i],5))
				lbl = "p" + str(i) + " = " + par + " #pm " + err
				leg.AddEntry(0, lbl, "")
			leg.SetTextSize(0.03)
			
			# Let's print the data
			c = ROOT.TCanvas()
			c.SetGrid()
			data.Draw()
			leg.Draw()
			
			# Draw Some necessary labels
			t = ROOT.TLatex()
			t.SetNDC()
			t.DrawLatex(0.1, 0.92, "CMS")
			
			t2 = ROOT.TLatex()
			t2.SetNDC()
			t2.SetTextAlign(12)
			t2.SetTextFont(42)
			t2.SetTextSize(0.04)
			t2.DrawLatex(0.4, 0.93, "Work in Progress")
			
			t3 = ROOT.TLatex()
			t2.SetNDC()
			t2.SetTextFont(42)
			t2.SetTextSize(0.04)
			t2.DrawLatex(0.7, 0.93, "35.9 fb^{-1} (13 TeV)")
			
			
			# Save the plot
			path = "model_results/" + chan + "_" + pltName + "_" + yr + ".pdf"
			c.SaveAs(path)
	
