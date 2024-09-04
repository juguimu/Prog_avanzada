//Diseñe un algoritmo que sume dos variable A y B y muestre el resultado. La suma debe ser hecha por medio de una función y el resultado se muestra en el programa principal.



#include <iostream>
#include <locale.h>

#include <string>
//Introducción a las clases
using namespace std;

//variable global

int var=0;

class Suma{
        
    public:
        int add(int,int);//sobrecarga de funciones
        int add(float,float);
        float add(int,float);
        void oper(int,int,int&,int&);
};


int Suma::add(int a,int b){
    var=2;
    return a+b;
}

int Suma::add(float a,float b){
    var=2;
    return a+b+1;
}

float Suma::add(int a,float b){
    var=2;
    return a+b+2;
}

void Suma::oper(int a,int b,int& sum,int& res){
    var=1;
    sum=a+b;
    res=a-b;
}

int main(){
    int s,s1,s2,suma,resta;
    float a_f=4.0,b_f=3.0;
    Suma sumador;
    s=sumador.add(4,2);
    s1=sumador.add(a_f,b_f);
    s2=sumador.add(4,(float)2.0);
    cout<<var<<endl;
    sumador.oper(2,5,suma,resta);
    cout<<var<<endl;

    

    
    cout<<"La suma1 es: "<<s<<"\n";
    cout<<"La suma2 es: "<<s1<<"\n";
    cout<<"La suma3 es: "<<s2<<"\n";
    cout<<"La suma por referencia es: "<<suma<<"\n";
    cout<<"La resta por referencia es: "<<resta<<"\n";
    


    return 0;
}
