/* 
 * File:   main.cpp
 * Author: Fabricio
 * 
 * https://ead.vtp.ifsp.edu.br/pluginfile.php/30348/course/section/5295/Lista_Exercicios_1.pdf
 * 
 * 14) Escreva um algoritmo que leia o código de um aluno e suas três notas. 
 * Calcule a média ponderada do aluno, considerando que o peso para a 
 * maior nota seja 4 e para as duas restantes, 3. Mostre o código 
 * do aluno, suas três notas, a média calculada e uma mensagem 
 * "APROVADO" se a média for maior ou igual a 5 e 
 * "REPROVADO" se a média for menor que 5.
 *
 * Created on 16 de agosto de 2022, 21:54
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
    return 0;
}

