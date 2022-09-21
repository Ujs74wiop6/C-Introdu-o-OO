/* 
 * File:   main.cpp
 * Author: Fabricio
 *
 * https://ead.vtp.ifsp.edu.br/pluginfile.php/30348/course/section/5295/Lista_Exercicios_1.pdf
 * 
 * 12) Elabore um algoritmo que dada a idade de um nadador classifica-o em uma das seguintes categorias:
 * 
 * Infantil A = 5 - 7 anos 
 * Infantil B = 8-10 anos 
 * Juvenil A = 11-13 anos 
 * Juvenil B = 14-17 anos
 * Adulto = maiores de 18 anos
 * 
 * Created on 16 de agosto de 2022, 21:51
 */

#include "Nadador.h"
#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Nadador obj;
    obj.lerDados();
    return 0;
}

