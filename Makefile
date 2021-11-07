# Project Name (executable)
PROJECT = cucp5g
TEST_FILE = cucp5gtests

# Compiler
CC = g++

# Compiler options during compilation
COMPILE_OPTIONS = -pedantic -Wall -Wextra

SRC = src
UTILITY = src/utility
TARGET = bin
SRC_O =  $(TARGET)/cucp5g.o $(TARGET)/JsonConfig.o
UTIL_UT = src/utility/ut
LIB = -I/usr/include/jsoncpp/ -ljsoncpp

# Make $(PROJECT) the default target
all: $(PROJECT)

$(PROJECT): $(SRC_O)
	$(CC) $(COMPILE_OPTIONS) -o $@ $^ $(LIB)

$(TARGET)/cucp5g.o: $(SRC)/cucp5g.cpp
	$(CC) $(COMPILE_OPTIONS) -c -o $@ $< $(LIB)

$(TARGET)/JsonConfig.o: $(UTILITY)/JsonConfig.cpp
	$(CC) $(COMPILE_OPTIONS) -c -o $@ $< $(LIB)

test: $(TEST_FILE)

$(TEST_FILE): $(TARGET)/JsonConfigTest.o $(TARGET)/JsonConfig.o
	$(CC) $(COMPILE_OPTIONS) -o $@ $^ -lgtest -lpthread $(LIB)

$(TARGET)/JsonConfigTest.o: $(UTIL_UT)/JsonConfigTest.cpp
	$(CC) $(COMPILE_OPTIONS) -c -o $@ $< $(LIB)

# Clean & Debug
.PHONY: clean
clean:
	rm -vrf $(TARGET)/* $(PROJECT) $(TEST_FILE)
