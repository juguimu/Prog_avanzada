#include<vector> //clase vector
#include<iostream>


using namespace std;




int main(){
    //iniciar un vector estático y dinámico
    int vec[]={1,2,3};
    vector<int> vec2={1,2,3,4};
    vector<int> vec1;
    //vec1.assign(3,0);//inicializar el vector {0,0,0}
    //---------------------------------------------
    //Asignar un vector
    vec1=vec2;
    //vec1.assign(vec,vec+1);
    //-----------------------------------------------------
    //encontrar el tamaño del vector
    cout<<"el tamaño de vec1 es: "<<vec1.size()<<endl;
    
    //imprimir un vector
    for (int i = 0; i < vec1.size(); i++)
    {
        cout<<"La pos "<<i<<" del Vec: "<<vec1[i]<<endl;
    }
    


    //cout<<"La pos 0 del Vec: "<<vec1[0]<<endl;//imprimir un valor de la posición 0
    //cout<<"La pos 0 del Vec: "<<vec1.at(0)<<endl;
    //cout<<"----------------"<<endl;
    //Modificar el valor de la posición 0
    //vec1[0]=5;
    //vec1.at(1)=4;
    //cout<<"La pos 0 del Vec: "<<vec1[0]<<endl;
    //cout<<"La pos 1 del Vec: "<<vec1.at(1)<<endl;

    //agregar valores al vector
    vec1.push_back(20);
    cout<<"----------"<<endl;
    vec1.erase(vec1.begin()+1);
    for (int i = 0; i < vec1.size(); i++)
    {
        cout<<"La pos "<<i<<" del Vec: "<<vec1[i]<<endl;
    }

    return 0;
}