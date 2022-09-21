/* 
 * File:   main.cpp
 * Author: Fabricio
 *
 * https://ead.vtp.ifsp.edu.br/pluginfile.php/30348/course/section/5295/Lista_Exercicios_1.pdf
 * 
 * 20) Um vendedor necessita de um algoritmo que calcule o preço total devido por um cliente. 
 * O algoritmo deve receber o código de um produto e a quantidade comprada e 
 * calcular o preço total, usando a tabela abaixo:
 * 
 * _________________________________
 *| Cód do Produto | Preço unitário |
 * ---------------------------------
 *| 1001 - 01       |     R$5,32    |
 *| 1324 - 02       |     R$6,45    |
 *| 6548 - 03       |     R$2,37    | 
 *| 0987 - 04       |     R$5,32    |
 *| 7623 - 05       |     R$6,45    |
 * ---------------------------------
 * 
 * Created on 16 de agosto de 2022, 22:11
 */

#include <cstdlib>
#include "Produto.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Produto obj;
    obj.lerDados();
    return 0;
}

