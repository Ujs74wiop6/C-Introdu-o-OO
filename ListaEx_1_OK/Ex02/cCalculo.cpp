/* 
 * File:   cCalculo.cpp
 * Author: Fabricio
 * 
 * Created on 17 de agosto de 2022, 10:08
 */

#include "cCalculo.h"
#include <iostream>
#include <cmath>

using namespace std;

cCalculo::cCalculo() {
}

cCalculo::cCalculo(const cCalculo& orig) {
}

cCalculo::~cCalculo() {
}

void cCalculo::lerDados() {

    cout << "Digite o 1° valor (A) inteiro positivo: " << endl;
    cin >> a;
    cout << "Digite o 2° valor (B) inteiro positivo: " << endl;
    cin >> b;
    cout << "Digite o 3° valor (C) inteiro positivo: " << endl;
    cin >> c;

}

float cCalculo::calculo() {

    //D = R+S/2, aonde 
    //R = (A+B)^2 
    //S = (B+C)^2 

    float d = 0.0;
    float r, s;
    r = pow((a + b), 2);
    s = pow((b + c), 2);
    d = (r + s) / 2;

    return d;
}

int cCalculo::mostrarDados() {
    cout << "Valor(A): " << a << endl;
    cout << "Valor(B): " << b << endl;
    cout << "Valor(C): " << c << endl;
    cout << "Calculo(D) = " << calculo();
}