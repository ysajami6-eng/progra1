#include <iostream>
using namespace std;
void divisores(int a, int i){
	if(i>a)
	return;
	if(a%i==0)
	cout<<i<<endl;
	divisores(a,i+1);	
}
int main(){
int a;
cout <<"ingrese un numero\n";
cin>>a;
cout<<"los divisores son \n";
divisores(a,1);
}