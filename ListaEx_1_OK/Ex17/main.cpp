/* 
 * File:   main.cpp
 * Author: Fabricio
 *
 * https://ead.vtp.ifsp.edu.br/pluginfile.php/30348/course/section/5295/Lista_Exercicios_1.pdf
 * 
 * 17) Tendo como dados de entrada a altura e o sexo de uma pessoa 
 * (?M? masculino e ?F? feminino), construa um algoritmo que 
 * calcule seu peso ideal, utilizando as seguintes fórmulas:
 * 
 * - para homens: (72.7*h)-58
 * - para mulheres: (62.1*h)-44.7
 * 
 * Created on 16 de agosto de 2022, 22:02
 */

#include <cstdlib>
#include <iostream>
#include "Peso.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    Peso obj;
    obj.lerDados();

    return 0;
}

