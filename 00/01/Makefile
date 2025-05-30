# Nom de l'exécutable
EXEC = phonebook

# Fichiers sources
SRC = main.cpp Contact.class.cpp PhoneBook.class.cpp

# Objets correspondants
OBJ = $(SRC:.cpp=.o)

# Compilateur
CXX = g++

# Options de compilation
CFLAGS = -Wall -Wextra -Werror -g -std=c++98

# Cible par défaut
all: $(EXEC)

# Règle pour l'exécutable
$(EXEC): $(OBJ)
	$(CXX) $(CFLAGS) -o $@ $^

# Nettoyage
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(EXEC)

re: fclean all

# Exécution du programme
run: $(EXEC)
	./$(EXEC)

.PHONY: all clean fclean re run