#include<iostream>
using namespace std;
 void mostrar(int n){
  if(n==0)
   return;
   int guardar= n%10;	
  	if(guardar%2==0)
  	cout<<"es par "<<guardar<<endl;
  	else
  	cout<<"es impar "<<guardar<<endl;
  	mostrar(n/10);
  }
int main(){
 mostrar(2431);
}
