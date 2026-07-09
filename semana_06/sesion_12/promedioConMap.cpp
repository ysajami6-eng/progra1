#include <iostream>
#include <map>
using namespace std;
int main() {
    // Diccionario principal: guarda el nombre del estudiante
    // y como valor otro diccionario con sus notas
    map<string, map<string, float>> estudiantes;

    // Guardamos las 3 notas del estudiante Juan
    estudiantes["Juan"]["Matematica"] = 18;
    estudiantes["Juan"]["Fisica"] = 15;
    estudiantes["Juan"]["Programacion"] = 20;

    // Guardamos las 3 notas del estudiante Maria
    estudiantes["Maria"]["Matematica"] = 16;
    estudiantes["Maria"]["Fisica"] = 17;
    estudiantes["Maria"]["Programacion"] = 18;

    // Guardamos las 3 notas del estudiante Pedro
    estudiantes["Pedro"]["Matematica"] = 14;
    estudiantes["Pedro"]["Fisica"] = 19;
    estudiantes["Pedro"]["Programacion"] = 15;

    // Recorremos cada estudiante almacenado en el diccionario
    for (auto estudiante : estudiantes) {
        float suma = 0; // Variable que acumula la suma de sus notas
        // Muestra el nombre del estudiante actual
        cout << "\n=== Estudiante: " << estudiante.first << " ===\n";
        // Recorremos el diccionario interno que contiene sus cursos y notas
        for (auto nota : estudiante.second) {

            // Muestra el curso y la nota correspondiente
            cout << nota.first << ": " << nota.second << endl;

            // Acumula la nota para calcular el promedio
            suma += nota.second;
        }
        // Calcula el promedio dividiendo la suma entre la cantidad de notas
        float promedio = suma / estudiante.second.size();
        // Muestra el promedio final del estudiante
        cout << "Promedio: " << promedio << endl;
    }
}