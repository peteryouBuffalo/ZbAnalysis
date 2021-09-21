# Codes for Z+b analysis
## Note about this Code
This code was started entirely by Duong Nguyen and modified for my purposes by me. I needed to make a copy of it for my own use, so I have copied it over. There are only small modifications.

## General descriptions
The codes are based on ROOT TSelector. They include a reader (Reader class), processor (Processor class derived from Reader), abstracted selector (Selector class) and one or more selections (ZbSelection for example). Analyzers can add a selection to do a specific analysis. All selections are added to the processor to analyze the events. Note that all selections are independent. Therefore, multiple analyses can be performed independently on the same events.

The cuts used in selections are defined in Configs/inputParameters. Users can provide different cut file at command line. These cut values are read into the global variable CUTS, which is an instance of Parameters, defined in src/Global.h. The histograms can be grouped in src/Plots.cxx and initalized in SlaveBegin of the selection. They can also included directly as a member of the selection class.

For convenience, the physics objects, leptons and jets for example, are wrapped by objects in src/Obj.cxx. They contain a TLorentzVector together with other variables (for example isolation for lepton and deepCSV for jet). All corrections are implemented in these object classes.

To build the code type "make FORMAT=format_of_sample", "format_of_sample" can be MC_2016, MC_2017, MC_2018, DATA_2016, DATA_2017, DATA_2018. The setting helps to select the right branches and codes to use depending on sample types. Use "make FORMAT=format_of_sample name_of_class.o" to compile a specific class. To clean: "make clean". The easiest way to compile the code is to execute the "make" inside CMSSW environment (after eval `scramv1 runtime -csh`).

The workflow starts from executing the command line
 
./main -filelist fileList.txt -cfg Configs/inputParameters.txt -data 0 -year 2016 -out out.root -syst none -firstentry 0 -lastentry 10000

fileList.txt: list of data files
-cfg: file with input parameters (cuts for example)
-data 0: this is MC (set 1 for data)
-year 2016: this is the type of sample (2016 = samples for 2016 run)
out.root: output data name
-syst none: do not valuate systematics.
-firstentry 0 -lastentry 10000: loop from entry 0 to 10000. These setting are for testing purpose. All events are processed by default.

## Code contents 
Main program: Ana.cxx

StdArg.hpp: command line parser

Configs: configuration for example cuts

src: codes
1. Global.h Global.cxx: global constants and variables. They contain Parameters class to read parameters (cuts for example) from configuration
2. Reader.h Reader.cxx: derived class from TSelector to handle ROOT tree (chain) reading. It is created automatically by MakeSelector
3. Processor.h Processor.cxx: derived class from "Reader" to handle processing of events
4. Selector.h Selector.cxx: base class for all selections
5. ZbSelection.h ZbSelection.cxx: a selection to select Z+b-jet events
6. SelectionTemplate.h SelectionTemplate.cxx: templates for creating a selection

## Howto
1. Define a new cut:
  Add it to the Configs/inputParameters.txt.
  In Parameters class: add the name to the constructor of Parameters, add a private variable, define how to get and set it in "Get" and "Set"
2. To make histograms:
  Define a class for a group of them in src/Plots.cxx or define them as members of the selection class.
  Book them and add them to the list of output in SlaveBegin of the selection class
  Fill them in Process of the selection class
  Finally, save them in SlaveTerminate of the Processor class
3. To save a cut values used in a selection to the output root file:
  Add the value to TParameter and append this TParameter to a list in Terminate of selection class
4. Use LPC batch farm, condor, to run on all samples:
  Make sure that the lists of NanoAOD files exsit (in FileLists_Nano25Oct2019 folder for example). Otherwise, create these lists by going to the directory "SubmitToCondor" and execute "python createFileLists_v2.py" (create file lists for all samples) or "python createFileLists_v2.py DY_0J_amcatnlo_MC_2016,DY_0J_amcatnlo_MC_2017" (create file lists for DY_0J_amcatnlo_MC_2016 and DY_0J_amcatnlo_MC_2017 samples).
  Go to SubmitToCondor folder and execute "python launch_v2.py" (submit all samples) or "python launch_v2.py DY_0J_amcatnlo_MC_2016,DY_0J_amcatnlo_MC_2017" (submit DY_0J_amcatnlo_MC_2016 and DY_0J_amcatnlo_MC_2017 samples). NOTE that need to set "runMode = 0" and "submit = True" in launch_v2.py script and define output folders in EOS (outputDir_eos) and local (outputDir_scratch).
  After jobs finish, execute launch_v2.py again with "runMode = 1" to merge the output files, which are copied to the local directory.
