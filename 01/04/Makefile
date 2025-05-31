# ################################################################################################ #
#                                                                                                  #
#    File Name  : Makefile                          ███████╗███████╗██╗██╗    ██╗   ██╗            #
#                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            #
#    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            #
#    Created    : 2025/05/30 18:32:57               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            #
#    Updated    : 2025/05/30 18:32:57               ███████╗███████║██║███████╗╚████╔╝             #
#                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              #
#                                                                                                  #
# ################################################################################################ #

CC = g++
CFLAGS = -Wall -g

# Source files
SRC = src/main.cpp

# Output executable
OUT = main

# Default rule
all: $(OUT)

# Rule to build the executable
$(OUT): $(SRC)
	$(CC) $(CFLAGS) -o $(OUT) $(SRC)

# Rule to clean up generated files
clean:
	rm -f $(OUT)

# Rule to run the project
run: $(OUT)
	./$(OUT) test.txt "banana" "tomato"

