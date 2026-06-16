#include <iostream>
#include <stack>
#include <queue>
using namespace std;
int main(){
stack<int>pila, aup;
queue<int>cola, auc;
pila.push(10);
pila.push(20);	
pila.push(30);
	
cola.push(1);
cola.push(2);
cola.push(3);
stack<int> copiapila = pila;
queue<int> copiacola = cola;
cout<<" valores de pila\n";
while(!copiapila.empty()){
 cout<<copiapila.top()<<endl;
  copiapila.pop();   
}
cout<<"valores de cola\n";
while(!copiacola.empty()){
cout<<copiacola.front()<<endl;
copiacola.pop();
}	
	
 while(!pila.empty()){
 auc.push(pila.top());
  pila.pop();	
 }
 while(!cola.empty()){
 pila.push(cola.front());
 cola.pop();
 }
 while(!auc.empty()){
  cola.push(auc.front());
  auc.pop();
 }
 cout<<"el cambio de valores\n";
 cout<<"pila final\n";
 while(!pila.empty()){
  cout<<pila.top()<<endl;
  pila.pop();
   }
cout<<"cola final\n";
   while(!cola.empty()){
   	cout<<cola.front()<<endl;
	 cola.pop();  
	  }
}