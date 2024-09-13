#include<iostream>

using namespace std;

class Numeros
{
    int a,b;
public:
    Numeros(int=0);
    Numeros(int,int);
    void imprimir();
};

Numeros::Numeros(int n)
{
    a=n;
    b=2*n;
}
Numeros::Numeros(int n1, int n2)
{
    a=n1;
    b=n2;
}

void Numeros::imprimir(){
    cout<<"El valor de a: "<<a<<endl;
    cout<<"El valor de b: "<<b<<endl;
}

int main(){
    Numeros obj(3,2);

    obj.imprimir();
    
    return 0;
}

