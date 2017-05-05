#include<iostream>
#include<math.h>
using namespace std;

class Circulo {
public:
float radio;

float Area(float r){
  return M_PI*r*r;
};

float Volumen(float r){
  return 4/3*M_PI*r*r*r;   
};
};


int main(){
// se declara un objeto círculo
Circulo c1;
float a=0, v=0;
// se define el radio del círculo
c1.radio=10;
a=c1.Area(c1.radio);
v=c1.Volumen(c1.radio);
// se imprime en la consola los valores del area y volumen 
cout<<"EL área del círculo de radio: "<<c1.radio<<", es: "<<a<<endl;
cout<<"EL volúmen de una esfera de radio: "<<c1.radio<<", es: "<<v<<endl;
    
}