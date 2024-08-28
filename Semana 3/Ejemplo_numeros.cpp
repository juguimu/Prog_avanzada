
/* Construir una clase llamada Números la cual tiene dos atributos un numero de dos cifras (ab) y una variable A. La clase debe tener un método llamado operaciones(), el cual muestra el resutado de acuerdo al valor de A:
A=1, hacer a-b
A=2, hacer a+b
A=3, hacer a*b 
A=4, hacer a/b (Si b=0, mostrar un mensaje de que no es posible hacer la operación)

 */

#include <iostream>

using namespace std;

class Numeros
{
    int a,b,A_sel;
public:
    Numeros(int=11,int=0);
    int operaciones();
    void actualizar();   
};

Numeros::Numeros(int n,int x)
{  
    a=n/10;
    b=n%10;
    A_sel=x;
}

int Numeros::operaciones(){
    int oper=0;


    switch (A_sel)
    {
    case 1:
        oper=a-b;
        break;
    case 2:
        oper=a+b;
        break;
    case 3:
        oper=a*b;
        break;
    case 4:
        if(b==0){
            cout<<"No fue posible realizar la division \n";
        }
        else{
            oper=a/b;
        }
        
        break;    
    default:
        cout<<"No selecciono ninguna operacion \n";
        break;
    }  
    return oper;
}

void Numeros::actualizar(){
    int n,x;

    cout<<"Ingrese el valor ab: \n";
    cin>>n;
    cout<<"Ingrese el valor A: \n";
    cin>>x;
    
    a=n/10;
    b=n%10;
    A_sel=x;
}

int main(){
    Numeros obj(20,4);
    cout<<"el valor de la operacion es: "<<obj.operaciones()<<"\n";
    obj.actualizar();
    cout<<"el valor de la operacion es: "<<obj.operaciones()<<"\n";
    return 0;
}
