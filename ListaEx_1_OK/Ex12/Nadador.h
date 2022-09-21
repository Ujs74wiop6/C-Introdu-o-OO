/* 
 * File:   Nadador.h
 * Author: Fabricio
 *
 * Created on 30 de agosto de 2022, 06:24
 */

#ifndef NADADOR_H
#define NADADOR_H

class Nadador {
public:
    Nadador();
    Nadador(const Nadador& orig);
    virtual ~Nadador();
    void lerDados();
private:
    int classificacao(int idade);
};
#endif /* NADADOR_H */