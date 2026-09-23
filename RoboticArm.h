#ifndef ROBOTIC_ARM_H
#define ROBOTIC_ARM_H

class RoboticArm {
private:
    // 3 atributos para las coordenadas 3D
    double x;
    double y;
    double z;
    
    // 1 atributo para indicar si sujeta un objeto
    bool isHoldingObject;

public:
    // Método constructor
    RoboticArm();

    // 4 métodos consultores (getters)
    double getX() const;
    double getY() const;
    double getZ() const;
    bool getIsHoldingObject() const;

    // Métodos de acción
    void grab();
    void release();
    void move(double newX, double newY, double newZ);
};

#endif // ROBOTIC_ARM_H
