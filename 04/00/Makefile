# Simple Makefile for C++ project

CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -Iincludes
SRC = main.cpp src/Animal.cpp src/Cat.class.cpp src/Dog.class.cpp
OBJ = $(SRC:.cpp=.o)
NAME = main

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

run: all
	./$(NAME)

.PHONY: all clean fclean re run
