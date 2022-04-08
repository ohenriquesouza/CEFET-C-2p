#include <iostream>
#include <vector>
#include "classes.hpp"
using namespace std;

void carro::setmodelo(string modelo){
    this->modelo=modelo;
}
string carro::getmodelo(){
    return this->modelo;
}

void carro::setdistancia_total(float distancia_total){
    this->distancia_total=distancia_total;
}
float carro::getdistancia_total(){
    return this->distancia_total;
}

void carro::setfabricante(string fabricante){
    this->fabricante=fabricante;
}
string carro::getfabricante(){
    return this->fabricante;
}

void carro::setcombustivel(float combustivel){
    this->combustivel=combustivel;
}
float carro::getcombustivel(){
    return this->combustivel;
}

void carro::setdistancia(float distancia){
    this->distancia=distancia;
}
float carro::getdistancia(){
    return this->distancia;
}

void carro::setconsumo(float consumo){
    this->consumo=consumo;
}
float carro::getconsumo(){
    return this->consumo;
}

void carro::insereCarro(){
       cout<< "\n-CADASTRO DE CARRO-\n";
       cout<<"\nInforme o modelo do carro: "; 
       cin.ignore();
       getline(cin,modelo);
       this->setmodelo(modelo);
       cout<<"Fabricante: ";
       getline(cin,fabricante);
       this->setfabricante(fabricante);
       cout<<"Quantidade de gasolina no tanque: ";
       cin>>combustivel;
       if(combustivel > 50){
           cout<< "\n-ERRO-\n";
           cout<<"\nO tanque de combustivel so armazena ate 50L\n";
           cout<<"\nQuantidade de gasolina no tanque: ";
           cin>>combustivel;
       }
       this->setcombustivel(combustivel);
       cout<<"Indique o consumo do carro: ";
       cin>>consumo;
       this->setconsumo(consumo);
}

void carro::abasteceCarro(float Lgasolina){
    if(this->getcombustivel() + Lgasolina > 50){
        cout<<"\nErro, capacidade de combustivel excedida.";
    }else{
        this->setcombustivel(Lgasolina + this->getcombustivel());  
        cout<<"\nNova quantidade de combustivel: "<<this->getcombustivel()<<"L"<<endl;
        this->setdistancia(0);
    }
}

void carro::andarcomCarro(float distancia){
    if(this->getcombustivel() < distancia / this->getconsumo()){
        cout<<"\nCombustivel insuficiente";
    }else{
        this->setdistancia(this->getdistancia() + distancia);
        this->setcombustivel(this->getcombustivel() - (distancia / this->getconsumo()));
        this->setdistancia_total(this->getdistancia_total() + distancia);
    }
}

void carro::imprimir(){
    cout<<"\nModelo do carro: "<<this->getmodelo()<<endl;
    cout<<"Fabricante: "<<this->getfabricante()<<endl;
    cout<<"Quantidade de combustivel atual: "<<this->getcombustivel()<<"L"<<endl;
    cout<<"Consumo do carro (por Km): "<<this->getconsumo()<<"Km/L"<<endl;
    cout<<"Distancia percorrida desde o ultimo abastecimento: "<<this->getdistancia()<<"Km"<<endl;
    cout<<"Distancia total percorrida: "<<this->getdistancia_total()<<"Km"<<endl;
}