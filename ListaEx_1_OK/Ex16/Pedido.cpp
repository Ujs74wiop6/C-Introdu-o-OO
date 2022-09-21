/* 
 * File:   Pedido.cpp
 * Author: Fabricio
 * 
 * Created on 24 de agosto de 2022, 08:19
 */

#include "Pedido.h"
#include <iostream>
#include <cmath>

using namespace std;

Pedido::Pedido() {
}

Pedido::Pedido(const Pedido& orig) {
}

Pedido::~Pedido() {
}

void Pedido::lerDados() {
    int cod;
    float acumular = 0;
    while (cod != 0) {
        cout << "* --------------------------------" << endl;
        cout << "* | Especificação | Código | Preço |" << endl;
        cout << "* --------------------------------" << endl;
        cout << "* | Cachorro quente | 100 | 1, 20 |" << endl;
        cout << "* | Bauru simples   | 101 | 1, 30 |" << endl;
        cout << "* | Bauru com ovo   | 102 | 1, 50 |" << endl;
        cout << "* | Hambúrger       | 103 | 1, 20 |" << endl;
        cout << "* | Cheeseburguer   | 104 | 1, 30 |" << endl;
        cout << "* | Refrigerante    | 105 | 1, 00 |" << endl;
        cout << "* --------------------------------" << endl;
        cout << "Digite 0 - Para sair" << endl;
        cout << "Digite um Código para item do Pedido: " << endl;
        cin >> cod;
        acumular += this->addItemPedido(cod);
    }

    cout << "Valor da conta: R$ " << acumular << endl;
}

float Pedido::addItemPedido(int cod) {
    float valor = 0;
    switch (cod) {
        case 100:
            valor = 1.20;
            break;
        case 101:
            valor = 1.30;
            break;
        case 102:
            valor = 1.50;
            break;
        case 103:
            valor = 1.20;
            break;
        case 104:
            valor = 1.30;
            break;
        case 105:
            valor = 1;
            break;

            return valor;
    }
}