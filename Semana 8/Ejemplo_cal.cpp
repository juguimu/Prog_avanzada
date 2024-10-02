//Ejercicio: implementar un método que ordene la lista de mayor a menor deacuerdo a la nota final
//implementar un método que ordene la lista de menor a mayor deacuerdo a la nota final

//Tarea: buscar como imprimir la planilla respetando el tamaño de las columnas



#include<iostream>



using namespace std;


class Curso_P_A
{
    string estudiante[50];
    float nota_1[50];
    float nota_2[50];
    float nota_3[50];
    float nota_final[50];
    int tam_vec;
public:
    Curso_P_A();
    void ingresar_Estudiante();
    void mostrar_Estudiantes();

};

Curso_P_A:: Curso_P_A()
{
    tam_vec=0;
}

void Curso_P_A::ingresar_Estudiante(){
    int i=0;
    char opc='S';
    while (opc=='S')
    {
        cout<<"Ingrese el nombre del estudiante: ";
        cin>>estudiante[i];
        cout<<"Ingrese la Nota 1: ";
        cin>>nota_1[i];
        cout<<"Ingrese la Nota 2: ";
        cin>>nota_2[i];
        cout<<"Ingrese la Nota 3: ";
        cin>>nota_3[i];
        nota_final[i]=0.2*nota_1[i]+0.3*nota_2[i]+0.4*nota_3[i];
        cout<<"Desea continuar S/N: ";
        cin>>opc;
        i++;
    }
    
    tam_vec=i;
}

void Curso_P_A::mostrar_Estudiantes(){

    for(int i = 0; i < tam_vec; i++)
    {
        cout<<"| Estudantes |"
            <<"| Nota 1 |"
            <<"| Nota 2 |"
            <<"| Nota 3 |"
            <<"| Nota final |"<<endl;
        cout<<"| "<<estudiante[i]<<" |"
            <<"| "<<nota_1[i]<<" |"
            <<"| "<<nota_2[i]<<" |"
            <<"| "<<nota_3[i]<<" |"
            <<"| "<<nota_final[i]<<" |"<<endl;
    }
    


}


int main(){

    Curso_P_A o_clase;
    o_clase.ingresar_Estudiante();
    o_clase.mostrar_Estudiantes();

    return 0;
}
