#include "paciente.hpp"
#include <string>
#include <iostream>
using namespace std;

void paciente::setsexo(char sexo){
    this->sexo=sexo;
}
char paciente::getsexo(){
    return this->sexo;
}
void paciente::setnome(string nome){
    this->nome=nome;
}
string paciente::getnome(){
    return this->nome;
}
void paciente::setcpf(int cpf){
    this->cpf=cpf;
}
int paciente::getcpf(){
    return this->cpf;
}
void paciente::setendereco(string endereco){
    this->endereco=endereco;
}
string paciente::getendereco(){
    return this->endereco;
}
void paciente::setpeso(float peso){
    this->peso=peso;
}
float paciente::getpeso(){
    return this->peso;
}