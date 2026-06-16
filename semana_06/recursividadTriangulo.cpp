#include <iostream>
using namespace std;
int t(int n){
	if(n==1)
	return 1;
	
 	     return n + t(n-1);
 }
int main(){
int n;
 cout<<"ingrese un numero ";
 cin>>n;
 cout<<"el triangulo es "<<t(n);
}