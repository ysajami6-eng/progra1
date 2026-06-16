#include<iostream>
using namespace std;
int multi(int a, int b){
	if(b==0)
	return 0;
	return a + multi(a,b-1);
}
int main(){
int a, b;
cout<<"ingrese el primer numero ";
cin>>a;
cout<<"ingrese el segundo numero ";
cin>>b;
cout<<"la multiplicacion es "<<multi(a,b);
	
}