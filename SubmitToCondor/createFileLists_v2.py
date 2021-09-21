import os,sys
import json
import subprocess
import time

#########################################################
samples_json = "../datasets_Nano02Apr2020_fullset_json.txt"

outDir = '../FileLists_Nano02Apr2020/'
os.system('mkdir ' + outDir)

samples_input = []
if len(sys.argv) > 1: 
  samples_input = sys.argv[1].split(',') #all, or DY_2J_amcatnlo_MC_2018

print samples_input

with open(samples_json) as json_file:
  samples = json.load(json_file)

if len(samples_input) > 0:
  samples_used = samples_input
else:
  samples_used = samples.keys()

for k in samples_used:
  #if samples_name != 'all' and k != sample_name 
  #print k
  fOutName = outDir + '/' + k + '.txt'
  os.system('rm ' + fOutName)
  i = 0
  for s in samples[k]:
    print "  ", s
    #os.system('rm outTmp.txt')
    cmd = 'dasgoclient --query="file dataset=' + s + '" >| outTmp.txt'
    #cmd = 'dasgoclient --query="file dataset=' + s + '"'
    print(cmd)
    os.system(cmd)
    #p=subprocess.Popen(cmd, shell=True, stdin=subprocess.PIPE, stdout=subprocess.PIPE)
    #p.wait()
    #result_str = p.stdout.read()
    #ls = result_str.split()
    #print '>>>>>>>>>>', len(ls)
    time.sleep(30)

    #write to file
    if i==0:
      fOut = open(fOutName,'w')
    else:
      fOut = open(fOutName,'a')
    
    ls = open("outTmp.txt",'r').readlines()
    if len(ls) == 0:
      print ">>>>WARNING: ", s, " has no files"
    else:
      print ">>>>NFILES: ", s, " has ", len(ls), " files" 
    for l in ls:
      l = 'root:://cmsxrootd.fnal.gov//' + l
      fOut.write(l)

    i += 1
