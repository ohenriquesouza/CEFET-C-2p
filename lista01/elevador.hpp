#ifndef __ELEVADOR_HPP
#define __ELEVADOR_HPP
#include <string>
#include <iostream>
using namespace std;

class elevador{
    private:

        int andarAtual = 0;

        int qntTotalAndares = 0;

        int capacidadeMaxElv = 0;

        int qntPessoas = 0;

    public:

        void setandarAtual(int andarAtual);
        int getandarAtual();

        void setqntTotalAndares(int qntTotalAndares);
        int getqntTotalAndares();

        void setcapacidadeMaxElv(int capacidadeMaxElv);
        int getcapacidadeMaxElv();

        void setqntPessoas(int qntPessoas);
        int getqntPessoas();

        void inicializa();

        void entra();

        void sai();

        void sobe();

        void desce();

        void imprimir();
};
#endif