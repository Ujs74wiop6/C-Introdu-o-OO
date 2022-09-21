/* 
 * File:   Pessoa.cpp
 * Author: Fabricio
 * 
 * Created on 17 de agosto de 2022, 10:58
 */

#include "Pessoa.h"
#include <iostream>

using namespace std;

Pessoa::Pessoa() {
}

Pessoa::Pessoa(const Pessoa& orig) {
}

Pessoa::~Pessoa() {
}

void Pessoa::lerDados() {
    cout << "Quantos anos de vida você tem? ";
    cin >> anos;
    cout << "Quantos meses de vida você tem? ";
    cin >> meses;
    cout << "Quantos dias de vida você tem? ";
    cin >> dias;
}

int Pessoa::mostrarDados() {
    cout << "Você viveu: " << anos << " anos, " << meses << " meses e " << dias << " dias. " << endl;
    cout << "Você viveu " << idadeEmdias() << " dias!" << endl;
}

int Pessoa::idadeEmdias() {
    float emDias;
    emDias = (((anos) * 365)+((meses) * 30)+(dias));
    return emDias;
}