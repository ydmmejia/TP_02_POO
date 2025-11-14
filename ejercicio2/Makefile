CXX = g++
CXXFLAGS = -std=c++11 -Wall
TARGET = matriz
OBJS = main.o Matriz.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

main.o: main.cpp Matriz.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Matriz.o: Matriz.cpp Matriz.h
	$(CXX) $(CXXFLAGS) -c Matriz.cpp

clean:
	rm -f $(OBJS) $(TARGET)

run: $(TARGET)
	./$(TARGET)