BUILD = ../build
TEST = ../test
LIB = ../lib
SRC = ../src
GTEST = $(LIB)/gtest-1.6.0
GTEST_MAINA = $(GTEST)/make/gtest_main.a

GTEST_INCLUDES = -I$(GTEST) -I$(GTEST)/include

CPP = g++
CPPFLAGS = -Wall -Wextra

everything: Aqueue_test Lqueue_test LLqueue_test

#AQueue: AQueue.cpp $(SRC)/AQueue/Queue.o $(GTEST_MAINA)
#	$(CPP) $(CPPFLAGS) $(GTEST_INCLUDES) -pthread -o Aqueue_test $^

#LQueue: LQueue.cpp $(SRC)/LQueue/Queue.o $(GTEST_MAINA)
#	$(CPP) $(CPPFLAGS) $(GTEST_INCLUDES) -pthread -o Lqueue_test $^

#LLQueue: LLQueue.cpp $(SRC)/LLQueue/Queue.o $(GTEST_MAINA)
#	$(CPP) $(CPPFLAGS) $(GTEST_INCLUDES) -pthread -o LLqueue_test $^

Aqueue_test: AQueue.cpp $(SRC)/AQueue/Queue.o $(GTEST_MAINA)
	$(CPP) $(CPPFLAGS) $(GTEST_INCLUDES) -pthread -o Aqueue_test AQueue.cpp $(SRC)/AQueue/Queue.o $(GTEST_MAINA)

Lqueue_test: LQueue.cpp $(SRC)/LQueue/Queue.o $(GTEST_MAINA)
	$(CPP) $(CPPFLAGS) $(GTEST_INCLUDES) -pthread -o Lqueue_test LQueue.cpp $(SRC)/LQueue/Queue.o $(GTEST_MAINA)

LLqueue_test: LLQueue.cpp $(SRC)/LLQueue/Queue.o $(SRC)/LLQueue/Node.o $(GTEST_MAINA)
	$(CPP) $(CPPFLAGS) $(GTEST_INCLUDES) -pthread -o LLqueue_test LLQueue.cpp $(SRC)/LLQueue/Queue.o $(SRC)/LLQueue/Node.o $(GTEST_MAINA)

$(GTEST_MAINA): $(GTEST)/src/*.cc $(GTEST)/src/*.h
	cd $(GTEST)/make; make

clean:
	rm -f queue_test
	rm -f $(GTEST_MAINA)
	cd $(GTEST)/make; $(MAKE) clean
