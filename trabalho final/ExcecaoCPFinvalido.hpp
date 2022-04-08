#ifndef __EXCECAOCPFINVALIDO_HPP
#define __EXCECAOCPFINVALIDO_HPP
#include <stdexcept>
using namespace std;

class ExcecaoCPFInvalido:public runtime_error{
    public:
        ExcecaoCPFInvalido();
};
#endif