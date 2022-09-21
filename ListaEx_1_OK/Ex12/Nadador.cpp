/* 
 * File:   Nadador.cpp
 * Author: Fabricio
 * 
 * Created on 30 de agosto de 2022, 06:24
 */

#include "Nadador.h"
#include <iostream>

using namespace std;

Nadador::Nadador() {
}

Nadador::Nadador(const Nadador& orig) {
}

Nadador::~Nadador() {
}

void Nadador::lerDados() {
    int idade;
    cout << "Olá Nadador..." << endl;
    cout << "Qual sua idade ? ";
    cin >> idade;
    classificacao(idade);
}

int Nadador::classificacao(int idade) {
    int cat;
    if ((idade >= 5)&(idade <= 7)) {
        cat = 1;
    } else if ((idade >= 8)&(idade <= 10)) {
        cat = 2;
    } else if ((idade >= 11)&(idade <= 13)) {
        cat = 3;
    } else if ((idade >= 14)&(idade <= 17)) {
        cat = 4;
    } else if (idade >= 18) {
        cat = 5;
    }

    cout << "Você com " << idade << " anos " << endl;
    switch (cat) {
        case 1:
            cout << "Está na categoria - Infantil A" << endl;
            break;
        case 2:
            cout << "Está na categoria - Infantil B" << endl;
            break;
        case 3:
            cout << "Está na categoria - Juvenil A" << endl;
            break;
        case 4:
            cout << "Está na categoria - Juvenil B" << endl;
            break;
        case 5:
            cout << "Está na categoria - Adulto" << endl;
            break;
        default:
            cout << "Você não se encaixa em nenhuma categoria" << endl;
    }
}
