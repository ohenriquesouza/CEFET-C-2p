#ifndef __CLASSES_HPP
#define __CLASSES_HPP
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class carro{
    private: 

        string modelo;

        string fabricante;
        
        float combustivel;
        
        float distancia;

        float distancia_total = 0;
        
        float consumo;
    
    public:

        void setdistancia_total(float distancia_total);
        float getdistancia_total();

        void setmodelo(string modelo);
        string getmodelo();

        void setfabricante(string fabricante);
        string getfabricante();

        void setcombustivel(float combustivel);
        float getcombustivel();

        void setdistancia(float distancia);
        float getdistancia();

        void setconsumo(float consumo);
        float getconsumo();

        void insereCarro();

        void abasteceCarro(float Lgasolina);

        void andarcomCarro(float distancia);

        void imprimir();
};  



#endif