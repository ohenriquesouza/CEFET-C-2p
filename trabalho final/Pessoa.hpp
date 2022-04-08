#ifndef __PESSOA_HPP
#define __PESSOA_HPP
#include <string>
using namespace std;

class Pessoa{
    private:
        string nome;
        string endereco;
    public:
        Pessoa();
        Pessoa(string nome, string endereco);

        void setnome(string nome);
        string getnome();

        void setendereco(string endereco);
        string getendereco();
};
#endif