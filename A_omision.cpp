#include<iostream>

using namespace std;

int mul(int,int=2);

int main(){
    cout<<"Multiplicacion: "<<mul(1)<<endl;
    return 0;
}

int mul(int a, int b){
    return a*b;
}