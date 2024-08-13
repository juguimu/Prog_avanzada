#include <iostream>
#include <locale.h>
#include <wchar.h>
#include <string>
//Introducción a las clases
using namespace std;

class bienvenida{
    
    public:

        void hello(string);

};

void bienvenida::hello(string name){   
    std::cout<<"Bienvenido "<<name<<" al curso de programación";
}

int main(){
    std::string name="Juan";
    std::setlocale(LC_CTYPE,"Spanish");
    bienvenida saludo;
    saludo.hello(name);

    return 0;

}