#include<iostream>
#include<cmath>

using namespace std;

class Evaluacion
{
    double mayor,menor;

public:
    Evaluacion(double=0,double=0);
    void potencia(double,double);  
    void multiplos(double); 
    void distancia(double,double,double,double);
    void imprimir();
    
};

Evaluacion::Evaluacion(double my, double mn){
    mayor=my;
    menor=mn;
}

void Evaluacion::potencia(double n,double p){
    double res=1;
    for (int i = 0; i < p; i++)
    {
        res*=n;
    }
    
    cout<<"la potencia es: "<<res<<endl;

    if(mayor==0){
        mayor=res;
        menor=res;
    }
    else {
       if(res>mayor){
            mayor=res;
       }
       else if(res<menor){
            menor=res;
       } 
    }

}

void Evaluacion::multiplos(double n){
    int mul=1;
    
    for (double i = 2; i <= n/2; i++)
    {
        if((int(n)%int(i))==0){
            mul=i;
        }
    }
    cout<<"el mayor múltiplo del núemero es: "<<mul<<endl;
    if(mayor==0){
        mayor=mul;
        menor=mul;
    }
    else {
       if(mul>mayor){
            mayor=mul;
       }
       else if(mul<menor){
            menor=mul;
       } 
    }
}

void Evaluacion::distancia(double x1,double x2,double y1,double y2){
    double distancia=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    cout<<"la distancia es: "<<distancia<<endl;
    if(mayor==0){
        mayor=distancia;
        menor=distancia;
    }
    else {
       if(distancia>mayor){
            mayor=distancia;
       }
       else if(distancia<menor){
            menor=distancia;
       } 
    }

}


void Evaluacion::imprimir(){
    cout<<"Mayor: "<<mayor<<endl;
    cout<<"Menor: "<<menor<<endl;
}


int main(){

Evaluacion obj;

obj.potencia(3,4);
obj.multiplos(19);
obj.distancia(1,2,1,2);
obj.imprimir();

return 0;



}