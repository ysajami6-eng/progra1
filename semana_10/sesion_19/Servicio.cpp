#include <iostream>          
#include <string>             

using namespace std;         

class Servicio
{
private:
    int id;                      
    string nombre;               
    double costo;                
    // Valida que el costo sea un valor mayor a 0
    bool validarCosto(double costo) {
        return costo > 0;  // Retorna true si el costo es válido
    }

public:
    // Constructor por defecto que inicializa todos los atributos en valores vacíos
    Servicio() : id(0), nombre(""), costo(0.0) {}

    // Constructor con parámetros que inicializa los atributos con valores específicos
    Servicio(int _id, string _nombre, double _costo)
        : id(_id), nombre(_nombre), costo(_costo) {}

    // MÉTODOS GETTER: Retornan los valores de los atributos privados
    // Retorna el ID del servicio
    int getId() const {
        return id;
    }

    // Establece un nuevo ID para el servicio
    void setId(int _id) {
        id = _id;
    }

    // Retorna el nombre del servicio
    string getNombre() const {
        return nombre;
    }

    // Establece un nuevo nombre para el servicio
    void setNombre(string _nombre) {
        nombre = _nombre;
    }

    // Retorna el costo del servicio
    double getCosto() const {
        return costo;
    }

    // Establece un nuevo costo para el servicio, pero solo si es válido
    void setCosto(double _costo) {
        if (validarCosto(_costo)) {  // Validar antes de asignar
            costo = _costo;
        }
    }

    // Método que solicita los datos del servicio al usuario y los valida
    void registrar()
    {
        cout << "\n--- REGISTRAR SERVICIO ---\n";  
        cout << "ID: ";                           
        cin >> id;                                
        cin.ignore();                             
        cout << "Nombre del servicio: ";          
        getline(cin, nombre);                     

        cout << "Costo: ";                        
        cin >> costo;                             
        // Validar el costo con un bucle: si no es válido, pedir que lo ingrese nuevamente
        while (!validarCosto(costo)) {
            cout << "Costo invalido. Debe ser mayor a 0. Ingrese nuevamente: ";  
            cin >> costo;                         
        }
    }

    // Método que muestra los datos del servicio en pantalla con su costo
    void mostrar() const
    {
        cout << "\n--- DATOS SERVICIO ---";     
        cout << "\nID: " << id;                   
        cout << "\nNombre: " << nombre;           
        cout << "\nCosto: $" << costo << "\n";   
    }
};