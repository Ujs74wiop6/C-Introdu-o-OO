/* 
 * File:   main.cpp
 * Author: Fabricio
 *
 * https://ead.vtp.ifsp.edu.br/pluginfile.php/30348/course/section/5295/Lista_Exercicios_1.pdf
 * 
 * 7) O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem 
 * do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que a 
 * percentagem do distribuidor seja de 28% e os impostos de 45%, escrever 
 * um algoritmo que leia o custo de fábrica de um carro 
 * e escreva o custo ao consumidor.
 * 
 * Created on 16 de agosto de 2022, 21:45
 */

#include "Fabrica.h"
#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    Fabrica obj;
    obj.lerDados();
    return 0;
}

