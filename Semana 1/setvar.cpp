#include <iostream>
#include <locale.h>

#include <string>
//Introducción a las clases
using namespace std;

class entero{
        int a,b;

    public:
        entero(int=0,int=0);
        void set(int,int);
        void show();
        int get();
        void add();

};

entero::entero(int x,int y){
    a=x;
    b=y;
}

int entero::get(){
    return a;
}

void entero::set(int x,int y){
    a=x;
    b=y;
}

void entero::show(){
    cout<<"El valor de a es: "<<a<<"\n";
}

void entero::add(){
    cout<<"la suma es: "<<a+b<<"\n";
}

int main(){
    int a;
    entero variable(5,2);
    entero var;

    //variable.show();
    //variable.set(5,2);
    var.set(2,3);
    variable.show();
    var.show();
    a=variable.get();
    cout<<"el valor de a: "<<a<<"\n";
    variable.add();


    return 0;
}





