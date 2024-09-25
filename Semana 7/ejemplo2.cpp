// Escribir un algoritmo que guarde 10 números en un arreglo unidimensional y determine, cuál es el mayor y cuál es el menor  luego de guardar los datos.
// Escribir un algoritmo que guarde de 10 números en un arreglo unidimensional y, posteriormente, sumar los números pares e impares





#include<iostream>
#include<cmath>

using namespace std;

class Ejemplo2
{
    int numeros[4];
public:
    void cargar();
    void mayor();
    void menor();
    void sumaParImp();
   
};

void Ejemplo2::cargar(){
    for (int i = 0; i < 4; i++)
    {
        cout<<"Numero "<<i+1<<": "<<endl;
        cin>>numeros[i];
    }
}

void Ejemplo2::mayor(){
    //{2,3,7,6}

    int mayor=numeros[0];

    for (int i = 0; i < 3; i++)
    {
        if(numeros[i+1]>mayor){
            mayor=numeros[i+1];
        }
    }

    cout<<"El numero mayor es: "<<mayor<<endl;
    

}


void Ejemplo2::menor(){
    //{2,3,7,6}

    int menor=numeros[0];

    for (int i = 0; i < 3; i++)
    {
        if(numeros[i+1]<menor){
            menor=numeros[i+1];
        }
    }

    cout<<"El numero menor es: "<<menor<<endl;
    

}

void Ejemplo2::sumaParImp(){

    int sumImp=0,sumPar=0;

    for (int i = 0; i < 4; i++)
    {
        if(numeros[i]%2==0){
            //pares
            sumPar+=numeros[i];
        }
        else{
            //impares
            sumImp+=numeros[i];
        }
    }

    cout<<"La suma de n pares es: "<<sumPar<<endl;
    cout<<"La suma de n impares es: "<<sumImp<<endl;


}


int main(){

    Ejemplo2 obj;

    obj.cargar();
    obj.mayor();
    obj.menor();
    obj.sumaParImp();
   



    return 0;
}

