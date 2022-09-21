/* 
 * File:   Aluno.h
 * Author: Fabricio
 *
 * Created on 31 de agosto de 2022, 06:06
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
    float calNota(float n1, float n2, float n3);
    float imprimirDados(float n1, float n2, float n3);

};

#endif /* ALUNO_H */

