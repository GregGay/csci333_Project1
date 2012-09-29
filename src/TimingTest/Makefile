BUILD = ../../build
CPP = g++
CPPFLAGS = -Wall -Wextra
AQUEUE = ../AQueue
LQUEUE = ../LQueue
LLQUEUE = ../LLQueue

everything: aqueue_test lqueue_test llqueue_test

aqueue_test: $(AQUEUE)/Queue.o ATime.cpp
	$(CPP) $(CPPFLAGS) -o $(BUILD)/aqueue_test ATime.cpp $(AQUEUE)/Queue.o


lqueue_test: $(LQUEUE)/Queue.o LTime.cpp
	$(CPP) $(CPPFLAGS) -o $(BUILD)/lqueue_test LTime.cpp $(LQUEUE)/Queue.o

llqueue_test: $(LLQUEUE)/Queue.o $(LLQUEUE)/Node.o LLTime.cpp
	$(CPP) $(CPPFLAGS) -o $(BUILD)/llqueue_test LLTime.cpp $(LLQUEUE)/Queue.o $(LLQUEUE)/Node.o

clean: 
	rm -f *.o
	rm -f $(BUILD)/aqueue_test
	rm -f $(BUILD)/lqueue_test
	rm -f $(BUILD)/llqueue_test
