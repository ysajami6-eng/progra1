#include <iostream>
using namespace std;
int main(){
float tarifa, resul, monto;
int ta;
cout<<"Elija una de las 3 opciones\n";
cout<<"opcion 1 es lo normal 0 %\n";
cout<<"opcion 2 es el VIP 20 %\n";
cout<<"opcion 3 es el Premium 50%\n";
cout<<"ingrese la opcion: \n";
cin>>ta;
cout<<"ingrese su tarifa para hacer el tipo de cambio\n";
cin>>monto;
 switch(ta){
	case 1:
	cout <<"el tipo de cambio es "<<ta;	
	break;
	
	case 2:
	tarifa= monto*0.20;
    resul= monto-tarifa;
	cout<<"el tipo de cambio VIP es "<<resul;
	break;
	
	case 3:
	tarifa= monto*0.30;
	resul= monto-tarifa;
	cout<<"el tipo de cambio con premium es "<<resul;
	break;
	
	default:
	cout<<"ERROR.numero fuera de rango";
	
	
 }	
	
}