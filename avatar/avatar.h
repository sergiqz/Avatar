#ifndef AVATAR_H
#define AVATAR_H

#include "cara.h"
#include "ojos.h"
#include "boca.h"
class Avatar
{
private:
    Cara *cara;
    Ojos *ojos;
    Boca *boca;

public:
    Avatar(){}
    void crearCara(Cara *c);
    void crearBoca(Boca *b);
    void crearOjos(Ojos *o);
    virtual void drawMe(QPainter *DrawHere);




};
#endif // AVATAR_H
