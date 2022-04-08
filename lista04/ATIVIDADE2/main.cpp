#include <iostream>
#include "classes.hpp"
#include "classes.cpp"
using namespace std;
int main() {
    elevador e;
    int capacidadeMaxElv, qntTotalAndares;
    char opcao;
    while(1){
        cout<< "\t\n--Escolha qual das opcoes deseja testar--\n";
        cout<< "\n1- Inicializa;\n";
        cout<< "2- Entra;\n";
        cout<< "3- Sai\n";
        cout<< "4- Sobe;\n";
        cout<< "5- Desce;\n";
        cout<< "6- Resultados;\n";
        cout<< "\t\n------------------------------------------\n";
        cin>> opcao;

        if(opcao == '1'){
            cout<< "Insira a capacidade maxima do elevador: ";
            cin>>capacidadeMaxElv;
            cout<< "Quantos andares tem o predio?: ";
            cin>>qntTotalAndares;
            e = elevador(capacidadeMaxElv, qntTotalAndares);
        }
        if(opcao == '2')
            e.entra();
        if(opcao == '3')
            e.sai();
        if(opcao == '4')
            e.sobe();
        if(opcao == '5')
            e.desce();
        if(opcao == '6')
            e.imprimir();
    }

    return 0;
}