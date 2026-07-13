#include <iostream>
using namespace std;

int t(int n){
    if(n == 1){// si el número es 1, terminamos
        cout << "1";
        return 1;
    }
    cout << n << " + ";

    return n + t(n - 1);
}

int main(){

    int n;

    cout << "Ingrese un numero: ";
    cin >> n;

    // verificamos que el número sea positivo
    if(n <= 0){
        cout << "Error: ingrese un numero positivo mayor que 0." << endl;
        return 0;
    }

    // llama a la función y guarda el resultado
    int resultado = t(n);
    cout << " = " << resultado << endl;
}