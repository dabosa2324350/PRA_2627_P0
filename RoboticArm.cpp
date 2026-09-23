#include "RoboticArm.h"

// Constructor: inicializa el brazo en el origen (0,0,0) y sin sujetar nada
RoboticArm::RoboticArm() {
    x = 0.0;
    y = 0.0;
    z = 0.0;
    isHoldingObject = false;
}

// Métodos consultores (Getters)
double RoboticArm::getX() const {
    return x;
}

double RoboticArm::getY() const {
    return y;
}

double RoboticArm::getZ() const {
    return z;
}

bool RoboticArm::getIsHoldingObject() const {
    return isHoldingObject;
}

// Método para sujetar un objeto
void RoboticArm::grab() {
    isHoldingObject = true;
}

// Método para soltar un objeto
void RoboticArm::release() {
    isHoldingObject = false;
}

// Método para mover la extremidad a unas nuevas coordenadas (x, y, z)
void RoboticArm::move(double newX, double newY, double newZ) {
    x = newX;
    y = newY;
    z = newZ;
}
