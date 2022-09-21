/* 
 * File:   Numero.cpp
 * Author: Fabricio
 * 
 * Created on 30 de agosto de 2022, 18:29
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
    float n1, n2, n3;
    cout << "Digite 1° numero: ";
    cin >> n1;
    cout << "Digite 2° numero: ";
    cin >> n2;
    cout << "Digite 3° numero: ";
    cin >> n3;
    imprimirDados(n1, n2, n3);
}

float Numero::calcularNumero(float n1, float n2, float n3) {

    float maior;

    if ((n1 > n2) && n1 > n3) {
        maior = n1;
    } else if ((n2 > n1) && n2 > n3) {
        maior = n2;
    } else {
        maior = n3;
    }

    return maior;
}

float Numero::imprimirDados(float n1, float n2, float n3) {
    cout << "O maior numero é: " << calcularNumero(n1, n2, n3) << endl;
}
