# Project Name (executable)
PROJECT = cucp5g
# Compiler
CC = g++

# Compiler options during compilation
COMPILE_OPTIONS = -pedantic -Wall -Wextra

SRC = src
UTILITY = src/utility
TARGET = bin
# Can also use shell find. Can check later
SOURCES := $(wildcard $(SOURCE)/*.cpp) $(wildcard $(SOURCE)/*.hpp) \
	   $(wildcard $(UTILITY)/*.cpp) $(wildcard $(UTILITY)/*.hpp)


# Make $(PROJECT) the default target
all: $(PROJECT)

$(PROJECT): $(TARGET)/%.o
	$(CC) $(COMPILE_OPTIONS) $(TARGET)/$(PROJECT).o

$(TARGET)/%.o: $(SOURCES)/%.cpp
	$(CC) $(COMPILE_OPTIONS) -c $< -o $@

# Clean & Debug
.PHONY: clean
clean:
	rm -f 

.PHONY: depclean
depclean:
	rm -f $(DEPENDENCIES)

clean-all: clean depclean
