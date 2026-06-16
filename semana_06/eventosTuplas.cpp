#include <iostream>
#include <tuple>
using namespace std;
int main(){
tuple<string, string, string> evento1("Parcial 3 de fisica","martes 20 de junio", "4:00 pm");
tuple<string, string, string> evento2("Parcial 4 de algebra lineal","jeuves 22 de junio", "10:00 m");
cout<<endl;
cout<<"----Agenda de eventos----"<<endl;
cout<<endl;

cout<<"evento 1"<<endl;
cout<<"Nombre: "<<get<0>(evento1)<<endl;
cout<<"Fecha: "<<get<1>(evento1)<<endl;
cout<<"Hora: "<<get<2>(evento1)<<endl;
cout<<endl;
cout<<"evento 2"<<endl;
cout<<"Nombre: "<<get<0>(evento2)<<endl;
cout<<"Fecha: "<<get<1>(evento2)<<endl;
cout<<"Hora: "<<get<2>(evento2)<<endl; 


}