/* 
 * File:   cBanco.h
 * Author: Fabricio
 *
 * Created on 13 de setembro de 2022, 17:45
 */

#ifndef CBANCO_H
#define CBANCO_H

class cBanco {
public:
    cBanco();
    cBanco(const cBanco& orig);
    virtual ~cBanco();
    void lerDados();
    void tabela();
private:
    float calCredito(float saldoM);
    float diferenca(float saldoM, float credito);

};

#endif /* CBANCO_H */

