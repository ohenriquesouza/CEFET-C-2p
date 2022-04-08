#ifndef ListaPessoaJuridica_HPP
#define ListaPessoaJuridica_HPP
#include "PessoaJuridica.hpp"
#include "ExcecaoCNPJInvalido.hpp"
using namespace std;
class ListaPessoaJuridica{
    private: 
        PessoaJuridica* Primeiro;
        PessoaJuridica* Ultimo;
    public:
        ListaPessoaJuridica();
        ListaPessoaJuridica(PessoaJuridica Pessoa_Juridica);
        bool Lista_vazia();
        void Inserir_inicio(PessoaJuridica Pessoa_Juridica);
        void Inserir_final(PessoaJuridica Pessoa_Juridica);
        void MostrarTodos();
        int Size();   
        bool ValidaCNPJ(string CNPJ); 
        bool Pesquisa(string CNPJ);
        PessoaJuridica* PesquisaCNPJ(string CNPJ);
        bool existe(string CNPJ);
        PessoaJuridica* Remover_Pesquisa(string CNPJ);
        PessoaJuridica* getPrimeiro();
        PessoaJuridica* getUltimo();
        PessoaJuridica* ObterAnt(string CNPJ);
};
#endif