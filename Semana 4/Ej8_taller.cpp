#include<iostream>

using namespace std;

class Numero
{
    int N;
public:
    void actualizar();
    void imp_sum();
}; 


void Numero::actualizar(){
    cout<<"Ingrese el valor de N: "<<endl;
    cin>>N;
}

void Numero::imp_sum(){
    float sum=0;
    int cont=0;
    for (int i = 2; i <= N; i=i+2)
    {
        cout<<"Los valores de N: "<<i<<endl;
        sum+=i;
        cont++;
    }
    cout<<"el promedio es: "<<sum/cont<<endl;    
}

int main(){
    Numero obj;
    obj.actualizar();
    obj.imp_sum();

    return 0;
}