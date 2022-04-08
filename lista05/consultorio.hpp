#ifndef __CONSULTORIO_HPP
#define __CONSULTORIO_HPP
#include "paciente.hpp"
#include <string>
#include <vector>
using namespace std;

class consultorio{
    private:
        string nome;
        string endereco;
        string telefone;
        paciente medico;
        vector <paciente> vetPacientes;
    public:
        consultorio();
        void cadastraPaciente(paciente p);
        bool removerPaciente(int cpf);
        void imprimirListaDeTodosPacientes();
        void setnome(string nome);
        string getnome();
        void setendereco(string endereco);
        string getendereco();
        void settelefone(string telefone);
        string gettelefone();
        void setmedico(paciente medico);
        paciente getmedico();
        void setvetPacientes(vector <paciente> vetPacientes);
};
#endif