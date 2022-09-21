/* 
 * File:   main.cpp
 * Author: Fabricio
 *
 * https://ead.vtp.ifsp.edu.br/pluginfile.php/30348/course/section/5295/Lista_Exercicios_1.pdf
 * 
 * 16) O cardápio de uma lancheria é o seguinte:
 * 
 * --------------------------------
 *| Especificação  | Código | Preço|
 * --------------------------------
 *| Cachorro quente|  100   | 1,20 |
 *| Bauru simples  |  101   | 1,30 |
 *| Bauru com ovo  |  102   | 1,50 |
 *| Hambúrger      |  103   | 1,20 |
 *| Cheeseburguer  |  104   | 1,30 |
 *| Refrigerante   |  105   | 1,00 |
 * --------------------------------
 * 
 * Escrever um algoritmo que leia o código do item pedido, 
 * a quantidade e calcule o valor a ser pago por aquele 
 * lanche. Considere que a cada execução somente 
 * será calculado um item.
 * 
 * Created on 16 de agosto de 2022, 21:56
 */

#include <cstdlib>
#include "Pedido.h"
#include <cmath>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Pedido obj;
    obj.lerDados();
    return 0;
}

