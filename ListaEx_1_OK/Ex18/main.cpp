/* 
 * File:   main.cpp
 * Author: Fabricio
 *
 * https://ead.vtp.ifsp.edu.br/pluginfile.php/30348/course/section/5295/Lista_Exercicios_1.pdf
 * 
 * 18) Um banco concederá um crédito especial aos seus clientes, variável com o saldo médio no último ano. 
 * Faça um algoritmo que leia o saldo médio de um cliente e calcule o valor do crédito de acordo 
 * com a tabela abaixo. Mostre uma mensagem informando o saldo médio e o valor do crédito. 
 * (use o comando caso-de e não faça repetições)
 * _____________________________
 *| Saldo Médio |   Percentual  |
 * -----------------------------
 *| de 0 a 200  | nenhum crédito|
 * _____________________________
 *| de 201 a 400|20% do valor do|
 *|             | saldo médio   |
 * _____________________________
 *| de 401 a 600|30% do valor do|
 *|             | saldo médio   |
 * _____________________________
 *| acima de 601|40% do valor do|
 *|             | saldo médio   |
 * _____________________________
 * 
 * Created on 16 de agosto de 2022, 22:03
 */

#include <cstdlib>
#include <iostream>
#include "cBanco.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    cBanco obj;
    obj.lerDados();

    return 0;
}

