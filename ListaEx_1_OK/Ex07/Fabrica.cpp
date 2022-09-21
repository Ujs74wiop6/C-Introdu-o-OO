/* 
 * File:   Fabrica.cpp
 * Author: Fabricio
 * 
 * Created on 24 de agosto de 2022, 06:13
 */

#include "Fabrica.h"
#include <iostream>

using namespace std;

Fabrica::Fabrica() {
}

Fabrica::Fabrica(const Fabrica& orig) {
}

Fabrica::~Fabrica() {
}

void Fabrica::lerDados() {
    float custoF;
    cout << "Qual é o custo de fabricação desse veiculo? ";
    cin >> custoF;
    imprimirPreco(custoF);
}

float Fabrica::calcularPreco(float custoF) {
    float preco;
    preco = ((custoF * 1.28)*1.45);
    return preco;
}

void Fabrica::imprimirPreco(float custoF) {
    cout << "O custo ao consumidor desse veículo é: " << calcularPreco(custoF) << endl;
}

