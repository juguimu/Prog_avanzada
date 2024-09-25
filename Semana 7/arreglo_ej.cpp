#include<iostream>
#include<cmath>

using namespace std;

int main(){

    int n=6;
    int edad[6];

    for (int i = 0; i < n; i++)
    {
        cout<<"Ingrese la edad "<<i+1<<": "<<endl;
        cin>>edad[i];
    }
    
    cout<<"La edad: "<<edad[4]<<endl;




    return 0;
}