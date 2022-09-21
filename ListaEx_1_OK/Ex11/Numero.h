/* 
 * File:   Numero.h
 * Author: Fabricio
 *
 * Created on 25 de agosto de 2022, 06:52
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
    float calcularNumero(int x, int y);
    float imprimirNumero(int x, int y);

};

#endif /* NUMERO_H */

