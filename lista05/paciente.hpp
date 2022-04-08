#ifndef __PACIENTE_HPP
#define __PACIENTE_HPP
#include <string>
#include <vector>
using namespace std;

class paciente{
    private:
        char sexo;
        string nome;
        int cpf;
        string endereco;
        float peso;
    public:
        void setnome(string nome);
        string getnome();
        void setsexo(char sexo);
        char getsexo();
        void setcpf(int cpf);
        int getcpf();
        void setendereco(string endereco);
        string getendereco();
        void setpeso(float peso);
        float getpeso();
};
#endif