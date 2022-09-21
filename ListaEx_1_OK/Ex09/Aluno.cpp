/* 
 * File:   Aluno.cpp
 * Author: Fabricio
 * 
 * Created on 24 de agosto de 2022, 07:21
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
    float n1, n2, n3;
    cout << "Informe a 1° nota: ";
    cin >> n1;
    cout << "Informe a 2° nota: ";
    cin >> n2;
    cout << "Informe a 3° nota: ";
    cin >> n3;
    imprimirResultado(calcularNotas(n1, n2, n3));
}

float Aluno::calcularNotas(float n1, float n2, float n3) {
    float media;
    media = ((n1 + n2 + n3) / 3);
    return media;
}

void Aluno::imprimirResultado(float media) {
    if (media >= 6) {
        cout << "[APROVADO] - com média: " << (media) << endl;
    } else {
        cout << "[REPROVADO] - com média: " << (media) << endl;
    }

}

