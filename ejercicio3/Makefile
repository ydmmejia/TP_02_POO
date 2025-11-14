CXX = g++
CXXFLAGS = -std=c++11 -Wall
TARGET = polinomio
OBJS = main.o Polinomio.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

main.o: main.cpp Polinomio.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Polinomio.o: Polinomio.cpp Polinomio.h
	$(CXX) $(CXXFLAGS) -c Polinomio.cpp

clean:
	rm -f $(OBJS) $(TARGET)

run: $(TARGET)
	./$(TARGET)