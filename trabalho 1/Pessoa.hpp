#ifndef __PESSOA_HPP
#define __PESSOA_HPP
#include <string>
#include <vector>
using namespace std;
class Pessoa{
    private:
        string nome;
        char sexo;
        string endereco;
        int cpf;
        string telefone;
        string identidade;
    public:
        Pessoa();
        Pessoa(string nome, char sexo, string endereco, int cpf, string telefone, string identidade);
        void setnome(string nome);
        string getnome();
        void setsexo(char sexo);
        char getsexo();
        void setendereco(string endereco);
        string getendereco();
        void setcpf(int cpf);
        int getcpf();
        void settelefone(string telefone);
        string gettelefone();
        void setidentidade(string identidade);
        string getidentidade();
        void imprimir();
};
#endif