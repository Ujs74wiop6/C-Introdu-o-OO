/* 
 * File:   main.cpp
 * Author: Fabricio
 *
 * https://ead.vtp.ifsp.edu.br/pluginfile.php/30348/course/section/5295/Lista_Exercicios_1.pdf
 * 
 * 4) Faça um algoritmo que leia a idade de uma pessoa expressa em dias e mostre-a
 * expressa em anos, meses e dias. 
 * 
 * Created on 16 de agosto de 2022, 21:40
 */

#include "Pessoa.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    Pessoa obj;
    obj.lerDados();
    obj.idadeEmAMD();
    obj.mostrarDados();

    return 0;
}

