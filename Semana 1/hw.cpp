#include <iostream>
#include <locale.h>//caracteres especiales en español
#include <wchar.h>
//Introducci�n a las clases
class bienvenida{ //Crea una clase llamada bienvenida

    public:
        void hello();

};

void bienvenida::hello(){   
    std::cout<<"Hola estudiantes de programaci�n avanzada \n";
}

int main(){
    std::setlocale(LC_CTYPE,"Spanish");
    bienvenida saludo;
    bienvenida saludo2,saludo3;
    saludo.hello();
    saludo3.hello();

    return 0;

}