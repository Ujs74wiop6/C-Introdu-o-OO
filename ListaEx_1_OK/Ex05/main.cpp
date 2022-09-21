/* 
 * File:   main.cpp
 * Author: Fabricio
 *
 * https://ead.vtp.ifsp.edu.br/pluginfile.php/30348/course/section/5295/Lista_Exercicios_1.pdf
 * 
 * 5) Faça um algoritmo que leia as 3 notas de um aluno e calcule a média final deste aluno. 
 * Considerar que a média é ponderada e que o peso das notas é: 2,3 e 5, respectivamente.
 * 
 * Created on 16 de agosto de 2022, 21:42
 */

#include "Aluno.h"
#include <cstdlib>  
#include <iostream>  
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Aluno obj;
    obj.lerDados();
    obj.calcularMedia();
    obj.imprimirDados();

    return 0;
}

