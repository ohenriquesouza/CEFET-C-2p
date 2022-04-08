#include <iostream>
#include <string>
#include <vector>
#include "pessoa.hpp"
#include "curso.hpp"
#include "pessoa.cpp"
#include "curso.cpp"
#include "aluno.cpp"
#include "disciplina.cpp"
#include "professor.cpp"
#include "aluno.hpp"
#include "disciplina.hpp"
#include "professor.hpp"
using namespace std;

int main(){
    curso c;
    string nome_aluno, endereco_aluno, disciplina_aluno;
    int matricula_aluno;
    string nome_disciplina, pesquisa_disciplina;
    int cont_erro=0,ch_disciplina;
    string nome_professor, endereco_professor, titulacao_professor, curso_professor;
    string nome_curso;
    vector <professor> vet_professor;
    vector <aluno> vet_aluno;
    vector <disciplina> vet_disciplina;
    int inicializa=0;

    string opcao;
    do{
        cont_erro=0;
        if(cont_erro <= 1){
            cout<<"\n--MENU DE OPCOES--\n";
            cout<<"1- Preencher dados do curso;\n";
            cout<<"2- Cadastrar Professor;\n";
            cout<<"3- Cadastrar Aluno;\n";
            cout<<"4- Associar aluno a disciplina(s);\n";
            cout<<"5- Retirar aluno de disciplina;\n";
            cout<<"6- Cadastrar disciplina;\n";
            cout<<"7- Imprimir lista de professores do curso;\n";
            cout<<"8- Imprimir lista de alunos de um curso;\n";
            cout<<"9- Imprimir lista de disciplinas;\n";
            cout<<"10- Imprimir lista de disciplinas por aluno.\n";
            cout<<"11- Finalizar programa;\n";
            cout<<"\n";
            cin>>opcao;
            if(opcao=="1"){
                aluno a;
                disciplina d;
                professor f;
                inicializa++;
                ///////////////////////////////
                cout<<"Informe o nome do curso: ";
                cin.ignore();
                getline(cin,nome_curso);
                cout<<"***************************\n";
                //////////////////////////////
                cout<<"Insira o nome do professor: ";
                getline(cin,nome_professor);
                f.setnome(nome_professor);
                cout<<"Insira o endereco do professor: ";
                getline(cin,endereco_professor);
                f.setendereco(endereco_professor);
                cout<<"Insira a titulacao do professor: ";
                getline(cin, titulacao_professor);
                f.settitulacao(titulacao_professor);
                f.setcurso(nome_curso);
                cout<<"***************************\n";
                ///////////////////////////////////////
                cout<<"Insira o nome da disciplina: ";
                getline(cin, nome_disciplina);
                d.setnome(nome_disciplina);
                cout<<"Insira a carga horaria da disciplina: ";
                cin>>ch_disciplina;
                d.setch(ch_disciplina);
                d.setProfessor(f);
                cout<<"***************************\n";
                ////////////////////////////////////////
                cout<<"Insira o nome do aluno: ";
                cin.ignore();
                getline(cin, nome_aluno);
                a.setnome(nome_aluno);
                cout<<"Insira o endereco do aluno: ";
                getline(cin, endereco_aluno);
                a.setendereco(endereco_aluno);
                cout<<"Insira a matricula do aluno: ";
                cin>>matricula_aluno;
                a.setmatricula(matricula_aluno);
                a.adicionarDisciplina(d);
                c.cadastraAluno(a);
                c.cadastraDisciplina(d);
                c.cadastraProfessor(f);
                cout<<"-------------------------\n";
                ////////////////////////////////////
        }
            if(opcao=="2"){
                if(inicializa>0){
                    professor f;
                    cout<<"Insira o nome do professor: ";
                    cin.ignore();
                    getline(cin,nome_professor);
                    f.setnome(nome_professor);
                    cout<<"Insira o endereco do professor: ";
                    getline(cin,endereco_professor);
                    f.setendereco(endereco_professor);
                    cout<<"Insira a titulacao do professor: ";
                    getline(cin, titulacao_professor);
                    cout<<"Insira o nome do curso que o professor trabalha: ";
                    getline(cin, curso_professor);
                    if(curso_professor != nome_curso){
                        cout<<"\nO curso informado nao esta cadastrado.\n";
                        cont_erro++;
                        cont_erro=0;
                    }
                    f.setcurso(curso_professor);
                    f.settitulacao(titulacao_professor);
                    c.cadastraProfessor(f);
                    cout<<"-------------------------\n";
                }else{
                    cout<<"\nNao eh possivel acessar essa opcao sem antes cadastrar um curso.\n";
                }       
        }
            if(opcao=="3"){
                if(inicializa>0){
                    aluno a;
                    cout<<"Insira o nome do aluno: ";
                    cin.ignore();
                    getline(cin, nome_aluno);
                    a.setnome(nome_aluno);
                    cout<<" Insira o endereco do aluno: ";
                    getline(cin, endereco_aluno);
                    a.setendereco(endereco_aluno);
                    cout<<"Insira a matricula do aluno: ";
                    cin>>matricula_aluno;
                    a.setmatricula(matricula_aluno);
                    c.cadastraAluno(a);
                    cout<<"-------------------------\n";
                }else{
                    cout<<"\nNao eh possivel acessar essa opcao sem antes cadastrar um curso.\n";
                }       
        }
            if(opcao=="4"){
                if(inicializa>0){
                    aluno* a;
                    disciplina d;
                    cout<<"Informe a matricula do aluno: ";
                    cin>>matricula_aluno;
                    a=c.pesquisar(matricula_aluno);
                    cout<<"Qual disciplina deseja se matricular?: ";
                    cin.ignore();
                    getline(cin, pesquisa_disciplina);
                    d=c.pesquisa_disciplina(pesquisa_disciplina);
                    // cout<<(a.getnome());
                    // cout<<(d.getnome());
                    a->adicionarDisciplina(d);
                    cout<<"-------------------------\n";
                }else{
                    cout<<"\nNao eh possivel acessar essa opcao sem antes cadastrar um curso.\n";
                }
        }
            if(opcao=="5"){
                if(inicializa>0){
                    aluno* a;
                    disciplina d;
                    cout<<"Informe a matricula do aluno que deseja remover: ";
                    cin>>matricula_aluno;
                    a=c.pesquisar(matricula_aluno);
                    cout<<"Qual disciplina deseja sair?: ";
                    cin.ignore();
                    getline(cin, pesquisa_disciplina);
                    d=c.pesquisa_disciplina(pesquisa_disciplina);
                    a->removerDisciplina(pesquisa_disciplina, d);
                    cout<<"-------------------------\n";
                }else{
                    cout<<"\nNao eh possivel acessar essa opcao sem antes cadastrar um curso.\n";
                }      
        }
            if(opcao=="6"){
                if(inicializa>0){
                    disciplina d;
                    professor f;
                    cout<<"Insira o nome da disciplina: ";
                    cin.ignore();
                    getline(cin, nome_disciplina);
                    d.setnome(nome_disciplina);
                    cout<<"Insira a carga horaria da disciplina: ";
                    cin>>ch_disciplina;
                    d.setch(ch_disciplina);
                    cout<<"Insira qual professor leciona essa disciplia: ";
                    cin.ignore();
                    getline(cin, nome_professor);
                    f=c.pesquisar_professor(nome_professor);
                    f.setnome(nome_professor);
                    d.setProfessor(f);
                    c.cadastraDisciplina(d);
                    cout<<"-------------------------\n";
                }else{
                    cout<<"\nNao eh possivel acessar essa opcao sem antes cadastrar um curso.\n";
                }       
        }
            if(opcao=="7"){
                if(inicializa>0){
                     c.imprimirListaDeProfessor();
                }else{
                    cout<<"\nNao eh possivel acessar essa opcao sem antes cadastrar um curso.\n";
                }    
        }
            if(opcao=="8"){
                if(inicializa>0){
                    c.imprimirListaDeAlunos();
                }else{
                    cout<<"\nNao eh possivel acessar essa opcao sem antes cadastrar um curso.\n";
                }   
            }
            if(opcao=="9"){
                if(inicializa>0){
                    c.imprimirListaDeDisciplinas();
                }else{
                    cout<<"\nNao eh possivel acessar essa opcao sem antes cadastrar um curso.\n";
                }
            }
            if(opcao=="10"){
                aluno* a;
                cout<<"Informe a matricula do aluno que deseja ver as disciplinas: ";
                cin>>matricula_aluno;
                a = c.pesquisar(matricula_aluno);
                a->imprime_disciplinas();
                cout<<"-------------------------\n";
            }
            if(opcao=="11"){
                cout<<"\nAtalho para finalizar o programa identificado.";
                break;
            }
    }
    }while(opcao != "11");      
}