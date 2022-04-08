#ifndef __PESSOAJURIDICA_HPP
#define __PESSOAJURIDICA_HPP
#include "Pessoa.hpp"
#include "PessoaFisica.hpp"
using namespace std;

class PessoaJuridica:public Pessoa{
    private:
        PessoaJuridica* prox;
        string CNPJ;
    public:
        PessoaJuridica();
        PessoaJuridica(string CNPJ, string nome, string endereco);
        
        void setCNPJ(string CNPJ);
        string getCNPJ();

        void setprox(PessoaJuridica* Pessoa_Juridica);
        PessoaJuridica* getprox();

        
    friend class ListaPessoaJuridica;
};
#endif