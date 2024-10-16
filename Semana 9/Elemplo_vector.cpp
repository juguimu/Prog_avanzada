#include<iostream>
#include<vector>
#include<iomanip>
#include<string>


using namespace std;

class Curso
{
    vector<string> nombres;
    vector<int> edades;
public:
    Curso(vector<string>,vector<int>);
    void imprimir();
    void ingresar_edad(string,int);
    void ordenar_menmay();
    void eliminar(string);
    
};
 
Curso:: Curso(vector<string> n,vector<int> e)
{
    nombres=n;
    edades=e;
}

void Curso::imprimir(){
    for (int i = 0; i < 24; i++)cout<<"-";
    cout<<endl;
    
    cout<<"|"<<setw(15)<<"Nombres"<<"|"<<setw(6)<<"Edades"<<"|\n";
    
    for (int i = 0; i < 24; i++)cout<<"-";
    cout<<endl;

    for (int i = 0; i < edades.size(); i++)
    {
        cout<<"|"<<setw(15)<<nombres.at(i)<<"|"<<setw(6)<<edades.at(i)<<"|\n";
        for (int i = 0; i < 24; i++)cout<<"-";
        cout<<endl;
    }
    
}

void Curso::ingresar_edad(string n,int e){
    nombres.push_back(n);
    edades.push_back(e);
}

void Curso::ordenar_menmay(){
    int temp;
    string ntemp;
    for (int j = 0; j < nombres.size()-1; j++)
    {
        for (int i = 0; i < nombres.size()-j-1; i++)
        {
            if(edades.at(i)>edades.at(i+1)){
                
                ntemp=nombres.at(i);
                nombres.at(i)=nombres.at(i+1);
                nombres.at(i+1)=ntemp;

                temp=edades.at(i);
                edades.at(i)=edades.at(i+1);
                edades.at(i+1)=temp;

                
                
            }
        }
    }
}   

void Curso::eliminar(string e){
    for (int i = 0; i < nombres.size(); i++)
    {
        if(nombres.at(i)==e){
            nombres.erase(nombres.begin()+i);
        }
    }
    
}

int main(){
    string nomEliminar,estudianteNuevo;
    int edadNuevo;
    int opc=0;
    vector<string> n={"Juan","Andres","Samuel","Sebastina"};
    vector<int> e={32,15,16,25};
    Curso prog_avanzada(n,e);
    while(opc!=5){
        cout<<"Programacion avanzada"<<endl;
        cout<<"-----------------------------\n";
        cout<<"1- Imprimir en pantalla"<<endl;
        cout<<"2- Ingresar estudiante"<<endl;
        cout<<"3- Ordenar"<<endl;
        cout<<"4- Eliminar"<<endl;
        cout<<"5- salir"<<endl;
        cin>>opc;
        switch (opc)
        {
        case 1:
            system("cls");
            prog_avanzada.imprimir();    
            system("pause");
            system("cls");
            break;
        case 2:
            system("cls");
            cout<<"Ingrese el nombre del nuevo estudiante: "<<endl;
            cin>>estudianteNuevo;
            cout<<"Ingrese la edad del nuevo estudiante: "<<endl;
            cin>>edadNuevo;
            prog_avanzada.ingresar_edad(estudianteNuevo,edadNuevo);    
            system("pause");
            system("cls");
            break;
        case 3:
            system("cls");
            prog_avanzada.ordenar_menmay();  
            cout<<"Se ha ordenado la lista"<<endl;  
            system("pause");
            system("cls");
            break;
        case 4:
            system("cls");
            prog_avanzada.imprimir();
            cout<<"Cual estudiante desea eliminar: "<<endl;
            cin>>nomEliminar;
            prog_avanzada.eliminar(nomEliminar);    
            system("pause");
            system("cls");
            break;
        
        default:
            break;
        }
    }
    /* prog_avanzada.imprimir();
    prog_avanzada.ingresar_edad("Carlos",21);
    prog_avanzada.eliminar("Juan");
    prog_avanzada.ordenar_menmay();
    prog_avanzada.imprimir(); */

    return 0;
}