#include "BrazoRobotico.h"
#include <iostream>

// Constructor
BrazoRobotico::BrazoRobotico() : x(0), y(0), z(0), objeto(false) {}

// Getters
double BrazoRobotico::getX() const { return x; }  // Atributo privado (x)
double BrazoRobotico::getY() const { return y; }  // Atributo privado (y)
double BrazoRobotico::getZ() const { return z; }  // Atributo privado (z)
bool BrazoRobotico::isSujetando() const { return objeto; } // Atributo privado que indica si está sujetado o no 

// Métodos
void BrazoRobotico::coger() {
    if (!objeto) {    // Si quiere coger y no hay objeto, lo coge
        objeto = true;
        std::cout << "Objeto cogido." << std::endl;
    } else {    // Si quiere coger y ya tiene, no puede
        std::cout << "Ya está sujetando un objeto." << std::endl;
    }
}

void BrazoRobotico::soltar() {
    if (objeto) {   // Si quieres dejar y tienes, lo deja 
        objeto = false;
        std::cout << "Objeto soltado." << std::endl;
    } else {   // Si no hay, no puedes solatar nada
        std::cout << "No hay objeto que soltar." << std::endl;
    }
}

void BrazoRobotico::mover(double nuevoX, double nuevoY, double nuevoZ) {
    x = nuevoX;
    y = nuevoY;
    z = nuevoZ;
    std::cout << "Brazo movido a (" << x << ", " << y << ", " << z << ")" << std::endl;
}

