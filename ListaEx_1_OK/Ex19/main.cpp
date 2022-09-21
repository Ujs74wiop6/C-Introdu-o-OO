/* 
 * File:   main.cpp
 * Author: Fabricio
 *
 * https://ead.vtp.ifsp.edu.br/pluginfile.php/30348/course/section/5295/Lista_Exercicios_1.pdf
 * 
 * 19) Um usuário deseja um algoritmo onde possa escolher que tipo de média deseja calcular 
 * a partir de 3 notas. Faça um algoritmo que leia as notas, 
 * a opção escolhida pelo usuário e calcule a média.
 * 
 * 1 -aritmética 
 * 2 -ponderada (3,3,4) 
 * 3 -harmônica 
 * 
 * Created on 16 de agosto de 2022, 22:10
 */

#include <cstdlib>
#include <iostream>
#include "cMedia.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    cMedia obj;
    obj.lerDados();

    return 0;
}

