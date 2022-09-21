/* 
 * File:   Produto.cpp
 * Author: Fabricio
 * 
 * Created on 24 de agosto de 2022, 10:14
 */

#include "Produto.h"
#include <iostream>
#include <cmath>

using namespace std;

Produto::Produto() {
}

Produto::Produto(const Produto& orig) {
}

Produto::~Produto() {
}

void Produto::tabelaProdutos() {
    cout << " _________________________________" << endl;
    cout << "| Cód do Produto | Preço unitário |" << endl;
    cout << " --------------------------------- " << endl;
    cout << "| 1001 - 1       |     R$5,32    |" << endl;
    cout << "| 1324 - 2       |     R$6,45    |" << endl;
    cout << "| 6548 - 3       |     R$2,37    |" << endl;
    cout << "| 0987 - 4       |     R$5,32    |" << endl;
    cout << "| 7623 - 5       |     R$6,45    |" << endl;
    cout << " ---------------------------------" << endl;
    cout << "Digite 0 - Para sair" << endl;
    cout << "Digite um Código para item do Pedido: " << endl;
}

void Produto::lerDados() {
    int cod = 1, n = 0;
    float acumulador = 0.0;
    while (cod != 0) {
        this->tabelaProdutos();
        cin >> cod;
        if (cod != 0) {
            cout << "Quantos itens? ";
            cin >> n;
        }
        acumulador += this->addItemPedido(cod, n);
    }
    cout << "Valor da conta: R$ " << acumulador << endl;
}

float Produto::addItemPedido(int cod, int n) {
    float valor = 0.0;
    switch (cod) {
        case 1:
            valor = (5.32 * n);
            break;
        case 2:
            valor = (6.45 * n);
            break;
        case 3:
            valor = (2.37 * n);
            break;
        case 4:
            valor = (5.32 * n);
            break;
        case 5:
            valor = (6.45 * n);
            break;
        default:
            valor = 0.0;
    }
    return valor;
}

