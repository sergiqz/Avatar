#ifndef OJOS_H
#define OJOS_H
#include <QPainter>
class Ojos
{
    protected:

        QString Nombre;
        QString Ruta;
        double xcord;
        double ycord;
public:
    Ojos(double x, double y);
    double getx();
    double setx(double _xcord);
    double gety();
    double sety(double _ycord);
    virtual void drawMe(QPainter *DrawHere)=0;
};
#endif // OJOS_H
