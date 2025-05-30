CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17
TARGET = program
SRC = main.cpp Zombie.class.cpp newZombie.cpp randomChump.cpp

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

.PHONY: clean run
clean:
	rm -f $(TARGET)

run: $(TARGET)
	./$(TARGET)
