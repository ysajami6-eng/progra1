#include <iostream>
using namespace std;

int main() {
    
    int a = 2;
    int b = 3;

    // Punteros que apuntarán a las variables a y b
    int *ptr;
    int *pt;

    // Guardar las direcciones de memoria
    ptr = &a;
    pt = &b;

    cout << "Los numeros son: " << a << " y " << b << endl;

    //Suma de los valores apuntados
    cout << "La suma es " << *ptr + *pt;
}