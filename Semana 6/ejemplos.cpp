#include <iostream>

using namespace std;

class Ejemplos
{
    int a,b;
    
public:
    Ejemplos(int,int);
    void operacion1();
    int operacion2();
    void operacion3(int &);
    //método de separación
    void separacion(int);
};

Ejemplos::Ejemplos(int n1,int n2)
{
    a=n1;
    b=n2;
}

//Método que no devuelve un valor

void Ejemplos::operacion1(){
    cout<<"La suma es: "<<a+b<<endl;
}

//Método que devuelve un valor

int Ejemplos::operacion2(){
    return a+b;
}

//Método que devuelve un valor por referencia

void Ejemplos::operacion3(int &op){
    op=a+b;
}

void Ejemplos::separacion(int n){
    int d1,d2,d3,d4;

    d1=n%10;
    d2=(n/10)%10;
    d3=(n/100)%10;
    d4=(n/1000)%10;

    cout<<"d1: "<<d1<<endl;
    cout<<"d2: "<<d2<<endl;
    cout<<"d3: "<<d3<<endl;
    cout<<"d4: "<<d4<<endl;

    cout<<"los dos ultimos: "<<d2*10+d1<<endl;
    cout<<"los dos ultimos: "<<n%100<<endl;

    switch (n%100)
    {
    case 01:
        cout<<"Gerente"<<endl;
        break;
    case 02:
        cout<<"Administrativo"<<endl;
        break;
    case 03:
        cout<<"Operativo"<<endl;
        break;
    default:
        break;
    }


}

int main(){
    int op;
    Ejemplos obj(2,5);
    cout<<"---Opccion 1---"<<endl;
    obj.operacion1();
    cout<<"---Opccion 2---"<<endl;
    cout<<"La suma es: "<<obj.operacion2()<<endl;   
    cout<<"---Opccion 3---"<<endl;
    obj.operacion3(op);
    cout<<"La suma es: "<<op<<endl;

    cout<<"---Separar un numero entero en digitos---"<<endl;
    obj.separacion(4503);


    return 0;
}