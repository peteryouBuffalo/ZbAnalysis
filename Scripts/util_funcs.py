import ROOT
import os,sys
import math
import myutils
import subprocess
from array import array
from math import *

sys.path.append('/uscms_data/d3/duong/CMSSW/CMSSW_7_6_5/src/ZplusC/python/')


colors = [416+1, 632+1, 600+1, 400+1, 800+7, 432+1, 616+1, 616+3] #Red, green, blue, yellow, orange,cyan,magnetan 
colors_zj = [416+3, 416+2, 416+1] 

def pause():
   rep = ''
   while not rep in [ 'q', 'Q' ]:
     rep = raw_input( 'enter "q" to quit: ' )
     if len(rep) > 1:
       rep = rep[0]


def deltaPhi(phi1, phi2):
    '''result = phi1 - phi2
    if result > ROOT.TMath.Pi():
      result -= 2*ROOT.TMath.Pi()
    elif result <= -ROOT.TMath.Pi():
      result += 2*ROOT.TMath.Pi()
    return result
    '''    
    result = phi1 - phi2
    while (result > math.pi): result -= 2*math.pi
    while (result <= -math.pi): result += 2*math.pi
    return result

def deltaR(eta1, phi1, eta2, phi2):
    deta = eta1 - eta2
    dphi = deltaPhi(phi1, phi2)
    return ROOT.TMath.Sqrt(deta*deta + dphi*dphi);

def sortPt(idxs, pts): #idxs are the index in pts array. For example pts are pts of all jets and idxs is array contain selected jet idex in pts array(for example after pt, eta cut)
  for i in range(0, len(idxs)):
    for j in range(i+1, len(idxs)):
      idx_i = idxs[i]
      idx_j = idxs[j] 
      if pts[idx_j] > pts[idx_i]:
        idxs[i] = idx_j
        idxs[j] = idx_i

def sortPtFatjet(idxs, pts, nJet):
  idxTmps = []
  for i in range(0, nJet):
    idxTmps.append(idxs[i])
  sortPt(idxTmps,pts)
  for i in range(0,nJet):
    idxs[i] = idxTmps[i]

#this is used to get the folder from a text file containing a list of folder and sample indentifider
def getInputFolder(sampleList, identifier, addSubFolder=True):
  lines = open(sampleList).readlines()
  for l in lines:
    if '#' in l: continue
    if identifier in l:
      if addSubFolder: inFile_folder = l.split()[0] + '/' + identifier
      else: inFile_folder = l.split()[0] + '/'
      if 'root://cmseos.fnal.gov' in inFile_folder:
        inFile_folder = inFile_folder.split('root://cmseos.fnal.gov')[1]
        print '>>>>>>>>>>>>>>>>>>FOLDER of root file: ', inFile_folder
        return inFile_folder
  print 'No input folder found in ', sampleList, ' for ', identifier
  return ''



def findSubFolders(path, fileList,eos=True):
  if path.find('failed') != -1: return 1
  os.system('rm tmp.txt')
  if eos: os.system('xrdfs root://cmseos.fnal.gov ls -u ' + path + '/ > tmp.txt')
  else: os.system('ls ' + path + '/ > tmp.txt')
  
  f = open('tmp.txt')
  lines = f.readlines()
  f.close()
  #print lines
  if len(lines) == 0:
    return 0
  
  for line in lines:
    line = line.replace('\n','')
    if line.find('log.tar.gz') != -1: 
      continue
    if not eos: line = path + '/' + line
    if line.find('.root') != -1: 
      os.system('echo \'' + line + '\' >> ' + fileList)
    else:
      if eos:
        line = '/store' + line.split('/store')[1]
      findSubFolders(line,fileList)
     
  return 1

def getFileListUseGrep(path, fileName_prefix_forGrep, fileList, eos=True):
  os.system('rm tmp.txt')
  print 'xrdfs root://cmseos.fnal.gov ls -u ' + path + '/' + ' | grep ' + fileName_prefix_forGrep + ' > tmp.txt'
  if eos: os.system('xrdfs root://cmseos.fnal.gov ls -u ' + path + '/' + ' | grep ' + fileName_prefix_forGrep + ' > tmp.txt')
  else: os.system('ls ' + path + '/'  + ' | grep ' + fileName_prefix_forGrep + ' > tmp.txt' )
  
  f = open('tmp.txt')
  lines = f.readlines()
  f.close()
  #print lines
  if len(lines) == 0:
    return 0
  
  for line in lines:
    line = line.replace('\n','')
    if line.find('log.tar.gz') != -1: 
      continue
    if not eos: line = path + '/' + line
    if line.find('.root') != -1: 
      os.system('echo \'' + line + '\' >> ' + fileList)
  
  return 1



def VtxMassCorr( pv_x,  pv_y,  pv_z,  sv_x,  sv_y,  sv_z,  sv_px,  sv_py,  sv_pz,  sv_mass):
    #sqrt(vtxMass^2 + p_T_rel^2) + p_T_rel
    pv = ROOT.TVector3(pv_x, pv_y, pv_z)
    sv = ROOT.TVector3(sv_x, sv_y, sv_z)
    fl = ROOT.TVector3(sv - pv)
    sv_p = ROOT.TVector3(sv_px, sv_py, sv_pz)
    if fl.Mag2() > 0:
      sv_pt2 = fl.Cross(sv_p).Mag2()/fl.Mag2()
    else:
      sv_pt2 = 0
    return ROOT.TMath.Sqrt(sv_mass*sv_mass + sv_pt2) + ROOT.TMath.Sqrt(sv_pt2)
  
def scaleToLumi(fName, xSec, lumi, use_eos=False):
  nP = 0
  nN = 0
  if not use_eos:
    f = ROOT.TFile.Open(fName, 'read')
    hTmp = f.Get('CountPosWeight')
    hTmp1 = f.Get('CountNegWeight')
    nP = hTmp.GetBinContent(1)
    nN = hTmp1.GetBinContent(1)
  else:
    os.system('ls ' + fName + '/*.* > tmp.txt')
    lines = open('tmp.txt','r').readlines()
    for l in lines:
      l = l.replace('\n','')
      f = ROOT.TFile.Open(l, 'read')
      hTmp = f.Get('CountPosWeight')
      hTmp1 = f.Get('CountNegWeight')
      if hTmp and hTmp1:
        nP += hTmp.GetBinContent(1)
        nN += hTmp1.GetBinContent(1)

  return lumi*xSec/(nP-nN)
  #hTmp1 = f.Get('Count')
  #return lumi*xSec/(hTmp1.GetBinContent(1))

def scaleToLumi1(fName, xSec, lumi):
  f = ROOT.TFile.Open(fName, 'read')
  hTmp = f.Get('Nevt')
  nP = hTmp.GetBinContent(3)
  nN = hTmp.GetBinContent(1)
  return lumi*xSec/(nP-nN)


#fName can be tree or file name contain a tree
def getHisto(fName, histname, axis, varName, cut, scale = '1'):
  cut = '(' + cut + ')*(' + scale + ')'
  print '========================================================'
  print 'Input file: ', fName
  print 'Cut and scale: ', cut
  print 'Var: ',
  for i in range(len(varName)):
    print varName[i], ' '
 
  #Return empty histogram if there is no input file, tree ...
  h = None
  if fName == '' and not isinstance(fName,ROOT.TTree) and not isinstance(fName,ROOT.TChain):
    if len(varName) == 1:
      h = ROOT.TH1D(histname, histname, axis['x'][0], axis['x'][1], axis['x'][2])
    if len(varName) == 2:
      if len(axis['y']) == 3:
        h = ROOT.TH2D(histname, histname, axis['x'][0], axis['x'][1], axis['x'][2], axis['y'][0], axis['y'][1], axis['y'][2])
      else:
        h = ROOT.TH2D(histname, histname, axis['x'][0], axis['x'][1], axis['x'][2], int(axis['y'][0]), axis['y'][1])
      h.Sumw2()
      h.SetTitle(cut)

    return h
    
  tr = None
  if isinstance(fName,str):
    f = ROOT.TFile.Open(fName, 'read')
    tr = f.Get('tree')
  if isinstance(fName,ROOT.TTree) or isinstance(fName,ROOT.TChain):
    tr = fName

  if len(varName) == 1:
    h = ROOT.TH1D(histname, histname, axis['x'][0], axis['x'][1], axis['x'][2])
  if len(varName) == 2:
    if len(axis['y']) == 2:
      h = ROOT.TH2D(histname, histname, axis['x'][0], axis['x'][1], axis['x'][2], axis['y'][0], axis['y'][1])
    if len(axis['y']) == 3:
      h = ROOT.TH2D(histname, histname, axis['x'][0], axis['x'][1], axis['x'][2], axis['y'][0], axis['y'][1], axis['y'][2])
  if len(varName) == 3:
    h = ROOT.TH3D(histname, histname, axis['x'][0], axis['x'][1], axis['x'][2], axis['y'][0], axis['y'][1], axis['y'][2],axis['z'][0], axis['z'][1], axis['z'][2])
  
  h.SetTitle(cut)
  h.Sumw2()
  
  if len(varName) == 1:
    tr.Draw(varName[0] + '>>' + histname, cut)
  if len(varName) == 2:
    tr.Draw(varName[1] + ':' + varName[0] + '>>' + histname, cut)
  if len(varName) == 3:
      tr.Draw(varName[2] + ':' + varName[1] + ':' + varName[0] + '>>' + histname, cut)
  
  h.SetDirectory(0)

  return h


def PtReweight(h2D, hRat, svtType = 'incVtxMass'):
  
  h2D_reweight = h2D.Clone(h2D.GetName()+'_ptReweight')
  #h2D_reweight.Reset()

  pt_axis = h2D.GetYaxis()
  vtxMass_axis = h2D.GetXaxis()
  
  for iPt in range(1, hRat.GetNbinsX() + 1):
    pt = hRat.GetBinLowEdge(iPt)
    w = hRat.GetBinContent(iPt)
    if svtType == 'incVtxMass' and pt > 80: #60 
      print 'Skip reweight from ', pt
      continue 
    if svtType == 'vtxMass' and pt > 100: #100
      print 'Skip reweight from ', pt
      continue 
    iPt1 = pt_axis.FindFixBin(pt)
    for iVtxMass in range(1, vtxMass_axis.GetNbins()+1):
      binContent = h2D.GetBinContent(iVtxMass,iPt1)
      binError = h2D.GetBinError(iVtxMass,iPt1)
      h2D_reweight.SetBinContent(iVtxMass,iPt1,binContent*w)
      h2D_reweight.SetBinError(iVtxMass,iPt1,binError*w)
  
  return h2D_reweight


def PtEtaReweight(h3D_in, hWeight_in = None): #h3D_in (jet_vtxMass jet_pt jet_eta)is a list with h3D_in[0] = emu, h3D_in[1] = zHFjet in bin 
    #print 'h3D_in is: ', h3D_in
    hW = None
    if not isinstance(hWeight_in,ROOT.TH2D):
        #find the weight histogram 
        h_jet_pt_eta = []
        h_jet_pt_eta_norm = []
        for i in range(2):
          h_jet_pt_eta.append(h3D_in[i].Project3D(h3D_in[i].GetName() + '_zy')) #need to reject overflow

        #for remove bins in tt histogram when dy histogram bin content = 0
        h_jet_pt_eta_tmp = h_jet_pt_eta[1].Clone(h_jet_pt_eta[1].GetName() + '_trans')
        h_jet_pt_eta_tmp.Divide(h_jet_pt_eta[1]) #this is 2D histogram with bin content = 0 or 1 depending on DY pt eta plots bin content is 0 or 1

        #apply 0 1 histogram above to TT plot so get rid of bins which correspond to DY bin with 0 bin content 
        h_jet_pt_eta_trans = h_jet_pt_eta[0].Clone(h_jet_pt_eta[0].GetName() + '_trans')
        h_jet_pt_eta_trans.Multiply(h_jet_pt_eta_tmp)

        #norm plot
        hTmp = h_jet_pt_eta_trans.Clone(h_jet_pt_eta_trans.GetName() + '_clone')
        hTmp.Scale(1./hTmp.Integral())
        h_jet_pt_eta_norm.append(hTmp)
        hTmp = h_jet_pt_eta[1].Clone(h_jet_pt_eta[1].GetName() + '_clone')
        hTmp.Scale(1./hTmp.Integral())
        h_jet_pt_eta_norm.append(hTmp)

        hW = h_jet_pt_eta_norm[1].Clone(h_jet_pt_eta_norm[1].GetName() + '_reweight_function')
        hW.Divide(h_jet_pt_eta_norm[0])
    else:
        hW = hWeight_in
    xA = h3D_in[0].GetXaxis() #vtxMass
    yA = h3D_in[0].GetYaxis() #pt
    zA = h3D_in[0].GetZaxis() #eta
    nBin_xA = xA.GetNbins()
    nBin_yA = yA.GetNbins()
    nBin_zA = zA.GetNbins()
    h3D_out = h3D_in[0].Clone(h3D_in[0].GetName() + '_reweighted')
    h3D_out.Reset()
    for iy in range(1,nBin_yA+1):
      #TEMP for limitting the reweight
      y = yA.GetBinLowEdge(iy)
      #print 'y is: ', y
      for iz in range(1,nBin_zA+1):
          w = hW.GetBinContent(iy,iz)
          if w > 10: w = 1
          if y > 200: w = 1
          for ix in range(1,nBin_xA+1):
              h3D_out.SetBinContent(ix,iy,iz,h3D_in[0].GetBinContent(ix,iy,iz)*w)
              h3D_out.SetBinError(ix,iy,iz,h3D_in[0].GetBinError(ix,iy,iz)*w)
    h_jet_vtxMass_reweight = h3D_out.ProjectionX()
    return [h_jet_vtxMass_reweight,hW]


def Rebinning2D(h2D,xDiv,yDiv):
  
  h2D_rebin = ROOT.TH2D(h2D.GetName()+'_rebinning','',len(xDiv)-1,array('f',xDiv),len(yDiv)-1,array('f',yDiv))
  ori_xAxis = h2D.GetXaxis()
  ori_yAxis = h2D.GetYaxis()
  rebin_xAxis = h2D_rebin.GetXaxis()
  rebin_yAxis = h2D_rebin.GetYaxis()

  for iX in range(len(xDiv)-1):
    for iY in range(len(yDiv)-1):
      xL = xDiv[iX]
      xH = xDiv[iX+1]
      yL = yDiv[iY]
      yH = yDiv[iY+1]
      i_xL = ori_xAxis.FindFixBin(xL+0.0001)
      i_xH = ori_xAxis.FindFixBin(xH-0.0001)
      i_yL = ori_yAxis.FindFixBin(yL+0.0001)
      i_yH = ori_yAxis.FindFixBin(yH-0.0001)

      cT = 0
      eT = 0
      for iX1 in range(i_xL,i_xH+1):
        for iY1 in range(i_yL,i_yH+1):
          cT += h2D.GetBinContent(iX1,iY1)
          eT += h2D.GetBinError(iX1,iY1)*h2D.GetBinError(iX1,iY1)
      eT = ROOT.TMath.Sqrt(eT)
      h2D_rebin.SetBinContent(iX+1,iY+1,cT)
      h2D_rebin.SetBinError(iX+1,iY+1,eT)
  
  return h2D_rebin

def PtEtaReweight_new(h3D_in, xDiv, yDiv, hWeight_in = None): #h3D_in (jet_vtxMass jet_pt jet_eta)is a list with h3D_in[0] = emu, h3D_in[1] = zHFjet in bin 
    #print 'h3D_in is: ', h3D_in
    h3D_in_rebin = [h3D_in[0].Clone(h3D_in[0].GetName() + '_in_clone'), h3D_in[1].Clone(h3D_in[1].GetName() + '_in_clone')]
    #h3D_in_rebin[0].Rebin3D(1,yRebin,zRebin)
    #h3D_in_rebin[1].Rebin3D(1,yRebin,zRebin)
    hW = None
    if not isinstance(hWeight_in,ROOT.TH2D):
        #find the weight histogram 
        h_jet_pt_eta = []
        h_jet_pt_eta_norm = []
        for i in range(2):
          h_jet_pt_eta.append(Rebinning2D(h3D_in_rebin[i].Project3D(h3D_in_rebin[i].GetName() + '_zy'),xDiv,yDiv)) #need to reject overflow

        #for remove bins in tt histogram when dy histogram bin content = 0
        h_jet_pt_eta_tmp = h_jet_pt_eta[1].Clone(h_jet_pt_eta[1].GetName() + '_trans')
        h_jet_pt_eta_tmp.Divide(h_jet_pt_eta[1]) #this is 2D histogram with bin content = 0 or 1 depending on DY pt eta plots bin content is 0 or 1

        #apply 0 1 histogram above to TT plot so get rid of bins which correspond to DY bin with 0 bin content 
        h_jet_pt_eta_trans = h_jet_pt_eta[0].Clone(h_jet_pt_eta[0].GetName() + '_trans')
        h_jet_pt_eta_trans.Multiply(h_jet_pt_eta_tmp)

        #norm plot
        hTmp = h_jet_pt_eta_trans.Clone(h_jet_pt_eta_trans.GetName() + '_clone')
        hTmp.Scale(1./hTmp.Integral())
        h_jet_pt_eta_norm.append(hTmp)
        hTmp = h_jet_pt_eta[1].Clone(h_jet_pt_eta[1].GetName() + '_clone')
        hTmp.Scale(1./hTmp.Integral())
        h_jet_pt_eta_norm.append(hTmp)

        hW = h_jet_pt_eta_norm[1].Clone(h_jet_pt_eta_norm[1].GetName() + '_reweight_function')
        hW.Divide(h_jet_pt_eta_norm[0])
    else:
        hW = hWeight_in.Clone()

    xA = h3D_in_rebin[0].GetXaxis() #vtxMass
    yA = h3D_in_rebin[0].GetYaxis() #pt
    zA = h3D_in_rebin[0].GetZaxis() #eta
    nBin_xA = xA.GetNbins()
    nBin_yA = yA.GetNbins()
    nBin_zA = zA.GetNbins()
    h3D_out = h3D_in_rebin[0].Clone(h3D_in_rebin[0].GetName() + '_reweighted')
    h3D_out.Reset()
    for iy in range(1,nBin_yA+1):
      #TEMP for limitting the reweight
      y = yA.GetBinLowEdge(iy)
      #print 'y is: ', y
      for iz in range(1,nBin_zA+1):
          z = zA.GetBinLowEdge(iz)
          iyTmp = hW.GetXaxis().FindFixBin(y)
          izTmp = hW.GetYaxis().FindFixBin(z)
          w = hW.GetBinContent(iyTmp,izTmp)
          #if y >= 30 and (w <= 0 or w > 10):
          #  print '>>>Negative zero or large weight: ', y, z, w
          if w < 0: w = 1
          for ix in range(1,nBin_xA+1):
              x = xA.GetBinLowEdge(ix)
              #TEMP
              #if x > 4.5: 
              #  w = 0.81
              h3D_out.SetBinContent(ix,iy,iz,h3D_in_rebin[0].GetBinContent(ix,iy,iz)*w)
              h3D_out.SetBinError(ix,iy,iz,h3D_in_rebin[0].GetBinError(ix,iy,iz)*w)
    h_jet_vtxMass_reweight = h3D_out.ProjectionX()
    return [h_jet_vtxMass_reweight,hW]

def SVT_mass_correction1(hIn,func, debug = False):
  if debug:
    print '>>>>>>>>>>Fit function: ', func
  hOut = hIn.Clone(hIn.GetName() + '_corrected')
  f = ROOT.TF1(func,func,0,10)
  for iBin in range(1, hIn.GetNbinsX() + 1):
    x = hIn.GetBinCenter(iBin)
    weight = f(x)
    if debug:
      print 'Weights is: ', weight
    hOut.SetBinContent(iBin,weight*hOut.GetBinContent(iBin))
    hOut.SetBinError(iBin,weight*hOut.GetBinError(iBin))

  return hOut


def SVT_mass_correction(hIn,syst="",tagName='CSVM',is_dy_nlo=False,chan='All', debug=False): #chan = Zee, Zmm, All
  hOut = hIn.Clone(hIn.GetName() + '_corrected')
  if tagName != 'CSVM' and tagName != 'CSVT' and tagName != 'CtagT':
    print 'No consistent tagger found, do nothing'
    return hOut
  if chan != 'All' and chan != 'Zee' and chan != 'Zmm':
    print 'Input channel is:', chan, ', which is not All, Zee or Zmm. Check!!!!!'
    return hOut
  for iBin in range(1, hIn.GetNbinsX() + 1):
    x = hIn.GetBinCenter(iBin)
    #weight = 1.29204887679 -0.137256571892*x + 0.00397137662104*x*x -0.0669127644504/x
    #weight = 1.29801380308 -0.1455532707*x + 0.00573808024667*x*x -0.0639078204504/x #LO no PU weight for MC TT b-jet msv
    if tagName == 'CSVM':
      if chan == 'All':
        weight = 1.30396720217 -0.148343047764*x + 0.00559811760029*x*x -0.0633462590092/x
      if chan == 'Zee':
        weight = 1
      if chan == 'Zmm':
        weight = 1
      if is_dy_nlo==1: #DY_nlo inclusive sample
        if debug: print '>>>>>I use correction function for CSVM and DY_nlo'
        if chan == 'All':
          weight = 1.33490378998 -0.162317393542*x + 0.00715024742242*x*x -0.0791229304479/x #fit 0.2-6 with PU weight 
          #weight = 1.30849297983 -0.142337192446*x + 0.00409150733225*x*x -0.0770807745712/x #fit 0.2-6 no PU weight
          #weight = 1.34057659639 -0.166452846013*x + 0.00887261991331*x*x -0.0874523022704/x #fit 0.2-5.4 no PU weight
          #weight = 1.31887713756 -0.150133099535*x + 0.00563477660418*x*x -0.0804405138121/x #fit 0.2-5.5 no PU weight
        if chan == 'Zee':
          #weight = 1.44452511023 -0.245699061358*x + 0.0225831192542*x*x -0.107613660407/x
          weight = 1.4494031076 -0.248173193808*x + 0.0228027898453*x*x -0.109122618487/x #use lep_pt_20 and noGap (eta) in emu selection, 0.2 binning 
          #weight = 1.42159410687 -0.231441726875*x + 0.020030924582*x*x -0.096988018387/x  #use lep_pt_20 and noGap (eta) in emu selection, use new binning (~0.3 binwidth)
          #weight = 1.4227964327 -0.232213903563*x + 0.0202908977683*x*x -0.0984764272784/x #use lep_pt_25 include gap in emu selection, use new binning (~0.3 binwidth)
          if debug:
            print '>>>>>>>>>Use correction function for CSVM, NLO, and Zee channel'
        if chan == 'Zmm':
          weight = 1.26426409747 -0.108461751652*x -0.00295364983998*x*x -0.060535149653/x #use lep_pt_20 in emu selection, 0.2 binning
          #weight = 1.30022880169 -0.127890569672*x + 0.000228948725224*x*x -0.08034010636/x #use lep_pt_?? in emu selection, (~0.3 binning??)
      
      if is_dy_nlo==2: #DY_nlo nJ sample
        if chan == 'All':
          weight = 1.25317712161 -0.113397601965*x -0.00115288215762*x*x -0.0423687823867/x 
        if chan == 'Zee':
          weight = 1.18841841672 -0.0743106745058*x -0.00674108763337*x*x -0.0205166296498/x 
        if chan == 'Zmm':
          weight = 1.29375328757 -0.137237646251*x + 0.00206152944874*x*x -0.0560692237647/x 
        if debug: print '>>>>>Central: Use correction function for CSVM, DY nlo nJ'
      
      if is_dy_nlo==3: #DY_nlo nJ sample and lep pT > 25
        if chan == 'All':
          weight = 1.26998188238 -0.129239873713*x + 0.00185577698765*x*x -0.0423191203503/x
        if chan == 'Zee':
          weight = 1.20198590337 -0.083026328936*x -0.0055241836418*x*x -0.0239023204502/x
        if chan == 'Zmm':
          weight = 1.30941027179 -0.155006877253*x + 0.00568867027463*x*x -0.0530569284372/x
        if debug: print '>>>>>Central: Use correction function for CSVM, DY nlo nJ and lep_pt > 25'

      if is_dy_nlo==4: #DY_nlo nJ sample and lep pT > 25 and no eta gap for both electron and muon channels
        if chan == 'All':
          weight = 1.27955589554 -0.133095635523*x + 0.00225061781375*x*x -0.048044233549/x 
        if chan == 'Zee':
          weight = 1.20198590337 -0.083026328936*x -0.0055241836418*x*x -0.0239023204502/x
        if chan == 'Zmm':
          weight = 1.32393460512 -0.160846812176*x + 0.00629852559559*x*x -0.0619210858834/x
        if debug: print '>>>>>Central: Use correction function for CSVM, DY nlo nJ and lep_pt > 25 and no eta gap in electron and muon channels'


    if tagName == 'CSVT':
      weight = 1.
      if is_dy_nlo==1:
        if debug: print '>>>>>I use correction function for CSVT and DY_nlo'
        weight = 1.2464732098 -0.114498461618*x + 0.00353904812742*x*x -0.0468758333347/x

    if tagName == 'CtagT':
      weight = 1.51349285982 -0.323289359347*x + 0.0267369617725*x*x -0.113797075832/x
      if debug: print '>>>>>I use CtagT correction function'
    
    if syst == 'p0Up':
      if is_dy_nlo==1:
        if chan == 'All':
          weight = 1.40664491392 -0.205337236897*x + 0.0143240306826*x*x -0.110837834837/x 
        if chan == 'Zee':
          weight = 1.55903853737 -0.313971822395*x + 0.033785710912*x*x -0.157594313806/x
        if chan == 'Zmm':
          weight = 1.35539794705 -0.163147809807*x + 0.0061731437003*x*x -0.100807301031/x 
      if is_dy_nlo==2: #DY_nlo nJ sample
        if chan == 'All':
          weight = 1.29261514116 -0.136548450211*x + 0.0026155878756*x*x -0.0600952389819/x 
        if chan == 'Zee':
          weight = 1.24560837432 -0.108138250568*x -0.00118855553879*x*x -0.0460824552173/x 
        if chan == 'Zmm':
          weight = 1.34159529507 -0.165343180249*x + 0.00663952673812*x*x -0.0775487937869/x 
        if debug: print '>>>>>p0Up: Use correction function for CSVM, DY nlo nJ'
      if is_dy_nlo==3: #DY_nlo nJ sample and lep pT > 25
        if chan == 'All':
          weight =  1.31224862646 -0.154097258595*x + 0.0059127252339*x*x -0.061301774081/x
        if chan == 'Zee':
          weight = 1.263771666 -0.119588898602*x + 0.000481580577837*x*x -0.0515012127743/x
        if chan == 'Zmm':
          weight = 1.36108134637 -0.185422294344*x + 0.0106563669863*x*x -0.0762417234926/x
      if is_dy_nlo==4: #DY_nlo nJ sample and lep pT > 25 and no eta gap for both electron and muon channels
        if chan == 'All':
          weight = 1.32280590347 -0.158557302281*x + 0.00641002915457*x*x -0.0674416665231/x  
        if chan == 'Zee':
          weight = 1.263771666 -0.119588898602*x + 0.000481580577837*x*x -0.0515012127743/x
        if chan == 'Zmm':
          weight = 1.37754359167 -0.192445845857*x + 0.0114661703215*x*x -0.085934435713/x
        if debug: print '>>>>>p0Up: Use correction function for CSVM, DY nlo nJ and lep_pt > 25 and no eta gap in electron and muon channels'


    if syst == 'p0Down':
      if is_dy_nlo==1:
        if chan == 'All':
          weight = 1.26316266604 -0.119297550187*x -2.35358377988e-05*x*x -0.0474080260589/x
        if chan == 'Zee':
          weight = 1.33976767783 -0.182374565221*x + 0.0118198687786*x*x -0.0606509231681/x 
        if chan == 'Zmm':
          weight = 1.17313024789 -0.0537756934963*x -0.0120804433803*x*x -0.0202629982748/x
      if is_dy_nlo==2: #DY_nlo nJ sample
        if chan == 'All':
          weight = 1.21373910206 -0.0902467537194*x -0.00492135219084*x*x -0.0246423257914/x
        if chan == 'Zee':
          weight = 1.13122845913 -0.0404830984434*x -0.012293619728*x*x + 0.00504919591766/x 
        if chan == 'Zmm':
          weight = 1.24591128008 -0.109132112253*x -0.00251646784065*x*x -0.0345896537425/x
        if debug: print '>>>>>p0Down: Use correction function for CSVM, DY nlo nJ'
      if is_dy_nlo==3: #DY_nlo nJ sample and lep pT > 25
        if chan == 'All':
          weight = 1.2277151383 -0.104382488832*x -0.00220117125859*x*x -0.0233364666197/x
        if chan == 'Zee':
          weight = 1.14020014073 -0.04646375927*x -0.0115299478614*x*x + 0.00369657187395/x
        if chan == 'Zmm':
          weight = 1.25773919721 -0.124591460163*x + 0.000720973562932*x*x -0.0298721333819/x
      if is_dy_nlo==4: #DY_nlo nJ sample and lep pT > 25 and no eta gap for both electron and muon channels
        if chan == 'All':
          weight = 1.23630588761 -0.107633968765*x -0.00190879352707*x*x -0.0286468005749/x 
        if chan == 'Zee':
          weight = 1.14020014073 -0.04646375927*x -0.0115299478614*x*x + 0.00369657187395/x
        if chan == 'Zmm':
          weight = 1.27032561857 -0.129247778495*x + 0.00113088086963*x*x -0.0379077360538/x
        if debug: print '>>>>>p0Down: Use correction function for CSVM, DY nlo nJ and lep_pt > 25 and no eta gap in electron and muon channels'

    '''
    #These are fit uncertainties obtained by varying the parameters independently
    if syst == 'p0Up':
      if is_dy_nlo:
        if chan == 'All':
          weight = 1.40664491392 -0.162317393542*x + 0.00715024742242*x*x -0.0791229304479/x
        if chan == 'Zee':
          weight = 1.55903853737 -0.248173193808*x + 0.0228027898453*x*x -0.109122618487/x 
        if chan == 'Zmm':
          weight = 1.35539794705 -0.108461751652*x -0.00295364983998*x*x -0.060535149653/x

    if syst == 'p0Down':
      if is_dy_nlo:
        if chan == 'All':
          weight = 1.26316266604 -0.162317393542*x + 0.00715024742242*x*x -0.0791229304479/x
        if chan == 'Zee':
          weight = 1.33976767783 -0.248173193808*x + 0.0228027898453*x*x -0.109122618487/x
        if chan == 'Zmm':
          weight = 1.17313024789 -0.108461751652*x -0.00295364983998*x*x -0.060535149653/x 
    
    if syst == 'p1Up':
      if is_dy_nlo:
        if chan == 'All':
          weight = 1.33490378998 -0.119297550187*x + 0.00715024742242*x*x -0.0791229304479/x
        if chan == 'Zee':
          weight = 1.4494031076 -0.182374565221*x + 0.0228027898453*x*x -0.109122618487/x
        if chan == 'Zmm':
          weight = 1.26426409747 -0.0537756934963*x -0.00295364983998*x*x -0.060535149653/x 
    
    if syst == 'p1Down':
      if is_dy_nlo:
        if chan == 'All':
          weight = 1.33490378998 -0.205337236897*x + 0.00715024742242*x*x -0.0791229304479/x
        if chan == 'Zee':
          weight = 1.4494031076 -0.313971822395*x + 0.0228027898453*x*x -0.109122618487/x
        if chan == 'Zmm':
          weight = 1.26426409747 -0.163147809807*x -0.00295364983998*x*x -0.060535149653/x 
    
    if syst == 'p2Up':
      if is_dy_nlo:
        if chan == 'All':
          weight = 1.33490378998 -0.162317393542*x + 0.0143240306826*x*x -0.0791229304479/x
        if chan == 'Zee':
          weight = 1.4494031076 -0.248173193808*x + 0.033785710912*x*x -0.109122618487/x
        if chan == 'Zmm':
          weight = 1.26426409747 -0.108461751652*x + 0.0061731437003*x*x -0.060535149653/x 
    
    if syst == 'p2Down':
      if is_dy_nlo:
        if chan == 'All':
          weight = 1.33490378998 -0.162317393542*x -2.35358377988e-05*x*x -0.0791229304479/x
        if chan == 'Zee':
          weight = 1.4494031076 -0.248173193808*x + 0.0118198687786*x*x -0.109122618487/x
        if chan == 'Zmm':
          weight = 1.26426409747 -0.108461751652*x -0.0120804433803*x*x -0.060535149653/x 
    
    if syst == 'p3Up':
      if is_dy_nlo:
        if chan == 'All':
          weight = 1.33490378998 -0.162317393542*x + 0.00715024742242*x*x -0.0474080260589/x
        if chan == 'Zee':
          weight = 1.4494031076 -0.248173193808*x + 0.0228027898453*x*x -0.0606509231681/x
        if chan == 'Zmm':
          weight = 1.26426409747 -0.108461751652*x -0.00295364983998*x*x -0.0202629982748/x 
    
    if syst == 'p3Down':
      if is_dy_nlo:
        if chan == 'All':
          weight = 1.33490378998 -0.162317393542*x + 0.00715024742242*x*x -0.110837834837/x
        if chan == 'Zee':
          weight = 1.4494031076 -0.248173193808*x + 0.0228027898453*x*x -0.157594313806/x
        if chan == 'Zmm':
          weight = 1.26426409747 -0.108461751652*x -0.00295364983998*x*x -0.100807301031/x 
    '''
    if syst == 'JECUp':
      if tagName == 'CSVM':
        if chan == 'All':
          #weight = 1.32396590778 -0.158421744478*x + 0.00644563525772*x*x -0.0704269235991/x
          #weight = 1.33740190987 -0.170407581055*x + 0.00821645850826*x*x -0.0674320876441/x #LO no PU weight for MC TT b-jet msv
          weight = 1.33631641357 -0.169668974544*x + 0.00808636070687*x*x -0.0670557983029/x
        if chan == 'Zee':
          weight = 1
        if chan == 'Zmm':
          weight = 1
        if is_dy_nlo==1:
          if chan == 'All':
            weight = 1.36999800146 -0.183552423921*x + 0.00960589202122*x*x -0.0869263558344/x
            #weight = 1.34386600295 -0.163860948478*x + 0.00661273487003*x*x -0.0849745457188/x
          if chan == 'Zee':
            #weight = 1.48177007009 -0.26863556661*x + 0.0253999703387*x*x -0.11612624739/x
            weight = 1.48674890891 -0.271283369425*x + 0.0256681596621*x*x -0.117616735983/x #use lep_pt_20 and noGap (eta) in emu selection
            #weight = 1.45210481538 -0.251556029089*x + 0.0225229678759*x*x -0.101405487672/x #use lep_pt_20 and noGap (eta) in emu selection, new binning (~0.3 binwidth)
            #weight = 1.45369645457 -0.252370579762*x + 0.0227602758104*x*x -0.10320051321/x #use lep_pt_25 include gap in emu selection, use new binning (~0.3 binwidth)
          if chan == 'Zmm':
            weight = 1.29846143644 -0.12896121607*x -0.000651075531887*x*x -0.0680767804359/x #use lep_pt_20 in emu selection, use binning ~0.2
            #weight = 1.34593063917 -0.154223961187*x + 0.003367460522*x*x -0.0939783630118/x #use lep_pt_?? in emu selection, use binning ~0.3???
          if debug: print '>>>>>I use correction function for CSVM and DY_nlo with JECUp'
        if is_dy_nlo==2: #DY_nlo nJ sample
          if chan == 'All':
            weight = 1.2776249455 -0.129103805019*x + 0.000390395825639*x*x -0.0440694606784/x 
          if chan == 'Zee':
            weight = 1.2148249374 -0.0909787107896*x -0.00506086582115*x*x -0.0232578544094/x 
          if chan == 'Zmm':
            weight = 1.31697417448 -0.152370071994*x + 0.00353288057793*x*x -0.0571095926138/x 
          if debug: print '>>>>>JECup: Use correction function for CSVM, DY nlo nJ'
        if is_dy_nlo==3: #DY_nlo nJ sample and lep pT > 25
          if chan == 'All':
            weight = 1.29682048449 -0.145810713192*x + 0.00346750613481*x*x -0.0455343471899/x
          if chan == 'Zee':
            weight = 1.23329848031 -0.102583276019*x -0.00345936141046*x*x -0.028223807828/x
          if chan == 'Zmm':
            weight = 1.33360298678 -0.16986689776*x + 0.00705338799482*x*x -0.0555700194327/x
        if is_dy_nlo==4: #DY_nlo nJ sample and lep pT > 25 and no eta gap for both electron and muon channels
          if chan == 'All':
            weight = 1.30659369145 -0.149741160282*x + 0.00388059113917*x*x -0.0514596788624/x 
          if chan == 'Zee':
            weight = 1.23329848031 -0.102583276019*x -0.00345936141046*x*x -0.028223807828/x
          if chan == 'Zmm':
            weight = 1.34825898095 -0.175633409456*x + 0.00765178208808*x*x -0.0647556558311/x 
          if debug: print '>>>>>JECup: Use correction function for CSVM, DY nlo nJ and lep_pt > 25 and no eta gap in electron and muon channels'


      if tagName == 'CSVT':
        weight = 1
        if is_dy_nlo==1:
          weight = 1.28397574292 -0.137301990757*x + 0.00623028149955*x*x -0.0536933647069/x
          if debug: print '>>>>>I use correction function for CSVT and DY_nlo with JECUp'
      if tagName == 'CtagT':
        weight = 1.54496178986 -0.347379776841*x + 0.0297502069206*x*x -0.11792213672/x 
    
    if syst == 'JECDown':
      if tagName == 'CSVM':
        if chan == 'All':
          #weight = 1.27428457596 -0.126687231396*x + 0.00310477883054*x*x -0.0646743248746/x
          #weight = 1.2870907641 -0.13882220847*x + 0.00495674801979*x*x -0.0609622787268/x #LO no PU weight for MC TT b-jet msv
          weight = 1.28601562417 -0.138087838746*x + 0.00482694934911*x*x -0.0605907265881/x
        if chan == 'Zee':
          weight = 1
        if chan == 'Zmm':
          weight = 1
        if is_dy_nlo==1:
          if chan == 'All':
            weight = 1.3209619774 -0.152647698167*x + 0.00620642842552*x*x -0.0793915350747/x
            #weight = 1.29425712411 -0.13243393026*x + 0.00310423522946*x*x -0.0772679572485/x 
          if chan == 'Zee':
            #weight = 1.45118993591 -0.248989513947*x + 0.0238731928446*x*x -0.116426878573/x
            weight = 1.45532697023 -0.251075516317*x + 0.0240235203547*x*x -0.117484476659/x #use lep_pt_20 and noGap (eta) in emu selection
            #weight = 1.42715020701 -0.235093992954*x + 0.0214493735557*x*x -0.104054666428/x #use lep_pt_20 and noGap (eta) in emu selection, new binning (~0.3 binwidth)
            #weight = 1.42928915731 -0.236384132946*x + 0.0218031042731*x*x -0.106077351122/x #use lep_pt_25 include gap in emu selection, use new binning (~0.3 binwidth)
          if chan == 'Zmm':
            weight =  1.23726974858 -0.0904847828454*x -0.00534720008732*x*x -0.055469625406/x #use lep_pt_20 in emu selection, binning = 0.2
            #weight = 1.29728424149 -0.121467494805*x -0.000611383819125*x*x -0.0883482983751/x #use lep_pt_?? include gap in emu selection, use new binning (~0.3 binwidth ??)
          if debug: print '>>>>>I use correction function for CSVM and DY_nlo with JECDown'
        if is_dy_nlo==2: #DY_nlo nJ sample
          if chan == 'All':
            weight = 1.23451083942 -0.101864825327*x -0.00223115323684*x*x -0.0400843875912/x
          if chan == 'Zee':
            weight = 1.17333185591 -0.0655621280077*x -0.00742451526117*x*x -0.0182995966217/x 
          if chan == 'Zmm':
            weight = 1.27257855298 -0.123793074027*x + 0.000690007793106*x*x -0.053528598712/x 
          if debug: print '>>>>>JECDown: Use correction function for CSVM, DY nlo nJ'
        if is_dy_nlo==3: #DY_nlo nJ sample and lep pT > 25
          if chan == 'All':
            weight = 1.25236471277 -0.118431306987*x + 0.000938898479519*x*x -0.0406009454889/x
          if chan == 'Zee':
            weight = 1.18585957159 -0.0734319801596*x -0.0063269206642*x*x -0.0217694088842/x
          if chan == 'Zmm':
            weight = 1.29007087511 -0.142896900342*x + 0.00458102438529*x*x -0.0512071924674/x
        if is_dy_nlo==4: #DY_nlo nJ sample and lep pT > 25 and no eta gap for both electron and muon channels
          if chan == 'All':
            weight = 1.2617389052 -0.122053004636*x + 0.00125707282168*x*x -0.0461765162417/x 
          if chan == 'Zee':
            weight =  1.18585957159 -0.0734319801596*x -0.0063269206642*x*x -0.0217694088842/x
          if chan == 'Zmm':
            weight = 1.30453347612 -0.148452585085*x + 0.00508526164614*x*x -0.0600740967673/x 
          if debug: print '>>>>>JECDown: Use correction function for CSVM, DY nlo nJ and lep_pt > 25 and no eta gap in electron and muon channels'

      if tagName == 'CSVT':
        weight = 1
        if is_dy_nlo==1:
          weight = 1.24373795188 -0.112727721291*x + 0.00380701478327*x*x -0.0501807306121/x
          if debug: print '>>>>>I use correction function for CSVT and DY_nlo with JECDown'
      if tagName == 'CtagT':
        weight = 1.50286286848 -0.316774186141*x + 0.0263482939159*x*x -0.111245263127/x

    if syst == "gbbUp":
      if tagName == 'CSVM':
        if chan == 'All':
          #weight = 1.3239757698 -0.164866263534*x + 0.0103106446217*x*x -0.0781314591651/x
          #weight = 1.33163048091 -0.174455162205*x + 0.0123303229628*x*x -0.0756234587292/x #LO no PU weight for MC TT b-jet msv
          weight = 1.33527758772 -0.175457365847*x + 0.0118284650068*x*x -0.0743587796869/x
        if chan == 'Zee':
          weight = 1
        if chan == 'Zmm':
          weight = 1
        if is_dy_nlo==1:
          if chan == 'All':
            weight = 1.37024175125 -0.191199243042*x + 0.0136080069358*x*x -0.0924258628195/x
            #weight = 1.34322005127 -0.170847915314*x + 0.0104901585004*x*x -0.0901391803637/x 
          if chan == 'Zee':
            #weight = 1.47918836476 -0.273103976153*x + 0.0286622518628*x*x -0.121618877558/x
            weight = 1.48449731161 -0.275913497422*x + 0.028948338525*x*x -0.123258684216/x #use lep_pt_20 and noGap (eta) in emu selection (0.2 binwidth)
            #weight = 1.47018585222 -0.267324626609*x + 0.0275308618377*x*x -0.117056165767/x #use lep_pt_20 and noGap (eta) in emu selection new biinning (~0.3 binwidth)
            #weight = 1.47130614196 -0.268064048576*x + 0.0277891787927*x*x -0.118494564119/x  #use lep_pt_25 include gap in emu selection, use new binning (~0.3 binwidth)
          if chan == 'Zmm':
            weight = 1.29279021821 -0.132747688153*x + 0.00263023120419*x*x -0.0710961001908/x #use lep_pt_20 in emu selection binning ~0.2
            #weight = 1.34350057518 -0.159832421856*x + 0.00693210821555*x*x -0.0984727962552/x #use lep_pt_?? and noGap (eta) in emu selection new biinning (~0.3 binwidth??)
          if debug: print '>>>>>I use correction function for CSVM and DY_nlo with gbbUp'
        
        if is_dy_nlo==2: #DY_nlo nJ sample
          if chan == 'All':
            weight = 1.28201669363 -0.137781416423*x + 0.00422475150186*x*x -0.0517667811929/x
          if chan == 'Zee':
            weight = 1.21481628011 -0.0965395964284*x -0.00178983843632*x*x -0.0296010761591/x 
          if chan == 'Zmm':
            weight = 1.32336404724 -0.162429323459*x + 0.00760495380075*x*x -0.0654240774163/x 
          if debug: print '>>>>>gbbUp: Use correction function for CSVM, DY nlo nJ'
        if is_dy_nlo==3: #DY_nlo nJ sample and lep pT > 25
          if chan == 'All':
            weight = 1.30126442856 -0.1554875404*x + 0.00759713802266*x*x -0.0524668833853/x
          if chan == 'Zee':
            weight = 1.23497887523 -0.110532097306*x + 0.000484263586768*x*x -0.0347903846429/x
          if chan == 'Zmm':
            weight = 1.33867645035 -0.1797728805*x + 0.0111251960017*x*x -0.0624244797729/x
        if is_dy_nlo==4: #DY_nlo nJ sample and lep pT > 25 and no eta gap for both electron and muon channels
          if chan == 'All':
            weight = 1.31002457926 -0.158870724848*x + 0.0079257216745*x*x -0.057877192183/x 
          if chan == 'Zee':
            weight = 1.23497887523 -0.110532097306*x + 0.000484263586768*x*x -0.0347903846429/x
          if chan == 'Zmm':
            weight = 1.35212891788 -0.185022720819*x + 0.01166154317*x*x -0.070860006481/x
          if debug: print '>>>>>gbbUp: Use correction function for CSVM, DY nlo nJ and lep_pt > 25 and no eta gap in electron and muon channels'


      if tagName == 'CSVT':
        weight = 1
        if is_dy_nlo==1:
          weight = 1.28736254321 -0.143880232852*x + 0.0095896722004*x*x -0.0648152588722/x
          if debug: print '>>>>>I use correction function for CSVT and DY_nlo with gbbUp'
      if tagName == 'CtagT':
        weight = 1.502352187 -0.320435587585*x + 0.0283932048926*x*x -0.111997161303/x

    if syst == "gbbDown":
      if tagName == 'CSVM':
        if chan == 'All':
          #weight = 1.24735732663 -0.100051708613*x -0.00427028669725*x*x -0.0514925091229/x
          #weight = 1.24934220331 -0.105371225881*x -0.00308223909105*x*x -0.04725072491/x #LO no PU weight for MC TT b-jet msv
          weight = 1.25834828696 -0.110514399612*x -0.00274935989465*x*x -0.047623629723/x
        if chan == 'Zee':
          weight = 1.
        if chan == 'Zmm':
          weight = 1.
        if is_dy_nlo==1:
          if chan == 'All':
            weight = 1.28989862957 -0.12615806853*x -0.000760121407522*x*x -0.0626123403104/x
            #weight = 1.26425640803 -0.106641059307*x -0.00374566960444*x*x -0.0608762417398/x 
          if chan == 'Zee':
            #weight = 1.39209574377 -0.205083551785*x + 0.0139035447046*x*x -0.0876985179529/x
            weight = 1.39623455583 -0.206984000095*x + 0.0140098314307*x*x -0.088987906355/x #use lep_pt_20 and noGap (eta) in emu selection (0.2 binwidth)
            #weight =  1.35825128907 -0.185500232017*x + 0.0106583728379*x*x -0.071245811581/x #use lep_pt_20 and noGap (eta) in emu selection, new binning (~0.3 bin width)
            #weight = 1.35955230721 -0.18631545581*x + 0.0109219169745*x*x -0.0727924251238/x  #use lep_pt_25 include gap in emu selection, use new binning (~0.3 binwidth)
           
          if chan == 'Zmm':
            weight = 1.23182705421 -0.0810408311957*x -0.00920815069844*x*x -0.0486997912861/x #use lep_pt_25 in emu selection, use old binning (~0.2 binwidth)
            #weight = 1.25144262554 -0.0920252620333*x -0.00724252096414*x*x -0.0601192038965/x #use lep_pt_?? and noGap (eta) in emu selection, new binning (~0.3 bin width ??)

          if debug: print '>>>>>I use correction function for CSVM and DY_nlo with gbbDown'
        
        if is_dy_nlo==2: #DY_nlo nJ sample
          if chan == 'All':
            weight = 1.22040194241 -0.0860202039173*x -0.00712939831904*x*x -0.031680148197/x
          if chan == 'Zee':
            weight = 1.1589032076 -0.0497204060761*x -0.0121647474598*x*x -0.0103874097554/x 
          if chan == 'Zmm':
            weight = 1.26051616027 -0.109249570327*x -0.00404755178639*x*x -0.0455445020254/x
          if debug: print '>>>>>gbbDown: Use correction function for CSVM, DY nlo nJ'
        if is_dy_nlo==3: #DY_nlo nJ sample and lep pT > 25
          if chan == 'All':
            weight = 1.23467837438 -0.0999355782223*x -0.0044960855929*x*x -0.0308528168704/x
          if chan == 'Zee':
            weight = 1.16391312393 -0.0517091422897*x -0.0122849375494*x*x -0.0113340369714/x
          if chan == 'Zmm':
            weight = 1.27744679133 -0.128130494778*x -0.000180630512832*x*x -0.0428177101876/x
        if is_dy_nlo==4: #DY_nlo nJ sample and lep pT > 25 and no eta gap for both electron and muon channels
          if chan == 'All':
            weight = 1.24495407672 -0.104174474095*x -0.00405344341202*x*x -0.0368603991876/x 
          if chan == 'Zee':
            weight = 1.16391312393 -0.0517091422897*x -0.0122849375494*x*x -0.0113340369714/x
          if chan == 'Zmm':
            weight = 1.29292961932 -0.134471928637*x + 0.000484999120242*x*x -0.0520764279773/x
          if debug: print '>>>>>gbbDown: Use correction function for CSVM, DY nlo nJ and lep_pt > 25 and no eta gap in electron and muon channels'

      if tagName == 'CSVT':
        weight = 1
        if is_dy_nlo==1:
          weight = 1.19292411091 -0.0759656871596*x -0.00428956450291*x*x -0.0245356695056/x 
          if debug: print '>>>>>I use correction function for CSVT and DY_nlo with gbbDown'
      if tagName == 'CtagT':
        weight = 1.52297409634 -0.324405258875*x + 0.0245798808583*x*x -0.115073846588/x
    
    if debug:
      print 'Weights is: ', weight
    hOut.SetBinContent(iBin,weight*hOut.GetBinContent(iBin))
    hOut.SetBinError(iBin,weight*hOut.GetBinError(iBin))

  return hOut

def myText(txt="CMS Preliminary",ndcX=0,ndcY=0,size=0.8):
    ROOT.gPad.Update()
    text = ROOT.TLatex()
    text.SetNDC()
    text.SetTextColor(ROOT.kBlack)
    text.SetTextSize(text.GetTextSize()*size)
    text.SetTextFont(42)
    text.DrawLatex(ndcX,ndcY,txt)
    return text


def makeStackPlot(plots, plotNames_new, cName, plotDir = 'Test/', xAxisTitle = 'Jet M_{SV} [GeV]', xAxisRange = [0,10], uncName = 'MC unc. (stat)', normMC=False, logY=True, normBinWidth = -1, legendOrder=[], minY_forLog = 0.9, lumi = '35.9',channel='channel'):
  
  #app = ROOT.TApplication("App", 0, 0)
  
  #colors = [3,2,4,5,6]

  c = ROOT.TCanvas(cName,cName, 600, 600)
  c.SetFillStyle(4000)
  c.SetFrameFillStyle(1000)
  c.SetFrameFillColor(0)

  topPad = ROOT.TPad('topPad','topPad',0,0.3 ,1.0,1.0)
  if logY: topPad.SetLogy()
  topPad.SetBottomMargin(0.001)
  topPad.SetLeftMargin(0.12709)
  topPad.SetRightMargin(0.0434783)
  topPad.Draw()

  bottomPad = ROOT.TPad('bottomPad','bottomPad',0,0.0,1.0,0.3)
  bottomPad.SetTopMargin(0.)
  bottomPad.SetBottomMargin(0.35)
  bottomPad.Draw()

  topPad.cd()

  allStack = ROOT.THStack('st','')
  y1_ndc = 0.45 #0.52 #0.54 #0.45
  y2_ndc = 0.85 #0.87 #0.89 #0.85
  x1_ndc = 0.67 #0.58 #0,65 #0.67
  x2_ndc = 0.95 #0.89 #0.93 #0.95
  if len(legendOrder) != 0:
      x1_ndc = 0.42
      y1_ndc = 0.62
  l = ROOT.TLegend(x1_ndc, y1_ndc,x2_ndc,y2_ndc)
  if len(legendOrder) != 0: l.SetNColumns(2)
  l.SetLineWidth(2)
  l.SetBorderSize(0)
  l.SetFillColor(0)
  #l.SetFillStyle(4000) #seems causing problem why this doesn't work?????
  l.SetTextFont(42)
  l.SetTextSize(0.05)


  MC_integral=0

  for i in range(1, len(plots)):
      #lastBin = plots[i].GetNbinsX()
      #plots[i].SetBinContent(lastBin, plots[i].GetBinContent(lastBin) + plots[i].GetBinContent(lastBin + 1))
      MC_integral += plots[i].Integral()
  
  normScale = 1
  if MC_integral > 0 and normMC:
    normScale = plots[0].Integral()/MC_integral
  #if not normMC: normScale = 1
  else: print 'Scale MC by: ', normScale

  l.AddEntry(plots[0], plotNames_new[0],'p')
  if len(legendOrder) != 0: l.AddEntry('','','')
  iColor = 0
  for i in range(len(plots)-1, 0, -1):
      plots[i].Scale(normScale)
      plots[i].SetFillColor(colors[iColor])
      iColor = iColor + 1
      if len(legendOrder) == 0: l.AddEntry(plots[i], plotNames_new[i],'F')
  
  for i in legendOrder:
  #for i in [5,2,4,1,3]:
    l.AddEntry(plots[i], plotNames_new[i],'F')


  #rebin
  #for i in range(0, len(plots)):
  #    plots[i].Rebin(2)

  #create stack
  for i in range(1, len(plots)):
      allStack.Add(plots[i])

  allMC=allStack.GetStack().Last().Clone()
  theErrorGraph = ROOT.TGraphErrors(allMC)
  theErrorGraph.SetFillColor(ROOT.kGray+3)
  theErrorGraph.SetFillStyle(3013)
  l.AddEntry(theErrorGraph,uncName,"fl")
  
  allStack.Draw("hist")
  allStack.GetXaxis().SetRangeUser(xAxisRange[0],xAxisRange[1])
  binW = plots[0].GetBinWidth(1)
  #find out how to format number
  formatNum = ''
  #what is the value of number at 3th position after decimal point
  aNum = floor(binW*pow(10,3))-floor(binW*pow(10,2))*10
  if aNum >= 1: formatNum = '0.3f'
  #allStack.GetYaxis().SetTitle('Events/' + format(binW,formatNum)+' GeV')
  allStack.GetYaxis().SetTitle('Events/' + format(binW,formatNum))
  #allStack.GetYaxis().SetTitle('Events/1')
  if normBinWidth >= 0:
    allStack.GetYaxis().SetTitle('Events/' + str(normBinWidth)+' GeV')
  allStack.GetYaxis().SetTitleSize(0.057)
  allStack.GetYaxis().SetTitleOffset(0.9) #the more the more distance from axis #1.2 #0.9
  allStack.GetYaxis().SetLabelSize(0.05) #0.04
  scaleTmp = 0.9 - (y2_ndc - y1_ndc)
  #scaleTmp = 1.2 - (y2_ndc - y1_ndc)
  maxScaleFromPlots = ROOT.TMath.Max(plots[0].GetMaximum(),allStack.GetMaximum()) 
  maxX = 1./scaleTmp*maxScaleFromPlots
  if logY and maxScaleFromPlots > 0:
     maxX = pow(10,1./scaleTmp*log10(maxScaleFromPlots)) 
  allStack.SetMaximum(maxX)
  allStack.SetMinimum(minY_forLog)
  allStack.SetMaximum(1.0e+04)
  plots[0].Draw("same E")
  plots[0].SetMarkerStyle(20)
  plots[0].SetMarkerSize(1.2)
  plots[0].SetLineWidth(2)
  theErrorGraph.Draw('SAME2')

  l.Draw()

  #myText('CMS Work in Progress #sqrt{s} = 13 TeV, '+lumi+' fb^{-1}',0.5,0.937775,1.0)
  myText('#sqrt{s} = 13 TeV, '+lumi+' fb^{-1}',0.67,0.92,1.0) #0.69
  myText('CMS Work in Progress',0.13,0.92,1.0)
  #myText('CMS Work in Progress',0.20,0.92,1.0) #ZMass plot
  #myText('CMS Work in Progress',0.20,0.92,1.0)
  myText(channel,0.20,0.83775,1.0)

  topPad.Update()
  
  ##############################
  #bottom pad
  ##############################
  bottomPad.cd()
  
  bottomPad.SetLeftMargin(0.12709)
  bottomPad.SetRightMargin(0.0434783)
  bottomPad.SetTopMargin(0.03)

  ROOT.gPad.SetTicks(1,1)

  l2 = ROOT.TLegend(0.7, 0.78,0.93,0.87)
  l2.SetLineWidth(2)
  l2.SetBorderSize(0)
  l2.SetFillColor(0)
  #l2.SetFillStyle(4000)
  l2.SetTextSize(0.075)
  l2.SetNColumns(2)
  xL = allMC.GetXaxis().GetXmin()
  xH = allMC.GetXaxis().GetXmax()
  if len(xAxisRange) > 0:
    xL = xAxisRange[0]
    xH = xAxisRange[1]
  
  allMC=allStack.GetStack().Last().Clone()
  #ratio, error = myutils.Ratio.getRatio(plots[0],allMC,xL,xH,"",1000, False)
  ratio = plots[0].Clone('data_mc_ratio')
  ratio.Divide(allMC)
  #set relative error on ration = relative error on data
  for i in range(1,ratio.GetNbinsX()+1):
      binErrTmp = 0
      if plots[0].GetBinContent(i) > 0:
          binErrTmp = ratio.GetBinContent(i)*plots[0].GetBinError(i)/plots[0].GetBinContent(i)
      ratio.SetBinError(i, binErrTmp)
  error = allMC.Clone('mc_statistical_error')
  error.Reset()
  for i in range(1,error.GetNbinsX()+1):
      error.SetBinContent(i,1)
      error.SetBinError(i,0)
      if allMC.GetBinContent(i) > 0:
        error.SetBinError(i,allMC.GetBinError(i)/allMC.GetBinContent(i))
      if allMC.GetBinContent(i) < 0:
        print '>>>>>>Strange bin content in allMC histogram, set error to 0: ', allMC.GetBinLowEdge(i), ' ', allMC.GetBinContent(i)
  
  if ratio.GetNbinsX() != error.GetNbinsX():
      print '@@@@@@@@@ Warning: ratio and ratio error histograms do not have the same number of bins: ', ratio.GetNbinsX(), ' ', error.GetNbinsX()

  ksScore = plots[0].KolmogorovTest( allMC )
  chiScore = plots[0].Chi2Test( allMC , "UWCHI2/NDF")
  print 'ksScore:  ', ksScore
  print 'chiScore: ', chiScore
  ratio.SetStats(0)
  ratioError = ROOT.TGraphErrors(error)
  ratioError.SetFillColor(ROOT.kGray+3)
  ratioError.SetFillStyle(3013)
  #print '>>>>>>>>>Axis range: ', xAxisRange[0], ' ', xAxisRange[1]
  #ratio.GetXaxis().SetMinimumn(xLow)
  #ratio.GetXaxis().SetMaximumn(xHigh)
  #if len(xAxisRange) > 0:
  #    print '>>>>xBin: ', xAxisRange[0], ' ', xAxisRange[1], ' ', ratio.FindFixBin(xAxisRange[0]+0.0001), ' ', ratio.FindFixBin(xAxisRange[1]-0.0001), ' ', ratio.GetNbinsX() 
  #    print ratio.GetBinLowEdge(6), ' ', ratio.GetBinContent(6)
      #ratio.GetXaxis().SetRange(ratio.FindFixBin(xAxisRange[0]+0.00001),ratio.FindFixBin(xAxisRange[1]-0.0001))
  #    ratio.GetXaxis().SetRange(1,6)
      #ratio.SetAxisRange(6,10,'X') #absolute value not bin
  ratio.Draw("E1")
  ratio.GetXaxis().SetRangeUser(xAxisRange[0],xAxisRange[1])

  l2.AddEntry(ratioError,"MC unc. (stat.)","f")
  l2.SetTextFont(42)
  l2.SetTextSize(0.1)
  #l2.Draw()

  ratioError.Draw('E2SAME')
  ratio.SetMarkerStyle(20)
  ratio.SetMarkerSize(1.2)
  ratio.SetLineWidth(2)
  ratio.SetTitle("")
  ratio.GetXaxis().SetTitle(xAxisTitle)
  ratio.GetXaxis().SetTitleSize(0.12)
  ratio.GetXaxis().SetLabelSize(0.12)
  ratio.GetXaxis().SetTitleOffset(1.1)
  ratio.GetYaxis().SetNdivisions(505)
  ratio.GetYaxis().SetTitle("Data/MC")
  ratio.GetYaxis().SetTitleSize(0.12)
  ratio.GetYaxis().SetTitleOffset(0.45) #0.5
  ratio.GetYaxis().SetLabelSize(0.12)
  ratio.GetYaxis().SetRangeUser(0.4,1.6)
  #ratio.GetYaxis().SetRangeUser(0.7,1.3)
  #m_one_line = ROOT.TLine(allMC.GetXaxis().GetXmin(),1,allMC.GetXaxis().GetXmax(),1)
  m_one_line = ROOT.TLine(xAxisRange[0],1,xAxisRange[1],1)
  m_one_line.SetLineStyle(ROOT.kSolid)
  m_one_line.Draw("same")
  
  #myText('KS test: %0.3f' % ksScore, 0.7, 0.85, 2)
  
  bottomPad.Update()

  #c.ForceUpdate()
  
  #input('hit something')
  
  #pause()
  c.Print(plotDir + '/' + cName + '.png')
  c.Print(plotDir + '/' + cName + '.pdf')
  c.Print(plotDir + '/' + cName + '.eps')
  c.Print(plotDir + '/' + cName + '.C')

  
  return c 
  
  


def makeStackPlot_noRatio(plots, plotNames_new, cName, plotDir = 'Test/', xAxisTitle = 'Jet M_{SV} [GeV]', xAxisRange = [0,10], uncName = 'MC unc. (stat.)', normMC=True, logY=False, normBinWidth = -1, legendOrder=[], minY_forLog = 0.01):
  
  #app = ROOT.TApplication("App", 0, 0)
  
  #colors = [3,2,4,5,6]

  c = ROOT.TCanvas(cName,cName, 650, 650)
  c.SetFillStyle(4000)
  c.SetFrameFillStyle(1000)
  c.SetFrameFillColor(0)
  c.SetLeftMargin(0.17)
  c.SetRightMargin(0.0434783)

  allStack = ROOT.THStack('st','')
  y1_ndc = 0.6
  y2_ndc = 0.87
  x1_ndc = 0.65
  if len(legendOrder) != 0:
      x1_ndc = 0.42
      y1_ndc = 0.62
  l = ROOT.TLegend(x1_ndc, y1_ndc,0.89,y2_ndc)
  if len(legendOrder) != 0: l.SetNColumns(2)
  l.SetLineWidth(2)
  l.SetBorderSize(0)
  l.SetFillColor(0)
  #l.SetFillStyle(4000) #seems causing problem why this doesn't work?????
  l.SetTextFont(42)
  l.SetTextSize(0.04)


  MC_integral=0

  for i in range(1, len(plots)):
      #lastBin = plots[i].GetNbinsX()
      #plots[i].SetBinContent(lastBin, plots[i].GetBinContent(lastBin) + plots[i].GetBinContent(lastBin + 1))
      MC_integral += plots[i].Integral()
  
  normScale = 1
  if MC_integral > 0 and normMC:
    normScale = plots[0].Integral()/MC_integral
  #if not normMC: normScale = 1
  else: print 'Scale MC by: ', normScale

  l.AddEntry(plots[0], plotNames_new[0],'p')
  if len(legendOrder) != 0: l.AddEntry('','','')
  iColor = 0
  for i in range(len(plots)-1, 0, -1):
      plots[i].Scale(normScale)
      plots[i].SetFillColor(colors[iColor])
      iColor = iColor + 1
      if len(legendOrder) == 0: l.AddEntry(plots[i], plotNames_new[i],'F')
  
  for i in legendOrder:
  #for i in [5,2,4,1,3]:
    l.AddEntry(plots[i], plotNames_new[i],'F')


  #rebin
  #for i in range(0, len(plots)):
  #    plots[i].Rebin(2)

  #create stack
  for i in range(1, len(plots)):
      allStack.Add(plots[i])

  allMC=allStack.GetStack().Last().Clone()
  theErrorGraph = ROOT.TGraphErrors(allMC)
  theErrorGraph.SetFillColor(ROOT.kGray+3)
  theErrorGraph.SetFillStyle(3013)
  #l.AddEntry(theErrorGraph,uncName,"fl")
  
  allStack.Draw("hist")
  allStack.GetXaxis().SetRangeUser(xAxisRange[0],xAxisRange[1])
  binW = plots[0].GetBinWidth(1)
  #find out how to format number
  formatNum = ''
  #what is the value of number at 3th position after decimal point
  aNum = floor(binW*pow(10,3))-floor(binW*pow(10,2))*10
  if aNum >= 1: formatNum = '0.3f'
  allStack.GetYaxis().SetTitle('Events/' + format(binW,formatNum))
  if normBinWidth >= 0:
    allStack.GetYaxis().SetTitle('Events/' + str(normBinWidth))
  allStack.GetYaxis().SetTitleSize(0.04)
  allStack.GetYaxis().SetTitleOffset(2.2) #the more the more distance from axis
  allStack.GetYaxis().SetLabelSize(0.04)
  allStack.GetXaxis().SetTitleSize(0.04)
  allStack.GetXaxis().SetTitleOffset(1.2) #the more the more distance from axis 
  allStack.GetXaxis().SetLabelSize(0.04)
  allStack.GetXaxis().SetTitle(xAxisTitle)
  #scaleTmp = 0.9 - (y2_ndc - y1_ndc)
  scaleTmp = 1.2 - (y2_ndc - y1_ndc)
  maxScaleFromPlots = ROOT.TMath.Max(plots[0].GetMaximum(),allStack.GetMaximum()) 
  maxX = 1./scaleTmp*maxScaleFromPlots
  if logY and maxScaleFromPlots > 0:
     maxX = pow(10,1./scaleTmp*log10(maxScaleFromPlots)) 
  allStack.SetMaximum(maxX)
  allStack.SetMinimum(minY_forLog)
  plots[0].Draw("same E")
  plots[0].SetMarkerStyle(20)
  plots[0].SetMarkerSize(1.2)
  plots[0].SetLineWidth(2)
  #theErrorGraph.Draw('SAME2')

  l.Draw()

  myText('CMS Internal #sqrt{s} = 13 TeV, 35.9 fb^{-1}',0.4,0.937775,0.8)
  
  c.Print(plotDir + '/' + cName + '.png')
  c.Print(plotDir + '/' + cName + '.pdf')
  c.Print(plotDir + '/' + cName + '.eps')
  c.Print(plotDir + '/' + cName + '.C')

  
  return c 

def makePostFitPlot(plots, hTot_mc, plotNames_new, cName, plotDir = 'Test/', xAxisTitle = 'Jet M_{SV} [GeV]', xAxisRange = [0,10], uncName = 'MC unc. (stat.)', normMC=True, logY=False, normBinWidth = -1, legendOrder=[], minY_forLog = 0.01):
  
  #app = ROOT.TApplication("App", 0, 0)
  
  #colors = [3,2,4,5,6]

  c = ROOT.TCanvas(cName,cName, 650, 700)
  c.SetFillStyle(4000)
  c.SetFrameFillStyle(1000)
  c.SetFrameFillColor(0)

  topPad = ROOT.TPad('topPad','topPad',0,0.3 ,1.0,1.0)
  if logY: topPad.SetLogy()
  topPad.SetBottomMargin(0.001)
  topPad.SetLeftMargin(0.15)
  topPad.SetRightMargin(0.02)
  topPad.Draw()

  bottomPad = ROOT.TPad('bottomPad','bottomPad',0,0.0,1.0,0.3)
  bottomPad.SetTopMargin(0.5)
  bottomPad.SetBottomMargin(0.35)
  bottomPad.Draw()

  topPad.cd()

  allStack = ROOT.THStack('st','')
  y1_ndc = 0.52
  y2_ndc = 0.87
  x1_ndc = 0.57
  if len(legendOrder) != 0:
      x1_ndc = 0.42
      y1_ndc = 0.62
  l = ROOT.TLegend(x1_ndc, y1_ndc,0.89,y2_ndc)
  if len(legendOrder) != 0: l.SetNColumns(2)
  l.SetLineWidth(2)
  l.SetBorderSize(0)
  l.SetFillColor(0)
  #l.SetFillStyle(4000) #seems causing problem why this doesn't work?????
  l.SetTextFont(42)
  l.SetTextSize(0.05)


  MC_integral=0

  for i in range(1, len(plots)):
      #lastBin = plots[i].GetNbinsX()
      #plots[i].SetBinContent(lastBin, plots[i].GetBinContent(lastBin) + plots[i].GetBinContent(lastBin + 1))
      MC_integral += plots[i].Integral()
  
  normScale = 1
  if MC_integral > 0 and normMC:
    normScale = plots[0].Integral()/MC_integral
  #if not normMC: normScale = 1
  else: print 'Scale MC by: ', normScale

  l.AddEntry(plots[0], plotNames_new[0],'p')
  if len(legendOrder) != 0: l.AddEntry('','','')
  iColor = 0
  for i in range(len(plots)-1, 0, -1):
      plots[i].Scale(normScale)
      plots[i].SetFillColor(colors[iColor])
      iColor = iColor + 1
      if len(legendOrder) == 0: l.AddEntry(plots[i], plotNames_new[i],'F')
  
  for i in legendOrder:
  #for i in [5,2,4,1,3]:
    l.AddEntry(plots[i], plotNames_new[i],'F')


  #rebin
  #for i in range(0, len(plots)):
  #    plots[i].Rebin(2)

  #create stack
  for i in range(1, len(plots)):
      allStack.Add(plots[i])
  
  #TEMP

  '''allMC_tmp=allStack.GetStack().Last().Clone()
  print allMC_tmp
  print '>>>>Compare allMC stack and total MC>>>>>>>'
  print 'Number of bins: ', allMC_tmp.GetNbinsX(), hTot_mc.GetNbinsX()
  print 'Bin contents and errors'
  for iB in range(1, allMC_tmp.GetNbinsX() + 1):
    print allMC_tmp.GetBinContent(iB), allMC_tmp.GetBinError(iB), hTot_mc.GetBinContent(iB), hTot_mc.GetBinError(iB)
  '''

  allMC=hTot_mc.Clone(hTot_mc.GetName()+'_all_mc_1')
  theErrorGraph = ROOT.TGraphErrors(allMC)
  theErrorGraph.SetFillColor(ROOT.kGray+3)
  theErrorGraph.SetFillStyle(3013)
  l.AddEntry(theErrorGraph,uncName,"fl")
  
  allStack.Draw("hist")
  allStack.GetXaxis().SetRangeUser(xAxisRange[0],xAxisRange[1])
  binW = plots[0].GetBinWidth(1)
  #find out how to format number
  formatNum = ''
  #what is the value of number at 3th position after decimal point
  aNum = floor(binW*pow(10,3))-floor(binW*pow(10,2))*10
  if aNum >= 1: formatNum = '0.3f'
  allStack.GetYaxis().SetTitle('Events/' + format(binW,formatNum))
  if normBinWidth >= 0:
    allStack.GetYaxis().SetTitle('Events/' + str(normBinWidth))
  allStack.GetYaxis().SetTitleSize(0.057)
  allStack.GetYaxis().SetTitleOffset(1.4) #the more the more distance from axis
  allStack.GetYaxis().SetLabelSize(0.05)
  scaleTmp = 1.2 - (y2_ndc - y1_ndc)
  #scaleTmp = 1.2 - (y2_ndc - y1_ndc)
  maxScaleFromPlots = ROOT.TMath.Max(plots[0].GetMaximum(),allStack.GetMaximum()) 
  maxX = 1./scaleTmp*maxScaleFromPlots
  if logY and maxScaleFromPlots > 0:
     maxX = pow(10,1./scaleTmp*log10(maxScaleFromPlots)) 
  allStack.SetMaximum(maxX)
  allStack.SetMinimum(minY_forLog)
  plots[0].Draw("same E")
  plots[0].SetMarkerStyle(20)
  plots[0].SetMarkerSize(1.2)
  plots[0].SetLineWidth(2)
  theErrorGraph.Draw('SAME2')

  l.Draw()

  myText('CMS Internal #sqrt{s} = 13 TeV, 35.9 fb^{-1}',0.45,0.937775,1.0)

  topPad.Update()
  
  ##############################
  #bottom pad
  ##############################
  bottomPad.cd()
  
  bottomPad.SetLeftMargin(0.15)
  bottomPad.SetRightMargin(0.02)
  bottomPad.SetTopMargin(0.03)

  ROOT.gPad.SetTicks(1,1)

  l2 = ROOT.TLegend(0.7, 0.78,0.93,0.87)
  l2.SetLineWidth(2)
  l2.SetBorderSize(0)
  l2.SetFillColor(0)
  #l2.SetFillStyle(4000)
  l2.SetTextSize(0.075)
  l2.SetNColumns(2)
  xL = allMC.GetXaxis().GetXmin()
  xH = allMC.GetXaxis().GetXmax()
  if len(xAxisRange) > 0:
    xL = xAxisRange[0]
    xH = xAxisRange[1]
  
  allMC=hTot_mc.Clone(hTot_mc.GetName()+'_all_mc_2')
  #ratio, error = myutils.Ratio.getRatio(plots[0],allMC,xL,xH,"",1000, False)
  ratio = plots[0].Clone('data_mc_ratio')
  ratio.Divide(allMC)
  #set relative error on ration = relative error on data
  for i in range(1,ratio.GetNbinsX()+1):
      binErrTmp = 0
      if plots[0].GetBinContent(i) > 0:
          binErrTmp = ratio.GetBinContent(i)*plots[0].GetBinError(i)/plots[0].GetBinContent(i)
      ratio.SetBinError(i, binErrTmp)
  error = allMC.Clone('mc_statistical_error')
  error.Reset()
  for i in range(1,error.GetNbinsX()+1):
      error.SetBinContent(i,1)
      error.SetBinError(i,0)
      if allMC.GetBinContent(i) > 0:
        error.SetBinError(i,allMC.GetBinError(i)/allMC.GetBinContent(i))
      if allMC.GetBinContent(i) < 0:
        print '>>>>>>Strange bin content in allMC histogram, set error to 0: ', allMC.GetBinLowEdge(i), ' ', allMC.GetBinContent(i)
  
  if ratio.GetNbinsX() != error.GetNbinsX():
      print '@@@@@@@@@ Warning: ratio and ratio error histograms do not have the same number of bins: ', ratio.GetNbinsX(), ' ', error.GetNbinsX()

  ksScore = plots[0].KolmogorovTest( allMC )
  chiScore = plots[0].Chi2Test( allMC , "UWCHI2/NDF")
  print 'ksScore:  ', ksScore
  print 'chiScore: ', chiScore
  ratio.SetStats(0)
  ratioError = ROOT.TGraphErrors(error)
  ratioError.SetFillColor(ROOT.kGray+3)
  ratioError.SetFillStyle(3013)
  #print '>>>>>>>>>Axis range: ', xAxisRange[0], ' ', xAxisRange[1]
  #ratio.GetXaxis().SetMinimumn(xLow)
  #ratio.GetXaxis().SetMaximumn(xHigh)
  #if len(xAxisRange) > 0:
  #    print '>>>>xBin: ', xAxisRange[0], ' ', xAxisRange[1], ' ', ratio.FindFixBin(xAxisRange[0]+0.0001), ' ', ratio.FindFixBin(xAxisRange[1]-0.0001), ' ', ratio.GetNbinsX() 
  #    print ratio.GetBinLowEdge(6), ' ', ratio.GetBinContent(6)
      #ratio.GetXaxis().SetRange(ratio.FindFixBin(xAxisRange[0]+0.00001),ratio.FindFixBin(xAxisRange[1]-0.0001))
  #    ratio.GetXaxis().SetRange(1,6)
      #ratio.SetAxisRange(6,10,'X') #absolute value not bin
  ratio.Draw("E1")
  ratio.GetXaxis().SetRangeUser(xAxisRange[0],xAxisRange[1])

  l2.AddEntry(ratioError,"MC unc. (stat.)","f")
  l2.SetTextFont(42)
  l2.SetTextSize(0.1)
  #l2.Draw()

  ratioError.Draw('E2SAME')
  ratio.SetMarkerStyle(20)
  ratio.SetMarkerSize(1.2)
  ratio.SetLineWidth(2)
  ratio.SetTitle("")
  ratio.GetXaxis().SetTitle(xAxisTitle)
  ratio.GetXaxis().SetTitleSize(0.12)
  ratio.GetXaxis().SetLabelSize(0.12)
  ratio.GetXaxis().SetTitleOffset(1.1)
  ratio.GetYaxis().SetNdivisions(505)
  ratio.GetYaxis().SetTitleSize(0.12)
  ratio.GetYaxis().SetLabelSize(0.12)
  #ratio.GetYaxis().SetRangeUser(0.4,1.6)
  ratio.GetYaxis().SetRangeUser(0.7,1.3)
  #m_one_line = ROOT.TLine(allMC.GetXaxis().GetXmin(),1,allMC.GetXaxis().GetXmax(),1)
  m_one_line = ROOT.TLine(xAxisRange[0],1,xAxisRange[1],1)
  m_one_line.SetLineStyle(ROOT.kSolid)
  m_one_line.Draw("same")
  
  myText('KS test: %0.3f' % ksScore, 0.7, 0.85, 2.5)
  
  bottomPad.Update()

  #c.ForceUpdate()
  
  #input('hit something')
  
  #pause()
  c.Print(plotDir + '/' + cName + '.png')
  c.Print(plotDir + '/' + cName + '.pdf')
  c.Print(plotDir + '/' + cName + '.eps')
  c.Print(plotDir + '/' + cName + '.C')

  
  return c 
  
  

  #app.Run()

def shapeComparePlot(hOri, plotLegends, plotName, xAxisTitle = 'Jet M_{SV} [GeV]', xAxisRange = [0,10], showStatBoxes = False, setLogY=False, newBinning=[], plotTitle = '', histDir = None):

  mode = 2 #1: points over filled histogram, 2: 2 histogram

  #xAxisRange = [0,10]
  if len(hOri) != 2:
    print 'Error: exact 2 histogram needed but ', len(hOri), ' provided'
    return 0
  hIn = []
  for hTmp in hOri:
    hIn.append(hTmp.Clone(hTmp.GetName() + '_clone_for_plotting'))

  bins = array('d',newBinning)
  h = []
  nBin = len(newBinning) - 1
  if len(newBinning) == 0:
    h.append(hIn[0])
    h.append(hIn[1])
  else:
    h.append(hIn[0].Rebin(nBin,hIn[0].GetName() + '_rebin',bins))
    h.append(hIn[1].Rebin(nBin,hIn[1].GetName() + '_rebin',bins))

  if not showStatBoxes:
    h[0].SetStats(0)
    h[1].SetStats(0)

  print 'Normalize the shape'
  h[0].Scale(1./h[0].Integral())
  h[1].Scale(1./h[1].Integral())
  
  yAxis_scale = 1.6*(h[0].GetMaximum())
  for i in range(1,len(h)):
    scale = 1.6*(h[i].GetMaximum())
    if scale > yAxis_scale:
      yAxis_scale = scale

  hR = h[0].Clone('Ratio')
  hR.Divide(h[1])
  #print the ratio
  print '[',
  for iB in range(1, hR.GetNbinsX() + 1):
    print '[', hR.GetBinCenter(iB),',',hR.GetBinContent(iB),'],',
  print ']'
  
  ksScore = h[0].KolmogorovTest( h[1] )
  chiScore = h[0].Chi2Test( h[1] , "UWCHI2/NDF")
  print 'KS score: ', ksScore
  print 'Chi2:     ', chiScore

  c = ROOT.TCanvas('c_' + plotName,'', 600, 600)
  c.SetFillStyle(4000)
  c.SetFrameFillStyle(1000)
  c.SetFrameFillColor(0)

  topPad = ROOT.TPad('topPad','topPad',0,0.3 ,1.0,1.0)
  topPad.SetBottomMargin(0.001)
  topPad.SetLeftMargin(0.12709)
  topPad.SetRightMargin(0.0434783)
  
  topPad.Draw()

  bottomPad = ROOT.TPad('bottomPad','bottomPad',0,0.0,1.0,0.3)
  bottomPad.SetLeftMargin(0.12709)
  bottomPad.SetRightMargin(0.0434783)
  bottomPad.SetTopMargin(0.04)
  bottomPad.SetBottomMargin(0.35)
  bottomPad.Draw()

  topPad.cd()
  if setLogY: topPad.SetLogy()
  l = ROOT.TLegend(0.4, 0.6, 0.9, 0.87)
  #l = ROOT.TLegend(0.57, 0.6,0.9,0.87)
  #l = ROOT.TLegend(0.5, 0.6,0.8,0.9)
  l.SetLineWidth(2)
  l.SetBorderSize(0)
  l.SetFillColor(0)
  l.SetTextFont(42)
  l.SetTextSize(0.05)


  h[1].SetMarkerStyle(21)
  h[1].SetMarkerSize(1.5)
  h[1].SetMarkerColor(4)
  h[1].SetLineColor(4)
  if mode == 1:
    h[1].SetFillColor(4)
    h[1].SetFillStyle(3002)
  if mode == 1: h[1].Draw('hist')
  if mode == 2: h[1].Draw('hist e')
  h[1].SetTitle('')
  h[1].GetYaxis().SetRangeUser(0.001,yAxis_scale)
  h[1].GetXaxis().SetRangeUser(xAxisRange[0],xAxisRange[1])
  h[1].GetYaxis().SetTitleSize(0.057)
  h[1].GetYaxis().SetTitleOffset(1.2) #the more the more distance from axis
  h[1].GetYaxis().SetLabelSize(0.05)
  h[1].GetYaxis().SetTitle('Normalized scale')

  myText(plotTitle,0.2,0.8,1.2)
  
  #theErrorGraph = ROOT.TGraphErrors(h[1])
  #theErrorGraph.SetFillColor(ROOT.kGray+3)
  #theErrorGraph.SetFillStyle(3013)
  #theErrorGraph.Draw('SAME2')
  
  #l.AddEntry(theErrorGraph,uncName,"fl")

  if not showStatBoxes:
      if mode == 1: h[0].Draw('e same')
      if mode == 2: h[0].Draw('hist e same')
  if showStatBoxes:
      if mode == 1: h[0].Draw('e same')
      if mode == 2: h[0].Draw('hist e sames')
  h[0].SetMarkerStyle(20)
  h[0].SetMarkerSize(1.5)

#>>>>>>>>>>> HERE>>>>>>>>>>>> 
  l.AddEntry(h[0], plotLegends[0], 'lp')
  if mode == 1:
      l.AddEntry(h[1], plotLegends[1], 'lf')
  if mode == 2:
      l.AddEntry(h[1], plotLegends[1], 'lp')
  l.Draw()
  
  ROOT.gPad.Update()

  if showStatBoxes:  
    st1 = (h[0].GetListOfFunctions()).FindObject("stats")
    print '>>>>', st1
    st1.SetX1NDC(.8)
    st1.SetY1NDC(.7)
    st1.SetX2NDC(.95)
    st1.SetY2NDC(.9)
    st1.SetOptStat(111110)
    st1.SetTextSize(0.03)
    st1.Draw()
    st2 = (h[1].GetListOfFunctions()).FindObject("stats")
    st2.SetX1NDC(.8)
    st2.SetY1NDC(.5)
    st2.SetX2NDC(.95)
    st2.SetY2NDC(.7)
    st2.SetOptStat(111110)
    st2.SetTextSize(0.03)
    st2.SetTextColor(4) 
    st2.Draw()

  myText('CMS Internal #sqrt{s} = 13 TeV, 35.9 fb^{-1}',0.4,0.937775,1.2)
  
  topPad.Update()
  c.Update()

  bottomPad.cd()
  ROOT.gPad.SetTicks(1,1)
  #ratio, error = myutils.Ratio.getRatio(h[0],h[1],h[1].GetXaxis().GetXmin(),h[1].GetXaxis().GetXmax(),"",100, True)
  hR.Draw('E')
  hR.SetTitle('')
  hR.SetStats(0)
  #ROOT.gPad.Update()
  #st = (hR.GetListOfFunctions()).FindObject("stats")
  #print '>>>>', st
  #st.SetOptStat(0)
  #st.Draw()
  hR.SetMarkerStyle(20)
  hR.SetMarkerSize(1.5)
  hR.GetXaxis().SetLabelSize(0.12)
  hR.GetXaxis().SetTitleSize(0.12)
  hR.GetXaxis().SetTitleOffset(1.1)
  hR.GetXaxis().SetTitle(xAxisTitle)
  hR.GetXaxis().SetRangeUser(xAxisRange[0],xAxisRange[1])
  hR.GetYaxis().SetLabelSize(0.12)
  hR.GetYaxis().SetTitleSize(0.12)
  hR.GetYaxis().SetTitleOffset(0.5) 
  #hR.GetYaxis().SetTitle('Data/MC')
  hR.GetYaxis().SetTitle('Ratio')
  hR.GetYaxis().SetNdivisions(505)

  #ratioError = ROOT.TGraphErrors(error)
  #ratioError.SetFillColor(ROOT.kGray+3)
  #ratioError.SetFillStyle(3013)
  #ratioError.Draw('SAME2')
  
  #hR.GetYaxis().SetRangeUser(0.5,1.6)
  #hR.GetYaxis().SetRangeUser(0.95,1.05)
  #hR.GetYaxis().SetRangeUser(0.7,1.3)
  hR.GetYaxis().SetRangeUser(0.5,1.6)
  #hR.GetYaxis().SetRangeUser(0.7,1.4)
  #hR.GetYaxis().SetRangeUser(0.9,1.1)
  line = ROOT.TLine(xAxisRange[0],1,xAxisRange[1],1)
  line.Draw('same')

  myText('KS test: %0.3f' % ksScore, 0.7, 0.85, 2)
   
  bottomPad.Update()

  c.Update()
  ''' 
  rep = ''
  while not rep in [ 'q', 'Q' ]:
     rep = raw_input( 'enter "q" to quit: ' )
     if 1 < len(rep):
       rep = rep[0]
  '''

  if isinstance(histDir,ROOT.TDirectory):
      histDir.cd()
      c.Write()
  #c.Print('Test/OtherPlots/'+plotName+'.C')
  #c.Print('Test/OtherPlots/'+plotName+'.png')
  #c.Print('Test/OtherPlots/'+plotName+'.pdf')
  #c.Print('Test/OtherPlots/'+plotName+'.eps')
  #c.Print('Plots/OtherPlots/'+plotName+'.C')
  #c.Print('Plots/OtherPlots/'+plotName+'.png')
  #c.Print('Plots/OtherPlots/'+plotName+'.pdf')
  #c.Print('Plots/OtherPlots/'+plotName+'.eps')
  c.Print(plotName+'.C')
  c.Print(plotName+'.png')
  c.Print(plotName+'.pdf')
  c.Print(plotName+'.eps')
  #c.Print(plotName+'.png')

def shapeComparePlot1(hOri, plotLegends, plotName, xAxisTitle = 'Jet M_{SV} [GeV]', xAxisRange = [0,10], showStatBoxes = False, setLogY=False, newBinning=[], plotTitle = '', histDir = None, yAxisTitle='Events/GeV'):

  mode = 2 #1: points over filled histogram, 2: 2 histogram

  #xAxisRange = [0,10]
  if len(hOri) != 2:
    print 'Error: exact 2 histogram needed but ', len(hOri), ' provided'
    return 0
  hIn = []
  for hTmp in hOri:
    hIn.append(hTmp.Clone(hTmp.GetName() + '_clone_for_plotting'))

  bins = array('d',newBinning)
  h = []
  nBin = len(newBinning) - 1
  if len(newBinning) == 0:
    for hTmp in hIn:
      h.append(hTmp)
  else:
    for hTmp in hIn:
      h.append(hTmp.Rebin(nBin,hTmp.GetName() + '_rebin',bins))

  if not showStatBoxes:
    for hTmp in hIn: hTmp.SetStats(0)

  print 'Divide by bin width'
  for iB in range(1,h[0].GetNbinsX()+1):
    h[0].SetBinContent(iB,h[0].GetBinContent(iB)/h[0].GetBinWidth(iB))
    h[0].SetBinError(iB,h[0].GetBinError(iB)/h[0].GetBinWidth(iB))
    h[1].SetBinContent(iB,h[1].GetBinContent(iB)/h[1].GetBinWidth(iB))
    h[1].SetBinError(iB,h[1].GetBinError(iB)/h[1].GetBinWidth(iB))


  yAxis_scale = 1.6*(h[0].GetMaximum())
  for i in range(1,len(h)):
    scale = 1.6*(h[i].GetMaximum())
    if scale > yAxis_scale:
      yAxis_scale = scale

  hR = h[0].Clone('Ratio')
  hR.Divide(h[1])
  #print the ratio
  print '[',
  for iB in range(1, hR.GetNbinsX() + 1):
    print '[', hR.GetBinCenter(iB),',',hR.GetBinContent(iB),'],',
  print ']'
  
  ksScore = h[0].KolmogorovTest( h[1] )
  chiScore = h[0].Chi2Test( h[1] , "UWCHI2/NDF")
  print 'KS score: ', ksScore
  print 'Chi2:     ', chiScore

  c = ROOT.TCanvas('c_' + plotName,'', 600, 600)
  c.SetFillStyle(4000)
  c.SetFrameFillStyle(1000)
  c.SetFrameFillColor(0)

  topPad = ROOT.TPad('topPad','topPad',0,0.3 ,1.0,1.0)
  topPad.SetBottomMargin(0.001)
  topPad.SetLeftMargin(0.12709)
  topPad.SetRightMargin(0.0434783)
  
  topPad.Draw()

  bottomPad = ROOT.TPad('bottomPad','bottomPad',0,0.0,1.0,0.3)
  bottomPad.SetLeftMargin(0.12709)
  bottomPad.SetRightMargin(0.0434783)
  bottomPad.SetTopMargin(0.04)
  bottomPad.SetBottomMargin(0.35)
  bottomPad.Draw()

  topPad.cd()
  if setLogY: topPad.SetLogy()
  l = ROOT.TLegend(0.4, 0.6, 0.9, 0.87)
  #l = ROOT.TLegend(0.57, 0.6,0.9,0.87)
  #l = ROOT.TLegend(0.5, 0.6,0.8,0.9)
  l.SetLineWidth(2)
  l.SetBorderSize(0)
  l.SetFillColor(0)
  l.SetTextFont(42)
  l.SetTextSize(0.05)


  h[1].SetMarkerStyle(21)
  h[1].SetMarkerSize(1.5)
  h[1].SetMarkerColor(4)
  h[1].SetLineColor(4)
  if mode == 1:
    h[1].SetFillColor(4)
    h[1].SetFillStyle(3002)
  if mode == 1: h[1].Draw('hist')
  if mode == 2: h[1].Draw('hist e')
  h[1].SetTitle('')
  h[1].GetYaxis().SetRangeUser(0.001,yAxis_scale)
  h[1].GetXaxis().SetRangeUser(xAxisRange[0],xAxisRange[1])
  h[1].GetYaxis().SetTitleSize(0.057)
  h[1].GetYaxis().SetTitleOffset(1.2) #the more the more distance from axis
  h[1].GetYaxis().SetLabelSize(0.05)
  h[1].GetYaxis().SetTitle(yAxisTitle)

  myText(plotTitle,0.2,0.8,1.2)
  
  #theErrorGraph = ROOT.TGraphErrors(h[1])
  #theErrorGraph.SetFillColor(ROOT.kGray+3)
  #theErrorGraph.SetFillStyle(3013)
  #theErrorGraph.Draw('SAME2')
  
  #l.AddEntry(theErrorGraph,uncName,"fl")

  if not showStatBoxes:
      if mode == 1: h[0].Draw('e same')
      if mode == 2: h[0].Draw('hist e same')
  if showStatBoxes:
      if mode == 1: h[0].Draw('e same')
      if mode == 2: h[0].Draw('hist e sames')
  h[0].SetMarkerStyle(20)
  h[0].SetMarkerSize(1.5)

#>>>>>>>>>>> HERE>>>>>>>>>>>> 
  l.AddEntry(h[0], plotLegends[0], 'lp')
  if mode == 1:
      l.AddEntry(h[1], plotLegends[1], 'lf')
  if mode == 2:
      l.AddEntry(h[1], plotLegends[1], 'lp')
  l.Draw()
  
  ROOT.gPad.Update()

  if showStatBoxes:  
    st1 = (h[0].GetListOfFunctions()).FindObject("stats")
    print '>>>>', st1
    st1.SetX1NDC(.8)
    st1.SetY1NDC(.7)
    st1.SetX2NDC(.95)
    st1.SetY2NDC(.9)
    st1.SetOptStat(111110)
    st1.SetTextSize(0.03)
    st1.Draw()
    st2 = (h[1].GetListOfFunctions()).FindObject("stats")
    st2.SetX1NDC(.8)
    st2.SetY1NDC(.5)
    st2.SetX2NDC(.95)
    st2.SetY2NDC(.7)
    st2.SetOptStat(111110)
    st2.SetTextSize(0.03)
    st2.SetTextColor(4) 
    st2.Draw()

  #myText('CMS Internal #sqrt{s} = 13 TeV, 35.9 fb^{-1}',0.4,0.937775,1.2)
  
  topPad.Update()
  c.Update()

  bottomPad.cd()
  ROOT.gPad.SetTicks(1,1)
  #ratio, error = myutils.Ratio.getRatio(h[0],h[1],h[1].GetXaxis().GetXmin(),h[1].GetXaxis().GetXmax(),"",100, True)
  hR.Draw('E')
  hR.SetTitle('')
  hR.SetStats(0)
  #ROOT.gPad.Update()
  #st = (hR.GetListOfFunctions()).FindObject("stats")
  #print '>>>>', st
  #st.SetOptStat(0)
  #st.Draw()
  hR.SetMarkerStyle(20)
  hR.SetMarkerSize(1.5)
  hR.GetXaxis().SetLabelSize(0.12)
  hR.GetXaxis().SetTitleSize(0.12)
  hR.GetXaxis().SetTitleOffset(1.1)
  hR.GetXaxis().SetTitle(xAxisTitle)
  hR.GetXaxis().SetRangeUser(xAxisRange[0],xAxisRange[1])
  hR.GetYaxis().SetLabelSize(0.12)
  hR.GetYaxis().SetTitleSize(0.12)
  hR.GetYaxis().SetTitleOffset(0.5)
  #hR.GetYaxis().SetTitle('Data/MC')
  hR.GetYaxis().SetTitle('Ratio')
  hR.GetYaxis().SetNdivisions(505)

  #ratioError = ROOT.TGraphErrors(error)
  #ratioError.SetFillColor(ROOT.kGray+3)
  #ratioError.SetFillStyle(3013)
  #ratioError.Draw('SAME2')
  
  #hR.GetYaxis().SetRangeUser(0.5,1.6)
  #hR.GetYaxis().SetRangeUser(0.95,1.05)
  #hR.GetYaxis().SetRangeUser(0.7,1.3)
  hR.GetYaxis().SetRangeUser(0.5,1.6)
  #hR.GetYaxis().SetRangeUser(0.7,1.4)
  #hR.GetYaxis().SetRangeUser(0.9,1.1)
  line = ROOT.TLine(xAxisRange[0],1,xAxisRange[1],1)
  line.Draw('same')

  #myText('KS test: %0.3f' % ksScore, 0.7, 0.85, 2)
   
  bottomPad.Update()

  c.Update()
  ''' 
  rep = ''
  while not rep in [ 'q', 'Q' ]:
     rep = raw_input( 'enter "q" to quit: ' )
     if 1 < len(rep):
       rep = rep[0]
  '''

  if isinstance(histDir,ROOT.TDirectory):
      histDir.cd()
      c.Write()
  #c.Print('Test/OtherPlots/'+plotName+'.C')
  #c.Print('Test/OtherPlots/'+plotName+'.png')
  #c.Print('Test/OtherPlots/'+plotName+'.pdf')
  #c.Print('Test/OtherPlots/'+plotName+'.eps')
  #c.Print('Plots/OtherPlots/'+plotName+'.C')
  #c.Print('Plots/OtherPlots/'+plotName+'.png')
  #c.Print('Plots/OtherPlots/'+plotName+'.pdf')
  #c.Print('Plots/OtherPlots/'+plotName+'.eps')
  c.Print(plotName+'.C')
  c.Print(plotName+'.png')
  c.Print(plotName+'.pdf')
  c.Print(plotName+'.eps')
  #c.Print(plotName+'.png')

def shapeComparePlot2(hOri, plotLegends, plotName, xAxisTitle = 'Jet M_{SV} [GeV]', xAxisRange = [0,10], showStatBoxes = False, setLogY=False, newBinning=[], plotTitle = '', histDir = None):

  mode = 2 #1: points over filled histogram, 2: 2 histogram

  #xAxisRange = [0,10]
  if len(hOri) != 2:
    print 'Error: exact 2 histogram needed but ', len(hOri), ' provided'
    return 0
  hIn = []
  for hTmp in hOri:
    hIn.append(hTmp.Clone(hTmp.GetName() + '_clone_for_plotting'))

  bins = array('d',newBinning)
  h = []
  nBin = len(newBinning) - 1
  if len(newBinning) == 0:
    for hTmp in hIn:
      h.append(hTmp)
  else:
    for hTmp in hIn:
      h.append(hTmp.Rebin(nBin,hTmp.GetName() + '_rebin',bins))

  if not showStatBoxes:
    for hTmp in h: hTmp.SetStats(0)

  print 'Divide by bin width'
  for iB in range(1,h[0].GetNbinsX()+1):
    for i in range(len(h)):
      h[i].SetBinContent(iB,h[i].GetBinContent(iB)/h[i].GetBinWidth(iB))
      h[i].SetBinError(iB,h[i].GetBinError(iB)/h[i].GetBinWidth(iB))


  yAxis_scale = 1.6*(h[0].GetMaximum())
  for i in range(1,len(h)):
    scale = 1.6*(h[i].GetMaximum())
    if scale > yAxis_scale:
      yAxis_scale = scale
  
  hR = []
  for i in range(1,len(h)):
    hR.append(h[0].Clone('Ratio_'+str(i)))
    hR[-1].Divide(h[i])
  
  c = ROOT.TCanvas('c_' + plotName,'', 600, 600)
  c.SetFillStyle(4000)
  c.SetFrameFillStyle(1000)
  c.SetFrameFillColor(0)

  topPad = ROOT.TPad('topPad','topPad',0,0.3 ,1.0,1.0)
  topPad.SetBottomMargin(0.001)
  topPad.SetLeftMargin(0.12709)
  topPad.SetRightMargin(0.0434783)
  
  topPad.Draw()

  bottomPad = ROOT.TPad('bottomPad','bottomPad',0,0.0,1.0,0.3)
  bottomPad.SetLeftMargin(0.12709)
  bottomPad.SetRightMargin(0.0434783)
  bottomPad.SetTopMargin(0.04)
  bottomPad.SetBottomMargin(0.35)
  bottomPad.Draw()

  topPad.cd()
  if setLogY: topPad.SetLogy()
  l = ROOT.TLegend(0.4, 0.6, 0.9, 0.87)
  #l = ROOT.TLegend(0.57, 0.6,0.9,0.87)
  #l = ROOT.TLegend(0.5, 0.6,0.8,0.9)
  l.SetLineWidth(2)
  l.SetBorderSize(0)
  l.SetFillColor(0)
  l.SetTextFont(42)
  l.SetTextSize(0.05)

  h[1].SetMarkerStyle(21)
  h[1].SetMarkerSize(1.5)
  h[1].SetMarkerColor(4)
  h[1].SetLineColor(4)
  if mode == 1:
    h[1].SetFillColor(4)
    h[1].SetFillStyle(3002)
  if mode == 1: h[1].Draw('hist')
  if mode == 2: h[1].Draw('hist e')
  h[1].SetTitle('')
  h[1].GetYaxis().SetRangeUser(0.001,yAxis_scale)
  h[1].GetXaxis().SetRangeUser(xAxisRange[0],xAxisRange[1])
  h[1].GetYaxis().SetTitleSize(0.057)
  h[1].GetYaxis().SetTitleOffset(1.2) #the more the more distance from axis
  h[1].GetYaxis().SetLabelSize(0.05)
  h[1].GetYaxis().SetTitle('Events/GeV')

  myText(plotTitle,0.2,0.8,1.2)
  
  #theErrorGraph = ROOT.TGraphErrors(h[1])
  #theErrorGraph.SetFillColor(ROOT.kGray+3)
  #theErrorGraph.SetFillStyle(3013)
  #theErrorGraph.Draw('SAME2')
  
  #l.AddEntry(theErrorGraph,uncName,"fl")

  if not showStatBoxes:
      if mode == 1: h[0].Draw('e same')
      if mode == 2: h[0].Draw('hist e same')
  if showStatBoxes:
      if mode == 1: h[0].Draw('e same')
      if mode == 2: h[0].Draw('hist e sames')
  h[0].SetMarkerStyle(20)
  h[0].SetMarkerSize(1.5)

#>>>>>>>>>>> HERE>>>>>>>>>>>> 
  l.AddEntry(h[0], plotLegends[0], 'lp')
  if mode == 1:
      l.AddEntry(h[1], plotLegends[1], 'lf')
  if mode == 2:
      l.AddEntry(h[1], plotLegends[1], 'lp')
  l.Draw()
  
  ROOT.gPad.Update()

  if showStatBoxes:  
    st1 = (h[0].GetListOfFunctions()).FindObject("stats")
    print '>>>>', st1
    st1.SetX1NDC(.8)
    st1.SetY1NDC(.7)
    st1.SetX2NDC(.95)
    st1.SetY2NDC(.9)
    st1.SetOptStat(111110)
    st1.SetTextSize(0.03)
    st1.Draw()
    st2 = (h[1].GetListOfFunctions()).FindObject("stats")
    st2.SetX1NDC(.8)
    st2.SetY1NDC(.5)
    st2.SetX2NDC(.95)
    st2.SetY2NDC(.7)
    st2.SetOptStat(111110)
    st2.SetTextSize(0.03)
    st2.SetTextColor(4) 
    st2.Draw()

  #myText('CMS Internal #sqrt{s} = 13 TeV, 35.9 fb^{-1}',0.4,0.937775,1.2)
  
  topPad.Update()
  c.Update()

  bottomPad.cd()
  ROOT.gPad.SetTicks(1,1)
  #ratio, error = myutils.Ratio.getRatio(h[0],h[1],h[1].GetXaxis().GetXmin(),h[1].GetXaxis().GetXmax(),"",100, True)
  hR.Draw('E')
  hR.SetTitle('')
  hR.SetStats(0)
  #ROOT.gPad.Update()
  #st = (hR.GetListOfFunctions()).FindObject("stats")
  #print '>>>>', st
  #st.SetOptStat(0)
  #st.Draw()
  hR.SetMarkerStyle(20)
  hR.SetMarkerSize(1.5)
  hR.GetXaxis().SetLabelSize(0.12)
  hR.GetXaxis().SetTitleSize(0.12)
  hR.GetXaxis().SetTitleOffset(1.1)
  hR.GetXaxis().SetTitle(xAxisTitle)
  hR.GetXaxis().SetRangeUser(xAxisRange[0],xAxisRange[1])
  hR.GetYaxis().SetLabelSize(0.12)
  hR.GetYaxis().SetTitleSize(0.12)
  hR.GetYaxis().SetTitleOffset(0.5)
  #hR.GetYaxis().SetTitle('Data/MC')
  hR.GetYaxis().SetTitle('Ratio')
  hR.GetYaxis().SetNdivisions(505)

  #ratioError = ROOT.TGraphErrors(error)
  #ratioError.SetFillColor(ROOT.kGray+3)
  #ratioError.SetFillStyle(3013)
  #ratioError.Draw('SAME2')
  
  #hR.GetYaxis().SetRangeUser(0.5,1.6)
  #hR.GetYaxis().SetRangeUser(0.95,1.05)
  #hR.GetYaxis().SetRangeUser(0.7,1.3)
  hR.GetYaxis().SetRangeUser(0.5,1.6)
  #hR.GetYaxis().SetRangeUser(0.7,1.4)
  #hR.GetYaxis().SetRangeUser(0.9,1.1)
  line = ROOT.TLine(xAxisRange[0],1,xAxisRange[1],1)
  line.Draw('same')

  #myText('KS test: %0.3f' % ksScore, 0.7, 0.85, 2)
   
  bottomPad.Update()

  c.Update()
  ''' 
  rep = ''
  while not rep in [ 'q', 'Q' ]:
     rep = raw_input( 'enter "q" to quit: ' )
     if 1 < len(rep):
       rep = rep[0]
  '''

  if isinstance(histDir,ROOT.TDirectory):
      histDir.cd()
      c.Write()
  #c.Print('Test/OtherPlots/'+plotName+'.C')
  #c.Print('Test/OtherPlots/'+plotName+'.png')
  #c.Print('Test/OtherPlots/'+plotName+'.pdf')
  #c.Print('Test/OtherPlots/'+plotName+'.eps')
  #c.Print('Plots/OtherPlots/'+plotName+'.C')
  #c.Print('Plots/OtherPlots/'+plotName+'.png')
  #c.Print('Plots/OtherPlots/'+plotName+'.pdf')
  #c.Print('Plots/OtherPlots/'+plotName+'.eps')
  c.Print(plotName+'.C')
  c.Print(plotName+'.png')
  c.Print(plotName+'.pdf')
  c.Print(plotName+'.eps')
  #c.Print(plotName+'.png')


def shapeComparePlot_many(hOri, plotLegends, plotName, xAxisTitle = 'Jet M_{SV} [GeV]', xAxisRange = [0,10], showStatBoxes = False, doNorm = True, yAxisTitle='Events'):
  h = []
  for hTmp in hOri:
    h.append(hTmp.Clone(hTmp.GetName() + '_clone_for_plotting'))

  for i in range(len(h)):
    if doNorm: h[i].Scale(1./h[i].Integral())
    if not showStatBoxes: h[i].SetStats(0)
  yAxis_scale = 1.4*(h[0].GetMaximum())
  
  for i in range(1,len(h)):
    scale = 1.4*(h[i].GetMaximum())
    if scale > yAxis_scale:
      yAxis_scale = scale
  
  c = ROOT.TCanvas('c_' + plotName)
  c.SetGridx()
  h[0].SetTitle(plotName)
  h[0].SetLineColor(colors[0])
  h[0].Draw('hist e')
  h[0].GetXaxis().SetRangeUser(xAxisRange[0],xAxisRange[1])
  h[0].GetXaxis().SetTitle(xAxisTitle)
  h[0].GetYaxis().SetTitle(yAxisTitle)
  if doNorm:
    h[0].GetYaxis().SetTitle('Normalized scale')

  h[0].SetLineWidth(2)
  h[0].GetYaxis().SetRangeUser(0,yAxis_scale)
  for i in range(1,len(h)):
      h[i].Draw("hist e sames")
      h[i].SetLineWidth(2)
      h[i].SetLineColor(colors[i])
   
  ROOT.gPad.Update()
  
  #l = ROOT.TLegend(0.4, 0.73,0.6,0.9)
  l = ROOT.TLegend(0.2, 0.73,0.4,0.9)
  l.SetBorderSize(0)
  l.SetFillColor(0)
  l.SetTextFont(62)
  l.SetTextSize(0.035)
  for i in range(0,len(h)):
      l.AddEntry(h[i], plotLegends[i], 'l')
  l.Draw()
 
  width = 0.15
  height = 0.2
  x1 = 0.8
  y1 = 0.7
  

  if showStatBoxes:
    st1 = (h[0].GetListOfFunctions()).FindObject("stats")
    st1.SetX1NDC(x1)
    st1.SetY1NDC(y1)
    st1.SetX2NDC(x1+width)
    st1.SetY2NDC(y1+height)
    st1.SetOptStat(111110)
    st1.SetTextSize(0.03)
    st1.SetTextColor(colors[0])
    st1.Draw()
    iPlot = 0
    for i in range(1,len(h)):
        st2 = (h[i].GetListOfFunctions()).FindObject("stats")
        st2.SetX1NDC(x1)
        st2.SetY1NDC(y1-(iPlot+1)*height)
        st2.SetX2NDC(x1+width)
        st2.SetY2NDC(y1-iPlot*height)
        st2.SetOptStat(111110)
        st2.SetTextSize(0.03)
        st2.SetTextColor(colors[i]) 
        st2.Draw()
        iPlot = iPlot + 1
  
   
  c.Update()
  
  #rep = ''
  #while not rep in [ 'q', 'Q' ]:
  #   rep = raw_input( 'enter "q" to quit: ' )
  #   if 1 < len(rep):
  #     rep = rep[0]
  
  c.Print(plotName+'.C')
  c.Print(plotName+'.png')
  c.Print(plotName+'.pdf')
  c.Print(plotName+'.eps')

#######################
def plotSyst(h, cName = '', xAxisTitle = 'Jet M_{SV} [GeV]', xAxisRange = [0,10], binWidth = '0.2'): #central, Up, Down
  hC = h[0].Clone('Central')
  hU = h[1].Clone('Up')
  hD = h[2].Clone('Down')
  hRU = hU.Clone('hRU')
  hRU.Divide(hC)
  hRD = hD.Clone('hRD')
  hRD.Divide(hC)
 
  yAxis_scale = 1.2*(hU.GetMaximum())

  c = ROOT.TCanvas(cName,'', 600, 600)
  c.SetFillStyle(4000)
  c.SetFrameFillStyle(1000)
  c.SetFrameFillColor(0)

  topPad = ROOT.TPad('topPad','topPad',0,0.3 ,1.0,1.0)
  topPad.SetBottomMargin(0.005)
  topPad.SetLeftMargin(0.12709)
  topPad.SetRightMargin(0.0434783)
  topPad.Draw()

  bottomPad = ROOT.TPad('bottomPad','bottomPad',0,0.0,1.0,0.3)
  bottomPad.SetLeftMargin(0.12709)
  bottomPad.SetRightMargin(0.0434783)
  bottomPad.SetTopMargin(0.04)
  bottomPad.SetBottomMargin(0.35)
  bottomPad.Draw()

  topPad.cd()
  l = ROOT.TLegend(0.5, 0.6,0.9,0.87)
  #l = ROOT.TLegend(0.5, 0.6,0.8,0.9)
  l.SetLineWidth(2)
  l.SetBorderSize(0)
  l.SetFillColor(0)
  l.SetTextFont(42)
  l.SetTextSize(0.05)

  hC.SetLineColor(4)
  hC.Draw('hist')
  hC.SetTitle('')
  hC.GetYaxis().SetRangeUser(0.001,yAxis_scale)
  hC.GetXaxis().SetRangeUser(xAxisRange[0],xAxisRange[1])
  hC.GetYaxis().SetTitleSize(0.057)
  hC.GetYaxis().SetTitleOffset(1.2) #the more the more distance from axis
  hC.GetYaxis().SetLabelSize(0.05)
  hC.GetYaxis().SetTitle('Events/'+binWidth)

  hU.SetLineColor(3)
  hU.SetLineStyle(2)
  hRU.SetLineColor(3)
  hRU.SetLineStyle(2)
  hU.Draw('hist sames')
  
  hD.SetLineColor(2)
  hD.SetLineStyle(2)
  hRD.SetLineColor(2)
  hRD.SetLineStyle(2)
  hD.Draw('hist sames')


  l.AddEntry(hU, 'Syst. Up', 'l')
  l.AddEntry(hC, 'Central', 'l')
  l.AddEntry(hD, 'Syst. Down', 'l')
  l.Draw()
  
  myText(cName, 0.2, 0.937775, 1.0)
  
  ROOT.gPad.Update()
  st1 = (hU.GetListOfFunctions()).FindObject("stats")
  print '>>>>', st1
  st1.SetX1NDC(.8)
  st1.SetY1NDC(.7)
  st1.SetX2NDC(.95)
  st1.SetY2NDC(.9)
  st1.SetOptStat(111110)
  st1.SetTextSize(0.03)
  st1.SetTextColor(4)
  st1.Draw()
  st2 = (hC.GetListOfFunctions()).FindObject("stats")
  st2.SetX1NDC(.8)
  st2.SetY1NDC(.5)
  st2.SetX2NDC(.95)
  st2.SetY2NDC(.7)
  st2.SetOptStat(111110)
  st2.SetTextSize(0.03)
  st2.SetTextColor(2) 
  st2.Draw()
  st3 = (hD.GetListOfFunctions()).FindObject("stats")
  st3.SetX1NDC(.8)
  st3.SetY1NDC(.3)
  st3.SetX2NDC(.95)
  st3.SetY2NDC(.5)
  st3.SetOptStat(111110)
  st3.SetTextSize(0.03)
  st3.SetTextColor(3) 
  st3.Draw()
  
  topPad.Update()
  c.Update()
  
  bottomPad.cd()
  ROOT.gPad.SetTicks(1,1)
  hRU.Draw('hist')
  hRU.SetTitle('')
  hRU.SetStats(0)
  hRU.GetXaxis().SetLabelSize(0.12)
  hRU.GetXaxis().SetTitleSize(0.12)
  hRU.GetXaxis().SetTitleOffset(1.1)
  hRU.GetXaxis().SetTitle(xAxisTitle)
  hRU.GetXaxis().SetRangeUser(xAxisRange[0],xAxisRange[1])
  hRU.GetYaxis().SetLabelSize(0.12)
  hRU.GetYaxis().SetTitleSize(0.12)
  hRU.GetYaxis().SetTitleOffset(0.5)
  hRU.GetYaxis().SetTitle('Syst. fluc.')
  hRU.GetYaxis().SetNdivisions(505)

  hRD.Draw('hist same')

  hRU.GetYaxis().SetRangeUser(0.8,1.2)
  line = ROOT.TLine(xAxisRange[0],1,xAxisRange[1],1)
  line.Draw('same')
   
  bottomPad.Update()
  c.Update()
  
  #pause()

  c.Print(c.GetName() + '.C')
  c.Print(c.GetName() + '.png')
  c.Print(c.GetName() + '.pdf')
  c.Print(c.GetName() + '.eps')



#######################  
def makeLatexLine(wordIns, numFormat='%s'):
  
  words = []
  words.append(wordIns[0])
  word_formats = []
  word_formats.append('%s')

  for i in range(1, len(wordIns)):
    if numFormat != '%s':
      if float(wordIns[i]) < 0.03: 
        words.append('$\sim 0$')
        word_formats.append('%s')
      else: 
        words.append(float(wordIns[i]))
        #if float(wordIns[i]) >= 0.03 and float(wordIns[i])
        word_formats.append(numFormat)
    else:
      words.append(wordIns[i])
      word_formats.append('%s')

  #print '>>>>', words[0]
  tmp = '{0:50}'.format(words[0] + ' & ')
  
  for i in range(1,len(words)):
    st = word_formats[i] + ' & '
    if i == len(words) - 1:
      st = word_formats[i] + '\\\\'

    tmp = tmp + '{0:20}'.format(st % words[i])

  tmp = '  ' + tmp + '\n'
  #print tmp
  return tmp

def getErrors(h, includeOverFlow=False):
  err = 0
  for i in range(1, h.GetNbinsX() + 1):
    err += h.GetBinError(i)*h.GetBinError(i)
  if includeOverFlow:
    err += h.GetBinError(h.GetNbinsX() + 1)*h.GetBinError(h.GetNbinsX() + 1)
  return sqrt(err)

def getRatioErrors(num, deno, correlation = 0):
  r = num[0]/deno[0]
  return r*sqrt(num[1]*num[1]/(num[0]*num[0]) + deno[1]*deno[1]/(deno[0]*deno[0]) + 2*correlation*num[1]/num[0]*deno[1]/deno[0])

def getNumbers(nums,plots,includeOverFlow = True):
  for k,v in nums.items():
    for iPlot in range(len(plots)):
      if plots[iPlot].GetName() == k:
        nums[k].append(plots[iPlot].Integral())
        nums[k].append(getErrors(plots[iPlot]))
        if includeOverFlow:
          nums[k].append(plots[iPlot].Integral() + plots[iPlot].GetBinContent(plots[iPlot].GetNbinsX() + 1))
          nums[k].append(getErrors(plots[iPlot], True))
        
        break
  num_mc = [0,0,0,0]
  for k,v in nums.items():
    if 'Data' not in k and 'MC' not in k and 'DMCratio' not in k:
      print k, v
      num_mc[0] += v[0]
      num_mc[1] += v[1]*v[1]
      num_mc[2] += v[2]
      num_mc[3] += v[3]*v[3]
  
  num_mc[1] = sqrt(num_mc[1])
  num_mc[3] = sqrt(num_mc[3])

  nums['MC'] = num_mc

  num_ratios = [0,0,0,0]
  if nums['MC'][0] > 0:
    num_ratios[0] = nums['Data1D'][0]/nums['MC'][0]
    num_ratios[1] = getRatioErrors([nums['Data1D'][0],nums['Data1D'][1]], [nums['MC'][0],nums['MC'][1]])
  else:
    num_ratios[0] = 0
    num_ratios[1] = 0
  if nums['MC'][2] > 0:
    num_ratios[2] = nums['Data1D'][2]/nums['MC'][2]
    num_ratios[3] = getRatioErrors([nums['Data1D'][2],nums['Data1D'][3]], [nums['MC'][2],nums['MC'][3]])
  else:
    num_ratios[2] = 0
    num_ratios[3] = 0

  nums['DMCratio'] = num_ratios



#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
def calBtagWeight(selJet_idx, tree, btagSF_reader_T, btagSF_reader_M, ctagSF_reader_T, ctagSF_reader_M, debug = False):
  #https://www.dropbox.com/sh/1aawrlchietr0ju/AAD1fMLmr2pNOFRxDytpTFkna?dl=0
  #FIXME check with Andrew where are these number come from?
  #eff_b = 0.475 #consistent with AN-16-251 page 28
  #eff_c = 0.0315
  #eff_l = 0.000726 #AN-16-251, tab 14 page 43, 80-120: 0.00147 +/- 0.00017 
  eff_all = {'CSVT_b':[0.410114,0.468108,0.472719,0.470121,0.446386,0.393863,0.339019],'CSVM_b':[0.612604,0.66434,0.677704,0.674616,0.649191,0.588604,0.54371],
      'CtagT_b':[0.176604,0.187217,0.19695,0.195906,0.19137,0.189731,0.142857],'CtagM_b':[0.159038,0.154198,0.153816,0.152312,0.161812,0.17846,0.179104],
      'CSVT_c':[0.0214224,0.0244102,0.0213091,0.0244077,0.0290346,0.0319585,0.0283019],'CSVM_c':[0.121792,0.119119,0.122172,0.13312,0.133941,0.12838,0.123499],
      'CtagT_c':[0.167331,0.200346,0.204546,0.201662,0.183215,0.157334,0.134648],'CtagM_c':[0.363939,0.415627,0.431991,0.424006,0.41475,0.392789,0.397084],
      'CSVT_l':[0.0010197,0.000867453,0.00089305,0.00134669,0.00159204,0.00185471,0.00329621],'CSVM_l':[0.0107394,0.00830683,0.00826302,0.00879159,0.0110558,0.0133202,0.0203118],
      'CtagT_l':[0.00799923,0.0104548,0.0110043,0.0113782,0.0128358,0.0137698,0.0149666],'CtagM_l':[0.183885,0.22076,0.232999,0.234314,0.237435,0.235914,0.226548]}
  ptBins = {0:[30,50],1:[50,70],2:[70,100],3:[100,140],4:[140,200],5:[200,300],6:[300,10000]}

  pMC = [[1,1,1], [1, 1, 1], [1,1,1], [1,1,1]] #central, up, down, tight CSV, loose CSV, tight ctag, loose ctag
  pData = [[1,1,1], [1, 1, 1],[1,1,1],[1,1,1]] #central, up, down, tight, loose
  w = [[1,1,1], [1, 1, 1],[1,1,1],[1,1,1,1]] #central, up, down, tight, loose
  #has_lightJet_passCSVT = False
  for i in range(0, len(selJet_idx)):
    iJ = selJet_idx[i]
    
    #find pt bins to get efficiency
    iPtBin = -1
    jetPtTmp = tree.Jet_pt[iJ]
    if jetPtTmp < 30:
      iPtBin = 0
    if jetPtTmp > 10000:
      iPtBin = 6
    if jetPtTmp >= 30 and jetPtTmp <= 10000:
      for k,v in ptBins.items():
        if jetPtTmp > v[0] and jetPtTmp < v[1]:
          iPtBin = k
          break
    
    btagTmp = tree.Jet_btagCSV[iJ]
    
    #find jetFlavor
    jetFlavTmp = abs(tree.Jet_hadronFlavour[iJ])
    jetFlav = 2
    jetType = 'l' #use to get MC efficiency
    if jetFlavTmp == 5:
      jetFlav = 0
      jetType = 'b'
    if jetFlavTmp == 4:
      jetFlav = 1
      jetType = 'c'

    jetEta = tree.Jet_eta[iJ]
    jetPt = tree.Jet_pt[iJ]
    
    #get scale factor for CSV
    #passT = (btagTmp > float(config.get('General', 'CSV_Tight')))
    #passM = (btagTmp > float(config.get('General', 'CSV_Medium')))
    passT = (btagTmp > 0.9535)
    passM = (btagTmp > 0.8484)
    sf_Ts = []
    sf_Ts.append(btagSF_reader_T.eval_auto_bounds('central', jetFlav, jetEta, jetPt))
    sf_Ts.append(btagSF_reader_T.eval_auto_bounds('up', jetFlav, jetEta, jetPt))
    sf_Ts.append(btagSF_reader_T.eval_auto_bounds('down', jetFlav, jetEta, jetPt))
    sf_Ms = []
    sf_Ms.append(btagSF_reader_M.eval_auto_bounds('central', jetFlav, jetEta, jetPt))
    sf_Ms.append(btagSF_reader_M.eval_auto_bounds('up', jetFlav, jetEta, jetPt))
    sf_Ms.append(btagSF_reader_M.eval_auto_bounds('down', jetFlav, jetEta, jetPt))
   
    #get scale factor for Ctag
    passCtagT = tree.Jet_ctagVsL[iJ] > 0.69 and tree.Jet_ctagVsB[iJ] > -0.45
    passCtagM = tree.Jet_ctagVsL[iJ] > -0.1 and tree.Jet_ctagVsB[iJ] > 0.08
    sf_ctagTs = []
    sf_ctagTs.append(ctagSF_reader_T.eval_auto_bounds('central', jetFlav, jetEta, jetPt))
    sf_ctagTs.append(ctagSF_reader_T.eval_auto_bounds('up', jetFlav, jetEta, jetPt))
    sf_ctagTs.append(ctagSF_reader_T.eval_auto_bounds('down', jetFlav, jetEta, jetPt))
    sf_ctagMs = []
    sf_ctagMs.append(ctagSF_reader_M.eval_auto_bounds('central', jetFlav, jetEta, jetPt))
    sf_ctagMs.append(ctagSF_reader_M.eval_auto_bounds('up', jetFlav, jetEta, jetPt))
    sf_ctagMs.append(ctagSF_reader_M.eval_auto_bounds('down', jetFlav, jetEta, jetPt))

    if debug:
      print '===================='
      print 'Ctag ', jetFlav, ' ', jetEta, ' ', jetPt, ' ', sf_ctagTs, ' ', sf_ctagMs

    #get weight for CSVT
    eff = eff_all['CSVT_'+jetType][iPtBin]
    if debug: print 'Eff CSVT_' + jetType, ' ', eff
    if passT:
     pMC[0][0] = pMC[0][0]*eff #T, central
     pMC[0][1] = pMC[0][1]*eff #T, up
     pMC[0][2] = pMC[0][2]*eff #T, down
     pData[0][0] = pData[0][0]*eff*sf_Ts[0] #T, central
     pData[0][1] = pData[0][1]*eff*sf_Ts[1] #T, up
     pData[0][2] = pData[0][2]*eff*sf_Ts[2] #T, down
     #if jetFlav == 2:
     #  has_lightJet_passCSVT = True
     #  print 'Light jet: ', jetPt, ' ', jetEta, ' ', eff, ' ', sf_Ts[0], sf_Ts[1], sf_Ts[2]
    else:
     pMC[0][0] = pMC[0][0]*(1-eff)
     pMC[0][1] = pMC[0][1]*(1-eff)
     pMC[0][2] = pMC[0][2]*(1-eff)
     pData[0][0] = pData[0][0]*(1-sf_Ts[0]*eff)
     pData[0][1] = pData[0][1]*(1-sf_Ts[1]*eff)
     pData[0][2] = pData[0][2]*(1-sf_Ts[2]*eff)

    #get weight for CSVM
    eff = eff_all['CSVM_'+jetType][iPtBin]
    if debug: print 'Eff CSVM_' + jetType, ' ', eff
    if passM:
     pMC[1][0] = pMC[1][0]*eff #M, central
     pMC[1][1] = pMC[1][1]*eff #M, up
     pMC[1][2] = pMC[1][2]*eff #M, down
     pData[1][0] = pData[1][0]*eff*sf_Ms[0] #M, central
     pData[1][1] = pData[1][1]*eff*sf_Ms[1] #M, up
     pData[1][2] = pData[1][2]*eff*sf_Ms[2] #M, down
    else:
     pMC[1][0] = pMC[1][0]*(1-eff)
     pMC[1][1] = pMC[1][1]*(1-eff)
     pMC[1][2] = pMC[1][2]*(1-eff)
     pData[1][0] = pData[1][0]*(1-sf_Ms[0]*eff)
     pData[1][1] = pData[1][1]*(1-sf_Ms[1]*eff)
     pData[1][2] = pData[1][2]*(1-sf_Ms[2]*eff)

    #get weight for CtagT
    eff = eff_all['CtagT_'+jetType][iPtBin]
    if debug: print 'Eff CtagT_' + jetType, ' ', eff
    if passCtagT:
     pMC[2][0] = pMC[2][0]*eff #ctagT, central
     pMC[2][1] = pMC[2][1]*eff #ctagT, up
     pMC[2][2] = pMC[2][2]*eff #ctagT, down
     pData[2][0] = pData[2][0]*eff*sf_ctagTs[0] #ctagT, central
     pData[2][1] = pData[2][1]*eff*sf_ctagTs[1] #ctagT, up
     pData[2][2] = pData[2][2]*eff*sf_ctagTs[2] #ctagT, down
    else:
     pMC[2][0] = pMC[2][0]*(1-eff)
     pMC[2][1] = pMC[2][1]*(1-eff)
     pMC[2][2] = pMC[2][2]*(1-eff)
     pData[2][0] = pData[2][0]*(1-sf_ctagTs[0]*eff)
     pData[2][1] = pData[2][1]*(1-sf_ctagTs[1]*eff)
     pData[2][2] = pData[2][2]*(1-sf_ctagTs[2]*eff)
    
    #get weight for CtagM
    eff = eff_all['CtagM_'+jetType][iPtBin]
    if debug: print 'Eff CtagM_' + jetType, ' ', eff
    if passCtagM:
     pMC[3][0] = pMC[3][0]*eff #ctagM, central
     pMC[3][1] = pMC[3][1]*eff #ctagM, up
     pMC[3][2] = pMC[3][2]*eff #ctagM, down
     pData[3][0] = pData[3][0]*eff*sf_ctagMs[0] #ctagM, central
     pData[3][1] = pData[3][1]*eff*sf_ctagMs[1] #ctagM, up
     pData[3][2] = pData[3][2]*eff*sf_ctagMs[2] #ctagM, down
    else:
     pMC[3][0] = pMC[3][0]*(1-eff)
     pMC[3][1] = pMC[3][1]*(1-eff)
     pMC[3][2] = pMC[3][2]*(1-eff)
     pData[3][0] = pData[3][0]*(1-sf_ctagMs[0]*eff)
     pData[3][1] = pData[3][1]*(1-sf_ctagMs[1]*eff)
     pData[3][2] = pData[3][2]*(1-sf_ctagMs[2]*eff)

  for i in range(0,len(pMC)):
    for j in range(0,len(pMC[i])):
      w[i][j] = pData[i][j]/pMC[i][j]
  #if has_lightJet_passCSVT:
  #  print 'Final weight with light jet passing CSVT: ', w

  return w  

def calBtagWeight_shape(selJet_idx, tree, btagSF_reader, debug = False):

  w = 1
  w_err_unc_corr = 1 
  sys_name = {}
  sys_name['bjet'] = ['hfstats1','hfstats2','jes','lf'] 
  sys_name['cjet'] = ['cferr1','cferr2']
  sys_name['ljet'] = ['lfstats1','lfstats2','jes','hf']
  sys = {}
  sys['bjet'] = {} 
  sys['cjet'] = {}
  sys['ljet'] = {}
  
  flc= {}
  flc[0] = 'bjet'
  flc[1] = 'cjet'
  flc[2] = 'ljet'

  for f in ['bjet','cjet','ljet']:
    for v in ['up','down']:
      for sn in sys_name[f]:
        sys[f][v+'_'+sn] = 0

  for i in range(0, len(selJet_idx)):
    iJ = selJet_idx[i] 
    jetCSV = tree.Jet_btagCSV[iJ]
    #find jetFlavor
    jetFlavTmp = abs(tree.Jet_hadronFlavour[iJ])
    jetFlav = 2
    if jetFlavTmp == 5:
      jetFlav = 0
    if jetFlavTmp == 4:
      jetFlav = 1

    jetEta = tree.Jet_eta[iJ]
    jetPt = tree.Jet_pt[iJ]

    jw = btagSF_reader.eval_auto_bounds('central', jetFlav, jetEta, jetPt, jetCSV)
    
    if jw == 0: continue
    
    w = w*jw 

    fn = flc[jetFlav]
    for t in ['up','down']:
      for s in sys_name[fn]:
        errTmp = abs(btagSF_reader.eval_auto_bounds(t+'_'+s, jetFlav, jetEta, jetPt, jetCSV)-jw)/jw
        if debug:
          print '>>> ', jetFlav, jetEta, jetPt, jetCSV, t+'_'+s, errTmp, jw
        #if 'stats' in s:
        #  sys[fn][t+'_'+s] = math.sqrt(sys[fn][t+'_'+s]*sys[fn][t+'_'+s] + errTmp*errTmp)
        #else:
        #  sys[fn][t+'_'+s] += errTmp
        sys[fn][t+'_'+s] = math.sqrt(sys[fn][t+'_'+s]*sys[fn][t+'_'+s] + errTmp*errTmp)
  
  sys_tot = {}

  for t in ['up','down']:
    #stmp1 = sys['bjet'][t+'_jes'] + sys['ljet'][t+'_jes']
    stmp2 = 0
    for f in ['bjet','cjet','ljet']:
      for sn in sys_name[f]:
        #if 'jes' in sn: continue
        stmp2 = math.sqrt(stmp2*stmp2 + sys[f][t+'_'+sn]*sys[f][t+'_'+sn])
    
    #sys_tot[t] = math.sqrt(stmp1*stmp1 + stmp2*stmp2)
    sys_tot[t] = math.sqrt(stmp2*stmp2)

  return [w, w+sys_tot['up']*w, w-sys_tot['down']*w]


def Get_lumi_scale(val_region, sample_lists, cfg): # sample list = ['TT:cjet','...','DY',....]
  lumi = float(cfg.get('General','lumi'))
  folder = ''
#>>>>>>>>>>>>MODIFY here>>>>>>>>>>  
  if val_region == 'emu':
      folder = cfg.get('Paths','path_emu')
  if val_region == 'zHFjet':
      folder = cfg.get('Paths','path_zHFjet')
  if val_region == 'ttsemi':
      folder = cfg.get('Paths','path_ttsemi')
  if val_region == 'wjet':
      folder = cfg.get('Paths','path_wjet')
  
  #loop over backgrouds and get histograms
  scales = {}
  for bkgr_name in sample_lists:
    sample_name = ''
#>>>>>>>>>>MODIFY here>>>>>>>>>>>>
    if 'TT' in bkgr_name:
      sample_name = 'Sample_29'
      if 'TT_madgraph' in bkgr_name:
        sample_name = 'Sample_34'
    if 'DY' in bkgr_name:
      sample_name = 'Sample_27'
    if 'WW' in bkgr_name:
      sample_name = 'Sample_30'
    if 'WZ' in bkgr_name:
      sample_name = 'Sample_31'
    if 'ZZ' in bkgr_name:
      sample_name = 'Sample_32'
    if 'Wjet' in bkgr_name:
      sample_name = 'Sample_33'

    print val_region,bkgr_name, sample_name
    file_name = folder + '/' + cfg.get(sample_name,'file')
    xSec = float(cfg.get(sample_name,'xSec'))
    scales[bkgr_name] = scaleToLumi(file_name, xSec, lumi)
  
  return scales


def Get_bkgr_subtracted_template(fileIn, plotPrefix, plotFolder, val_region, chan, bkgr_lists, cfg): #val_region = emu,..., bkgr_lists = ['TT:cjet','TT:ljet','DY' or 'DY_nlo','WW','WZ','ZZ']
  #this function gets data 3D or 1D jet_vtxMass jet_pt jet_eta distribution in validation region, for example emu, ttsemi and subtract background
  #build background lists
  scales = Get_lumi_scale(val_region, bkgr_lists, cfg)
  hBkgrs = []
  for bkgr_name in bkgr_lists:
    scale_val = scales[bkgr_name]
    nameTmp = bkgr_name.replace(':','_')
    #hTmp = fileIn.Get(val_region + '/' + chan + '/jet_vtxMass_jet_pt_jet_eta_3D_' + nameTmp + '_' + val_region + '_' + chan)
    nameTmp = plotFolder + '/' + plotPrefix + '_' + nameTmp + '_' + val_region + '_' + chan
    nameTmp = nameTmp.replace('_madgraph','')
    print 'Name: ', nameTmp 
    hTmp = fileIn.Get(nameTmp)
    hBkgrs.append(hTmp.Clone(hTmp.GetName() + '_clone'))
  
  #get total background
  hTot_bkgr = hBkgrs[0]
  for i in range(1,len(hBkgrs)):
      hTot_bkgr.Add(hBkgrs[i])
  
  #now do subtraction
  print 'Name 1: ', plotFolder + '/' + plotPrefix + '_Data_' + val_region + '_' + chan
  hData = fileIn.Get(plotFolder + '/' + plotPrefix + '_Data_' + val_region + '_' + chan)
  hData_bkgr_subtracted = hData.Clone(hData.GetName() + '_clone')
  hData_bkgr_subtracted.Add(hTot_bkgr, -1)

  return hData_bkgr_subtracted




def Get_bkgr_subtracted_template_test(fileIn, plotPrefix, plotFolder, val_region, chan, bkgr_lists, cfg): #val_region = emu,..., bkgr_lists = ['TT:cjet','TT:ljet','DY' or 'DY_nlo','WW','WZ','ZZ']
  #this function gets data 3D jet_vtxMass jet_pt jet_eta distribution in validation region, for example emu, ttsemi and subtract background

  folder = ''
  lumi = float(cfg.get('General','lumi'))
#>>>>>>>>>>>>MODIFY here>>>>>>>>>>  
  if val_region == 'emu':
      folder = cfg.get('Paths','path_zHFjet')
  if val_region == 'ttsemi':
      folder = cfg.get('Paths','path_ttsemi')
  if val_region == 'wjet':
      folder = cfg.get('Paths','path_wjet')
  
  #loop over backgrouds and get histograms
  hBkgrs = []
  for bkgr_name in bkgr_lists:
    sample_name = ''
#>>>>>>>>>>MODIFY here>>>>>>>>>>>>
    if 'TT' in bkgr_name:
      sample_name = 'Sample_29'
    if 'DY' in bkgr_name:
      sample_name = 'Sample_27'
    if 'WW' in bkgr_name:
      sample_name = 'Sample_30'
    if 'WZ' in bkgr_name:
      sample_name = 'Sample_31'
    if 'ZZ' in bkgr_name:
      sample_name = 'Sample_32'
    if 'Wjet' in bkgr_name:
      sample_name = 'Sample_33'

    file_name = folder + '/' + cfg.get(sample_name,'file')
    xSec = float(cfg.get(sample_name,'xSec'))
    scale_val = scaleToLumi(file_name, xSec, lumi)
    nameTmp = bkgr_name.replace(':','_')
    #hTmp = fileIn.Get(val_region + '/' + chan + '/jet_vtxMass_jet_pt_jet_eta_3D_' + nameTmp + '_' + val_region + '_' + chan)
    print 'Name: ', plotFolder + '/' + plotPrefix + '_' + nameTmp + '_' + val_region + '_' + chan
    hTmp = fileIn.Get(plotFolder + '/' + plotPrefix + '_' + nameTmp + '_' + val_region + '_' + chan)
    hBkgrs.append(hTmp.Clone(hTmp.GetName() + '_clone'))
  
  #get total background
  hTot_bkgr = hBkgrs[0]
  for i in range(1,len(hBkgrs)):
      hTot_bkgr.Add(hBkgrs[i])
  
  #now do subtraction
  print 'Name 1: ', plotFolder + '/' + plotPrefix + '_Data_' + val_region + '_' + chan
  hData = fileIn.Get(plotFolder + '/' + plotPrefix + '_Data_' + val_region + '_' + chan)
  hData_bkgr_subtracted = hData.Clone(hData.GetName() + '_clone')
  hData_bkgr_subtracted.Add(hTot_bkgr, -1)

  return hData_bkgr_subtracted


'''import random
a = []
for i in range(1,11): a.append(random.uniform(1,100))

print a

idxs = [3,4,8,9]

print "Before: "
for i in range(0,len(idxs)): print a[idxs[i]]

sortPt(idxs,a)

print "After: "

for i in range(0,len(idxs)): print a[idxs[i]]
'''

