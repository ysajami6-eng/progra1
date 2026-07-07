#include <iostream>
using namespace std;

int main() {

    // Arreglo con 10 números
    int numeros[10] = {5, 8, 12, 3, 9, 15, 20, 7, 1, 10};

    // El puntero inicia en el primer elemento del arreglo
    int *p = numeros;

    cout << "Del primero al ultimo:" << endl;

    // Recorre el arreglo avanzando una posición en cada iteración
    for (int i = 0; i < 10; i++) {
        cout << *p << " ";   // Muestra el valor al que apunta el puntero
        p++;                 // Avanza al siguiente elemento
    }

    // El puntero se ubica en el último elemento del arreglo
    p = &numeros[9];

    cout << "\n\nDel ultimo al primero:" << endl;

    // Recorre el arreglo en sentido contrario
    for (int i = 0; i < 10; i++) {
        cout << *p << " ";   // Muestra el valor actual
        p--;                 // Retrocede al elemento anterior
    }
}