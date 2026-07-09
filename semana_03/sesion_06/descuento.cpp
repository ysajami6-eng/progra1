#include<iostream>
using namespace std;
int main(){
float descuento, compra;
cout<<"ingrese el precio de su compra: ";
cin>>compra;  // Primero se revisan los precios mas altos
if(compra>500){
  descuento = compra*0.05; // 0.05 es el 5% de descuento,
  float des = compra -descuento;// Se obtiene el descuento del 5% y se descuenta con "compra"
  cout<<"Descuento aplicado: 5%"<<endl;
  cout<<"el descuento es "<<des<<endl;// obtiene el total a pagar
}
else if(compra>200){
 descuento = compra*0.02;// 0.02 representa el 2% de descuento
 float des = compra -descuento;// Se obtiene el descuento del 2% y se descuenta con "compra"
 cout<<"Descuento aplicado: 2%"<<endl;
 cout<<"el descuento es "<<des<<endl;// obtiene el total a pagar
 }
 else if(compra>100){
  descuento= compra*0.01;// 0.01 representa el 1% de descuento
  float des = compra - descuento;// Se obtiene el descuento del 1% y se descuenta con "compra"
  cout<<"Descuento aplicado: 1%"<<endl;
  cout<<"el descuento es "<<des<<endl;// obtiene el total a pagar
 }
}