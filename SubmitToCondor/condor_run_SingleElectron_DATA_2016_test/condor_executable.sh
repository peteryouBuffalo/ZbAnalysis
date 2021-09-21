#!/bin/bash 
echo $SHELL 
source /cvmfs/cms.cern.ch/cmsset_default.sh 
export SCRAM_ARCH=slc7_amd64_gcc820 
eval `scramv1 project CMSSW CMSSW_10_6_4` 
cd CMSSW_10_6_4/src/ 
eval `scramv1 runtime -sh` 
echo "CMSSW: "$CMSSW_BASE 
cd ${_CONDOR_SCRATCH_DIR} 
tar -xvf input.tar 
make FORMAT=DATA_2016
./main -filelist sampleList_$1.txt -out output_$1.root -data 1 -year 2016 
xrdcp *.root root://cmseos.fnal.gov//eos/uscms/store/user/peteryou/Output_ZplusB/output_updated2021/SingleElectron_DATA_2016/ 
rm *.root 
echo "xrdcp *.root root://cmseos.fnal.gov//eos/uscms/store/user/peteryou/Output_ZplusB/output_updated2021/SingleElectron_DATA_2016/" 
