#include <iostream>
#include <locale.h>
#include <wchar.h>
//Introducci�n a las clases
class bienvenida{

    public:
        void hello();

};

void bienvenida::hello(){   
    std::cout<<"Hola estudiantes de programaci�n avanzada";
}

int main(){
    std::setlocale(LC_CTYPE,"Spanish");
    bienvenida saludo;
    saludo.hello();

    return 0;

}