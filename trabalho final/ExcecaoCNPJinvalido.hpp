#ifndef __EXCECAOCNPJINVALIDO_HPP
#define __EXCECAOCNPJINVALIDO_HPP
#include <stdexcept>
using namespace std;

class ExcecaoCNPJInvalido:public runtime_error{
    public:
        ExcecaoCNPJInvalido();
};
#endif