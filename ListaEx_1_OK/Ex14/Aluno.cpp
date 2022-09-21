/* 
 * File:   Aluno.cpp
 * Author: Fabricio
 * 
 * Created on 31 de agosto de 2022, 06:06
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
    int cod;
    float n1, n2, n3;
    cout << "Digite o código do Aluno: ";
    cin >> cod;
    cout << "Digite a 1° nota: ";
    cin >> n1;
    cout << "Digite a 2° nota: ";
    cin >> n2;
    cout << "Digite a 3° nota: ";
    cin >> n3;
    cout << "----------------------------" << endl;
    cout << "O Aluno - " << cod << endl;
    imprimirDados(n1, n2, n3);
}

float Aluno::calNota(float n1, float n2, float n3) {
    int maiorN;
    float media;
    if ((n1 > n2)&(n1 > n3)) {
        maiorN = n1;
        media = (((maiorN * 4) + (n2 * 3) + (n3 * 3)) / 10);
    } else if ((n2 > n1)&(n2 > n3)) {
        maiorN = n2;
        media = (((maiorN * 4) + (n1 * 3) + (n3 * 3)) / 10);
    } else {
        maiorN = n3;
        media = (((maiorN * 4) + (n1 * 3) + (n2 * 3)) / 10);
    }
    return media;

}

float Aluno::imprimirDados(float n1, float n2, float n3) {
    if (calNota(n1, n2, n3) > 5) {
        cout << "Com média - " << calNota(n1, n2, n3) << endl;
        cout << "Aluno APROVADO " << endl;
    } else {
        cout << "Com média - " << calNota(n1, n2, n3) << endl;
        cout << "Aluno REPROVADO " << endl;
    }
}