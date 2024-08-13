#include <iostream>
#include <locale.h>
#include <wchar.h>
//Introducción a las clases
class bienvenida{

    public:
        void hello();

};

void bienvenida::hello(){   
    std::cout<<"Hola estudiantes de programación avanzada";
}

int main(){
    std::setlocale(LC_CTYPE,"Spanish");
    bienvenida saludo;
    saludo.hello();

    return 0;

}