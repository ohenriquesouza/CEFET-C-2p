#include "Consultorio.hpp"
#include <iostream>
#include <string>
Consultorio::Consultorio(){

}
void Consultorio::setnome(string nome){
    this->nome=nome;
}
string Consultorio::getnome(){
    return this->nome;
}
void Consultorio::setendereco(string endereco){
    this->endereco=endereco;
}
string Consultorio::getendereco(){
    return this->endereco;
}
void Consultorio::settelefone(string telefone){
    this->telefone=telefone;
}
string Consultorio::gettelefone(){
    return this->telefone;
}
void Consultorio::setvetPaciente(vector<Paciente>vetPaciente){
    this->vetPaciente=vetPaciente;

}
void Consultorio::setmedico(vector<Medico>medico){
    this->vetmedico=vetmedico;

}
void Consultorio::setconsulta(vector<Consulta>consulta){
    this->vetconsulta=vetconsulta;

}
void Consultorio::cadastrarMedico(Medico m){
    if(vetmedico.size()<=4){
        vetmedico.push_back(m);
    }else{
        cout<<"\nNao eh possivel cadastrar mais medicos.";
    }
}
void Consultorio::cadastrarPaciente(Paciente p){
    if(vetPaciente.size()<=99){
        vetPaciente.push_back(p);
    }else{
        cout<<"\nNao eh possivel cadastrar mais pacientes."; 
    } 
}
Medico* Consultorio::pesquisaMedico(int crm){
    int achou=0;
    for(vector<Medico>::iterator it=vetmedico.begin();it!=vetmedico.end();++it){
        if(crm == it->getCRM()){
            achou=1;
            return &(*it);
        }
    }
    if(achou!=1){
        cout<<"\nMedico nao encontrado."<<endl;
    }
}
Paciente* Consultorio::pesquisaPaciente(int cpf){
    int achou=0;
    for(vector<Paciente>::iterator it=vetPaciente.begin();it!=vetPaciente.end();++it){
        if(cpf==it->getcpf()){
            achou=1;
            return &(*it);
        }
    }
    if(achou!=1){
        cout<<"\nO paciente nao foi cadastrado."<<endl;
    }
}
void Consultorio::cadastrarConsulta(Consulta cl){
   vetconsulta.push_back(cl);   
}
void Consultorio::imprimirDadosMedico(int crm, Medico m){
    int i=0, achou=0;
    for(i=0; i<vetmedico.size();i++){
        if(crm==vetmedico[i].getCRM()){
            cout<<"\nNome: "<<vetmedico[i].getnome()<<endl;
            cout<<"Sexo: "<<vetmedico[i].getsexo()<<endl;
            cout<<"Endereco: "<<vetmedico[i].getendereco()<<endl;
            cout<<"CPF: "<<vetmedico[i].getcpf()<<endl;
            cout<<"Telefone: "<<vetmedico[i].gettelefone()<<endl;
            cout<<"Identidade: "<<vetmedico[i].getidentidade()<<endl;
            cout<<"CRM: "<<vetmedico[i].getCRM()<<endl;
            cout<<"Especialidade: "<<vetmedico[i].getespecialidade()<<endl;
            achou=1;
            break;
        }
    }
    if(achou!=1){
        cout<<"Medico nao encontrado."<<endl;
    }
}
void Consultorio::imprimirConsultas(){
    int i=0;
    for(i=0;i<vetconsulta.size();i++){
        cout<<"Data: "<<vetconsulta[i].getdata()<<endl;
        cout<<"Hora: "<<vetconsulta[i].gethora()<<"h"<<endl;
        cout<<"Paciente: "<<vetconsulta[i].getpaciente().getnome()<<endl;
        cout<<"CRM do Medico: "<<vetconsulta[i].getmedico().getCRM()<<endl;
        cout<<"\n";
    }
}
void Consultorio::imprimirListaDeTodosOsPacientes(){
    int i=0;
    if(this->vetPaciente.size()<=0){
        cout<<"\nNenhum paciente foi cadastrado.";
        return;
    }
    for(i=0;i<vetPaciente.size();i++){
        cout<<"Nome: "<<vetPaciente[i].getnome()<<endl;
        cout<<"Sexo: "<<vetPaciente[i].getsexo()<<endl;
        cout<<"Endereco: "<<vetPaciente[i].getendereco()<<endl;
        cout<<"CPF: "<<vetPaciente[i].getcpf()<<endl;
        cout<<"Telefone: "<<vetPaciente[i].gettelefone()<<endl;
        cout<<"Identidade: "<<vetPaciente[i].getidentidade()<<endl;
        cout<<"Relato: "<<vetPaciente[i].getrelato()<<endl;
        cout<<"Ultima consulta: "<<vetPaciente[i].getdataUltimaConsulta()<<endl;
        cout<<"Medicacao: "<<vetPaciente[i].getmedicacaoQueToma()<<endl;
        cout<<"\n";
    }
}
void Consultorio::imprimirConsultaEspecifica(Medico m, Pessoa p){
    int i=0, achou=0;
    for(vector<Consulta>::iterator it=vetconsulta.begin();it!=vetconsulta.end();++it){
        if(m.getCRM()==it->getmedico().getCRM() && p.getcpf()==it->getpaciente().getcpf()){
            cout<<"\nData: "<<it->getdata()<<endl;
            cout<<"Hora: "<<it->gethora()<<"h"<<endl;
            cout<<"Paciente: "<<it->getpaciente().getnome()<<endl;
            cout<<"Nome do Medico: "<<it->getmedico().getnome()<<endl;
            cout<<"\n";
            achou=1;
        }
    }
    if(achou!=1){
        cout<<"Este medico nao possui consultas marcadas com tal paciente.";
    }
}
bool Consultorio::removerMedico(int crm, Medico m){
    vector <Medico>::iterator it1;
    int achou=0;
    if(this->vetmedico.size()<=0){
        cout<<"\nNenhum medico foi cadastrado.";
        return 0;
    }
    for (auto it = this->vetmedico.begin(); it != this->vetmedico.end(); ++it){
    if(it->getCRM() == crm){
      it1 = it;
      achou = 1;
    }
  }
  if(achou){
      this->vetmedico.erase(it1);
      cout<<"Medico removido.";
  }else{
      cout<<"Medico nao encontrado";
  }
}
bool Consultorio::removerPaciente(int cpf, Paciente p){
    vector <Paciente>::iterator it1;
    int achou=0;
    if(this->vetPaciente.size()<=0){
        cout<<"\nNenhum paciente foi cadastrado.";
        return 0;
    }
    for (auto it = this->vetPaciente.begin(); it != this->vetPaciente.end(); ++it){
    if(it->getcpf() == cpf){
      it1 = it;
      achou = 1;
    }
  }
  if(achou){
      this->vetPaciente.erase(it1);
      cout<<"Paciente removido.";
  }else{
      cout<<"Paciente nao encontrado";
  }
}
void Consultorio::removerConsulta(string data, int cpf, Consulta cl, Paciente p){
    vector <Consulta>::iterator it1;
    int achou=0;
    if(this->vetconsulta.size()<=0){
        cout<<"\nNenhum paciente foi cadastrado.";
        return;
    }
    for (auto it = this->vetconsulta.begin(); it != this->vetconsulta.end(); ++it){
    if(it->getdata() == data){
      if(it->getpaciente().getcpf()==cpf){
        it1 = it;
        achou = 1;
      }else{
          cout<<"\nCPF nao corresponde.";
      }
    }
  }
  if(achou){
      this->vetconsulta.erase(it1);
      cout<<"Consulta desmarcada.";
  }else{
      cout<<"Consulta nao encontrada";
  }
}