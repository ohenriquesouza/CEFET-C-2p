#include "Pessoa.hpp"
#include "PessoaFisica.hpp"
#include "PessoaJuridica.hpp"
#include "ListaPessoaFisica.hpp"
#include "ListaPessoaJuridica.hpp"
#include "ExcecaoCPFInvalido.hpp"
#include "ExcecaoCNPJInvalido.hpp"
#include "ExcecaoNomeGrande.hpp"
#include <iostream>
using namespace std;

int main(){
    //////////////////////////////
    ExcecaoNomeGrande ENOME;
    ExcecaoCNPJInvalido ECNPJ;
    ExcecaoCPFInvalido ECPF;
    //////////////////////////////
    ListaPessoaFisica LPF;
    ListaPessoaJuridica LPJ;
    Pessoa Pessoa_P;
    PessoaFisica PF;
    PessoaJuridica PJ;
    /////////////////////////////
    string nome, endereco, CPF, CNPJ;
    int escolha_menu, inicializa_PF=0, inicializa_PJ=0;
    do{
        cout<<"\n--MENU DE OPCOES--\n";
        cout<<"1- Cadastrar Pessoa fisica."<<endl;
        cout<<"2- Excluir Pessoa fisica."<<endl;
        cout<<"3- Cadastrar Pessoa juridica."<<endl;
        cout<<"4- Excluir pessoa juridica."<<endl;
        cout<<"5- Associar CNPJ a um CPF."<<endl;
        cout<<"6- Imprimir lista de pessoas fisicas."<<endl;
        cout<<"7- Imprimir lista de pessoas juridicas."<<endl;
        cout<<"8- Imprimir associacoes."<<endl;
        cout<<endl;
        cin>>escolha_menu;
        
        if(escolha_menu == 1){
            inicializa_PF=1;
            while(true){
                try{
                    cout<<"\nNome: ";
                    cin.ignore();
                    getline(cin, nome);  
                    LPF.validaNome(nome);
                    break;
                }catch(ExcecaoNomeGrande &ENOME){
                    cout<<ENOME.what()<<endl;
                }
            }
            cout<<"Endereco: ";
            getline(cin, endereco);
            while(true){
                try{    
                    cout<<"CPF: ";
                    getline(cin, CPF);
                    LPF.ValidaCPF(CPF);
                    break;
                }catch(ExcecaoCPFInvalido &ECPF){
                    cout<<ECPF.what()<<endl;
                }
            }
            PessoaFisica Pessoa_Fisica(CPF,nome, endereco);
            LPF.Inserir_final(Pessoa_Fisica);
            cout<<"\nConfirmado cadastro de pessoa fisica!.";
        }
        if(escolha_menu == 2){
            if(inicializa_PF != 1){
                cout<<"Cadastre pelo menos uma pessoa fisica primeiro.\n";
            }else{
                cout<<"\nInsira o CPF que deseja remover: ";
                cin.ignore();
                getline(cin, CPF);
                if(LPF.Pesquisa(CPF)){
                    cout<<"Removendo...\n";
                    LPF.Remover_Pesquisa(CPF);
                    cout<<"Remocao concluida.\n";
                }
            }   
        }
        if(escolha_menu == 3){
            inicializa_PJ=1;
            cout<<"\nNome: ";
            cin.ignore();
            getline(cin, nome);
            cout<<"Endereco: ";
            getline(cin, endereco);
            while(true){
                try{    
                    cout<<"CNPJ: ";
                    getline(cin,CNPJ);
                    LPJ.ValidaCNPJ(CNPJ);
                    break;
                }catch(ExcecaoCNPJInvalido &ECNPJ){
                    cout<<ECNPJ.what()<<endl;
                }
            }
            PessoaJuridica Pessoa_Juridica(CNPJ, nome, endereco);
            LPJ.Inserir_final(Pessoa_Juridica);
             cout<<"\nConfirmado cadastro de pessoa juridica!.";
        }
        if(escolha_menu == 4){
            if(inicializa_PJ != 1){
                cout<<"Cadastre pelo menos uma pessoa juridica primeiro.\n";
            }else{
                cout<<"\nInsira o CNPJ que deseja remover: ";
                cin.ignore();
                getline(cin, CNPJ);
                if(LPF.VerificaAssociacao(CNPJ)){
                    cout<<"\nCNPJ associado a CPF. Remocao impossivel.";
                }
                else if(LPJ.Pesquisa(CNPJ)){
                    cout<<"Removendo...\n";
                    LPJ.Remover_Pesquisa(CNPJ);
                    cout<<"Remocao concluida.\n";
                }
            }    
        }
        if(escolha_menu == 5){
            if(inicializa_PF != 1 || inicializa_PJ != 1){
                cout<<"Dados faltando. Pelo menos um CPF e um CNPJ precisam estar cadastrados.\n";
            }else{
                PessoaJuridica* PJ= new PessoaJuridica;
                PessoaFisica* PF= new PessoaFisica;
                cout<<"\nInsira o CPF da pessoa: ";
                cin.ignore();
                getline(cin, CPF);
                cout<<"Insira o CNPJ: ";
                getline(cin, CNPJ);
                if(LPF.VerificaAssociacao(CNPJ)){
                    cout<<"\nCNPJ ja associado a outro CPF. Associacao negada.";
                }
                else if(LPF.existe(CPF)){
                    if(LPJ.existe(CNPJ)){
                        PJ=LPJ.PesquisaCNPJ(CNPJ);
                        PF=LPF.PesquisaCPF(CPF);
                        PF->inserirPessoaJuridica(PJ);
                    }
                }
            } 
        }
        if(escolha_menu == 6){
            LPF.MostrarTodos();
        }
        if(escolha_menu == 7){
            LPJ.MostrarTodos();
        }
        if(escolha_menu == 8){
            if(inicializa_PF != 1){
                cout<<"Cadastre pelo menos uma pessoa fisica primeiro.\n";
            }else{
                PessoaFisica* PF= new PessoaFisica;
                cout<<"\nInsira o CPF da pessoa: ";
                cin.ignore();
                getline(cin, CPF);
                if(LPF.existe(CPF)){
                    cout<<"CNPJ(s) vinculados ao CPF pesquisado: \n";
                    PF=LPF.PesquisaCPF(CPF);
                    PF->MostrarEmpresas();
                }
            } 
        }
    }while(escolha_menu <=8);
}