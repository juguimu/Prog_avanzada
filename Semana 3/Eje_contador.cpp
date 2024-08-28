/* Construir una clase llamada Contador con un atributo entero n. La clase tiene dos métodos ascendente() y descendente(), el método ascendente muestra en consola el conteo de 0 hasta n, y el método descendente(), muestra en consola el conteo desde n hasta 0. n se inicializa por defecto en 10.
 */

#include <iostream>

using namespace std;

class Contador
{
    int n;
public:
    Contador(int=10);
    void ascendente();
    void descendente();
    void actualizar();
};

Contador::Contador(int x)
{
    n=x;
}

void Contador::ascendente(){

    for (int i = 0; i <= n; i++)
    {
        cout<<"El contador va en: "<<i<<"\n";
    }
}

void Contador::descendente(){
    for (int i = n; i >= 0; i--)
    {
        cout<<"El contador va en: "<<i<<"\n";
    }
}

void Contador::actualizar(){
    cout<<"Ingrese el valor de n: \n";
    cin>>n;
}

int main(){
    Contador obj;
    obj.ascendente();
    obj.actualizar();
    obj.descendente();
}

