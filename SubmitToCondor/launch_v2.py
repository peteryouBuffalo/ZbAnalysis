import os,sys
import json

def write_condor_config(workDir, sample_format, name_output_dir, nJob, debug = False):
  f = open(workDir + '/condor_config.script', 'w')
  f.write('universe = vanilla \n')
  f.write('Executable = condor_executable.sh \n')
  f.write('Arguments = $(Process) \n') 
  f.write('Should_Transfer_Files = YES \n')
  f.write('WhenToTransferOutput = ON_EXIT \n')
  f.write('Transfer_Input_Files = input.tar \n')
  f.write('Output = ctagana_$(Cluster)_$(Process).stdout \n')
  f.write('Error = ctagana_$(Cluster)_$(Process).stderr \n')
  f.write('Log = ctagana_$(Cluster)_$(Process).log \n')
  f.write('notify_user = ${LOGNAME}@FNAL.GOV \n')
  f.write('+LENGTH="SHORT" \n')
  #f.write('x509userproxy = /tmp/x509up_u12772 \n')
  f.write('x509userproxy = $ENV(X509_USER_PROXY) \n')
  tmp = 'Queue ' + str(nJob) + '\n'
  f.write(tmp)
  f.close()

  f = open(workDir + '/condor_executable.sh', 'w')
  f.write('#!/bin/bash \n')
  f.write('echo $SHELL \n')
  f.write('source /cvmfs/cms.cern.ch/cmsset_default.sh \n')
  f.write('export SCRAM_ARCH=slc7_amd64_gcc820 \n')
  f.write('eval `scramv1 project CMSSW CMSSW_10_6_4` \n')
  f.write('cd CMSSW_10_6_4/src/ \n')
  f.write('eval `scramv1 runtime -sh` \n') # cmsenv is an alias not on the workers
  f.write('echo "CMSSW: "$CMSSW_BASE \n')
  f.write('cd ${_CONDOR_SCRATCH_DIR} \n')
  f.write('tar -xvf input.tar \n')
#  f.write('make clean \n')
  f.write('make FORMAT='+sample_format+'\n')
  sampleType = '0'
  if 'DATA' in sample_format:
    sampleType = '1'
  year = sample_format.split('_')[1]
  if debug:
    f.write('./main -filelist sampleList_$1.txt -out output_$1.root -data ' + sampleType + ' -year ' + year + ' -lastentry 10000 \n')
  else:
    f.write('./main -filelist sampleList_$1.txt -out output_$1.root -data ' + sampleType + ' -year ' + year + ' \n')
  f.write('xrdcp *.root root://cmseos.fnal.gov/' + name_output_dir+ '/ \n')
  f.write('rm *.root \n')
  f.write('echo "xrdcp *.root root://cmseos.fnal.gov/' + name_output_dir + '/" \n')
 
  f.close()

def make_input_file_list(nFile, outDir_file_list, file_list_name):
  
  lines = open(file_list_name).readlines()
  nJob = len(lines)/nFile + 1

  iFile = 0
  for line in range(0, len(lines), nFile):
    tmp = file_list_name.split('/')
    #newFile = open(outDir_file_list + '/' + tmp[len(tmp)-1] + '_' + str(iFile) + '.txt', 'w')  
    newFile = open(outDir_file_list + '/sampleList_' + str(iFile) + '.txt', 'w')  
    
    tmpFiles = lines[line:line+nFile]
    for i in range(0, len(tmpFiles)):
      newFile.write(tmpFiles[i])
    
    iFile = iFile + 1
  
  return nJob


#///////////////////////////////////////////////////////////////////
runMode = 1 #0: submit, 1: check output and hadd output file
submit = False # for testing setup 
submit = True # for executing submission 

debug = False 

dataSet_list = '../datasets_Nano02Apr2020_fullset_json.txt' 

nFile = 1

dir_file_list = '../FileLists_Nano02Apr2020'

outputDir_eos = '/eos/uscms/store/user/peteryou/Output_ZplusB/output_updated2021'
#outputDir_scratch = '/uscms/home/peteryou/CMSSW_10_6_4/src/ZbAnalysis/output_background' 
outputDir_scratch = '/uscms_data/d3/peteryou/CMSSW_10_6_4/src/ZbAnalysis/output_updated2021'

#Print setting
print '============================='
print 'Sample list file (list of input samples):                   ', dataSet_list
print 'Sample list folder (location of input file lists):          ', dir_file_list
print 'Number of file per jobs:                                    ', nFile
print 'Output location eos:                                        ', outputDir_eos 
print 'Output location scratch:                                    ', outputDir_scratch


#sys.exit()

#////////////////////////////////////////////////////////////////////
samples_input = []
if len(sys.argv) > 1: 
  samples_input = sys.argv[1].split(',') #all, or DY_2J_amcatnlo_MC_2018


json_file = open(dataSet_list)

samples = json.load(json_file)

lines = samples.keys() 

sample_format = ''
dir_affix = 'test'

for line in lines:
  if len(samples_input) > 0 and line not in samples_input: continue
  print '========================='
  print 'Processing sample: ', line
  
  data_name = line
  work_dir = 'condor_run_' + data_name + '_' + dir_affix

  sample_format = data_name.split('_')[-2] + '_' + data_name.split('_')[-1] 
  
  #create output directories on eos
  dir_final_rootFile = outputDir_eos + '/' + data_name
  #dir_final_rootFile_scratch = outputDir_scratch + '/' + data_name

#####################################################
  if runMode == 0:
    os.system('eos root://cmseos.fnal.gov rm -r ' + dir_final_rootFile)
    os.system('eos root://cmseos.fnal.gov mkdir -p ' + dir_final_rootFile)

    os.system('mkdir ' + work_dir)
    os.system('rm -r ' + work_dir + '/*')
    
    file_list_name = dir_file_list + '/' + data_name + '.txt' 
    print '>>>>>>> Use this file list: ', file_list_name
 
    #break list of files to a set of input file list and estimate total jobs, njob
    nJob = make_input_file_list(nFile, work_dir, file_list_name)
    
    #prepare condor job configuration
    write_condor_config(work_dir, sample_format, dir_final_rootFile, nJob, debug)
    
    #copy codes, ....
    os.system('cp ../Makefile ' + work_dir)
    os.system('cp ../Ana.cxx ' + work_dir)
    os.system('cp ../StdArg.hpp ' + work_dir)
    os.system('cp -r ../src/ ' + work_dir)
    os.system('cp -r ../Configs/ ' + work_dir)
    os.system('cp -r ../CalibData/ ' + work_dir)

    os.chdir(work_dir)
    os.system('tar -cf input.tar Makefile *.cxx *.hpp src/ Configs/ CalibData/ sampleList_*.txt')
    
    #submit jobs
    if submit: 
        os.system('condor_submit condor_config.script')

    os.chdir('../')

########################################################
  if runMode == 1:
    os.chdir(work_dir)
    #calculate how many jobs submitted
    os.system('ls sampleList_*.txt >| tmp.txt')
    lines_tmp = open('tmp.txt', 'r').readlines()
    nJob = len(lines_tmp)
    #get list of output root files
    nameTmp = 'outFileListTmp.txt'
    cmd_tmp = 'xrdfs root://cmseos.fnal.gov/ ls -u ' + dir_final_rootFile + '/ | grep ".root" >| ' + nameTmp
    os.system(cmd_tmp)
    ############check total number of root file###################
    lines_tmp = open(nameTmp).readlines()
    nJob_current = len(lines_tmp)
    if nJob_current != nJob:
      print '============================================'
      print 'Warning: MISSING OUTPUT ROOT FILES, found ', nJob_current, ' files but ', nJob, ' files expected'
      print work_dir

    #############hadd output root files###########
    os.system('rm ' + outputDir_scratch + '/' + data_name + '.root')
    cmd_hadd = 'hadd -f -k ' + outputDir_scratch + '/' + data_name + '.root @' + nameTmp 
    print cmd_hadd
    os.system(cmd_hadd)
         
    os.chdir('../')
