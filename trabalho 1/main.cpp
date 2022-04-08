#include "Pessoa.hpp"
#include "Medico.hpp"
#include "Paciente.hpp"
#include "Consulta.hpp"
#include "Consultorio.hpp"
#include <iostream>
#include <vector>
using namespace std;
int main(){
    string data, hora, nome, relato, ultimaConsulta, medicacao, endereco, identidade, telefone, especialidade;
    char sexo;
    int cpf, crm;
    Consultorio c;
    string opcao;
    do{
        cout<<"\n--MENU DE OPCOES--\n";
        cout<<"1- Cadastrar um medico;\n";
        cout<<"2- Cadastrar um paciente;\n";
        cout<<"3- Cadastrar uma nova consulta;\n";
        cout<<"4- Imprimir dados do medico;\n";
        cout<<"5- Imprimir consultas;\n";
        cout<<"6- Imprimir dados do paciente;\n";
        cout<<"7- Imprimir data, hora, paciente e medico de uma consulta;\n";
        cout<<"8- Remover medico;\n";
        cout<<"9- Remover paciente;\n";
        cout<<"10- Remover Consulta;\n";
        cout<<"11- Finalizar programa;\n";
        cout<<"\n";
        cin>>opcao;
        if(opcao=="1"){
            Medico m;
            cout<<"\nNome: ";
            cin.ignore();
            getline(cin,nome);
            cout<<"Sexo: ";
            cin>>sexo;
            cout<<"Endereco: ";
            cin.ignore();
            getline(cin,endereco);
            cout<<"Identidade: ";
            getline(cin,identidade);
            cout<<"Telefone: ";
            getline(cin,telefone);
            cout<<"Especialidade: ";
            getline(cin,especialidade);
            cout<<"CPF: ";
            cin>>cpf;
            cout<<"CRM: ";
            cin>>crm;
            m.setnome(nome);
            m.setsexo(sexo);
            m.setendereco(endereco);
            m.setidentidade(identidade);
            m.settelefone(telefone);
            m.setespecialidade(especialidade);
            m.setcpf(cpf);
            m.setCRM(crm);
            c.cadastrarMedico(m);
        }
        if(opcao=="2"){
            Paciente p;
            cout<<"\nNome: ";
            cin.ignore();
            getline(cin,nome);
            cout<<"Sexo: ";
            cin>>sexo;
            cout<<"Endereco: ";
            cin.ignore();
            getline(cin,endereco);
            cout<<"Identidade: ";
            getline(cin,identidade);
            cout<<"Telefone: ";
            getline(cin,telefone);
            cout<<"Relato: ";
            getline(cin,relato);
            cout<<"Data ultima consulta: ";
            getline(cin,ultimaConsulta);
            cout<<"Medicacao: ";
            getline(cin,medicacao);
            cout<<"CPF: ";
            cin>>cpf;
            p.setnome(nome);
            p.setsexo(sexo);
            p.setendereco(endereco);
            p.setidentidade(identidade);
            p.settelefone(telefone);
            p.setrelato(relato);
            p.setdataUltimaConsulta(ultimaConsulta);
            p.setmedicacaoQueToma(medicacao);
            p.setcpf(cpf);
            c.cadastrarPaciente(p);
        }
        if(opcao=="3"){
            Consulta cl;
            Paciente* p;
            Medico* m;
            cout<<"Data: ";
            cin.ignore();
            getline(cin, data);
            cout<<"Hora: ";
            cin>>hora;
            cout<<"CPF do paciente: ";
            cin>>cpf;
            p=c.pesquisaPaciente(cpf);
            cout<<"CRM do medico: ";
            cin>>crm;
            m=c.pesquisaMedico(crm);
            cl.setdata(data);
            cl.sethora(hora);
            cl.setpaciente(*p);
            cl.setmedico(*m);
            c.cadastrarConsulta(cl);
        }
        if(opcao=="4"){
           Medico m;
           cout<<"Qual CRM do medico que deseja: ";
           cin>>crm;
           c.imprimirDadosMedico(crm, m);
        }
        if(opcao=="5"){
            c.imprimirConsultas();
        }
        if(opcao=="6"){
            c.imprimirListaDeTodosOsPacientes();
        }
        if(opcao=="7"){
            Medico* m;
            Paciente* p;
           cout<<"Qual CRM do medico que ira te atender: ";
           cin>>crm;
           m=c.pesquisaMedico(crm);
           cout<<"Qual o CPF do paciente: ";
           cin>>cpf;
           p=c.pesquisaPaciente(cpf);
           c.imprimirConsultaEspecifica(*m, *p);
        }
        if(opcao=="8"){
           Medico m;
           cout<<"Qual CRM do medico que deseja remover: ";
           cin>>crm;
           c.removerMedico(crm, m);
        }
        if(opcao=="9"){
           Paciente p;
           cout<<"Qual CPF do paciente que deseja remover: ";
           cin>>cpf;
           c.removerPaciente(cpf, p);
        }
        if(opcao=="10"){
            Consulta cl;
            Paciente p;
            cout<<"Informe a data que seria a consulta: ";
            cin.ignore();
            getline(cin,data);
            cout<<"Qual CPF do paciente que consultaria: ";
            cin>>cpf;
            c.removerConsulta(data, cpf, cl, p);
        }
        if(opcao=="11"){
            cout<<"\nAtalho para encerrar o programa identificado.";
            break;
        }
    }while(opcao!="11");
}