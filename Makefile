CXX	= g++


ROOTCFLAGS   	:= $(shell root-config --cflags)
ROOTLIBS     	:= $(shell root-config --libs)
ROOTGLIBS    	:= $(shell root-config --glibs)

CXXFLAGS	= -O -Wall -fPIC -D $(FORMAT)
CXXFLAGS	+= $(ROOTCFLAGS)	

SOFLAGS		= -O -shared
SOFLAGS 	+= $(ROOTGLIBS)

#main:	Ana.cxx libReader.so libReader_dict.so
#	$(CXX) $(CXXFLAGS) $(ROOTGLIBS) libReader.so libReader_dict.so $< -o $@

#Task: copy mydict main clean
Task: clean mydict main clean

#copy:
#	cp -f src/Reader_$(FORMAT).h  src/Reader.h

mydict:
	@rootcint Reader_dict.cxx -c src/Reader.h
	@rootcint Processor_dict.cxx -c src/Processor.h

main:	Ana.cxx Global.o Reader.o Processor.o BTagCalibrationStandalone.o Reader_dict.o Processor_dict.o Selector.o ZbSelection.o
	$(CXX) $(CXXFLAGS) $(ROOTGLIBS) $^ -o $@
#main:	Ana.cxx Global.o Reader.o Processor.o Reader_dict.o Processor_dict.o Selector.o ZbSelection.o
#	$(CXX) $(CXXFLAGS) $(ROOTGLIBS) $^ -o $@

#lib%.so: %.o
#	$(CXX) $(SOFLAGS) -o $@ $^

#Ana.o: Ana.cxx
#	$(CXX) $(CXXFLAGS) -c $^ -o $@

#StdArg.o: StdArg.hpp
#	$(CXX) $(CXXFLAGS) -c $^ -o $@

%.o:	src/%.cxx
	$(CXX) $(CXXFLAGS) -c $^ -o $@

%.o:	src/%.cpp
	$(CXX) $(CXXFLAGS) -c $^ -o $@

%.o:	%.cxx
	$(CXX) $(CXXFLAGS) -c $^ -o $@

%.o:	src/%.h
	$(CXX) $(CXXFLAGS) -c $^ -o $@

%.o:	%.hpp
	$(CXX) $(CXXFLAGS) -c $^ -o $@

Reader_dict.o: Reader_dict.cxx
	$(CXX) $(CXXFLAGS) -c $^ -o $@

Processor_dict.o: Processor_dict.cxx
	$(CXX) $(CXXFLAGS) -c $^ -o $@

clean:
	rm -rf *.o *.so *_dict.cxx
