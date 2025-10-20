CXX = g++
CXXFLAGS = -Wall -std=c++11

OBJ = BrazoRobotico.o main.o
TARGET = brazo

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

BrazoRobotico.o: BrazoRobotico.cpp BrazoRobotico.h
	$(CXX) $(CXXFLAGS) -c BrazoRobotico.cpp

main.o: main.cpp BrazoRobotico.h
	$(CXX) $(CXXFLAGS) -c main.cpp

clean:
	rm -f $(OBJ) $(TARGET)

test: $(TARGET)
	./$(TARGET)

