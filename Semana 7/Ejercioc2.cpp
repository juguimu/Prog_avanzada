// Diseñe un programa el cual le pregunte al usuario por 15 números enteros y los almacene en un vector. Luego genere un programa que imprima cuantos números del vector pertenecen a una secuencia de Fibonacci


#include<iostream>

using namespace std;

class Fibonacci
{
    int num[20];
    int edad[20];
public:
    Fibonacci(int[],int);
    void imprimir(int); 
    bool es_fibonacci(int);
    void cantidad_nF(int);
    void ordenar_menmay(int);
};

Fibonacci::Fibonacci(int vec[],int tam)
{
    for (int i = 0; i < tam; i++)
    {
        num[i]=vec[i];
    }
}

void Fibonacci::imprimir(int tam){
    for (int i = 0; i < tam; i++)
    {
        cout<<"Num: "<<num[i]<<endl;
    }
    
}

bool Fibonacci::es_fibonacci(int num){
    int Fn,Fn_1=1,Fn_2=0;
    bool band=true,esF;

    if(num>=0){
        if(num==Fn_1 || num==Fn_2){
            esF=true;    
        }
        else{
            Fn_2=1;
            while(band){
                Fn=Fn_1+Fn_2;
                if(num==Fn){
                    //cout<<"Hace parte de la serie de Fibonacci"<<endl;
                    band=false;
                    esF=true;
                }
                else if(Fn>num){
                    //cout<<"No hace parte de la serie de Fibonacci"<<endl;
                    band=false;
                    esF=false;
                }
                Fn_2=Fn_1;
                Fn_1=Fn;
            }
        }

    }
    else{
        //cout<<"No hace parte de la serie de Fibonacci"<<endl;
        esF=false;
    }
    return esF;
}

void Fibonacci::ordenar_menmay(int tam){
    int temp;
    for (int i = 0; i < tam-1; i++)
    {
        if(num[i]>num[i+1]){
            temp=num[i];
            num[i]=num[i+1];
            num[i+1]=temp;
        }
    }
}

void Fibonacci::cantidad_nF(int tam){
    int cont=0;
    for (int i = 0; i < tam; i++)
    {
        if(es_fibonacci(num[i])){
            cout<<"El num en la pos "<<i<<" Fibonacci y es: "<<num[i]<<endl;
            cont++;
        }
    }
    cout<<"La cantidad de num F: "<<cont<<endl;
}

int main(){
    int vec[]={10,13,5,4,3,8};
    int tam=6;

    Fibonacci obj(vec,tam);
    obj.imprimir(tam);
    obj.ordenar_menmay(tam);
    cout<<"---------------------"<<endl;
    obj.imprimir(tam);
    obj.ordenar_menmay(tam);
    cout<<"---------------------"<<endl;
    obj.imprimir(tam);
     obj.ordenar_menmay(tam);
    cout<<"---------------------"<<endl;
    obj.imprimir(tam);
    //obj.cantidad_nF(tam);


    return 0;
}