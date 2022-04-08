#include "Paciente.hpp"
Paciente::Paciente(){

}
Paciente::Paciente(string nome, char sexo, string endereco, int cpf, string telefone, string identidade, string relato, string dataUltimaConsulta, string medicacaoQueToma):Pessoa(nome, sexo, endereco, cpf, telefone, identidade){
   this->relato=relato;
   this->dataUltimaConsulta=dataUltimaConsulta;
   this->medicacaoQueToma=medicacaoQueToma;
}
void Paciente::setrelato(string relato){
    this->relato=relato;
}
string Paciente::getrelato(){
    return this->relato;
}
void Paciente::setdataUltimaConsulta(string dataUltimaConsulta){
    this->dataUltimaConsulta=dataUltimaConsulta;
}
string Paciente::getdataUltimaConsulta(){
    return this->dataUltimaConsulta;
}
void Paciente::setmedicacaoQueToma(string medicacaoQueToma){
    this->medicacaoQueToma=medicacaoQueToma;
}
string Paciente::getmedicacaoQueToma(){
    return this->medicacaoQueToma;
}