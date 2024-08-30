// Ejemplo:
// Construir una clase llamada Logica, la cual tiene los siguientes atributos edad_min, edad_max y rango. La clase tiene un método llamado introducir_edades(), donde se agregan las edades de n estudiantes, se guarda la mínima, la máxima y el rango (edad_máxima-edad_mínima) hasta que se introduce el número 99. Si la edad está por encima de 50 o por debajo de 10, debe volver a preguntar la edad para el mismo estudiante mostrando un mensaje de error. Por último, incluir un método mostrar_datos(), el cual muestra la edad mínima, la edad máxima ingresada y el rango. 

#include<iostream>

using namespace std;

class Logica
{
    int edad_min,edad_max,rango;
public:
    Logica(int=0,int=0,int=0);
    void introducir_edad();
    void mostrar_datos();
};

Logica::Logica(int emax,int emin,int r)
{
    edad_min=emin;
    edad_max=emax;
    rango=r;
}

void Logica::introducir_edad(){
    bool band=true;
    int edad;

    while(band){
        cout<<"Introducir la edad: "<<endl;
        cin>>edad;
        if(edad==99){
            band=false;
        }
        else if(edad < 10 || edad > 50 ){
            cout<<"La edad no es valida"<<endl;
        }
        else{
            if(edad_max==0 && edad_min==0 && rango==0){
                edad_max=edad;
                edad_min=edad;
                rango=0;
            }
            else{
                if(edad>edad_max){
                    edad_max=edad;
                }
                else if(edad<edad_min){
                    edad_min=edad;
                }
                rango=edad_max-edad_min;
            }

            
        }

    }
}

void Logica::mostrar_datos(){
    cout<<"La edad minima: "<<edad_min<<endl;
    cout<<"La edad maxima: "<<edad_max<<endl;
    cout<<"Rango: "<<rango<<endl;    
}

int main(){
    Logica obj;

    obj.introducir_edad();
    obj.mostrar_datos();
}


