#include "No.hpp"

No::No(int v){
    this->v=v;
    this->prox= NULL;
}
int No::ObterValor(){
    return this->v;
}
No* No::ObterProx(){
    return this->prox;
}
void No::setProx(No* p){
    prox=p;
}