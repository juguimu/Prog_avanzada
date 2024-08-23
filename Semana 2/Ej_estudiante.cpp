#include <iostream>

using namespace std;



class Estudiante{
        float nota1,nota2,nota3;
    public:
        Estudiante(float=0.0,float=0.0,float=0.0);
        void nota_definitiva();
        void nota_mas_alta();
};

Estudiante::Estudiante(float n1,float n2,float n3){
    nota1=n1;
    nota2=n2;
    nota3=n3;
}

void Estudiante::nota_definitiva(){
    cout<<"La nota definitiva es: "<<(nota1+nota2+nota3)/3<<"\n";
}

void Estudiante::nota_mas_alta(){
    float nota_alta;

    if (nota1>nota2)
    {
        nota_alta=nota1;
        if (nota1<nota3)
        {
            nota_alta=nota3;
        }
        
    }
    else{
        nota_alta=nota2;
        if (nota2<nota3)
        {
            nota_alta=nota3;
        }
    }

    cout<<"la nota más alta es: "<<nota_alta<<"\n";
    




}

int main(){

     Estudiante juan(2.5,3.0,3.5);
   

    juan.nota_definitiva();

    juan.nota_mas_alta();

    return 0;
}