#include "curso.hpp"
#include <iostream>
#include <string.h>

void curso::setnome(string nome){
    this->nome=nome;
}
string curso::getnome(){
    return this->nome;
}
void curso::setvet_professor(vector <professor> vet_professor){
    this->vet_professor=vet_professor;
}
void curso::setvet_aluno(vector <aluno> vet_aluno){
    this->vet_aluno=vet_aluno;
}
void curso::setvet_disciplina(vector <disciplina> vet_disciplina){
    this->vet_disciplina=vet_disciplina;
}
void curso::cadastraProfessor(professor f){
    this->vet_professor.push_back(f);

}
void curso::cadastraAluno(aluno a){
    this->vet_aluno.push_back(a);

}
aluno* curso::pesquisar(int matricula_aluno){
    int achou=0;
    for (vector<aluno>::iterator it=vet_aluno.begin();it != vet_aluno.end(); ++it){
        if(matricula_aluno == it->getmatricula()){
            achou =1;
            return &(*it);
        } 
    }
    if(achou != 1){
        cout<<"\nAluno nao encontrado.\n";
    }
}
disciplina curso::pesquisa_disciplina(string pesquisa_disciplina){
    int achou=0;
    for(vector<disciplina>::iterator it=vet_disciplina.begin();it != vet_disciplina.end(); ++it){
        if(pesquisa_disciplina == it->getnome()){
            achou=1;
            return *it;
        }
    }if(achou != 1){
        cout<<"\nA disciplina nao consta no curso.\n";    
    }
}
void curso::cadastraDisciplina(disciplina d){
    this->vet_disciplina.push_back(d);

}
void curso::imprimirListaDeProfessor(){
    int cont=1;
    vector<professor>::iterator it;
    for(auto it = this->vet_professor.begin(); it != this->vet_professor.end(); it++){
        cout<<"\n--PROFESSOR "<<cont<<"--"<<endl;
        cout<<"Nome: "<<it->getnome()<<endl;
        cout<<"Endereco: "<<it->getendereco()<<endl;
        cout<<"Titulacao: "<<it->gettitulacao()<<endl;
        cout<<"Curso: "<<it->getcurso()<<endl;
        cont++;
    }  
}
void curso::imprimirListaDeDisciplinas(){
    int cont=1;
    vector<disciplina>::iterator it;
    for(auto it = this->vet_disciplina.begin(); it != this->vet_disciplina.end(); it++){
        cout<<"\n--DISCIPLINA "<<cont<<"--"<<endl;
        cout<<"Nome: "<<it->getnome()<<endl;
        cout<<"Carga horaria: "<<it->getch()<<"h"<<endl;
        cont++;
    } 
}

void curso::imprimirListaDeAlunos(){
    int cont=1;
    vector<aluno>::iterator it;
    for(auto it = this->vet_aluno.begin(); it != this->vet_aluno.end(); it++){
        cout<<"\n--ALUNO "<<cont<<"--"<<endl;
        cout<<"Nome: "<<it->getnome()<<endl;
        cout<<"Endereco: "<<it->getendereco()<<endl;
        cout<<"Matricula: "<<it->getmatricula()<<endl;
        cout<<"Cursando: "<<it->getvet_disciplina()<<" disciplina(s)."<<endl;
        cont++;
    } 
}
professor curso::pesquisar_professor(string nome_professor){
    int achou=0;
    for (vector<professor>::iterator it=vet_professor.begin();it != vet_professor.end(); ++it){
        if(nome_professor == it->getnome()){
            achou =1;
            return *it;
        } 
    }
    if(achou != 1){
        cout<<"\nProfessor nao encontrado.\n";
    }
}
bool curso::Verifica_CPF(char CPF[11]){
    int i=0;
    if(strlen(CPF) != 11){
       throw ExcecaoCPFInvalido();
        return false;
    }
    for(i=0; i<11;i++){
        if(!(CPF[i] >= 48 && CPF[i]<= 57)){
            throw ExcecaoCPFInvalido();
            return false;
            break;
        }
    }
    return true;
}

bool curso::Verifica_aluno(int matricula_aluno){
    for (vector<aluno>::iterator it=vet_aluno.begin();it != vet_aluno.end(); ++it){
        if(matricula_aluno != it->getmatricula()){
            throw ExcecaoAlunoInexistente();
            return false;
        } 
    }
    return true;
}

bool curso::verifica_ch(char valida_ch[3]){
    int i=0;
     for(i=0; i<2;i++){
        if(!(valida_ch[i] >= 48 && valida_ch[i] <= 57)){
            throw ExcecaoCHInvalida();
            return false;
            break;
        }
    }
    return true;
}