#include<iostream>
#include<math.h>
using namespace std;

class MateriaPrima{
public:
float peso;
float cantidad;
float precio;

float PesoTotal(float p){
  return cantidad*peso;
};

float PrecioTotal(float pr){
  return cantidad*pr;   
};

float ModificarValores(float p,float c,float pr){
  peso=p;
  cantidad=c;
  precio=pr;
};

};


int main(){
float pt=0, pr=0;
// se declara un objeto MateriaPrima
MateriaPrima MP1,MP2,MP3;
// se definen atributos
MP1.peso=10;
MP2.peso=15;
MP3.peso=20;

MP1.precio=0.1;
MP2.precio=0.5;
MP3.precio=0.3;

MP1.cantidad=100;
MP2.cantidad=200;
MP3.cantidad=300;

pt=MP1.PesoTotal(MP1.peso)+MP2.PesoTotal(MP2.peso)+MP3.PesoTotal(MP3.peso);
pr=MP1.PrecioTotal(MP1.precio)+MP2.PrecioTotal(MP2.precio)+MP3.PrecioTotal(MP3.precio);

// se imprime en la consola el peso y precio total
cout<<"EL peso total del pedido es: "<<pt<<endl;
cout<<"EL precio total del pedido es: "<<pr<<endl;

// se modifican valores de MP1
MP1.ModificarValores(30,200,0.6);
pt=MP1.PesoTotal(MP1.peso)+MP2.PesoTotal(MP2.peso)+MP3.PesoTotal(MP3.peso);
pr=MP1.PrecioTotal(MP1.precio)+MP2.PrecioTotal(MP2.precio)+MP3.PrecioTotal(MP3.precio);
// se imprime en la consola el peso y precio total
cout<<"EL peso total del pedido es: "<<pt<<endl;
cout<<"EL precio total del pedido es: "<<pr<<endl;
    
}