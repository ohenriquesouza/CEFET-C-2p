#include "disciplina.hpp"
#include "professor.hpp"
using namespace std;

disciplina::disciplina(){

}
disciplina::disciplina(string nome, int ch, professor Professor){
    this->nome=nome;
    this->ch=ch;
    this->Professor=Professor;
}
void disciplina::setnome(string nome){
    this->nome=nome;
}
string disciplina::getnome(){
    return this->nome;
}
void disciplina::setch(int ch){
    this->ch=ch;
}
int disciplina::getch(){
    return this->ch;
}
void disciplina::setProfessor(professor Professor){
    this->Professor=Professor;
}
professor disciplina::getProfessor(){
    return this->Professor;
}