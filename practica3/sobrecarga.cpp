#include <iostream>
using namespace std;

class Calculadora {
public:
    // Suma de dos enteros
    int sumar(int a, int b) {
        cout << "Sumando enteros: " << a << " + " << b << endl;
        return a + b;
    }

    // Suma de dos decimales
    double sumar(double a, double b) {
        cout << "Sumando doubles: " << a << " + " << b << endl;
        return a + b;
    }

    // Suma de tres enteros
    int sumar(int a, int b, int c) {
        cout << "Sumando tres enteros: " << a << " + " << b << " + " << c << endl;
        return a + b + c;
    }
};

int main() {

    Calculadora c;

    // Se llama a la versión de enteros
    cout << c.sumar(2, 3) << endl;

    // Se llama a la versión de double
    cout << c.sumar(2.5, 3.5)<< endl;

    // Se llama a la versión de tres parámetros
    cout << c.sumar(1, 2, 3) << endl;
}