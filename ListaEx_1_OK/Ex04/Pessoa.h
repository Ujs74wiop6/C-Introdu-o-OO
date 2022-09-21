/* 
 * File:   Pessoa.h
 * Author: Fabricio
 *
 * Created on 17 de agosto de 2022, 22:22
 */

#ifndef PESSOA_H
#define PESSOA_H

class Pessoa {
public:
    //Atributos
    int dias, anos, meses;

    //Métodos
    Pessoa();
    Pessoa(const Pessoa& orig);
    virtual ~Pessoa();
    void lerDados();
    float idadeEmAMD();
    float mostrarDados();
private:

};

#endif /* PESSOA_H */

