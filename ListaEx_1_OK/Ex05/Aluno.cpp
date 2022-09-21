/* 
 * File:   Aluno.cpp
 * Author: Fabricio
 * 
 * Created on 22 de agosto de 2022, 18:21
 */

#include "Aluno.h"
#include <iostream>

using namespace std;

Aluno::Aluno() {
}

Aluno::Aluno(const Aluno& orig) {
}

Aluno::~Aluno() {
}

void Aluno::lerDados() {
    //cout << "Passou por aqui... método [lerDados]" << endl;
    cout << "Informe a 1° nota ";
    cin >> n1;
    cout << "Informe a 2° nota ";
    cin >> n2;
    cout << "Informe a 3° nota ";
    cin >> n3;
}

float Aluno::calcularMedia() {
    //cout << "Passou por aqui... método [calcularMedia]" << endl;
    n1 = n1 * 2;
    n2 = n2 * 3;
    n3 = n3 * 5;
    media = (n1 + n2 + n3) / 10;
    return media;
}

float Aluno::imprimirDados() {
    //cout << "Passou por aqui... método [imprimirDados]" << endl;
    cout << "1° nota - (peso 2): " << n1 << endl;
    cout << "2° nota - (peso 3): " << n2 << endl;
    cout << "3° nota - (peso 5): " << n3 << endl;
    cout << "Média Final - " << calcularMedia() << endl;
}

