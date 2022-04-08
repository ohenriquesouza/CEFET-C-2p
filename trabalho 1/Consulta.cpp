#include "Consulta.hpp"
#include <iostream>
#include <string>
void Consulta::setdata(string data){
    this->data=data;
}
string Consulta::getdata(){
    return this->data;
}
void Consulta::sethora(string hora){
    this->hora=hora;
}
string Consulta::gethora(){
    return this->hora;
}
void Consulta::setpaciente(Paciente paciente){
    this->paciente=paciente;
}
Paciente Consulta::getpaciente(){
    return this->paciente;
}
void Consulta::setmedico(Medico medico){
    this->medico=medico;
}
Medico Consulta::getmedico(){
    return this->medico;
}