#include "pessoa.hpp"
#include <iostream>
using namespace std;

pessoa::pessoa(){

}
pessoa::pessoa(string n, string e){
    this->nome=n;
    this->endereco=e;
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