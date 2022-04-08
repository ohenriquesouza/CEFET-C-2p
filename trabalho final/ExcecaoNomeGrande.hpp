#ifndef __EXCECAONOMEGRANDE_HPP
#define __EXCECAONOMEGRANDE_HPP
#include <stdexcept>
using namespace std;

class ExcecaoNomeGrande:public runtime_error{
    public:
        ExcecaoNomeGrande();
};
#endif