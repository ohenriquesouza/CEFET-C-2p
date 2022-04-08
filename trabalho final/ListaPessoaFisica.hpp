#ifndef ListaPessoaFisica_HPP
#define ListaPessoaFisica_HPP
#include "PessoaFisica.hpp"
#include "ExcecaoCPFInvalido.hpp"
#include "ExcecaoNomeGrande.hpp"
using namespace std;
class ListaPessoaFisica{
    private: 
        PessoaFisica* Primeiro;
        PessoaFisica* Ultimo;
    public:
        ListaPessoaFisica();
        ListaPessoaFisica(PessoaFisica Pessoa_Fisica);
        bool Lista_vazia();
        void Inserir_inicio(PessoaFisica Pessoa_Fisica);
        void Inserir_final(PessoaFisica Pessoa_Fisica);
        void MostrarTodos();
        int Size(); 
        bool validaNome(string nome);   
        bool ValidaCPF(string CPF);
        bool Pesquisa(string CPF);
        bool existe(string CPF);

        bool VerificaAssociacao(string CNPJ);

        PessoaFisica* PesquisaCPF(string CPF);
        PessoaFisica* Remover_Pesquisa(string CPF);
        PessoaFisica* getPrimeiro();
        PessoaFisica* getUltimo();
        PessoaFisica* ObterAnt(string CPF);
};
#endif