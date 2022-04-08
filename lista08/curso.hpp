#ifndef __CURSO_HPP
#define __CURSO_HPP
#include <iostream>
#include "professor.hpp"
#include "aluno.hpp"
#include "disciplina.hpp"
#include <string>
#include <vector>
using namespace std;

class curso{
    private:
        string nome;
        vector <professor> vet_professor;
        vector <aluno> vet_aluno;
        vector <disciplina> vet_disciplina;
    public:
        void setnome(string nome);
        disciplina pesquisa_disciplina(string pesquisa_disciplina);
        aluno* pesquisar(int matricula_aluno);
        aluno atulizarAluno(aluno a, int matricula_aluno);
        string getnome();
        professor pesquisar_professor(string nome_professor);
        bool verifica_ch(char valida_ch[3]);
        bool Verifica_aluno(int matricula_aluno);
        bool Verifica_CPF(char CPF[11]);
        void setvet_professor(vector <professor> vet_professor );
        void setvet_aluno(vector <aluno> vet_aluno);
        void setvet_disciplina(vector <disciplina> vet_disciplina);
        void cadastraProfessor(professor f);
        void cadastraAluno(aluno a);
        void cadastraDisciplina(disciplina d);
        void imprimirListaDeDisciplinas();
        void imprimirListaDeProfessor();
        void imprimirListaDeAlunos();
};
#endif