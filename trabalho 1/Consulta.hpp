#ifndef __CONSULTA_HPP
#define __CONSULTA_HPP
#include <string>
#include "Medico.hpp"
#include "Paciente.hpp"
using namespace std;
class Consulta{
    private:
        string data;
        string hora;
        Paciente paciente;
        Medico medico;
    public:
        void setdata(string data);
        string getdata();
        void sethora(string hora);
        string gethora();
        void imprimir();
        void setpaciente(Paciente paciente);
        Paciente getpaciente();
        void setmedico(Medico medico);
        Medico getmedico();
};
#endif