#include "classes.hpp"
#include <iostream>
using namespace std;

data::data(int x, int y, int z){
    this->dia = x;
    this-> mes = y;
    this-> ano = z;
    if(ano > 0 && ano < 9999){
        if(mes > 0 && mes <= 12){
            if((dia >= 1 && dia <= 30) && (mes==4 || mes==6 || mes==9||mes==11)){
                cout<<"A data inserida eh valida.";
            }
            else if((dia >= 1 && dia <= 31) && (mes==1 || mes==3 || mes==5||mes==7||mes==8||mes==10||mes==12)){
                cout<<"A data inserida eh valida.";
            }
            //ESSA LINHA APONTOU ERRO EM "MES==1", REESCREVI EXATAMENTE DO MESMO JEITO E DEU CERTO, NAO ENTENDI O QUE ACONTECEU//
            // else if((dia >= 1 && dia <= 31) && (mes==1 || mes==3 || mes==5 || mes==7 || mes=8 || mes==10 ||mes==12)){
            //     cout<<"A data inserida eh valida";
            // }
            if((dia >= 1 && dia <= 28) && (mes ==2)){
                cout<<"A data inserida eh valida.";
            }else if((dia >= 1 && dia > 28) && (mes ==2)){
                cout<<"A data inserida nao eh valida.";
            }else if((dia == 29 && mes == 2) && (ano % 400 == 0 || (ano % 4 ==0 && ano % 100 != 0))){
                cout<<"A data inserida eh valida.";
            }
        }else{
            cout<<"O mes inserido nao eh valido.";
        }
    }else{
        cout<<"O ano inserido nao eh valido.";
    }
}

