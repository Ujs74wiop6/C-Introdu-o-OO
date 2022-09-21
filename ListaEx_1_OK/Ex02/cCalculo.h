/* 
 * File:   cCalculo.h
 * Author: Fabricio
 *
 * Created on 17 de agosto de 2022, 10:08
 */

#ifndef CCALCULO_H
#define CCALCULO_H

class cCalculo {
public:
    //Atributos

    int a, b, c;

    //Métodos
    cCalculo();
    cCalculo(const cCalculo& orig);
    virtual ~cCalculo();
    void lerDados();
    float calculo();
    int mostrarDados();
private:

};

#endif /* CCALCULO_H */

