#include <iostream>
#include <algorithm>
using namespace std;

float promedio(float notas[], int n){
 float suma=0;
  for(int i=0;i<n;i++){
 	suma += notas[i];
 }
      return suma/n;
}
float mayor(float notas[], int n){
 float mayor = notas[0];
  for(int i=0;i<n;i++){
   if(mayor<notas[i])
    mayor=notas[i];
 }
     return mayor;
}
int main(){
float notas[3];
for(int i=0;i<3;i++){
 cout<<"ingrese la nota: ";
 cin>>notas[i];
}
sort(notas,notas+3);
 cout<<"las notas ordenadas de menor a mayor\n";
for(int i=0;i<3;i++){
 cout<<notas[i]<<endl;
}
cout<<"notas de mayor a menor\n";
for(int i=2;i>=0;i--){
 cout<<notas[i]<<endl;	
}	
	
cout<<"el promedio es "	<<promedio(notas,3)<<endl;
cout<<"el mayor es " <<mayor(notas,3);
}