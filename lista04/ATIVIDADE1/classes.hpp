#include <iostream>
#ifndef  __CLASSES_HPP
#define __CLASSES_HPP
#include <string>
using namespace std;

class data{
    private:
        int mes;
        
        int dia;

        int ano;
    public:

        data(int x, int y, int z);

       void setdia(int dia);
        int getdia();

        void setmes(int mes);
        int getmes();

       void setano(int ano);
       int getano();
} ;



#endif