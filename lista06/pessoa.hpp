#ifndef __PESSOA_HPP
#define __PESSOA_HPP
#include <iostream>
#include <string>
using namespace std;

class pessoa{
    private:
        string nome;
        string endereco;
    public:
        pessoa();
        pessoa(string n, string e);
        void setnome(string nome);
        string getnome();
        void setendereco(string endereco);
        string getendereco();
};
#endif