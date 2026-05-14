#include<iostream>
using namespace std;
int main(){
float descuento, compra;
cout<<"ingrese el precio de su compra: ";
cin>>compra;
if(compra>100){
  descuento = compra*0.01;
  float des = compra -descuento;
  cout<<"el descuento es "<<des<<endl;
  cout<<"del "<<descuento<<" %\n";
}
else if(compra>200){
 descuento = compra*0.02;
 float des = compra -descuento;
 cout<<"del "<<descuento<<" %\n";
 cout<<"el descuento es "<<des;
 }
 else if(compra>500){
  descuento= compra*0.05;
  float des = compra - descuento;
  cout<<"del "<<descuento<<" %\n";
  cout<<"el descuento es "<<des;
 }
}