/* 
 * File:   Pedido.h
 * Author: Fabricio
 *
 * Created on 24 de agosto de 2022, 08:19
 */

#ifndef PEDIDO_H
#define PEDIDO_H

class Pedido {
public:
    Pedido();
    Pedido(const Pedido& orig);
    virtual ~Pedido();
    
    void lerDados();
    float addItemPedido(int cod);
private:

};

#endif /* PEDIDO_H */

