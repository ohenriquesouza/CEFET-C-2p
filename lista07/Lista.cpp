#include <iostream>
#include "No.hpp"
#include "Lista.hpp"
Lista::Lista(){
    Primeiro=NULL;
    Ultimo=NULL;
}
Lista::Lista(int v){
    Primeiro= new No(v);
    Ultimo = Primeiro;
}
// Lista::~Lista(){
//     delete Primeiro;
// }
bool Lista::Lista_vazia(){
    return (Primeiro==NULL);
}
void Lista::Inserir_inicio(int v){
    No* novo_no = new No(v);
    if(Lista_vazia()){
        Primeiro= novo_no;
        Ultimo= novo_no;
    }else{
        novo_no->setProx(Primeiro);
        Primeiro= novo_no;
    }
}
void Lista::Inserir_final(int v){
    No* novo_no= new No(v);
    if(Lista_vazia()){
        Primeiro= novo_no;
        Ultimo= novo_no;
    }else{
        Ultimo->setProx(novo_no);
        Ultimo= novo_no;
    }
}
int Lista::Size(){
    if(Lista_vazia()){
        return 0;
    }
    No* c= Primeiro;
    int tam=0;
    do{
        c=c->ObterProx();
        tam++;
    }while(c);
    return tam;
}
bool Lista::Existe(int v){
    No* c= Primeiro;
    while(c){
        if(c->ObterValor() == v){
            return true;
        }
        c = c->ObterProx();
    }
    return false;
}
No* Lista::Remover(){
    if(!Lista_vazia()){
        No* aux;
        if(Primeiro->ObterProx()==NULL){
            aux=Primeiro;
            Primeiro = NULL;
        }
        else if(Primeiro->ObterProx()->ObterProx()==NULL){
            aux=Primeiro->ObterProx();
            Primeiro->setProx(NULL);
        }
        else
		{
			No* ant_ant = Primeiro;
			No* ant = Primeiro->ObterProx();
			No* corrente = Primeiro->ObterProx()->ObterProx();

			while(corrente)
			{
				No* aux = ant;
				ant = corrente;
				ant_ant = aux;
				corrente = corrente->ObterProx();
			}
            aux= ant_ant->ObterProx();
			delete ant_ant->ObterProx(); 
			ant_ant->setProx(NULL); 
			Ultimo = ant_ant;
		}
        return aux;
    }else{
        return NULL;
    }
}
void Lista::MostrarTodos(){
    cout<<"Concatenando..."<<endl;
    No* c= Primeiro;

    if(Lista_vazia()){
        cout<<"Impossivel, a lista nao possui elementos!";
    }else{
        while(c){
            cout<<c->ObterValor()<<endl;
            c= c->ObterProx();
        }
        cout<< endl;
    }
    cout<<"Concatenacao realizada.\n";
}

No* Lista::getPrimeiro(){
    return Primeiro;
}

No* Lista::getUltimo(){
    return Ultimo;
}

void Lista::Concatena(Lista L2){
    if(!L2.Lista_vazia()){
        No* aux;

        aux=L2.getPrimeiro();

        this->Ultimo->setProx(aux);
    }
}

void Lista::MostrarOrdenado(){
    cout<<"Ordenando..."<<endl;

    No* c= Primeiro;

    if(Lista_vazia()){
        cout<<"Impossivel, a lista nao possui elementos!";
    }else{
        while(c){
            cout<<c->ObterValor()<<endl;

            c= c->ObterProx();
        }
        cout<< endl;
    }
    cout<<"Ordenacao realizada.\n";
}

void Lista::Ordena(){
    if(!this->Lista_vazia()){
        for(No* i=this->Primeiro; i->ObterProx() != NULL; i=i->ObterProx()){

            No* maior = i;

            for(No* j=i->ObterProx(); j != NULL; j=j->ObterProx()){

                if(j->ObterValor() > maior->ObterValor()){

                    maior=j;
                }
            }
            int aux = i->ObterValor();

            i->v = maior->ObterValor();

            maior->v= aux;
        }
    }
}

bool Lista::Pesquisa(int nm){
    if(!this->Lista_vazia()){

        for(No* i=this->Primeiro; i != NULL; i= i->ObterProx()){
            if(i->v == nm){
                return true;
                break;
            }
        }
        return false;
    }
}

No* Lista::ObterAnt(int nm){
    No* aux;

    aux=this->Primeiro;

    if(aux == NULL || aux->ObterValor() == nm){

        return aux;
    }
    while(aux->prox != NULL && nm != aux->prox->ObterValor()){
        aux =  aux->prox;
    }
    return aux;
}

No* Lista::Remover_Pesquisa(int nm){
    No* aux;
    No* aux2;

    if(!this->Lista_vazia()){

        aux=this->ObterAnt(nm);

        if(aux== this->Primeiro && nm == this->Primeiro->ObterValor()){
            Primeiro = Primeiro->ObterProx();
            delete aux;
        }
        else{
            aux2 = aux->ObterProx();
            aux->prox = aux2->ObterProx();
            delete aux2;
        }
    }
}

void Lista::MostrarRemovido(){
    cout<<"Removendo..."<<endl;

    No* c= Primeiro;

    if(Lista_vazia()){
        cout<<"Impossivel, a lista nao possui elementos!";
    }else{
        while(c){
            cout<<c->ObterValor()<<endl;

            c= c->ObterProx();
        }
        cout<< endl;
    }
    cout<<"Remocao concluida.\n";
}

Lista Lista::Transforma_Lista(int *v, int n){
    int i=0;
    int aux;
    if(n==0){
        cout<<"Erro, lista vazia.";
        this->Primeiro == NULL;
        return 0;
    }else{
        for(i=0;i<n;i++){
            cout<<"Insira o '"<<i+1<<"' valor do vetor: ";
            cin>>aux;
            v[i]=aux;
            Inserir_final(v[i]);
        }
        this->MostrarVetorLista();
    }
}
void Lista::MostrarVetorLista(){
    cout<<"Imprimindo...\n"<<endl;

    No* c= Primeiro;

    if(Lista_vazia()){
        cout<<"Impossivel, a lista nao possui elementos!";
    }else{
        while(c){
            cout<<c->ObterValor()<<endl;

            c= c->ObterProx();
        }
        cout<< endl;
    }
    cout<<"Concluido.\n";
}