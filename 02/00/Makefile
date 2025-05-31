# ################################################################################################ #
#                                                                                                  #
#    File Name  : Makefile                          ███████╗███████╗██╗██╗    ██╗   ██╗            #
#                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            #
#    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            #
#    Created    : 2025/05/31 15:39:39               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            #
#    Updated    : 2025/05/31 15:39:39               ███████╗███████║██║███████╗╚████╔╝             #
#                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              #
#                                                                                                  #
# ################################################################################################ #

# Compiler settings
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -Iincludes

# Source files
SRC_DIR = src
SRCS = $(wildcard $(SRC_DIR)/*.cpp)
MAIN = main.cpp

# Object files
OBJS = $(SRCS:.cpp=.o) $(MAIN:.cpp=.o)

# Executable name
TARGET = program

# Default target
all: $(TARGET)

# Linking
$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)

# Compilation
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Run the program
run: $(TARGET)
	./$(TARGET)

# Clean build files
clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all run clean

