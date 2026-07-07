#include <iostream>
using namespace std;

int main() {

    int nums[10];

    // El puntero apunta al primer elemento del arreglo
    int *p = nums;

    int suma = 0;
    int mayor, menor;

    cout << "Ingresa 10 numeros:" << endl;

    // Guardar los numeros en el arreglo usando el puntero
    for(int i = 0; i < 10; i++){
        cin >> *(p + i);
    }

    // Tomar el primer numero como valor inicial
    mayor = menor = *p;

    // Recorrer el arreglo para obtener suma, mayor y menor
    for(int i = 0; i < 10; i++){

        suma += *(p + i);

        // Actualizar el mayor si se encuentra un numero más grande
        if(*(p + i) > mayor)
            mayor = *(p + i);

        // Actualizar el menor si se encuentra un numero más pequeño
        if(*(p + i) < menor)
            menor = *(p + i);
    }

    cout << "Suma: " << suma << endl;
    cout << "Mayor: " << mayor << endl;
    cout << "Menor: " << menor << endl;

    // Calcular el promedio de los 10 numeros
    cout << "Promedio: " << (float)suma / 10 << endl;
}