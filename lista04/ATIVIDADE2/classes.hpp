#ifndef __CLASSES_HPP
#define __CLASSES_HPP
#include <string>
#include <iostream>
using namespace std;

class elevador{
    private:

        int andarAtual;

        int qntTotalAndares;

        int capacidadeMaxElv;

        int qntPessoas;

    public:
        elevador(int x, int y);

        elevador();

        void setandarAtual(int andarAtual);
        int getandarAtual();

        void setqntTotalAndares(int qntTotalAndares);
        int getqntTotalAndares();

        void setcapacidadeMaxElv(int capacidadeMaxElv);
        int getcapacidadeMaxElv();

        void setqntPessoas(int qntPessoas);
        int getqntPessoas();

        void entra();

        void sai();

        void sobe();

        void desce();

        void imprimir();
};
#endif