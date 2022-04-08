#ifndef __NO_HPP
#define __NO_HPP
#include <iostream>
using namespace std;
class No{
    private:
        int v;
        No* prox;
    public:
        No(int v);
        int ObterValor();
        No* ObterProx();
        void setProx(No* p);
        
    friend class Lista;
};
#endif