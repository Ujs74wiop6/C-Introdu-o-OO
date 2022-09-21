/* 
 * File:   Peso.cpp
 * Author: Fabricio
 * 
 * Created on 11 de setembro de 2022, 22:46
 */

#include "Peso.h"
#include <iostream>
#include <cstdlib>

using namespace std;

Peso::Peso() {
}

Peso::Peso(const Peso& orig) {
}

Peso::~Peso() {
}

void Peso::lerDados() {

    char sexo;
    float altura;

    cout << "Qual seu Sexo ? ";
    cin >> sexo;

    cout << "Qual sua Altura ? ";
    cin >> altura;

    impressao(sexo, altura);

}

float Peso::analizeDeDados(char sexo, float altura) {

    float pesoI;

    if ((sexo == 'F') | (sexo == 'f')) {
        pesoI = (62.1 * altura) - 44.7;
    } else if ((sexo == 'M') | (sexo == 'm')) {
        pesoI = (72.7 * altura) - 58;
    } else {
        cout << "Informe um sexo válido" << endl;
    }
    return pesoI;
}

float Peso::impressao(char sexo, float altura) {

    cout << "Seu peso ideal : " << analizeDeDados(sexo, altura);

}

