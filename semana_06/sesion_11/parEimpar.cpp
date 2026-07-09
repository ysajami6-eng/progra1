#include <iostream>
using namespace std;
// Esta funcion recorre el numero usando recursion
// y muestra si cada digito es par o impar
void mostrarDigitos(int n) {
    // Caso base: cuando el numero llega a 0 termina la recursion
    if (n == 0)
        return;
    // Se llama nuevamente con el numero sin el ultimo digito
    mostrarDigitos(n / 10);
    // Obtiene el ultimo digito del numero
    int digito = n % 10;
    // Verifica si el digito es par o impar
    if (digito % 2 == 0)
        cout << digito << " es par" << endl;
    else
        cout << digito << " es impar" << endl;
}
int main() {
    int n;
    // Solicita un numero al usuario
    cout << "Ingrese un numero: ";
    cin >> n;
    // Llama a la funcion para mostrar
    // si cada digito es par o impar
    mostrarDigitos(n);
}