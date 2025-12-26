#include "BrazoRobotico.h"
#include <iostream>

int main() {
    BrazoRobotico brazo;   // Objeto creado con el constructor por defecto

    brazo.mover(10, 5, 3);
    brazo.coger();
    std::cout << "Posición actual: (" 
              << brazo.getX() << ", " 
              << brazo.getY() << ", " 
              << brazo.getZ() << ")" << std::endl;
    std::cout << "¿Sujetando objeto? " 
              << (brazo.isSujetando() ? "Sí" : "No") << std::endl;

    brazo.soltar();
    return 0;
}

