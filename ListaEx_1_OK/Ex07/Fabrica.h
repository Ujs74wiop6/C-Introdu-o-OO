/* 
 * File:   Fabrica.h
 * Author: Fabricio
 *
 * Created on 24 de agosto de 2022, 06:13
 */

#ifndef FABRICA_H
#define FABRICA_H

class Fabrica {
public:
    Fabrica();
    Fabrica(const Fabrica& orig);
    virtual ~Fabrica();
    void lerDados();
private:
    float calcularPreco(float custoF);
    void imprimirPreco(float custoF);
};

#endif /* FABRICA_H */

