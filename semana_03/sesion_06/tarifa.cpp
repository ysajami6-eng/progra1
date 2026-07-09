#include <iostream>
using namespace std;

int main() {
    float tarifa, descuento, resul;
    int cliente;

    cout << "Elija el tipo de cliente\n";
    cout << "1. Cliente Normal 0%\n";
    cout << "2. Cliente VIP 20% \n";
    cout << "3. Cliente Premium 30% \n";
    cout << "Ingrese la opcion: ";
    cin >> cliente;
    cout << "Ingrese la tarifa del cliente: ";
    cin >> tarifa;

    switch (cliente) {

        case 1:
            resul = tarifa;
            cout << "La tarifa del cliente Normal es: S/ " << resul;
            break;

        case 2:
            descuento = tarifa * 0.20;
            resul = tarifa - descuento;
            cout << "La tarifa del cliente VIP es: S/ " << resul;
            break;

        case 3:
            descuento = tarifa * 0.30;
            resul = tarifa - descuento;
            cout << "La tarifa del cliente Premium es: S/ " << resul;
            break;
        default:
            cout << "ERROR. Opcion fuera de rango";
    }
}