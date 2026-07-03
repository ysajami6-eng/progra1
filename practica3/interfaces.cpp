#include <iostream>
#include <string>
using namespace std;

// Clase abstracta que funciona como una interface en C++.
// No puede crearse un objeto directamente de esta clase.
class IImprimible {
public:
    // El método puro obliga a todas las clases derivadas
    // a definir su propia versión de imprimir().
    virtual void imprimir() const = 0;
};

// Clase que implementa la interface IImprimible.
class Documento : public IImprimible {
private:
    string texto; // información que contiene el documento
public:
    // Constructor: recibe el texto y lo guarda en el objeto.
    Documento(const string& t) : texto(t) {}

    // Implementación concreta del método de la interface.
    void imprimir() const override {
        cout << "Documento: " << texto << endl;
    }
};

int main() {
    // Creamos un documento con un mensaje simple.
    Documento doc("Hola mundo");

    // Llamamos al método definido por la interface.
    doc.imprimir();

    return 0;
}
   