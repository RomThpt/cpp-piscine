# **************************************************************************** #
#                                                                              #
#    File Name  : Makefile                          ███████╗███████╗██╗██╗    ██╗   ██╗ #
#                                                   ██╔════╝██╔════╝██║██║    ██║   ██║ #
#    Author     : prenom.nom@edu.devinci.fr         █████╗  ███████╗██║██║    ██║   ██║ #
#    Created    : 2025/05/30 12:43:16               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝ #
#    Updated    : 2025/05/30 12:43:16               ███████╗███████║██║███████╗╚████╔╝  #
#                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝   #
#                                                                              #
# **************************************************************************** #

NAME = brain
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

run: $(NAME)
	./$(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re run

