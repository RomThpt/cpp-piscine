CXX = clang++
CXXFLAGS = -Wall -Wextra -std=c++11

SRCS = tests.cpp Account.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = tests

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean run
