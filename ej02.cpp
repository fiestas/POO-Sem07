#include<iostream>
using namespace std;

class A {
public:
int p;
float q;
};

class B {
public:
int p;
float q;
float r;
};

int main(){
// se declaran objetos de tipo A y B
A objA;
B objB;
// se definen valores de atributos 
objA.p=10;
objA.q=4;
objB.p=13;
objB.q=8;
objB.r=2;
// se imprime en la consola los valores 
cout<<"Suma de primer atributo de ambos objetos : "<<objA.p+objB.p<<endl;
    
}