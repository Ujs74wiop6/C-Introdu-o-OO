/* 
 * File:   Numero.cpp
 * Author: Fabricio
 * 
 * Created on 11 de setembro de 2022, 22:29
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
    int num;
    cout << "Digite um número: ";
    cin >> num;
    analizarNumeros(num);

}

int Numero::analizarNumeros(int num) {

    if (num == 0) {
        cout << "O numero é 0 (ZERO)" << endl;
    } else if (num < 0) {
        cout << "Negativo" << endl;
    } else if ((num > 0) & (num % 2 == 0)) {
        cout << "Positivo Par" << endl;
    } else {
        cout << "Positivo Impar" << endl;
    }
}

