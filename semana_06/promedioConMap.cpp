#include <iostream>
#include <map>
using namespace std;

int main() {

    map<string, float> notas;

    // Guardamos los cursos y sus notas
    notas["Matematica"] = 18;
    notas["Fisica"] = 15;
    notas["Programacion"] = 20;

    float suma = 0;

    // Recorremos el map para sumar las notas
    for (auto n : notas) {
        suma += n.second;
    }

    // Calculamos el promedio
    float promedio = suma / notas.size();

    cout << "=== NOTAS DEL ESTUDIANTE ===\n";

    // Mostramos cada curso con su nota
    for (auto n : notas) {
        cout << n.first << ": " << n.second << endl;
    }

    cout << "\nPromedio: " << promedio << endl;
}