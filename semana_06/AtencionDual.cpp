#include <iostream>
#include <queue>
#include <stack>
using namespace std;
int main() {
    queue<string> cola1, cola2;
    stack<string> historial;

    cola1.push("Ana");
    cola1.push("Luis");
    cola1.push("Pedro");
    cola1.push("Juan");
    cola2.push("Maria");
    cola2.push("Jose");
    cola2.push("Lucia");

    cout << "   COLA 1 INICIAL  \n";
queue<string> aux1 = cola1;

while (!aux1.empty()) {
    cout << aux1.front() << endl;
    aux1.pop();
}

cout << "\n   COLA 2 INICIAL    \n";
queue<string> aux2 = cola2;

while (!aux2.empty()) {
    cout << aux2.front() << endl;
    aux2.pop();
}

cout << "\n    INICIO DE ATENCION    \n\n";

    while (!cola1.empty() || !cola2.empty()) {

        for (int i = 0; i < 3 && !cola1.empty(); i++) {
            cout << "Atendido: " << cola1.front() << endl;
            historial.push(cola1.front());
            cola1.pop();
        }

        if (!cola2.empty()) {
            cout << "Atendido: " << cola2.front() << endl;
            historial.push(cola2.front());
            cola2.pop();
        }
    }

    cout << "\nHISTORIAL\n";

    while (!historial.empty()) {
        cout << historial.top() << endl;
        historial.pop();
    }
}