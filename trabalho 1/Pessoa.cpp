#include "Pessoa.hpp"
Pessoa::Pessoa(){

}
Pessoa::Pessoa(string nome, char sexo, string endereco, int cpf, string telefone, string identidade){
    this->nome=nome;
    this->sexo=sexo;
    this->endereco=endereco;
    this->cpf=cpf;
    this->telefone=telefone;
    this->identidade=identidade;
}
void Pessoa::setnome(string nome){
    this->nome=nome;
}
string Pessoa::getnome(){
    return this->nome;
}
void Pessoa::setsexo(char sexo){
    this->sexo=sexo;
}
char Pessoa::getsexo(){
    return this->sexo;
}
void Pessoa::setendereco(string endereco){
    this->endereco=endereco;
}
string Pessoa::getendereco(){
    return this->endereco;
}
void Pessoa::setcpf(int cpf){
    this->cpf=cpf;
}
int Pessoa::getcpf(){
    return this->cpf;
}
void Pessoa::settelefone(string telefone){
    this->telefone=telefone;
}
string Pessoa::gettelefone(){
    return this->telefone;
}
void Pessoa::setidentidade(string identidade){
    this->identidade=identidade;
}
string Pessoa::getidentidade(){
    return this->identidade;
}