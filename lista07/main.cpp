#include <iostream>
#include "Lista.hpp"
#include "No.hpp"

int main(){
    int opcao=0, nm =0;
    Lista L1;
    Lista L2;
    Lista L3;
    /////////////////////
    L1.Inserir_final(10);
    L1.Inserir_final(20);
    L1.Inserir_final(30);
    L1.Inserir_final(40);
    L1.Inserir_final(50);
    /////////////////////
    L2.Inserir_final(60);
    L2.Inserir_final(70);
    L2.Inserir_final(80);
    L2.Inserir_final(90);
    L2.Inserir_final(100);
    //////////////////////
    do{
        cout<<"\n--MENU DE OPCOES--\n";
        cout<<"1- Concatenar L2 a L1."<<endl;
        cout<<"2- Ordenar a L1."<<endl;
        cout<<"3- Ordenar a L2."<<endl;
        cout<<"4- Procurar e remover um inteiro na lista L1."<<endl;
        cout<<"5- Procurar e remover um inteiro na lista L2."<<endl;
        cout<<"6- Inserir um vetor e transformalo em uma lista."<<endl;
        cout<<endl;
        cin>>opcao;
        //////////////////////
        if(opcao == 1){
            L1.Concatena(L2);
            L1.MostrarTodos();
        }
        if(opcao == 2){
            L1.Ordena();
            L1.MostrarOrdenado();
        }
        if(opcao == 3){
           L2.Ordena();
           L2.MostrarOrdenado();
        }
        if(opcao == 4){
            cout<<"\nInsira o numero que deseja pesquisar: ";
            cin>>nm;
            if(L1.Pesquisa(nm)){
                L1.Remover_Pesquisa(nm);
                cout<<"\n----------------\n";
                L1.MostrarRemovido();
                cout<<"----------------\n";
            }
        }
        if(opcao == 5){
            cout<<"\nInsira o numero que deseja pesquisar: ";
            cin>>nm;
            if(L2.Pesquisa(nm)){
                L2.Remover_Pesquisa(nm);
                cout<<"\n----------------\n";
                L2.MostrarRemovido();
                cout<<"----------------\n";
            }
        }
        if(opcao == 6){
            int *v;
            int n;
            cout<<"\nInsira o tamanho do vetor: ";
            cin>>n;
            v = (int*) malloc(n * sizeof(int));
            L3.Transforma_Lista(v, n);
        }
    }while(opcao <= 6); 
}