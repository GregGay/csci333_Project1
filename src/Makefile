BUILD = ../build
CPP = g++
CPPFLAGS = -Wall -Wextra

everything: AQueue LQueue LLQueue TimeTest

AQueue: AQueue/Queue.cpp AQueue/Queue.o
	cd AQueue; $(MAKE)

LQueue: LQueue/Queue.cpp LQueue/Queue.o
	cd LQueue; $(MAKE)

LLQueue: LLQueue/Queue.cpp LLQueue/Queue.o
	cd LLQueue; $(MAKE)

TimeTest: TimingTest/ATime.cpp TimingTest/LTime.cpp TimingTest/LLTime.cpp
	cd TimingTest; $(MAKE)

clean:
	rm -f *.o
