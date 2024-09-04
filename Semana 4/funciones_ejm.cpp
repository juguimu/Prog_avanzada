// Implementar una función que retorne una cadena de caracteres con el mensaje “Hola Mundo”.



#include <iostream>
#include <string>

using namespace std;

class Saludo
{

public:
    string hwc();    
};

string Saludo::hwc(){
    return "Hola mundo!!!";
}


string hw();

int main(){
    Saludo obj;
    cout<<hw()<<endl;
    cout<<obj.hwc();
    return 0;
}

string hw(){
    return "Hola mundo!!";
}

