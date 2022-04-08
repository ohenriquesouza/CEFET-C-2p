#include "consultorio.hpp"
#include <iostream>
using namespace std;

consultorio::consultorio(){}
void consultorio::setnome(string nome){
    this->nome=nome;
}
string consultorio::getnome(){
    return this->nome;
}
void consultorio::setendereco(string endereco){
    this->endereco=endereco;
}
string consultorio::getendereco(){
    return this->endereco;
}
void consultorio::settelefone(string telefone){
    this->telefone=telefone;
}
string consultorio::gettelefone(){
    return this->telefone;
}
void consultorio::setmedico(paciente medico){
    this->medico=medico;
}
paciente consultorio::getmedico(){
    return this->medico;
}
void consultorio::setvetPacientes(vector <paciente> vetPacientes) {
    this->vetPacientes = vetPacientes;
}
void consultorio::cadastraPaciente(paciente p){
    this->vetPacientes.push_back(p);
}
bool  consultorio::removerPaciente(int cpf){
    vector<paciente>::iterator it1;
    int achou = 0;
    if(this->vetPacientes.size() <= 0){
        cout<<"\nNenhum paciente foi cadastrado.";
        return 0;
    }
  for (auto it = this->vetPacientes.begin(); it != this->vetPacientes.end(); ++it){
    if(it->getcpf() == cpf){
      it1 = it;
      achou = 1;
    }
  }
  if(achou){
      this->vetPacientes.erase(it1);
      cout<<"Paciente removido.";
  }else{
      cout<<"Paciente nao encontrado";
  }
}
void consultorio::imprimirListaDeTodosPacientes(){
    cout<<"--CONSULTORIO: "<<this->getnome()<<"--"<<endl;
    cout<<"\nLISTA DE PACIENTES";
    int cont = 1;
    vector<paciente>::iterator it1;
    if(this->vetPacientes.size() <= 0){
        cout<<"\nNenhum paciente foi cadastrado.";
        return;
    }
    for (auto it = this->vetPacientes.begin(); it != this->vetPacientes.end(); it++){
        cout<<"\n-------------------------------\n";
        cout<<"\nPACIENTE "<<cont<<endl;
        cout<<"Nome: "<<it->getnome()<<endl;
        cout<<"CPF: "<<it->getcpf()<<endl;
        cout<<"Sexo: "<<it->getsexo()<<endl;
        cout<<"Peso: "<<it->getpeso()<<"Kg"<<endl;
        cout<<"Endereco: "<<it->getendereco()<<endl;
        cont++;
    }
}