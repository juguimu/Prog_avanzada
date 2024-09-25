// Escribir un algoritmo que guarde una lista de 10 estudiantes e imprima al final la lista guardada.

#include<iostream>
#include<cmath>

using namespace std;

class Ejemplo1
{
private:
    string estudiantes[10];
public:
    //Ejemplo1(string[10]);
    void cargar();
    void imprimir();
};

// Ejemplo1::Ejemplo1(string a[10])
// {
//     for (int i = 0; i < 10; i++)
//     {
//         estudiantes[i]=a[i];
//     }
    
// }

void Ejemplo1::cargar(){
    for (int i = 0; i < 10; i++)
    {
        cout<<"Nombre de estudiante: "<<i+1<<": "<<endl;
        cin>>estudiantes[i];
    }
    
}

void Ejemplo1::imprimir(){
    for (int i = 0; i < 10; i++)
    {
        cout<<"Estudiante "<<i+1<<": "<<estudiantes[i]<<endl;
    }

}

int main(){

    Ejemplo1 obj;


    obj.cargar();

    obj.imprimir();


    return 0;
}




