/* 
 * File:   main.cpp
 * Author: Fabricio
 *
 * https://ead.vtp.ifsp.edu.br/pluginfile.php/30348/course/section/5295/Lista_Exercicios_1.pdf
 * 
 * 1) Construa um algoritmo que, tendo como dados de entrada dois pontos quaisquer no plano, 
 * P(x1,y1) e P(x2,y2), escreva a distância entre eles. 
 * A fórmula que efetua tal cálculo é: 
 * 
 * D √(x2 - x1)^2 + (y2 - y1)^2
 * 
 * Created on 16 de agosto de 2022, 21:31
 */
#include "cPlano.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    // (cPlano obj;) <- Alocação Estática
    // (cPlano *obj = new Classe;) <- Alocação Dinâmica

    cPlano obj;
    obj.lerDados();
    cout << obj.calDistancia();
    return 0;
}

