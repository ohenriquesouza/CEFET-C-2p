#ifndef __EXCECAOALUNOINEXISTENTE_HPP
#define __EXCECAOALUNOINEXISTENTE_HPP
#include <stdexcept>
using namespace std;

class ExcecaoAlunoInexistente:public runtime_error{
    public:
        ExcecaoAlunoInexistente();
};
#endif