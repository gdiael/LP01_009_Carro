# LP01_009_Carro

Primeira questão da lista de exercícios

## Enunciado

**Questão 1.**

Implemente uma classe Carro.
- Um carro é definido por seu modelo e ano.
- Considere ainda que todo carro possui um tanque de combustível com capacidade máxima de X litros de
gasolina e com consumo de Y km/litro.
- Sua implementação deve permitir:
    - abastecer o carro com uma certa quantidade de gasolina;
    - mover o carro em uma determinada distância (medida em km);
    - informar a quantidade de combustível atual;
    - informar a distância total percorrida;
    - e a autonomia do carro, ou seja, quantos quilometros ainda será possível percorrer com a quantidade
de combistível atual.

Acho que não é preciso dizer que o carro não se move sem combustível. Na verdade, o carro so
deve se mover se houver mais do que 1L (um litro) de combustível no tanque.
Caso você tenha feito tudo como esperado, utilize o seguinte programa para testar a sua
implementação.

```
#include "carro.h"
#include <iostream >

using namespace std;

int main(int argc, char const *argv[])
{
    Carro meuCarro("Fusca", 1976, 40, 7);
    meuCarro.mover(5);
    meuCarro.abastecer(35);
    cout << "Abastecido! Temos agora " << meuCarro.getQtdeCombustivel() << " litros." << endl;
    cout << "Autonomia atual de " << meuCarro.getAutonomia() << "km." << endl;
    meuCarro.mover(127.6);
    meuCarro.mover(3.2);
    cout << "Ja percorremos " << meuCarro.getDistanciaPercorrida() << "km" << endl;
    cout << "Ainda temos " << meuCarro.getQtdeCombustivel() << " litros." << endl;
    cout << "Autonomia atual de " << meuCarro.getAutonomia() << "km." << endl;
    return 0;
}
```
A execução do programa acima deverá produzir como saída:
```
Foi criado um Fusca, ano 1976. Suporta 40 litros e consome 7 km/L.
Combustivel insuficiente para mover.
Abastecido! Temos agora 35 litros .
Autonomia atual de 238 km.
Ja percorremos 130.8 km
Ainda temos 16.3143 litros .
Autonomia atual de 107.2 km.
```
