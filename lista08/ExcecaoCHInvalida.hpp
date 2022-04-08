#ifndef __EXCECAOCHINVALIDA_HPP
#define __EXCECAOCHINVALIDA_HPP
#include <stdexcept>
using namespace std;

class ExcecaoCHInvalida:public runtime_error{
    public:
        ExcecaoCHInvalida();
};
#endif