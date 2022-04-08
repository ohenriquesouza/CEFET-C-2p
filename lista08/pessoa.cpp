#include "pessoa.hpp"
#include <iostream>
using namespace std;

pessoa::pessoa(){

}
pessoa::pessoa(string n, string e, char c[11]){
    this->nome=n;
    this->endereco=e;
    this->CPF[11]=c[11];
}
string pessoa::getnome(){
    return this->nome;
}
string pessoa::getendereco(){
    return this->endereco;
}
void pessoa::setnome(string nome){
    this->nome=nome;
}
void pessoa::setendereco(string endereco){
    this->endereco=endereco;
}
void pessoa::setCPF(char CPF[11]){
    this->CPF[11]=CPF[11];
}
char pessoa::getCPF(){
    return this->CPF[11];
}