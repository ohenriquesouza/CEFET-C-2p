#include "paciente.hpp"
#include "consultorio.hpp"
#include "paciente.cpp"
#include "consultorio.cpp"
#include <string>
#include <iostream>
#include <vector>
using namespace std;
int main(){
    paciente p;
    consultorio c;
    float peso_medico;
    float peso_paciente;
    int cont = 0;
    int cpf_paciente, cpf_remover_paciente;
    int cpf_medico;
    char opcao;
    char sexo_medico;
    char sexo_paciente;
    string nome_paciente, endereco_paciente;
    string nome_medico, endereco_medico;
    string nome_consultorio, endereco_consultorio, telefone_consultorio;
    while(1){
        cout<<"\n--MENU DE OPCOES--\n";
        cout<<"1- Inserir informacoes do consultorio\n";
        cout<<"2- Cadastrar um medico\n";
        cout<<"3- Cadastrar um paciente\n";
        cout<<"4- Remover um paciente\n";
        cout<<"5- Imprimir dados dos pacientes\n";
        cin>>opcao;
        if(opcao == '1'){
            cont++;
            cout<<"\n---INSIRA OS DADOS DO CONSULTORIO---";
            cout<<"\nInforme o nome do consultorio: ";
            cin.ignore();
            getline(cin, nome_consultorio);
            c.setnome(nome_consultorio);
            cout<<"Informe o  endereco:  ";
            getline(cin,endereco_consultorio);
            c.setendereco(endereco_consultorio);
            cout<<"Informe o telefone do consultorio: ";
            getline(cin, telefone_consultorio);
            c.settelefone(telefone_consultorio);
            cout<<"---DADOS DO CONSULTORIO RECOLHIDOS---";
        }
        if(opcao== '2'){
            if(cont < 1){
                cout<<"\n-------------------------------------------------------------------------------";
                cout<<"\nNenhum consultorio encontrado, insira os dados antes de cadastrar um paciente.";
                cout<<"\n-------------------------------------------------------------------------------\n";
                cont = 0;
            }
            cout<<"\n---INSIRA OS DADOS DO MEDICO---";
            cout<<"\nCom qual medico vai consultar?: ";
            getline(cin, nome_medico);
            p.setnome(nome_medico);
            cout<<"Informe o sexo do medico: ";
            cin>>sexo_medico;
            p.setsexo(sexo_medico);
            cout<<"Informe o CPF do medico: ";
            cin>>cpf_medico;
            p.setcpf(cpf_medico);
            cout<<"Informe o endereco do medico: ";
            cin.ignore();
            getline(cin,endereco_medico);
            p.setendereco(endereco_medico);
            cout<<"Informe o peso do medico: ";
            cin>>peso_medico;
            p.setpeso(peso_medico);
            c.setmedico(p);
            cout<<"\n---DADOS DO MEDICO RECOLHIDOS---\n";
         }
        if(opcao == '3'){
            if(cont < 1){
                cout<<"\n-------------------------------------------------------------------------------";
                cout<<"\nNenhum consultorio encontrado, insira os dados antes de cadastrar um paciente.";
                cout<<"\n-------------------------------------------------------------------------------\n";
                cont = 0;
            }else{
                cout<<"\nInforme o nome do paciente: ";
                cin.ignore();
                getline(cin, nome_paciente);
                p.setnome(nome_paciente);
                cout<<"\nInforme o sexo do paciente: ";
                cin>>sexo_paciente;
                p.setsexo(sexo_paciente);
                cout<<"\nInforme o CPF do paciente: ";
                cin>>cpf_paciente;
                p.setcpf(cpf_paciente);
                cout<<"\nInforme o endereco do paciente: ";
                cin.ignore();
                getline(cin,endereco_paciente);
                p.setendereco(endereco_paciente);
                cout<<"\nInforme o peso do paciente: ";
                cin>>peso_paciente;
                p.setpeso(peso_paciente);
                c.cadastraPaciente(p);
            }
        }
        if(opcao == '4'){
            cout<<"\nInsira o CPF do paciente que deseja remover: ";
            cin>>cpf_remover_paciente;
            c.removerPaciente(cpf_remover_paciente);
        }
        if(opcao == '5'){
            c.imprimirListaDeTodosPacientes();
        }
    };
}