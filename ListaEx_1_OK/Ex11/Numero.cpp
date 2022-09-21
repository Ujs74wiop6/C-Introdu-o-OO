/* 
 * File:   Numero.cpp
 * Author: Fabricio
 * 
 * Created on 25 de agosto de 2022, 06:52
 */

#include "Numero.h"
#include <iostream>

using namespace std;

Numero::Numero() {
}

Numero::Numero(const Numero& orig) {
}

Numero::~Numero() {
}

void Numero::lerDados() {
    int x, y;
    cout << "Digite um número: ";
    cin >> x;
    cout << "Digite outro número: ";
    cin >> y;
    imprimirNumero(x, y);
}

float Numero::calcularNumero(int x, int y) {
    int resultado;
    if (x % y == 0) {
        resultado = 0;
    } else if (y % x == 0) {
        resultado = 1;
    } else if (x % y != 0) {
        resultado = 2;
    } else if (y % x != 0) {
        resultado = 3;
    }
    return resultado;
}

float Numero::imprimirNumero(int x, int y) {
    if (calcularNumero(x, y) == 0) {
        cout << "(X) - " << x << " é multiplo de " << y << " - (Y)" << endl;
    } else if (calcularNumero(x, y) == 1) {
        cout << "(Y) - " << y << " é multiplo de " << x << " - (X)" << endl;
    } else if (calcularNumero(x, y) == 2) {
        cout << "(X) - " << x << " NÃO é multiplo de " << y << " - (Y)" << endl;
    } else if (calcularNumero(x, y) == 3) {
        cout << "(Y) - " << x << " NÃO é multiplo de " << y << " - (X)" << endl;
    }
}