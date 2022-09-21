/* 
 * File:   Pessoa.cpp
 * Author: Fabricio
 * 
 * Created on 17 de agosto de 2022, 22:22
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
    cout << "Quantos dias você viveu até hoje? ";
    cin >> dias;
}

float Pessoa::idadeEmAMD() {
    anos = (dias / 365);
    meses = ((dias - (anos * 365)) / 30);
    dias = (dias - (anos * 365) + (meses * 30));

}

float Pessoa::mostrarDados() {
    cout << "Você viveu até agora:" << endl;
    cout << anos << " Anos." << endl;
    cout << meses << " Meses." << endl;
    cout << dias << " Dias." << endl;
}