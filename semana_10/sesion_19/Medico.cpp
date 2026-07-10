#include <iostream>          
#include <string>             

using namespace std;         

class Medico
{
private:
    int id;                     
    int dni;                     
    string nombre;               
    string especialidad;         

    // Valida que el DNI sea un número válido (mayor a 0 y menor a 100 millones)
    bool validarDNI(int dni) {
        return dni > 0 && dni < 100000000;  // Retorna true si el DNI es válido
    }

public:
    // Constructor por defecto que inicializa todos los atributos en valores vacíos
    Medico() : id(0), dni(0), nombre(""), especialidad("") {}

    // Constructor con parámetros que inicializa los atributos con valores específicos
    Medico(int _id, int _dni, string _nombre, string _especialidad)
        : id(_id), dni(_dni), nombre(_nombre), especialidad(_especialidad) {}

    // MÉTODOS GETTER: Retornan los valores de los atributos privados
    // Retorna el ID del médico
    int getId() const {
        return id;
    }

    // Establece un nuevo ID para el médico
    void setId(int _id) {
        id = _id;
    }

    // Retorna el DNI del médico
    int getDni() const {
        return dni;
    }

    // Establece un nuevo DNI para el médico, pero solo si es válido
    void setDni(int _dni) {
        if (validarDNI(_dni)) {  // Validar antes de asignar
            dni = _dni;
        }
    }

    // Retorna el nombre del médico
    string getNombre() const {
        return nombre;
    }

    // Establece un nuevo nombre para el médico
    void setNombre(string _nombre) {
        nombre = _nombre;
    }

    // Retorna la especialidad del médico
    string getEspecialidad() const {
        return especialidad;
    }

    // Establece una nueva especialidad para el médico
    void setEspecialidad(string _especialidad) {
        especialidad = _especialidad;
    }

    // Método que solicita los datos del médico al usuario y los valida
    void registrar() {
        cout << "\n--- REGISTRAR MEDICO ---\n";  
        cout << "ID: ";                          
        cin >> id;                               

        cout << "DNI: ";                         
        cin >> dni;                              
        // Validar el DNI con un bucle: si no es válido, pedir que lo ingrese nuevamente
        while (!validarDNI(dni)) {
            cout << "DNI invalido. Ingrese nuevamente: ";  
            cin >> dni;                        
        }
        cin.ignore();                            // Limpiar el buffer de entrada

        cout << "Nombre: ";                      // Pedir el nombre del médico
        getline(cin, nombre);                    // Leer el nombre completo

        cout << "Especialidad: ";                // Pedir la especialidad del médico
        getline(cin, especialidad);              // Leer la especialidad completa
    }

    // Método que muestra los datos del médico en pantalla
    void mostrar() const {
        cout << "\n--- DATOS MEDICO ---";       
        cout << "\nID: " << id;                  
        cout << "\nDNI: " << dni;                
        cout << "\nNombre: " << nombre;          
        cout << "\nEspecialidad: " << especialidad << "\n"; 
    }
};