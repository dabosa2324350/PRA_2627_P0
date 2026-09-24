#include <iostream>
#include "RoboticArm.h"

int main() {
    // 1. Crear una instancia de la clase RoboticArm
    RoboticArm miBrazo;

    std::cout << "--- ESTADO INICIAL ---" << std::endl;
    std::cout << "Posicion: (" << miBrazo.getX() << ", " 
              << miBrazo.getY() << ", " << miBrazo.getZ() << ")" << std::endl;
    std::cout << "Sujetando objeto: " 
              << (miBrazo.getIsHoldingObject() ? "Si" : "No") << "\n\n";

    // 2. Mover el brazo a unas nuevas coordenadas
    std::cout << "--- MOVIENDO EL BRAZO ---" << std::endl;
    std::cout << "Comando: move(10.5, 20.0, 5.2)" << std::endl;
    miBrazo.move(10.5, 20.0, 5.2);

    std::cout << "Nueva posicion: (" << miBrazo.getX() << ", " 
              << miBrazo.getY() << ", " << miBrazo.getZ() << ")\n\n";

    // 3. Coger un objeto
    std::cout << "--- RECOGIENDO OBJETO ---" << std::endl;
    std::cout << "Comando: grab()" << std::endl;
    miBrazo.grab();

    // 4. Mostrar la información final por pantalla
    std::cout << "\n--- ESTADO FINAL ---" << std::endl;
    std::cout << "Posicion actual: (" << miBrazo.getX() << ", " 
              << miBrazo.getY() << ", " << miBrazo.getZ() << ")" << std::endl;
    std::cout << "Sujetando objeto: " 
              << (miBrazo.getIsHoldingObject() ? "Si" : "No") << std::endl;

    return 0;
}
