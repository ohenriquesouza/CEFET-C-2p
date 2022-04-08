#ifndef __MEDICO_HPP
#define __MEDICO_HPP
#include "Pessoa.hpp"
#include <string>
using namespace std;
class Medico:public Pessoa{
    private:
        int CRM;
        string especialidade;
    public:
        Medico();
        Medico(string nome, char sexo, string endereco, int cpf, string telefone, string identidade, int CRM, string especialidade);
        void setCRM(int CRM);
        int getCRM();
        void setespecialidade(string especialidade);
        string getespecialidade();
        void imprimir();
};
#endif