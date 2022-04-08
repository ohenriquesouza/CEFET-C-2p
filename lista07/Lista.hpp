#ifndef LISTA_HPP
#define LISTA_HPP
#include "No.hpp"
using namespace std;
class Lista{
    private: 
        No* Primeiro;
        No* Ultimo;
    public:
        Lista();
        Lista(int v);
     //   virtual ~Lista();
        
        bool Lista_vazia();
        void Inserir_inicio(int v);
        void Inserir_final(int v);
        void MostrarTodos();
        void MostrarRemovido();
        void MostrarOrdenado();
        void MostrarVetorLista();
        int Size();    
        bool Pesquisa(int nm);
        bool Existe(int v);
        No* Remover();
        No* Remover_Pesquisa(int nm);
        void Concatena(Lista L2);
        No* getPrimeiro();
        No* getUltimo();
        void Ordena();
        No* ObterAnt(int nm);
        Lista Transforma_Lista(int *v, int n);
};
#endif