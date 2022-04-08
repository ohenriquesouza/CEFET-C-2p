#include "classes.hpp"
#include "classes.cpp"
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    matematica m;
    double n1;
    char escolha;
    cout<<"Insira um numero: ";
    cin>>n1;
    m.setnum1(n1);
    while(1){
        cout<<"Escolha o calculo que sera feito:\n1-Fatorial;\n2-Raiz;\n3-Potencia;\n";
        cin>>escolha;
        if(escolha == '1'){
            cout<<"Resultado : "<<m.calculaFatorial()<<endl;
        }
        if(escolha == '2'){
            cout<<"Resultado: "<<m.calculaRaiz()<<endl;
        }
        if(escolha == '3'){
            int pot;
            cout<<"\nInforme a qual numero deseja elevar: ";
            cin>>pot;
            cout<<"Resultado : "<<m.calculaPotencia(pot)<<"\n"<<endl;
        }
    }
}