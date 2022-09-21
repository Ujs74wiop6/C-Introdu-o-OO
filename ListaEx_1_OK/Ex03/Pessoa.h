/* 
 * File:   Pessoa.h
 * Author: Fabricio
 *
 * Created on 17 de agosto de 2022, 10:58
 */

#ifndef PESSOA_H
#define PESSOA_H

class Pessoa {
public:
    //Atributos
    int idade, anos, meses, dias;
    //Métodos
    Pessoa();
    Pessoa(const Pessoa& orig);
    virtual ~Pessoa();
    void lerDados();
    int idadeEmdias();
    int mostrarDados();
private:

};

#endif /* PESSOA_H */

