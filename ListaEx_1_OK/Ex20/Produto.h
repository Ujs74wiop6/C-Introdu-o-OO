/* 
 * File:   Produto.h
 * Author: Fabricio
 *
 * Created on 24 de agosto de 2022, 10:14
 */

#ifndef PRODUTO_H
#define PRODUTO_H

class Produto {
public:
    Produto();
    Produto(const Produto& orig);
    virtual ~Produto();

    void tabelaProdutos();
    void lerDados();
    float addItemPedido(int cod, int n);
private:

};

#endif /* PRODUTO_H */

