import os,sys

def findSubFolders(path, fileList, cern_eos=False):
  if path.find('failed') != -1: return 1
  if not cern_eos : os.system('xrdfs root://cmseos.fnal.gov ls -u ' + path + '/ >| tmp.txt')
  else: 
    cmd = 'xrdfs root://eoscms.cern.ch ls -u ' + path + '/ >| tmp.txt'
    #print cmd 
    os.system(cmd)
    
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
    if line.find('.root') != -1: 
      os.system('echo \'' + line + '\' >> ' + fileList)
    else:
      line = '/store' + line.split('/store')[1]
      findSubFolders(line,fileList)
     
  return 1

#########################################################
lines = open("tmpDatasets.txt").readlines()
outDir = '../FileLists/'
os.system('mkdir ' + outDir)

for line in lines:
  if '#' in line: continue
  line = line.replace('\n','')
  cmd = 'dasgoclient --query="file dataset=' + line + '" >| outTmp.txt'
  print(cmd)
  os.system(cmd)

  fOutName = outDir + '/' + line.split('/')[1] + '_' + line.split('/')[2] + '.txt'
  os.system('rm ' + fOutName)
  fOut = open(fOutName,'w')
  ls = open('outTmp.txt').readlines()
  for l in ls:
    l = 'root:://cmsxrootd.fnal.gov//' + l
    fOut.write(l)
