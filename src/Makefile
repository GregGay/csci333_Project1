BUILD = ../build
CPP = g++
CPPFLAGS = -Wall -Wextra

test: AQueue/Queue.o AQueue/Queue.cpp
	$(CPP) $(CPPFLAGS) -o test AQueue/Queue.cpp AQueue/Queue.o

Queue.o: AQueue/Queue.h AQueue/Queue.cpp
	$(CPP) $(CPPFLAGS) -c AQueue/Queue.cpp

clean:
	rm -f *.o
