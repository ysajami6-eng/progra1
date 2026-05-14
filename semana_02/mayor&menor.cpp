#include <iostream>
using namespace std;

int main(){
    int a, b, c, mayor, menor;

    cout <<"Ingrese el primer numero: ";
    cin >> a;
    cout <<"Ingrese el segundo numero: ";
    cin >> b;
    cout <<"Ingrese el tercer numero: ";
    cin >> c;
    mayor = a;
    menor = a;

    if(b > mayor)
        mayor = b;
    if(c > mayor)
        mayor = c;

        if(b < menor)
        menor = b;
        if(c < menor)
        menor = c;

    
    if(a == b && b == c)
        cout << "Los numeros son iguales\n";
    else {
        cout << "El mayor es: " << mayor << endl;
        cout << "El menor es: " << menor << endl;
    }

}