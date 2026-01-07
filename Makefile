CXX = g++   # Compilador
CXXFLAGS = -Wall -std=c++11

OBJ = BrazoRobotico.o main.o   # Ficheros objetos 
TARGET = brazo   # Ejecutable final

all: $(TARGET)

$(TARGET): $(OBJ)		# No compila, enlaza, une los .o para crear el ejecutable
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

BrazoRobotico.o: BrazoRobotico.cpp BrazoRobotico.h   # Compila el .cpp
	$(CXX) $(CXXFLAGS) -c BrazoRobotico.cpp

main.o: main.cpp BrazoRobotico.h   # Compila el .cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

clean:   # Borra objetos y ejecutable
	rm -f $(OBJ) $(TARGET)

test: $(TARGET)   # Asegura que esté compilado y lo ejecuta
	./$(TARGET)

