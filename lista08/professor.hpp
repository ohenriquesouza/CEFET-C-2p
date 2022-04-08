#ifndef __PROFESSOR_HPP
#define __PROFESSOR_HPP
#include <iostream>
#include <string>
#include "curso.hpp"
#include "pessoa.hpp"
using namespace std;

class professor:public pessoa{
    private:
        string titulacao;
        string curso;
    public:
        professor();
        professor(string nome, string endereco, char CPF[11], string titulacao, string curso);
        void settitulacao(string titulacao);
        string gettitulacao();
        void setcurso(string curso);
        string getcurso();
};
#endif