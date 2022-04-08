#include "Pessoa.hpp"
Pessoa::Pessoa(){}
Pessoa::Pessoa(string nome, string endereco){
    this->nome=nome;
    this->endereco=endereco;
}

void Pessoa::setnome(string nome){
    this->nome=nome;
}
string Pessoa::getnome(){
    return this->nome;
}

void Pessoa::setendereco(string endereco){
    this->endereco=endereco;
}
string Pessoa::getendereco(){
    return this->endereco;
}