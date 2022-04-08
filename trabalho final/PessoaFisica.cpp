#include "PessoaFisica.hpp"
#include <iostream>

PessoaFisica::PessoaFisica(){}

PessoaFisica::PessoaFisica(string CPF, string nome, string endereco):Pessoa(nome, endereco){
    this->CPF=CPF;
    this->prox = NULL;
}
void PessoaFisica::setCPF(string CPF){
    this->CPF=CPF;
}
string PessoaFisica::getCPF(){
    return this->CPF;
}

void PessoaFisica::setprox(PessoaFisica* Pessoa_Fisica){
    this->prox=Pessoa_Fisica;
}

PessoaFisica* PessoaFisica::getprox(){
    return prox;
}

void PessoaFisica::inserirPessoaJuridica(PessoaJuridica* PJ){
    LPJ.Inserir_final(*PJ);
}

void PessoaFisica::MostrarEmpresas(){
    LPJ.MostrarTodos();
}

void PessoaFisica::setLPJ(ListaPessoaJuridica LPJ){
    this->LPJ=LPJ;
}
ListaPessoaJuridica PessoaFisica::getLPJ(){
    return this->LPJ;
}