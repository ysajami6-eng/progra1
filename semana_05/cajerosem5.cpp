#include <iostream>
#include <string>
using namespace std;
int main(){
int op;
string u, novo, pass;
string usuario= "ahmed-dembele";
string clave = "2026@hacecalor";
float saldo=2500;
float money; 
 do{
 cout<<"ingrese su usuario:";
 cin>>u;
 cout<<"ingrese su contraseña:";
 cin>>pass;
  if(u== usuario && pass == clave) 
  cout<<"Acesso correcto...\n";
  else
  cout<<"acesso incorrecto intente de nuevo\n";
 }while(u!= usuario || pass != clave);
 cout<<"ingresando......\n";
  do{
  cout<<endl;
  cout<<"\nelija las 6 opciones\n";
  cout<<"1 es consultar saldo\n";
  cout<<"2 es retiro\n";	
  cout<<"3 es deposito\n";		
  cout<<"4 es cambio de contraseña\n";		
  cout<<"5 es autenticarse nuevamente\n";
  cout<<"6 es salir\n";
  cin>>op;
          switch(op){
 	       case 1:
 	       	cout<<"el saldo es "<<saldo<<"\n";
 	       	break;
 	       	
 	       	case 2:
 	       		cout<<"ingrese su dinero que quiere retirar ";
 	       		cin>>money;
 	       		if (money >saldo)
 	       		cout<<"el deposito es mayor al monto\n";
 	       		else if(money <= 0)
 	       		cout<<"error\n";
 	       		else{
 	       		saldo -= money;
 	       		cout<<"el saldo es "<<saldo<<"\n";
 	       	    }
 	       		break;
 	       		
 	       		case 3:
 	       			cout<<"ingrese su dinero para el deposito\n";
 	       			cin>>money;
 	       			cout<<"saldo " <<saldo<<endl;
 	       			saldo += money;
 	       			cout<<"nuevo saldo"<<saldo<<"\n";
 	       			break;
 	       			
 	       			case 4:
 	       				cout<<"ingrese su nueva contraseña: ";
						cin>>novo;
						clave = novo;
						cout<<"nueva contraseña "<<clave<<endl;
 	       				break;
 	       				
						case 5:
 	       					cout<<"ingrese su usario: ";
 	       					cin>>u;
 	       					cout<<"ingrese su nueva contraseña:";
					        cin>>novo;
					        cout<<"su nueva contraseña es "<<novo<< " la antigua era "<<pass<<" \n"; 
 	       					break;
 	       					
 	       					case 6:
 	       					cout<<"saliendo.....";	
 	       						
 	       						break;
 	       						default:
 	       						cout <<"numero fuera de rango";
           }
 }while(op!=6);
}