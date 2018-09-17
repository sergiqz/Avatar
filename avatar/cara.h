#ifndef CARA_H
#define CARA_H
#include <QPainter>



class Cara
{
    protected:

        QString Nombre;
        QString Ruta;
        double xcord;
        double ycord;


public:

    Cara(double x, double y);
    double getx();
    double setx(double _xcord);
    double gety();
    double sety(double _ycord);
    virtual void drawMe(QPainter *DrawHere)=0;


};
#endif // CARA_H
