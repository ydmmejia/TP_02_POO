CXX = g++
CXXFLAGS = -std=c++11 -Wall
TARGET = polinomio
OBJS = main.o CTermino.o CPolinomio.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

main.o: main.cpp CTermino.h CPolinomio.h
	$(CXX) $(CXXFLAGS) -c main.cpp

CTermino.o: CTermino.cpp CTermino.h
	$(CXX) $(CXXFLAGS) -c CTermino.cpp

CPolinomio.o: CPolinomio.cpp CPolinomio.h CTermino.h
	$(CXX) $(CXXFLAGS) -c CPolinomio.cpp

clean:
	rm -f $(OBJS) $(TARGET)

run: $(TARGET)
	./$(TARGET)