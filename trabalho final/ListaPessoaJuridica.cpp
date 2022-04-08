#include <iostream>
#include "PessoaJuridica.hpp"
#include "ListaPessoaJuridica.hpp"
ListaPessoaJuridica::ListaPessoaJuridica(){
    Primeiro=NULL;
    Ultimo=NULL;
}
ListaPessoaJuridica::ListaPessoaJuridica(PessoaJuridica Pessoa_Juridica){
    Primeiro= new PessoaJuridica(Pessoa_Juridica);
    Ultimo = Primeiro;
}

bool ListaPessoaJuridica::Lista_vazia(){
    return (Primeiro==NULL);
}
void ListaPessoaJuridica::Inserir_inicio(PessoaJuridica Pessoa_Juridica){
   PessoaJuridica* novo_no = new PessoaJuridica(Pessoa_Juridica.getCNPJ(), Pessoa_Juridica.getnome(), Pessoa_Juridica.getendereco());
    if(Lista_vazia()){
        Primeiro= novo_no;
        Ultimo= novo_no;
    }else{
        novo_no->setprox(Primeiro);
        Primeiro= novo_no;
    }
}
void ListaPessoaJuridica::Inserir_final(PessoaJuridica Pessoa_Juridica){
   PessoaJuridica* novo_no= new PessoaJuridica(Pessoa_Juridica.getCNPJ(), Pessoa_Juridica.getnome(), Pessoa_Juridica.getendereco());
    if(Lista_vazia()){
        Primeiro= novo_no;
        Ultimo= novo_no;
    }else{
        Ultimo->setprox(novo_no);
        Ultimo= novo_no;
    }
}
int ListaPessoaJuridica::Size(){
    if(Lista_vazia()){
        return 0;
    }
   PessoaJuridica* c= Primeiro;
    int tam=0;
    do{
        c=c->getprox();
        tam++;
    }while(c);
    return tam;
}
bool ListaPessoaJuridica::existe(string CNPJ){
   PessoaJuridica* c= Primeiro;
    while(c){
        if(c->getCNPJ() == CNPJ){
            return true;
        }
        c = c->getprox();
    }
    cout<<"\nO CNPJ procurado nao foi encontrado.\n";
    return false;
}
void ListaPessoaJuridica::MostrarTodos(){
   PessoaJuridica* c= Primeiro;

    if(Lista_vazia()){
        cout<<"\nImpossivel, a lista nao possui pessoas juridicas cadastradas!\n";
    }else{
        while(c){
                cout<<"-----------------------------\n";
                cout<<"Nome: "<<c->getnome()<<endl;
                cout<<"CNPJ: "<<c->getCNPJ()<<endl;
                cout<<"Endereco: "<<c->getendereco()<<endl;
                c= c->getprox();
        }
        cout<< endl;
    }
}

PessoaJuridica* ListaPessoaJuridica::getPrimeiro(){
    return Primeiro;
}

PessoaJuridica* ListaPessoaJuridica::getUltimo(){
    return Ultimo;
}

bool ListaPessoaJuridica::Pesquisa(string CNPJ){
    if(!this->Lista_vazia()){
        for(PessoaJuridica* i=this->Primeiro; i != NULL; i= i->getprox()){
            if(i->getCNPJ() == CNPJ){
                return true;
                break;
            }
        }
        return false;
    }
}

PessoaJuridica* ListaPessoaJuridica::PesquisaCNPJ(string CNPJ){
    if(!this->Lista_vazia()){
        for(PessoaJuridica* i=this->Primeiro; i != NULL; i= i->getprox()){
            if(i->getCNPJ() == CNPJ){
                return i;
                break;
            }
        }
    }
}

PessoaJuridica* ListaPessoaJuridica::ObterAnt(string CNPJ){
   PessoaJuridica* aux;

    aux=this->Primeiro;

    if(aux == NULL || aux->getCNPJ() == CNPJ){

        return aux;
    }
    while(aux->prox != NULL && CNPJ != aux->prox->getCNPJ()){
        aux =  aux->prox;
    }
    return aux;
}

PessoaJuridica* ListaPessoaJuridica::Remover_Pesquisa(string CNPJ){
   PessoaJuridica* aux;
   PessoaJuridica* aux2;

    if(!this->Lista_vazia()){

        aux=this->ObterAnt(CNPJ);

        if(aux== this->Primeiro && CNPJ == this->Primeiro->getCNPJ()){
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

bool ListaPessoaJuridica::ValidaCNPJ(string CNPJ){
    int i=0;
    if(CNPJ.size() != 14){
        throw ExcecaoCNPJInvalido();
        return false;
    }
    for(i=0; i<14;i++){
        if(!CNPJ.at(i) >= 48 && CNPJ.at(i) <= 57){
            throw ExcecaoCNPJInvalido();
            return false;
            break;
        }
    }
    return true;
}