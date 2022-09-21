/* 
 * File:   Evento.cpp
 * Author: Fabricio
 * 
 * Created on 23 de agosto de 2022, 06:21
 */

#include "Evento.h"
#include <iostream>

using namespace std;

Evento::Evento() {
}

Evento::Evento(const Evento& orig) {
}

Evento::~Evento() {
}

int Evento::lerDados() {
    cout << "Informe o tempo do Evento em segundos: ";
    cin >> seg;
}

int Evento::calcularTempo() {

    horas = (seg / 3600);
    min = (seg % 3600) / 60;
    seg = (seg % 3600) % 60;

}

int Evento::imprimirDados() {
    cout << "O Tempo em horas: " << horas << endl;
    cout << "O Tempo em minutos: " << min << endl;
    cout << "O Tempo em segundos: " << seg << endl;
}
