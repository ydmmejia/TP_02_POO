CXX = g++
CXXFLAGS = -std=c++11 -Wall
TARGET = vector3d
OBJS = main.o Vector3D.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

main.o: main.cpp Vector3D.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Vector3D.o: Vector3D.cpp Vector3D.h
	$(CXX) $(CXXFLAGS) -c Vector3D.cpp

clean:
	rm -f $(OBJS) $(TARGET)

run: $(TARGET)
	./$(TARGET)