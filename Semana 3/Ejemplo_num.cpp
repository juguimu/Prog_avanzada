// Ejercicio
// Construir una clase llamada Numeros, la cual tiene un atributo llamado num. La clase tiene los siguientes métodos.
// Un método llamado par_impar(), el cual muestra un mensaje en consola para determinando si num es par o impar.
// Un método llamado primo(), el cual determina si num es primo.
// Por último, un método llamado fibonacci, el cual determina si num hace parte de una secuencia de Fibonacci. Recuerde que la secuencia es 0,1,1,2,3,5,8,13,21,34…

#include <iostream>

using namespace std;

class Numeros
{
    int num;
public:
    Numeros(int=0);        
    void par_impar();
    void primo();
    void es_fibonacci();
};

Numeros::Numeros(int a){
    num=a;
}

void Numeros::par_impar(){

    if(num%2==0){
        cout<<"el numero es par"<<endl;
    }
    else{
        cout<<"el numero es impar"<<endl;
    }
}

void Numeros::primo(){
    int cont=1;
    bool band=true;
    if(num>0){
        while(band){
            if(cont==num){
                cout<<"El numero es primo"<<endl;
                band=false;        
            }
            else{
                if(num%cont==0){
                    if(cont!=1){
                    cout<<"El numero no es primo"<<endl;
                    band=false;
                    }
                }
            }
            cont++;
        }

    }
    else{
        cout<<"El numero no es primo"<<endl;
    }
    

}

void Numeros::es_fibonacci(){
    int Fn,Fn_1=1,Fn_2=0;
    bool band=true;
    if(num>=0){
        if(num==Fn_1 || num==Fn_2){
            cout<<"Hace parte de la serie de Fibonacci"<<endl;    
        }
        else{
            Fn_2=1;
            while(band){
                Fn=Fn_1+Fn_2;
                if(num==Fn){
                    cout<<"Hace parte de la serie de Fibonacci"<<endl;
                    band=false;
                }
                else if(Fn>num){
                    cout<<"No hace parte de la serie de Fibonacci"<<endl;
                    band=false;
                }
                Fn_2=Fn_1;
                Fn_1=Fn;
            }
        }

    }
    else{
        cout<<"No hace parte de la serie de Fibonacci"<<endl;
    }




}

int main(){
    Numeros obj(5);
    obj.par_impar();
    obj.primo();
    obj.es_fibonacci();
    return 0;
}

