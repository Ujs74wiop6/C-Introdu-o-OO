/* 
 * File:   Aluno.h
 * Author: Fabricio
 *
 * Created on 24 de agosto de 2022, 07:21
 */

#ifndef ALUNO_H
#define ALUNO_H

class Aluno {
public:
    Aluno();
    Aluno(const Aluno& orig);
    virtual ~Aluno();
    void lerDados();
private:
    float calcularNotas(float n1, float n2, float n3);
    void imprimirResultado(float media);

};

#endif /* ALUNO_H */

