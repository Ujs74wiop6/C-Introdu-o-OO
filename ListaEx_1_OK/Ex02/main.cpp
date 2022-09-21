/* 
 * File:   main.cpp
 * Author: Fabricio
 *
 * https://ead.vtp.ifsp.edu.br/pluginfile.php/30348/course/section/5295/Lista_Exercicios_1.pdf
 * 
 * 2) Escreva um algoritmo que leia três números inteiros e positivos 
 * (A, B, C) e calcule a seguinte expressão:
 * 
 * D = R+S/2, aonde 
 * R = (A+B)^2 
 * S = (B+C)^2 
 * 
 * Created on 16 de agosto de 2022, 21:36
 */
#include "cCalculo.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    cCalculo obj;
    obj.lerDados();
    cout << obj.calculo();
    obj.mostrarDados();

    return 0;
}

