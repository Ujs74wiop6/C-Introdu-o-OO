/* 
 * File:   Peso.h
 * Author: Fabricio
 *
 * Created on 11 de setembro de 2022, 22:46
 */

#ifndef PESO_H
#define PESO_H

class Peso {
public:
    Peso();
    Peso(const Peso& orig);
    virtual ~Peso();
    void lerDados();
private:
    float analizeDeDados(char sexo, float altura);
    float impressao(char sexo, float altura);
};

#endif /* PESO_H */

