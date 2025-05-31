# ################################################################################################ #
#                                                                                                  #
#    File Name  : Makefile                          ███████╗███████╗██╗██╗    ██╗   ██╗            #
#                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            #
#    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            #
#    Created    : 2025/05/31 14:37:34               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            #
#    Updated    : 2025/05/31 14:37:34               ███████╗███████║██║███████╗╚████╔╝             #
#                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              #
#                                                                                                  #
# ################################################################################################ #

# Compiler settings
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

# Project name
NAME = harl

# Source files
SRCS = main.cpp \
       src/Harl.class.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Header files directory
INCLUDES = -I./includes

# Rules
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

run: all
	./$(NAME)

.PHONY: all clean fclean re run

