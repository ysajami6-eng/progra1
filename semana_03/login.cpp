#include <iostream>
#include <string>
using namespace std;
int main (){
string user, password;
string usuario = "dmitri-khrochev";
string contra = "123@tawakkul";
 do{
	cout<<"usario:";
	cin>>user;
	cout<<"contraseña:";
	cin>>password;
	if(user != usuario)
	cout<<"usuario incorrecto intente de nuevo\n";
	if(password != contra)
	cout<<"contraseña incorrecta intente de nuevo\n";
   }while(user != usuario || password != contra); 
   
   cout<<"Acceso correcto.....ingresando";
}