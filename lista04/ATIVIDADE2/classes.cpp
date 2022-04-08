#include <iostream>
#include "classes.hpp"
using namespace std;

elevador::elevador(){}

elevador::elevador(int x, int y){
    this->capacidadeMaxElv=x;
    this->qntTotalAndares=y;
    this->andarAtual=0;
    this->qntPessoas=0;
}

void elevador::setandarAtual(int andarAtual){
    this->andarAtual = andarAtual;
}
int elevador::getandarAtual(){
    return this->andarAtual;
}

void elevador::setqntTotalAndares(int qntTotalAndares){
    this->qntTotalAndares = qntTotalAndares;
}
int elevador::getqntTotalAndares(){
    return this->qntTotalAndares;
}

void elevador::setcapacidadeMaxElv(int capacidadeMaxElv){
    this->capacidadeMaxElv = capacidadeMaxElv;
}
int elevador::getcapacidadeMaxElv(){
    return this->capacidadeMaxElv;
}

void elevador::setqntPessoas(int qntPessoas){
    this->qntPessoas = qntPessoas;
}
int elevador::getqntPessoas(){
    return this->qntPessoas;
}

void elevador::entra(){
    if(this->qntPessoas < this->capacidadeMaxElv){
        this->qntPessoas += 1;
    }else{
        cout<<"Elevador lotado.";
        this->qntPessoas = this->qntPessoas;
    }      
}

void elevador::sai(){
    if(this->qntPessoas >= 1){
        this->qntPessoas -= 1;
    }else if(this->qntPessoas == 0){
        cout<<"Elevador vazio.";
        this->qntPessoas = this->qntPessoas;
    }
}

void elevador::sobe(){
    if(this->andarAtual < this->qntTotalAndares){
        this->andarAtual += 1;
    }else{
        cout<<"Nao eh possivel subir mais um andar.";
        this->andarAtual = this->andarAtual;
    }
}

void elevador::desce(){
    if(this->andarAtual != 0){
        this->andarAtual -= 1;
    }else{
        cout<<"Nao eh possivel descer mais um andar.";
        this->andarAtual=this->andarAtual;
    }
}

void elevador::imprimir(){
    cout<< "Andar atual: "<<this->andarAtual<<endl;
    cout<< "Quantidade de pessoas no elevador: "<<this->qntPessoas<<endl;
    cout<< "Limite de pessoas no elevador: "<<this->capacidadeMaxElv<<endl;   
}