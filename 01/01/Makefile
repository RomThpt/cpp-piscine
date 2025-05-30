# ************************************************************************************* #
#                                                                                       #
#    File Name  : Makefile                          ███████╗███████╗██╗██╗    ██╗   ██╗ #
#                                                   ██╔════╝██╔════╝██║██║    ██║   ██║ #
#    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║ #
#    Created    : 2025/05/30 07:59:57               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝ #
#    Updated    : 2025/05/30 07:59:57               ███████╗███████║██║███████╗╚████╔╝  #
#                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝   #
#                                                                                       #
# ************************************************************************************* #

NAME = zombie

SRCS = Zombie.class.cpp zombieHorde.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(OBJS) -o $(NAME)

run: $(NAME)
	./$(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re run