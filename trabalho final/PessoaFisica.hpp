#ifndef __PESSOAFISICA_HPP
#define __PESSOAFISICA_HPP
#include "Pessoa.hpp"
#include "ListaPessoaJuridica.hpp"
using namespace std;

class PessoaFisica:public Pessoa{
    private:
        ListaPessoaJuridica LPJ;
        PessoaFisica* prox;
        string CPF;
    public:
        PessoaFisica();
        PessoaFisica(string CPF, string nome, string endereco);

        void setCPF(string CPF);
        string getCPF();

        void setprox(PessoaFisica* Pessoa_Fisica);
        PessoaFisica* getprox();

        void inserirPessoaJuridica(PessoaJuridica* PJ);

        void MostrarEmpresas();

        void setLPJ(ListaPessoaJuridica LPJ);
        ListaPessoaJuridica getLPJ();
        
     friend class ListaPessoaFisica;
};
#endif