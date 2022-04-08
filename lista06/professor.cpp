#include "professor.hpp"
#include <iostream>

professor::professor(){

}
professor::professor(string nome, string endereco, string titulacao, string curso):pessoa(nome, endereco){
    this->titulacao=titulacao;
    this->curso=curso;
}
void professor::settitulacao(string titulacao){
    this->titulacao=titulacao;
}
string professor::gettitulacao(){
    return this->titulacao;
}
void professor::setcurso(string curso){
    this->curso=curso;
}
string professor::getcurso(){
    return this->curso;
}