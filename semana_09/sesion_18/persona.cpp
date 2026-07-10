#include <string>
#include <iostream>

using namespace std;
class Persona
{
private:
    int id;                      
    string dni;                  
    string nombres;              
    string ap_paterno;           
    string ap_materno;           
    string fecha_nacimiento;     
    string direccion;            
    string telefono;             
    int edad;                    

public:
    // Constructor vacio que crea una persona sin parametros
    Persona()
    {
    }
    
    // Constructor parametrizado que inicializa los datos basicos de la persona
    // Se utiliza para crear docentes y estudiantes con sus datos principales
    Persona(string _dni, string _nombre, string _paterno, string _materno)
    {
        this->dni = _dni;              // Asignamos el DNI pasado como parametro
        this->nombres = _nombre;       // Asignamos el nombre completo
        this->ap_paterno = _paterno;   // Asignamos el apellido paterno
        this->ap_materno = _materno;   // Asignamos el apellido materno
    }

    // Metodos getter y setter para el ID
    // El getter retorna el identificador unico de la persona
    int get_id()
    {
        return this->id;
    }
    // El setter modifica el identificador unico de la persona
    void set_id(int _id)
    {
        this->id = _id;
    }
    
    // Metodos getter y setter para el DNI
    // El getter retorna el documento nacional de identidad
    string get_dni()
    {
        return this->dni;
    }
    // El setter modifica el DNI de la persona
    void set_dni(string _dni)
    {
        this->dni = _dni;
    }
    
    // Metodos getter y setter para el nombre
    // El getter retorna el nombre completo de la persona
    string get_nombre()
    {
        return this->nombres;
    }
    // El setter modifica el nombre de la persona
    void set_nombre(string _nombre)
    {
        this->nombres = _nombre;
    }
    
    // Metodos getter y setter para el apellido paterno
    // El getter retorna el apellido paterno
    string get_paterno()
    {
        return this->ap_paterno;
    }
    // El setter modifica el apellido paterno
    void set_paterno(string _paterno)
    {
        this->ap_paterno = _paterno;
    }
    
    // Metodos getter y setter para el apellido materno
    // El getter retorna el apellido materno
    string get_materno()
    {
        return this->ap_materno;
    }
    // El setter modifica el apellido materno
    void set_materno(string _materno)
    {
        this->ap_materno = _materno;
    }
    void saludar()
    {
        cout << "Hola:  " << this->nombres << " ," << this->ap_paterno << " " << this->ap_materno << endl;
    }
};
