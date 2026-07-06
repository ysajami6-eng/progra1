#include <iostream>
#include <string>
using namespace std;

// CLASE BASE
class Canal {
protected:
    string destinatario;  // Persona/dispositivo que recibe la notificación
    string mensaje;       
public:
    // Constructor: inicializa el destinatario y el mensaje
    Canal(string d, string m) {
        destinatario = d;
        mensaje = m;
    }

    // Método virtual puro: cada canal implementa su propio envío
    // (correo usa SMTP, SMS usa API de telefonía, token usa push notifications)
    virtual void enviar() = 0;

    // Método: reenvía el mensaje a un nuevo destinatario
    void reenviar(string nuevoDestino) {
        cout << "Reenviando notificación..." << endl;
        cout << "De: " << destinatario << " -> A: " << nuevoDestino << endl;
        cout << "Mensaje: " << mensaje << endl;
    }

    // Método: envía notificación especial al propietario/administrador
    // Llama a enviar() pero indica que es para el propietario
    void enviarPropietario() {
        cout << "Enviando al propietario: " << destinatario << endl;
        enviar();  // Usa la implementación específica del canal
    }

    virtual ~Canal() {}  // Destructor virtual para limpiar recursos correctamente
};

//CLASEHIJA CORREO: Implementa el envío por correo electrónico
class Correo : public Canal {
public:
    // Constructor hereda de la clase base
    Correo(string d, string m) : Canal(d, m) {}

    void enviar() override {
        cout << "[CORREO]" << endl;
        cout << "Para: " << destinatario << endl;
        cout << "Asunto: Notificación" << endl;
        cout << "Mensaje: " << mensaje << endl;
        cout << "----------------------" << endl;
    }
};


//CLASEHIJA SMS: Implementa el envío por mensaje de texto
class SMS : public Canal {
public:
    // Constructor hereda de la clase base
    SMS(string d, string m) : Canal(d, m) {}

    void enviar() override {
        cout << "[SMS]" << endl;
        cout << "Número: " << destinatario << endl;
        cout << "Texto: " << mensaje << endl;
        cout << "----------------------" << endl;
    }
};

//CLASEHIJA TOKEN: Implementa el envío por notificaciones push (en dispositivos)
class Token : public Canal {
public:
    // Constructor hereda de la clase base
    Token(string d, string m) : Canal(d, m) {}

    void enviar() override {
        cout << "[TOKEN]" << endl;
        cout << "Usuario: " << destinatario << endl;
        cout << "Código de seguridad: " << mensaje << endl;
        cout << "----------------------" << endl;
    }
};
int main() {

    // CREACIÓN DE OBJETOS: instancias de cada canal
    Canal* c1 = new Correo("MR-robot@mail.com", "Hola eliot alderson!");// Canal de correo
    Canal* c2 = new SMS("999888777", "Tu código es 1234");       // Canal de SMS
    Canal* c3 = new Token("usuario01", "TOKEN-9999");            // Canal de token/push

    // ENVÍO POR DIFERENTES CANALES: el método enviar() se ejecuta diferente en cada clase
    // Gracias al polimorfismo, el compilador llama a la versión correcta según el tipo real
    cout << "--- ENVIOS POR CADA CANAL ---\n\n";
    c1->enviar();  // Llama a Correo::enviar()
    c2->enviar();  // Llama a SMS::enviar()
    c3->enviar();  // Llama a Token::enviar()

    // REENVÍO: redirige el mensaje a un nuevo destinatario
    cout << "\n--- REENVIAR ---\n";
    c1->reenviar("nuevo@mail.com");  // Reenvía el correo a otro email

    cout << "\n--- ENVIAR PROPIETARIO ---\n";
    c2->enviarPropietario();  // Envía SMS urgente al propietario
    // LIBERACIÓN DE MEMORIA: eliminamos los objetos creados con new
    delete c1;
    delete c2;
    delete c3;
}
