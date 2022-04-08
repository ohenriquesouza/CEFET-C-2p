#ifndef CONSULTORIO_HPP
#define CONSULTORIO_HPP
#include <vector>
#include <string>
#include "Paciente.hpp"
#include "Medico.hpp"
#include "Consulta.hpp"
using namespace std;
class Consultorio{
    private:
        string nome;
        string endereco;
        string telefone;
        int contPaciente;
        vector <Paciente> vetPaciente;
        vector <Medico> vetmedico;
        vector <Consulta> vetconsulta;
    public:
        Consultorio();
        void setnome(string nome);
        string getnome();
        void setendereco(string endereco);
        string getendereco();
        void settelefone(string telefone);
        string gettelefone();
        void imprimirDadosMedico(int crm, Medico m);
        void setvetPaciente(vector <Paciente> vetPaciente);
        void setmedico(vector <Medico> vetmedico);
        void setconsulta(vector <Consulta> vetconsulta);
        void setcontPaciente(int contPaciente);
        int getcontPaciente();
        void cadastrarPaciente(Paciente p);
        bool removerPaciente(int cpf, Paciente p);
        void cadastrarMedico(Medico m);
        bool removerMedico(int CRM, Medico m);
        void cadastrarConsulta(Consulta cl);
        void removerConsulta(string data, int cpf, Consulta cl, Paciente p);
        void imprimirListaDeTodosOsPacientes();
        void imprimirConsultas();
        void imprimirConsultaEspecifica(Medico m, Pessoa p);
        void imprimirConsultaDoMedico(int CRM, string data);
        void imprimirListaDeMedico();
        Medico* pesquisaMedico(int crm);
        Paciente* pesquisaPaciente(int cpf);
};
#endif