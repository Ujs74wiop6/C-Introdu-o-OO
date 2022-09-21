/* 
 * File:   cMedia.h
 * Author: Fabricio
 *
 * Created on 12 de setembro de 2022, 18:41
 */

#ifndef CMEDIA_H
#define CMEDIA_H

class cMedia {
public:
    cMedia();
    cMedia(const cMedia& orig);
    virtual ~cMedia();
    void lerDados();
private:
    float calMedia(float n1, float n2, float n3, int opc);
    float imprimirMedia(float n1, float n2, float n3, int opc);

};

#endif /* CMEDIA_H */

