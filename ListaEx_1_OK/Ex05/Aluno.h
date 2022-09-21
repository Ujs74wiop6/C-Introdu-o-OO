/* 
 * File:   Aluno.h
 * Author: Fabricio
 *
 * Created on 22 de agosto de 2022, 18:21
 */

#ifndef ALUNO_H
#define ALUNO_H

class Aluno {
public:
    //Atributos 
    float n1, n2, n3, media;

    //Métodos
    Aluno();
    Aluno(const Aluno& orig);
    virtual ~Aluno();
    void lerDados();
    float calcularMedia();
    float imprimirDados();
private:

};

#endif /* ALUNO_H */

