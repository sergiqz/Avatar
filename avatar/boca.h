#ifndef BOCA_H
#define BOCA_H
#include <QPainter>

class Boca
{
    protected:

        QString Nombre;
        QString Ruta;
        double xcord;
        double ycord;


public:
    Boca(double x, double y);
    double getx();
    double setx(double _xcord);
    double gety();
    double sety(double _ycord);
    virtual void drawMe(QPainter *DrawHere)=0;

};
#endif // CARA_H
