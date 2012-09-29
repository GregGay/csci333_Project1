BUILD = ./build
TEST = ./test
LIB = ./lib
SRC = ./src

CPP = g++
CPPFLAGS = -Wall -Wextra

everything: $(BUILD)/main $(TEST)/queue_test

$(BUILD)/main: $(SRC)/AQueue/Queue.cpp $(SRC)/AQueue/Queue.o $(SRC)/LQueue/Queue.cpp $(SRC)/LQueue/Queue.o $(SRC)/LLQueue/Queue.cpp $(SRC)/LLQueue/Queue.o $(SRC)/LLQueue/Node.cpp $(SRC)/LLQueue/Node.o
	cd $(SRC); $(MAKE)

$(TEST)/queue_test: $(TEST)/AQueue.cpp $(SRC)/AQueue/Queue.o $(TEST)/LQueue.cpp $(SRC)/LQueue/Queue.o $(TEST)/LLQueue.cpp $(SRC)/LLQueue/Queue.o
	cd $(TEST); $(MAKE)

clean:
	cd $(SRC); $(MAKE) claen
	cd $(TEST); $(MAKE) clean
