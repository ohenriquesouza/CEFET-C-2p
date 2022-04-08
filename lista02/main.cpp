#include <iostream>
#include <vector>
#include <string>
#include "classes.hpp"
#include "classes.cpp"
using namespace std;

int main(){
    vector <carro> vet;
    string modelo, fabricante;
    float consumo, combustivel;
    carro c;
    char opcao;
    while(1){
        cout<< "\n--Escolha qual das opcoes deseja testar--\n";
        cout<< "------------------------------------------";
        cout<< "\n1- Cadastrar carro;\n";
        cout<< "2- Abastecer carro;\n";
        cout<< "3- Andar com um carro;\n";
        cout<< "4- Exibir informacoes de um carro;\n";
        cout<< "5- Sair;\n";
        cout<< "------------------------------------------\n";
        cin>> opcao;

        if(opcao == '1'){
        c.insereCarro();
        vet.push_back(c);
        cout<< "\n-CARRO "<<vet.size()<<" CADASTRADO-\n";
        }
        if(opcao == '2'){
            int nmCarro;
            float Lgasolina;
            cout<<"Informe o numero do carro que deseja abastecer: ";
            cin>>nmCarro;
            cout<<"Quantos litros deseja adicionar?: ";
            cin>>Lgasolina;
            vet[nmCarro-1].abasteceCarro(Lgasolina);
        }
        if(opcao == '3'){
            float distancia;
            int nmCarro;
            cout<<"Informe o numero do carro que deseja movimentar: ";
            cin>>nmCarro;
            cout<<"Por quantos Km deseja mover o carro?: ";
            cin>>distancia;
            vet[nmCarro-1].andarcomCarro(distancia);
        }
        if(opcao == '4'){
            int nmCarro;
            cout<<"Informe o numero do carro que deseja visualizar as informacoes: ";
            cin>>nmCarro;
            vet[nmCarro-1].imprimir();
        }
        if(opcao == '5'){
            break;
        }
    }
}