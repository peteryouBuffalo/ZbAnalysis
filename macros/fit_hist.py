#============================================================================#
#                                                                            #
# fit_hist.py - This program takes two histograms and creates a ratio plot   #
#		 between them. It also determines the normalization between	#
#               the two.							#
#                                                                            #
# Original C++ version: October-December, 2020 - Peter Young                 #
# Created: September 2021 - --"--                                            #
#                                                                            #
#============================================================================#

#== IMPORT STATEMENTS ========================================================

import ROOT
import os, sys
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
	
#=============================================================================
#== BINNING ARRAYS ===========================================================
#=============================================================================

# Bins for mass histogram & appropriate no. of bins
massBins = [
  40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72,
  110, 112, 114, 116, 118, 120, 122, 124, 126, 128, 
  130, 132, 134, 136, 138, 140, 142, 144, 146, 148,
  150, 152, 154, 156, 158, 160, 162, 164, 166, 168,
  170, 172, 174, 176, 178, 180, 182, 184, 186, 188,
  190, 192, 194, 196, 198, 200
]
sizeMass = len(massBins)-1

# Bins for MET histogram & appropriate no. of bins
metBins = [
  80, 82, 84, 86, 88, 90, 92, 94, 96, 98, 100,
  102, 104, 106, 108, 110, 112, 114, 116, 118, 120, 122, 124, 126,
  128, 130, 132, 134, 136, 138, 140, 142, 144, 146, 148, 150, 152,
  154, 156, 158, 160, 162, 164, 166, 168, 170, 172, 174, 176, 178,
  180, 182, 184, 186, 188, 190, 192, 194, 196, 198, 200
]
sizeMET = len(metBins)-1

# Bins for METsig histogram & appropriate no. of bins
sigBins = [
  20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40,
  42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72,
  74, 76, 80
]
sizeSig = len(sigBins)-1

def getBins(var):
	if var == "ZMass": return massBins
	elif var == "met": return metBins
	elif var == "metSig": return sigBins
	return null

def getBinSize(var):
	if var == "ZMass": return sizeMass
	elif var == "met": return sizeMET
	elif var == "metSig": return sizeSig
	return null

#=============================================================================
#== SET UP ===================================================================
#=============================================================================

print("===========================")
print(" Fit Hist (Python Version)")
print("===========================")

# Get the config file & proper information
cfg = ConfigParser.RawConfigParser()
cfg.read("../Configs/config.ini")

# Get the luminosities from the config file
lumis = {}
totLumis = 0
for y in ['16','17','18']:
	lumis[y] = float(cfg.get('General','lumi_'+y))
	totLumis += lumis[y]

# Set up the necessary variables & file names
channels = ["Electron", "Muon" ]
variables = ["ZMass", "met", "metSig"]
plots = {
  "Electron": ["Zee_2bjet", "Zem_2bjet_elec"],
  "Muon": ["Zmm_2bjet", "Zem_2bjet_muon" ],
}
plots_noCuts = {
  "Electron": ["Zee_2bjet_noMassCut", "Zem_2bjet_elec_noMassCut"],
  "Muon": ["Zmm_2bjet_noMassCut", "Zem_2bjet_muon_noMassCut"]
}


#=============================================================================
#== MAIN CODE ================================================================
#=============================================================================


# Settings
ROOT.gStyle.SetOptStat(0)
debug = True		# true = print debug statements, false = do NOT do this
save_plots = True	# true = save the plots, false = do NOT do this

file_location = "../output_updates/"	# directory for ROOT files


# Loop through each channel
for chan in channels:

	if debug: print "Channel : ", chan

	# Loop through each year
	for yr in ['16','17','18']:
		
		if debug: print "  Year: 20" + yr
		
		# Get the proper file
		file_name = file_location + cfg.get(chan, 'file_' + yr)
		f = ROOT.TFile.Open(file_name, "read")
		print "    File : ", file_name
	
		# Loop through each variable
		for var in variables:
			
			if debug: print "      Variable: ", var
			
			plot_ll = plots_noCuts[chan][0] + "_" + var
			plot_emu = plots_noCuts[chan][1] + "_" + var
			print "        Hist ll:  ", plot_ll
			print "        Hist emu: ", plot_emu
			
			# Get the histograms
			ll_data = f.Get(plot_ll)
			emu_data = f.Get(plot_emu)
			
			# Get the region that we want
			for region in ['sideband', 'window']:
				
				# Print the data
				c = ROOT.TCanvas()
				ll_data.Draw()
				
				# Draw some necessary labels
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
				
				# Save the plots
				path = "bckg_results/" + region + "/" + chan + "_" + var + "_" + yr + ".pdf"
				c.SaveAs(path)
			

