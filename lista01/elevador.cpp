#include <iostream>
#include "elevador.hpp"
using namespace std;

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

void elevador::inicializa(){
    cout<< "Insira a capacidade maxima do elevador: ";
    cin>> capacidadeMaxElv;
    cout<< "Quantos andares tem o predio?: ";
    cin>> qntTotalAndares;
}

void elevador::entra(){
    if(qntPessoas < capacidadeMaxElv){
        qntPessoas += 1;
    }      
}

void elevador::sai(){
    if(qntPessoas >= 1){
        qntPessoas -= 1;
    }
}

void elevador::sobe(){
    if(andarAtual < qntTotalAndares - 1){
        andarAtual += 1;
    }
}

void elevador::desce(){
    if(andarAtual != 0){
        andarAtual -= 1;
    }
}

void elevador::imprimir(){
    cout<< "Andar atual: "<<andarAtual<<endl;
    cout<< "Quantidade de pessoas no elevador: "<<qntPessoas<<endl;
    cout<< "Limite de pessoas no elevador: "<<capacidadeMaxElv<<endl;   
}