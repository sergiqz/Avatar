#ifndef BLANCO_H
#define BLANCO_H
#include <QPainter>
#include "boca.h"
class blanco: public Boca
{
public:
    int _x;
    int _y;

    blanco(int x,int y):Boca(x,y){
        _x=x;
        _y=y;
    }

    void drawMe(QPainter *DrawHere){
      QImage image1 ("C:/Users/LENOVO/Desktop/progra 3/avatar este si xd/build-avatar-Desktop_Qt_5_2_0_MinGW_32bit-Debug/blanco.png");
      DrawHere->drawImage(_x,_y,image1);
    }
};
#endif // BLANCO_H
