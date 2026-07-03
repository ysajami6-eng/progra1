#include <iostream>
using namespace std;

// Clase base con un método virtual.
class Animal {
public:
    virtual void hacerSonido() const {
        cout << "Animal hace un sonido" << endl;
    }
};

// Clase derivada que sobrescribe el método.
class Perro : public Animal {
public:
    void hacerSonido() const override {
        cout << "Perro: guau guau" << endl;
    }
};

int main() {
    Perro miPerro;
    Animal& animalReferencia = miPerro; // referencia de tipo base a objeto derivado
    animalReferencia.hacerSonido();     // llama a Perro::hacerSonido() por polimorfismo
    return 0;
}
