/* 
 * File:   cPlano.cpp
 * Author: Fabricio
 * 
 * Created on 17 de agosto de 2022, 09:22
 */
#include <cstdlib>
#include <iostream>
#include <cmath>
#include "cPlano.h"
using namespace std;

cPlano::cPlano() {
}

cPlano::cPlano(const cPlano& orig) {
}

cPlano::~cPlano() {
}

void cPlano::lerDados() {

    cout << "-------- PONTO 1 --------" << endl;
    cout << "Informa (1/2) do valor: ";
    cin >> x1;
    cout << "Informa (2/2) do valor: ";
    cin >> y1;
    cout << "-------- PONTO 2 --------" << endl;
    cout << "Informa (1/2) do valor: ";
    cin >> x2;
    cout << "Informa (2/2) do valor: ";
    cin >> y2;
    cout << "----------------------------" << endl;
    cout << "PONTO - 1 (" << x1 << "," << y1 << ")" << endl;
    cout << "PONTO - 2 (" << x2 << "," << y2 << ")" << endl;

    cout << "Distância Euclidiana = " << this->calDistancia();
}

float cPlano::calDistancia() {
    float d = 0.0;

    //*LEMBRANDO...
    //SQRT -> Raiz
    //SQRT -> EXPONENCIAL

    //*Distância Euclidiana*
    //D = √(x2 - x1)^2 + (y2 - y1)^2
    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return d;
    //Prova real - (Se todos os valores forem iguais, o resultado tem que ser 0 (Zero))
}