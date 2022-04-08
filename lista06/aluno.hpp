#ifndef __ALUNO_HPP
#define __ALUNO_HPP
#include "pessoa.hpp"
#include "disciplina.hpp"
#include <iostream>
#include <vector>
using namespace std;

class aluno:public pessoa{
    private:
        int matricula;
        vector <disciplina> vet_disciplina;
    public:
        void removerDisciplina(string pesquisa_disciplina, disciplina d);
        void atualizarAluno();
        void adicionarDisciplina(disciplina d);
        aluno();
        aluno(int matricula, string nome, string endereco);
        void setmatricula(int matricula);
        int getmatricula();
        void setvet_disciplina(vector <disciplina> vet_disciplina);
        int getvet_disciplina();
        void imprime_disciplinas();
};
#endif