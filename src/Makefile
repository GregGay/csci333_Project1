BUILD = ../build
CPP = g++
CPPFLAGS = -Wall -Wextra

main: RawArray.o
	$(CPP) $(CPPFLAGS) -o $(BUILD)/main RawArray.o

RawArray.o: RawArray.h RawArray.cpp
	$(CPP) $(CPPFLAGS) -c RawArray.cpp

clean:
	rm -f *.o
	rm -f *~
	rm -f $(BUILD)/main
