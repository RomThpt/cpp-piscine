# ################################################################################################ #
#                                                                                                  #
#    File Name  : Makefile                          ███████╗███████╗██╗██╗    ██╗   ██╗            #
#                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            #
#    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            #
#    Created    : 2025/05/30 18:10:42               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            #
#    Updated    : 2025/05/30 18:10:42               ███████╗███████║██║███████╗╚████╔╝             #
#                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              #
#                                                                                                  #
# ################################################################################################ #

# Compiler settings
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Project files
SRCS = main.cpp \
       src/Harl.class.cpp

OBJS = $(SRCS:%.cpp=objects/%.o)
NAME = program

# Rules
all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

objects/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf objects/

fclean: clean
	rm -f $(NAME)

re: fclean all

run: all
	./$(NAME)

.PHONY: all clean fclean re run