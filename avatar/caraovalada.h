#ifndef CARAOVALADA_H
#define CARAOVALADA_H
#include <QPainter>
#include "cara.h"
class caraovalada: public Cara
{
public:
    int _x;
    int _y;
    caraovalada(int x,int y):Cara(x,y){
        _x=x;
        _y=y;
    }
    void drawMe(QPainter *DrawHere){
      QImage image1 ("C:/Users/LENOVO/Desktop/progra 3/avatar este si xd/build-avatar-Desktop_Qt_5_2_0_MinGW_32bit-Debug/calvo1.png");
      DrawHere->drawImage(_x,_y,image1);

    }
};



#endif // CARAOVALADA_H
