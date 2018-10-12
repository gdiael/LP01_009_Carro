#include "carro.h"

Carro::Carro(std::string modelo, int ano, double volTanque, double consumo) : m_modelo(modelo), m_ano(ano), m_volTanque(volTanque), m_consumo(consumo), m_qtdeCombustivel(0.0), m_distanciaPercorrida(0.0)
{
    std::cout << "Foi criado um " << m_modelo << " , ano " << m_ano << ". Suporta ";
    std::cout << m_volTanque << " litros e consome " << m_consumo << " km/L." << std::endl;
}

Carro::~Carro()
{
}

std::string Carro::getModelo()
{
    return m_modelo;
}

int Carro::getAno()
{
    return m_ano;
}

double Carro::getVolTanque() {
    return m_volTanque;
}

double Carro::getConsumo() {
    return m_consumo;
}

double Carro::getQtdeCombustivel() {
    return m_qtdeCombustivel;
}

double Carro::getDistanciaPercorrida() {
    return m_distanciaPercorrida;
}

double Carro::getAutonomia() {
    return (m_qtdeCombustivel-1.0)*m_consumo;
}

void Carro::abastecer(double litros) {
    m_qtdeCombustivel += litros;
}

void Carro::mover(double km) {
    if(this->getQtdeCombustivel() <= 1.0 || this->getAutonomia() < km){
        std::cerr << "Combustivel insuficiente para mover." << std::endl;
        return;
    }
    double consumido = km / this->m_consumo;
    this->m_qtdeCombustivel -= consumido;
    this->m_distanciaPercorrida += km;
}