#ifndef H_CARRO_
#define H_CARRO_

#include <iostream>

class Carro{
private:
    std::string m_modelo;
    int m_ano;
    double m_volTanque;
    double m_consumo;
    double m_qtdeCombustivel;
    double m_distanciaPercorrida;

public:
    Carro(std::string modelo, int ano, double volTanque, double consumo);
    ~Carro();
    std::string getModelo();
    int getAno();
    double getVolTanque();
    double getConsumo();
    double getQtdeCombustivel();
    double getDistanciaPercorrida();
    double getAutonomia();
    void abastecer(double litros);
    void mover(double km);
};

#endif