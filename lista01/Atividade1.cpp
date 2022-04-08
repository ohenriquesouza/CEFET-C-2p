#include <iostream>
#include "elevador.hpp"
#include "elevador.cpp"
using namespace std;
int main() {
    elevador e;
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

        if(opcao == '1')
            e.inicializa();
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