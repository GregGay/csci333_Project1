BUILD = ./build
TEST = ./test
LIB = ./lib
SRC = ./src

CPP = g++
CPPFLAGS = -Wall -Wextra

all: $(BUILD)/main $(TEST)/queue_test

$(BUILD)/main: $(SRC)/RawArray.cpp $(SRC)/RawArray.o
	cd $(SRC); $(MAKE)

$(TEST)/queue_test: #(TEST)/RawArray.cpp $(SRC)/RawArray.o
	cd $(TEST); $(MAKE)

clean:
	cd $(SRC); $(MAKE) claen
	cd $(TEST); $(MAKE) clean
