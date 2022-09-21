/* 
 * File:   cBanco.cpp
 * Author: Fabricio
 * 
 * Created on 13 de setembro de 2022, 17:45
 */

#include "cBanco.h"
#include <iostream>
#include <cstdlib>
#include <valarray>


using namespace std;

cBanco::cBanco() {
}

cBanco::cBanco(const cBanco& orig) {
}

cBanco::~cBanco() {
}

void cBanco::tabela() {
    cout << "----------- TABELA -----------" << endl;
    cout << "| Saldo Médio | Percentual    |" << endl;
    cout << "*_____________________________*" << endl;
    cout << "| de 0 a 200  | nenhum crédito|" << endl;
    cout << "*_____________________________*" << endl;
    cout << "| de 201 a 400|20% do valor do|" << endl;
    cout << "|             | saldo médio   |" << endl;
    cout << "*_____________________________*" << endl;
    cout << "| de 401 a 600|30% do valor do|" << endl;
    cout << "|             | saldo médio   |" << endl;
    cout << "*_____________________________*" << endl;
    cout << "| acima de 601|40% do valor do|" << endl;
    cout << "|             | saldo médio   |" << endl;
    cout << "*_____________________________*" << endl;
}

void cBanco::lerDados() {
    float saldoM;
    cout << "Essa tabela mostra quais são os requisitos de crédito do nosso Banco!" << endl;
    tabela();
    cout << "\nQual seu saldo médio : ";
    cin >> saldoM;
    cout << "\nSeu crédito é : " << calCredito(saldoM) << " R$ " << endl;
    cout << "Você obteve um ganho de : " << diferenca(saldoM, calCredito(saldoM)) << " R$ " << endl;
}

float cBanco::calCredito(float saldoM) {
    float credito;

    if ((saldoM >= 0)& (saldoM <= 200)) {
        //Nenhum crédito
        credito = 0;
    } else if ((saldoM >= 201)& (saldoM <= 400)) {
        //Aumento de 20%
        credito = (saldoM + (saldoM * 0.20));
    } else if ((saldoM >= 401)&(saldoM <= 600)) {
        //Aumento de 30%
        credito = (saldoM + (saldoM * 0.30));
    } else if (saldoM > 601) {
        //Aumento de 40%
        credito = (saldoM + (saldoM * 0.40));
    }
    return credito;
}

float cBanco::diferenca(float saldoM, float credito) {
    float diferenca;

    if ((saldoM == 200) || (saldoM < 200)) {
        diferenca = 0;
    } else {
        diferenca = (credito - saldoM);
    }
    return diferenca;
}