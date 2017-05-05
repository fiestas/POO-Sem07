#include<iostream>
using namespace std;

class A {
public:
int p;
float q;
};

int main(){
// se declaran objetos de tipo A
A objA;
// se definen valores de atributos 
objA.p=10;
objA.q=4;

// se imprime en la consola los valores 
cout<<"Objeto tipo A con atributos : "<<objA.p<<"\t"<<objA.q<<endl;
    
}