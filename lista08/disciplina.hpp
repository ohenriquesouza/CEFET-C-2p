#ifndef __DISCIPLINA_HPP
#define __DISCIPLINA_HPP
#include "professor.hpp"
#include <iostream>
#include <string>
using namespace std;

class disciplina{
    private:
        string nome;
        int ch;
        professor Professor;
    public: 
        disciplina();
        disciplina(string nome, int ch, professor Professor);
        void setnome(string nome);
        string getnome();
        void setch(int ch);
        int getch();
        void setProfessor(professor Professor);
        professor getProfessor();
};
#endif