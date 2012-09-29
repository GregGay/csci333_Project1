BUILD = ../../build
CPP = g++
CPPFLAGS = -Wall -Wextra

main: queue_tester.cpp Queue.o Node.o
	$(CPP) $(CPPFLAGS) -o $(BUILD)/LLQueue queue_tester.cpp Queue.o Node.o

Queue.o: Queue.h Queue.cpp
	$(CPP) $(CPPFLAGS) -c Queue.cpp

Node.o: Node.h Node.cpp
	$(CPP) $(CPPFLAGS) -c Node.cpp

clean:
	rm -f *.o
	rm -f $(BUILD)/main
