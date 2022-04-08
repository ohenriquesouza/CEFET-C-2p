#include "classes.hpp"
#include <math.h>
#include <iostream>
using namespace std;

void matematica::setnum1(double num1){
    this->num1=num1;
}
double matematica::getnum1(){
    return this->num1;
}

double matematica::calculaRaiz(){
    this->num1 = sqrt(this->num1);
    return num1;
}

double matematica::calculaFatorial(){
    int i;
    double fat =1;
    for(i=this->num1;i>1;i--){
        fat = fat * i;
    }
    this->num1 = fat;
    return num1;
}

double matematica::calculaPotencia(int pot){
    this->num1 = (pow(this->num1, pot));
    return num1;
}