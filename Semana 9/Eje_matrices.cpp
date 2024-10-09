#include<iostream>
#include<string>


using namespace std;

class Curso
{
    string estudiantes[50];
    float notas[50][5];
    int filas,columnas;
public:
    Curso(int=0,int=0);  
    void ingresar();
    void imprimir();
    void ordenar_menmay();
};

Curso::Curso(int f,int c)
{
    filas=f;
    columnas=c;
}

void Curso::ingresar(){
    char val='S';
    while(val == 'S'){
        cout<<"Ingrese el nombe del estudiante: "<<endl;
        cin>>estudiantes[filas];
        cout<<"Ingrese la nota 1: "<<endl;
        cin>>notas[filas][0];
        cout<<"Ingrese la nota 2: "<<endl;
        cin>>notas[filas][1];
        cout<<"Ingrese la nota 3: "<<endl;
        cin>>notas[filas][2];
        cout<<"Ingrese la nota 4: "<<endl;
        cin>>notas[filas][3];
        notas[filas][4]=(notas[filas][0]+notas[filas][1]+notas[filas][2]+notas[filas][3])/4;
        filas++;
        cout<<"Desea continuar S/N: "<<endl;
        cin>>val;
    }

}


void Curso::imprimir(){

    for (int f = 0; f < filas; f++)
    {
        cout<<estudiantes[f]<<"\t";
        for (int c = 0; c < 5; c++)
        {
            cout<<notas[f][c]<<"\t";
        }
        cout<<endl;       
    }
}

void Curso::ordenar_menmay(){
    float temp;
    string ntemp;
    for (int j = 0; j < filas-1; j++)
    {
        for (int i = 0; i < filas-j-1; i++)
        {
            if(notas[i][4]<notas[i+1][4]){
                for (int c = 0; c < 5; c++)
                {
                    temp=notas[i][c];
                    notas[i][c]=notas[i+1][c];
                    notas[i+1][c]=temp;
                }

                ntemp=estudiantes[i];
                estudiantes[i]=estudiantes[i+1];
                estudiantes[i+1]=ntemp;

                
                
            }
        }
    }
}



int main(){

    Curso prog;
    prog.ingresar();
    prog.imprimir();

    cout<<"-------------------"<<endl;
    prog.ordenar_menmay();
    prog.imprimir();

    return 0;
}

