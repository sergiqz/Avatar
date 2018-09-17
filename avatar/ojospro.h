#ifndef OJOSPRO_H
#define OJOSPRO_H
#include <QPainter>
#include "ojos.h"
class ojospro: public Ojos
{
public:
    int _x;
    int _y;

    ojospro(int x,int y):Ojos(x,y){
        _x=x;
        _y=y;
    }
    void drawMe(QPainter *DrawHere){
      QImage image1 ("C:/Users/LENOVO/Desktop/progra 3/avatar este si xd/build-avatar-Desktop_Qt_5_2_0_MinGW_32bit-Debug/images.png");
      DrawHere->drawImage(_x,_y,image1);
    }
};
#endif // OJOSPRO_H
