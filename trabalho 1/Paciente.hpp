#ifndef __PACIENTE_HPP
#define __PACIENTE_HPP
#include "Pessoa.hpp"
using namespace std;
class Paciente:public Pessoa{
    private:
        string relato;
        string dataUltimaConsulta;
        string medicacaoQueToma;
    public:
        Paciente();
        Paciente(string nome, char sexo, string endereco, int cpf, string telefone, string identidade, string relato, string dataUltimaConsulta, string medicacaoQueToma);
        void setrelato(string relato);
        string getrelato();
        void setdataUltimaConsulta(string dataUltimaConsulta);
        string getdataUltimaConsulta();
        void setmedicacaoQueToma(string medicacaoQueToma);
        string getmedicacaoQueToma();
        void imprimir();
};
#endif