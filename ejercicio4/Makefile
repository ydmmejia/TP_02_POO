CXX = g++
CXXFLAGS = -std=c++11 -Wall
TARGET = complejos
OBJS = main.o Complex.o Polar.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

main.o: main.cpp Complex.h Polar.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Complex.o: Complex.cpp Complex.h Polar.h
	$(CXX) $(CXXFLAGS) -c Complex.cpp

Polar.o: Polar.cpp Polar.h Complex.h
	$(CXX) $(CXXFLAGS) -c Polar.cpp

clean:
	rm -f $(OBJS) $(TARGET)

run: $(TARGET)
	./$(TARGET)