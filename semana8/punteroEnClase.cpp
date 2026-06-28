#include <iostream>
using namespace std;

int main(){

    int a = 20;
    int b = 30;

    // Los punteros apuntan a las variables a y b
    int* punteroa = &a;
    int* punterob = &b;

    cout << "antes:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // Guardar el valor original de a
    int temp = *punteroa;

    // Copiar el valor de b en a
    *punteroa = *punterob;

    // Recuperar el valor original de a y guardarlo en b
    *punterob = temp;

    cout << "despues:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}