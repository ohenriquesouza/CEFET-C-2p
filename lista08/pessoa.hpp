#ifndef __PESSOA_HPP
#define __PESSOA_HPP
#include <iostream>
#include <string>
using namespace std;

class pessoa{
    private:
        char CPF[11];
        string nome;
        string endereco;
    public:
        pessoa();
        pessoa(string n, string e, char c[11]);
        void setnome(string nome);
        string getnome();
        void setendereco(string endereco);
        string getendereco();
        void setCPF(char CPF[11]);
        char getCPF();
        
};
#endif