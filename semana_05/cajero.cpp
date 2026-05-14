#include <iostream>
using namespace std;

int main() {
    int opcion;
    double saldo = 1000.0;
    double monto;

    do {
        cout << "\n===== CAJERO AUTOMATICO =====\n";
        cout << "1. Consultar saldo\n";
        cout << "2. Depositar dinero\n";
        cout << "3. Retirar dinero\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "Su saldo actual es: S/ " << saldo << endl;
                break;

            case 2:
                cout << "Ingrese monto a depositar: ";
                cin >> monto;
                if (monto > 0) {
                    saldo += monto;
                    cout << "Deposito exitoso.\n";
                }else 
                    cout << "Monto invalido.\n";
                break;

            case 3:
                cout << "Ingrese monto a retirar: ";
                cin >> monto;
                if (monto > saldo) 
                    cout << "Fondos insuficientes.\n";
                 else if (monto <= 0) 
                    cout << "Monto invalido.\n";
                  else {
                    saldo -= monto;
                    cout << "Retiro exitoso.\n";
                }
                break;

            case 4:
                cout << "Gracias por usar el cajero.\n";
                break;

            default:
                cout << "Opcion invalida.\n";
        }

    } while(opcion != 4);
}
