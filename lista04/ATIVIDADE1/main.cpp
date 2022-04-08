#include "classes.hpp"
#include "classes.cpp"
#include <iostream>
using namespace std;

int main(){
    int dia, mes, ano;
    cout<<"O programa pede uma data no formato dd/mm/aa.";
    cout<<"\nInsira o dia: ";
    cin>>dia;
    cout<<"\nInsira o mes: ";
    cin>>mes;
    cout<<"\nInsira o ano: ";
    cin>>ano;
    data d(dia, mes, ano);
}