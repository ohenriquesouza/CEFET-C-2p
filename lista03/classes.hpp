#ifndef __CLASSES_HPP
#define __CLASSES_HPP
#include <string>
#include <iostream>
using namespace std;

class matematica{
    private:
        double num1;

    public:
        void setnum1(double num1);
        double getnum1();

        double calculaFatorial();

        double calculaRaiz();

        double calculaPotencia(int pot);
};
#endif