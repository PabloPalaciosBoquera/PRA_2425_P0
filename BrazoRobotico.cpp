#include "BrazoRobotico.h"
#include <iostream>

// Constructor
BrazoRobotico::BrazoRobotico() : x(0), y(0), z(0), objeto(false) {}

// Getters
double BrazoRobotico::getX() const { return x; }
double BrazoRobotico::getY() const { return y; }
double BrazoRobotico::getZ() const { return z; }
bool BrazoRobotico::isSujetando() const { return objeto; }

// Métodos de acción
void BrazoRobotico::coger() {
    if (!objeto) {
        objeto = true;
        std::cout << "Objeto cogido." << std::endl;
    } else {
        std::cout << "Ya está sujetando un objeto." << std::endl;
    }
}

void BrazoRobotico::soltar() {
    if (objeto) {
        objeto = false;
        std::cout << "Objeto soltado." << std::endl;
    } else {
        std::cout << "No hay objeto que soltar." << std::endl;
    }
}

void BrazoRobotico::mover(double nuevoX, double nuevoY, double nuevoZ) {
    x = nuevoX;
    y = nuevoY;
    z = nuevoZ;
    std::cout << "Brazo movido a (" << x << ", " << y << ", " << z << ")" << std::endl;
}

