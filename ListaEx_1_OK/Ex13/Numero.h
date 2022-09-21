/* 
 * File:   Numero.h
 * Author: Fabricio
 *
 * Created on 30 de agosto de 2022, 18:29
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
    float calcularNumero(float n1, float n2, float n3);
    float imprimirDados(float n1, float n2, float n3);
};
#endif /* NUMERO_H */