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
DEPS = $(SRC)/cucp5g.hpp $(UTILITY)/Options.hpp
SRC_O =  $(TARGET)/Options.o $(TARGET)/cucp5g.o
UTIL_UT = src/utility/ut
LIB = -I/usr/include/jsoncpp/ -ljsoncpp

# Make $(PROJECT) the default target
all: $(PROJECT)

$(PROJECT): $(SRC_O)
	$(CC) $(COMPILE_OPTIONS) -o $@ $^ $(LIB)

$(TARGET)/cucp5g.o: $(SRC)/cucp5g.cpp #$(DEPS)
	$(CC) $(COMPILE_OPTIONS) -c -o $@ $<  $(LIB)

$(TARGET)/Options.o: $(UTILITY)/Options.cpp #$(DEPS)
	$(CC) $(COMPILE_OPTIONS) -c -o $@ $<

test: $(TEST_FILE)

$(TEST_FILE): $(TARGET)/OptionsTest.o $(TARGET)/Options.o #$(DEPS)
	$(CC) $(COMPILE_OPTIONS) -o $@ $^ -lgtest -lpthread

$(TARGET)/OptionsTest.o: $(UTIL_UT)/OptionsTest.cpp #$(DEPS)
	$(CC) $(COMPILE_OPTIONS) -c -o $@ $<

# Clean & Debug
.PHONY: clean
clean:
	rm -vrf $(TARGET)/* $(PROJECT) $(TEST_FILE)
