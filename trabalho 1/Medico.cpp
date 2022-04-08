#include "Medico.hpp"
#include <string>
Medico::Medico(){

}
Medico::Medico(string nome, char sexo, string endereco, int cpf, string telefone, string identidade, int CRM, string especialidade):Pessoa(nome, sexo, endereco, cpf, telefone, identidade){
    this->CRM=0;
    this->especialidade=especialidade;
}
void Medico::setCRM(int CRM){
    this->CRM=CRM;
}
int Medico::getCRM(){
    return this->CRM;
}
void Medico::setespecialidade(string especialidade){
    this->especialidade=especialidade;
}
string Medico::getespecialidade(){
    return this->especialidade;
}