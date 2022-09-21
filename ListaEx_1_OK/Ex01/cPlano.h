/* 
 * File:   cPlano.h
 * Author: Fabricio
 *
 * Created on 17 de agosto de 2022, 09:22
 */
#ifndef CPLANO_H
#define CPLANO_H

class cPlano {
public:
    //Atributos
    int x1, y1, x2, y2;

    //Métodos
    cPlano();
    cPlano(const cPlano& orig);
    virtual ~cPlano();

    void lerDados();
    float calDistancia();
private:
};
#endif /* CPLANO_H */

