#include <iostream>
#include <math.h>
#include <string>

using namespace std;

class Rectangulo
{
    float largo,ancho;
public:
    Rectangulo(float=0.0,float=0.0);
    float perimetro();
    float area(); 
    void sobredim();
    void actualizar();
};

Rectangulo::Rectangulo(float l, float a)
{
    largo=l;
    ancho=a;
}

float Rectangulo::perimetro(){
    return 2*largo+2*ancho;
}

float Rectangulo::area(){
    return largo*ancho;
}

void Rectangulo::sobredim(){
    float perimetro=2*largo+2*ancho;
    if(perimetro>10){
        cout<<"El rectangulo esta sobredimensionado! \n";
    }
    else{
        cout<<"El rectangulo no esta sobredimensionado! \n";
    }
    
}

void Rectangulo::actualizar(){
    cout<<"Ingrese el ancho: ";
    cin>>ancho;
    cout<<"Ingrese el largo: ";
    cin>>largo;
}

int main(){
    Rectangulo r1(2.5,1),r2(3.2,4.0);

    cout<<"el area de r1: "<<r1.area()<<"\n";
    cout<<"el perimetro de r1: "<<r1.perimetro()<<"\n";
    r1.sobredim();
    cout<<"el area de r2: "<<r2.area()<<"\n";
    cout<<"el perimetro de r2: "<<r2.perimetro()<<"\n";
    r2.sobredim();
    r1.actualizar();
    cout<<"el area de r1: "<<r1.area()<<"\n";
    cout<<"el perimetro de r1: "<<r1.perimetro()<<"\n";
    r1.sobredim();

    return 0;
}



