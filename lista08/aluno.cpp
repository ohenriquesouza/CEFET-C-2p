#include <iostream>
#include "aluno.hpp"

aluno::aluno(int matricula, string nome, string endereco, char CPF[11]):pessoa(nome, endereco, CPF){
    this->matricula=matricula;
}
aluno::aluno(){

}
int aluno::getvet_disciplina(){
    return vet_disciplina.size();
}
int aluno::getmatricula(){
    return this->matricula;
}
void aluno::setmatricula(int matricula){
    this->matricula=matricula;
}
void aluno::setvet_disciplina(vector <disciplina> vet_disciplina){
    this->vet_disciplina=vet_disciplina;
}
void aluno::adicionarDisciplina(disciplina d){
    int matriculado=0;
    for(vector<disciplina>::iterator it=vet_disciplina.begin();it != vet_disciplina.end(); ++it){
        if(d.getnome() == it->getnome()){
            matriculado=1;
        }
    }
    if(matriculado == 1){
        cout<<"\nO aluno ja esta matriculado na disciplina.\n";
    }else{
        if(this->vet_disciplina.size()<=7){
            this->vet_disciplina.push_back(d);
            cout<<"\nConfirmado adicao de disciplina.\n";
        }else{
                cout<<"\nO aluno ja atingiu o limite de disciplinas.\n";
            }
    }
}
void aluno::removerDisciplina(string pesquisa_disciplina, disciplina d){
    for(vector<disciplina>::iterator it=vet_disciplina.begin();it != vet_disciplina.end(); ++it){
        if(pesquisa_disciplina == it->getnome()){
            this->vet_disciplina.erase(it);
            cout<<"\nConfirmada saida do aluno.\n"; 
            break;
        }else{
            cout<<"\nO aluno nao consta nessa disciplina.\n";
        }
    }
}
void aluno::imprime_disciplinas(){
    if(vet_disciplina.size()>0){
        cout<<"\nO aluno "<<this->getnome()<<" esta cursando:"<<endl;
        for(vector<disciplina>::iterator it=vet_disciplina.begin();it != vet_disciplina.end(); ++it){
            cout<<it->getnome()<<endl;
        }
    }else{
        cout<<"\nO aluno nao esta cursando nenhuma disciplina.\n";
    }   
}