#ifndef BRAZOROBOTICO_H
#define BRAZOROBOTICO_H

class BrazoRobotico {
private:
    double x, y, z;   // Coordenadas del extremo del brazo
    bool objeto;      // Si está sujetando un objeto

public:
    // Constructor
    BrazoRobotico();

    // Métodos consultores (getters)
    double getX() const;
    double getY() const;
    double getZ() const;
    bool isSujetando() const;

    // Métodos
    void coger();
    void soltar();
    void mover(double nuevoX, double nuevoY, double nuevoZ);
};

#endif

