#include "PessoaJuridica.hpp"

PessoaJuridica::PessoaJuridica(){}

PessoaJuridica::PessoaJuridica(string CNPJ, string nome, string endereco):Pessoa(nome, endereco){
    this->CNPJ=CNPJ;
    this->prox= NULL;
}

void PessoaJuridica::setCNPJ(string CNPJ){
    this->CNPJ=CNPJ;
}
string PessoaJuridica::getCNPJ(){
    return this->CNPJ;
}

void PessoaJuridica::setprox(PessoaJuridica* Pessoa_Juridica){
    this->prox=Pessoa_Juridica;
}
PessoaJuridica* PessoaJuridica::getprox(){
    return prox;
}
