/* 
 * File:   cMedia.cpp
 * Author: Fabricio
 * 
 * Created on 12 de setembro de 2022, 18:41
 */

#include "cMedia.h"
#include <cstdlib>
#include <iostream>

using namespace std;

cMedia::cMedia() {
}

cMedia::cMedia(const cMedia& orig) {
}

cMedia::~cMedia() {
}

void cMedia::lerDados() {

    float n1, n2, n3;
    int opc;

    cout << "Nota 1: ";
    cin >> n1;
    cout << "Nota 2: ";
    cin >> n2;
    cout << "Nota 3: ";
    cin >> n3;
    cout << "Digite (1) para Média Aritimética" << endl;
    cout << "Digite (2) para Média Ponderada (3,3,4)" << endl;
    cout << "Digite (3) para Média Harmônica" << endl;
    cout << "Qual média você quer calcular : ";
    cin >> opc;

    imprimirMedia(n1, n2, n3, opc);

}

float cMedia::calMedia(float n1, float n2, float n3, int opc) {
    float notaFinal;
    if (opc == 1) {
        notaFinal = ((n1 + n2 + n3) / 3);
    } else if (opc == 2) {
        notaFinal = (((n1 * 3)+(n2 * 3)+(n3 * 4)) / 10);
    } else if (opc == 3) {
        notaFinal = (3 / ((1 / n1) + (1 / n2) + (1 / n3)));
    }
    return notaFinal;
}

float cMedia::imprimirMedia(float n1, float n2, float n3, int opc) {
    if ((opc == 1) || (opc == 2) || (opc == 3)) {
        cout << "A sua Média : " << calMedia(n1, n2, n3, opc) << endl;
    } else {
        cout << "Informe uma Opção válida!" << endl;
    }
}