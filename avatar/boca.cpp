#include "boca.h"


Boca::Boca(double x,double y){
    xcord=x;
    ycord=y;

}
double Boca::setx(double _xcord){
    xcord=_xcord;
}
double Boca::getx(){
    return xcord;
}

double Boca::sety(double _ycord){
    ycord=_ycord;
}
double Boca::gety(){
    return ycord;
}

