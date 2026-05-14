#include <iostream>
using namespace std;
int main(){
int a, b, c;
do{
cout <<"ingresa el primer lado del triangulo :";
cin>>a;
cout<<"ingresa el segundo lado de triangulo : ";
cin >>b;
cout <<"ingrese el tercer lado del triangulo : ";
cin >>c;
if(a == 0 || b == 0 || c==0);
cout <<"ERROR.ninguno de los lados debe ser 0 \n";

}while(a == 0 || b == 0 || c==0);

 if(a == b && b == c)
cout<<" es un triagulo equilatero ";
else if(a == b && b != c)
cout <<" es un triangulo Isósceles";
else if(a != b && b!= c)
cout<<"es un triangulo Escaleno";




}