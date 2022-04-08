#include <iostream>
#include "PessoaFisica.hpp"
#include "ListaPessoaFisica.hpp"
using namespace std;
ListaPessoaFisica::ListaPessoaFisica(){
    Primeiro=NULL;
    Ultimo=NULL;
}
ListaPessoaFisica::ListaPessoaFisica(PessoaFisica Pessoa_Fisica){
    Primeiro= new PessoaFisica(Pessoa_Fisica);
    Ultimo = Primeiro;
}

bool ListaPessoaFisica::Lista_vazia(){
    return (Primeiro==NULL);
}
void ListaPessoaFisica::Inserir_inicio(PessoaFisica Pessoa_Fisica){
   PessoaFisica* novo_no = new PessoaFisica(Pessoa_Fisica.getCPF(), Pessoa_Fisica.getnome(), Pessoa_Fisica.getendereco());
    if(Lista_vazia()){
        Primeiro= novo_no;
        Ultimo= novo_no;
    }else{
        novo_no->setprox(Primeiro);
        Primeiro= novo_no;
    }
}
void ListaPessoaFisica::Inserir_final(PessoaFisica Pessoa_Fisica){
   PessoaFisica* novo_no= new PessoaFisica(Pessoa_Fisica.getCPF(), Pessoa_Fisica.getnome(), Pessoa_Fisica.getendereco());
    if(Lista_vazia()){
        Primeiro= novo_no;
        Ultimo= novo_no;
    }else{
        Ultimo->setprox(novo_no);
        Ultimo= novo_no;
    }
}
int ListaPessoaFisica::Size(){
    if(Lista_vazia()){
        return 0;
    }
   PessoaFisica* c= Primeiro;
    int tam=0;
    do{
        c=c->getprox();
        tam++;
    }while(c);
    return tam;
}
bool ListaPessoaFisica::existe(string CPF){
   PessoaFisica* c= Primeiro;
    while(c){
        if(c->getCPF() == CPF){
            return true;
        }
        c = c->getprox();
    }
    cout<<"\nO CPF procurado nao foi encontrado.\n";
    return false;
}
void ListaPessoaFisica::MostrarTodos(){
   PessoaFisica* c= Primeiro;

    if(Lista_vazia()){
        cout<<"\nImpossivel, a lista nao possui pessoas fisicas cadastradas.\n";
    }else{
        while(c){
                cout<<"-----------------------------\n";
                cout<<"Nome: "<<c->getnome()<<endl;
                cout<<"CPF: "<<c->getCPF()<<endl;
                cout<<"Endereco: "<<c->getendereco()<<endl;
                c= c->getprox();
        }
        cout<< endl;
    }
}

PessoaFisica* ListaPessoaFisica::getPrimeiro(){
    return Primeiro;
}

PessoaFisica* ListaPessoaFisica::getUltimo(){
    return Ultimo;
}

bool ListaPessoaFisica::Pesquisa(string CPF){
    if(!this->Lista_vazia()){
        for(PessoaFisica* i=this->Primeiro; i != NULL; i= i->getprox()){
            if(i->getCPF() == CPF){
                return true;
                break;
            }
        }
        return false;
    }
}

PessoaFisica* ListaPessoaFisica::PesquisaCPF(string CPF){
    if(!this->Lista_vazia()){
        for(PessoaFisica* i=this->Primeiro; i != NULL; i= i->getprox()){
            if(i->getCPF() == CPF){
                return i;
                break;
            }
        }
    }
}

PessoaFisica* ListaPessoaFisica::ObterAnt(string CPF){
   PessoaFisica* aux;

    aux=this->Primeiro;

    if(aux == NULL || aux->getCPF() == CPF){

        return aux;
    }
    while(aux->prox != NULL && CPF != aux->prox->getCPF()){
        aux =  aux->prox;
    }
    return aux;
}

PessoaFisica* ListaPessoaFisica::Remover_Pesquisa(string CPF){
   PessoaFisica* aux;
   PessoaFisica* aux2;

    if(!this->Lista_vazia()){

        aux=this->ObterAnt(CPF);

        if(aux== this->Primeiro && CPF == this->Primeiro->getCPF()){
            Primeiro = Primeiro->getprox();
            delete aux;
        }
        else{
            aux2 = aux->getprox();
            aux->prox = aux2->getprox();
            delete aux2;
        }
    }
}

bool ListaPessoaFisica::ValidaCPF(string CPF){
    int i=0;
    if(CPF.size() != 11){
        throw ExcecaoCPFInvalido();
        return false;
    }
    for(i=0; i<11; i++){
        if(!CPF.at(i) >= 48 && CPF.at(i) <= 57){
            throw ExcecaoCPFInvalido();
            return false;
            break;
        }
    }
    return true;
}

bool ListaPessoaFisica::validaNome(string nome){
    if(nome.size() > 10){
        throw ExcecaoNomeGrande();
        return false;
    }else{
        return true;
    }
}

bool ListaPessoaFisica::VerificaAssociacao(string CNPJ){
    PessoaFisica* c = Primeiro;
    while(c){
        if(c->getLPJ().existe(CNPJ)){
            return true;
        }
        c=c->getprox();
    }
    return false;
}