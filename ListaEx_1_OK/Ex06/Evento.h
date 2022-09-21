/* 
 * File:   Evento.h
 * Author: Fabricio
 *
 * Created on 23 de agosto de 2022, 06:21
 */

#ifndef EVENTO_H
#define EVENTO_H

class Evento {
public:
    //Atributos
    int seg, min, horas;

    //Métodos
    Evento();
    Evento(const Evento& orig);
    virtual ~Evento();
    int lerDados();
    int calcularTempo();
    int imprimirDados();
private:

};

#endif /* EVENTO_H */

