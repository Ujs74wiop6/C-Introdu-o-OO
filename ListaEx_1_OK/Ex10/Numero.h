/* 
 * File:   Numero.h
 * Author: Fabricio
 *
 * Created on 24 de agosto de 2022, 08:05
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

