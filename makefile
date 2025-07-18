CXX = clang++
CXXFLAGS = -Wall -Wextra -O2 -std=c++11
SRC = $(wildcard *.cpp *.cc)
OBJ = $(SRC:.cpp=.o)
OBJ := $(OBJ:.cc=.o)
TARGET = app

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

compile_commands:
	bear -- make all

.PHONY: all clean compile_commands
