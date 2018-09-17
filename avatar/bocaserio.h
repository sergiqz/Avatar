#ifndef BOCASERIO_H
#define BOCASERIO_H
#include <QPainter>
#include "boca.h"
class bocaserio: public Boca
{
public:
    int _x;
    int _y;
    bocaserio(int x,int y):Boca(x,y){
        _x=x;
        _y=y;
    }
    void drawMe(QPainter *DrawHere){
      QImage image1 ("C:/Users/Admin/Desktop/programacion 3/avatar ahora si xd/avatar/build-avatar-Desktop_Qt_5_2_0_MinGW_32bit-Debug/boca_triste.png");
      DrawHere->drawImage(_x,_y,image1);
    }
};
#endif // BOCASERIO_H
