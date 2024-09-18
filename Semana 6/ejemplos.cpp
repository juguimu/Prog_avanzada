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

    return 0;
}