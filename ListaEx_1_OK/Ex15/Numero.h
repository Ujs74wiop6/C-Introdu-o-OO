/* 
 * File:   Numero.h
 * Author: Fabricio
 *
 * Created on 11 de setembro de 2022, 22:29
 */

#ifndef NUMERO_H
#define NUMERO_H

class Numero {
public:
    Numero();
    Numero(const Numero& orig);
    virtual ~Numero();
    void lerDados();
private:
    int analizarNumeros(int num);
};

#endif /* NUMERO_H */

