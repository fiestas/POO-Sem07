#include<iostream>
using namespace std;

class A {
public:
int a;
float b;

void CambioDeValor(int p, float q){
  a=p;
  b=q;
};
};


int main(){
// se declaran objetos de tipo Al
A objA, objB;
// se definen valores de atributos 
objA.a=10;
objA.b=4;
objB.a=13;
objB.b=8;
objA.CambioDeValor(1,2);
objB.CambioDeValor(3,4);
// se imprime en la consola los valores 
cout<<"Objeto A con atributos : "<<objA.a<<"\t"<<objA.b<<endl;
cout<<"Objeto B con atributos : "<<objB.a<<"\t"<<objB.b<<endl; 
    
}