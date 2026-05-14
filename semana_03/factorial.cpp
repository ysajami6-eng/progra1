#include <iostream>
using namespace std;
int num, result=1;
int main(){
cout<<"ingresar un numero para convertirlo en factorial\n";
cin >>num;
 for(int i=1;i<=num;i++){
 	cout<<i;
 	if(i<num)
 	cout<<"*";
 	result *= i;
 }
 cout<<"\nel resultado es "<<result;
}