#include <iostream>
using namespace std;

int main() {
    //tarifa: importe base que paga el cliente
    // descuento: valor del descuento calculado según el tipo
    // resul: tarifa final después de aplicar descuento
    float tarifa, descuento, resul;
    // cliente almacena la opción seleccionada por el usuario (1, 2 o 3)
    int cliente;
    // Mostrar opciones al usuario
    cout << "Elija el tipo de cliente\n";
    cout << "1. Cliente Normal 0%\n";
    cout << "2. Cliente VIP 20% \n";
    cout << "3. Cliente Premium 30% \n";
    cout << "Ingrese la opcion: ";
    cin >> cliente;

    // Pedir la tarifa base del cliente
    cout << "Ingrese la tarifa del cliente: ";
    cin >> tarifa;

    // Determinar descuento según tipo de cliente
    switch (cliente) {

        case 1:
            // Cliente Normal: no hay descuento
            resul = tarifa;
            cout << "La tarifa del cliente Normal es: S/ " << resul;
            break;

        case 2:
            // Cliente VIP: 20% de descuento
            descuento = tarifa * 0.20;
            resul = tarifa - descuento;
            cout << "La tarifa del cliente VIP es: S/ " << resul;
            break;

        case 3:
            // Cliente Premium: 30% de descuento
            descuento = tarifa * 0.30;
            resul = tarifa - descuento;
            cout << "La tarifa del cliente Premium es: S/ " << resul;
            break;
        default:
            // Opción inválida: informar al usuario
            cout << "ERROR. Opcion fuera de rango";
    }
}