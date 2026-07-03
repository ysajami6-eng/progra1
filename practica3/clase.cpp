#include <iostream>
#include <string>
using namespace std;

class Cursos {
private:
    string nombre; // los atributos de mi una clase ejemplo que hice
    int duracion;
    string modalidad;

public:
    Cursos(string n, int d, string m) {
        nombre = n;   // constructor de la clase cursos
        duracion = d;
        modalidad = m;
    }

    int getDuracion() {
        return duracion; // getters que sirven para obtener los valores de los atributos de la clase
    }

    string getNombre() {
        return nombre;
    }

    string getModalidad() {
        return modalidad;
    }

    void setDuracion(int d) { // setters que sirven para modificar los valores de los atributos de la clase
        duracion = d;
    }

    void setNombre(string n) {
        nombre = n;
    }

    void setModalidad(string m) {
        modalidad = m;
    }

    void mostrar() {
        cout << "Nombre del curso: " << getNombre() << endl;
        cout << "Duracion del curso: " << getDuracion() << endl;
        cout << "Modalidad del curso: " << getModalidad() << endl;
    }
};

int main() {
    Cursos curso1("Programacion", 120, "Presencial");
    curso1.mostrar();
    return 0;
}
