/* 
 * File:   main.cpp
 * Author: Fabricio
 *
 * https://ead.vtp.ifsp.edu.br/pluginfile.php/30348/course/section/5295/Lista_Exercicios_1.pdf
 * 
 * 3) Faça um algoritmo que leia a idade de uma pessoa expressa em anos, 
 * meses e dias e mostre-a expressa apenas em dias.
 * 
 * Created on 16 de agosto de 2022, 21:39   
 */
#include "Pessoa.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    Pessoa obj;
    obj.lerDados();
    obj.idadeEmdias();
    obj.mostrarDados();
    return 0;
}

