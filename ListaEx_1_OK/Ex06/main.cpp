/* 
 * File:   main.cpp
 * Author: Fabricio
 * 
 * https://ead.vtp.ifsp.edu.br/pluginfile.php/30348/course/section/5295/Lista_Exercicios_1.pdf
 * 
 * 6) Faça um algoritmo que leia o tempo de duração de um evento em uma fábrica expressa em 
 * segundos e mostre-o expresso em horas, minutos e segundos.
 *
 * Created on 16 de agosto de 2022, 21:43
 */

#include "Evento.h"
#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Evento obj;

    obj.lerDados();
    obj.calcularTempo();
    obj.imprimirDados();
    return 0;
}

