#include <iostream>
#include <locale.h>//caracteres especiales en espaÃ±ol
#include <wchar.h>
//Introducciï¿½n a las clases
class bienvenida{ //Crea una clase llamada bienvenida

    public:
        void hello();

};

void bienvenida::hello(){   
    std::cout<<"Hola estudiantes de programación avanzada \n";
}

int main(){
    std::setlocale(LC_CTYPE,"Spanish");
    bienvenida saludo;
    bienvenida saludo2,saludo3;
    saludo.hello();
    saludo3.hello();

    return 0;

}