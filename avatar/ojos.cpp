
#include "ojos.h"

Ojos::Ojos(double x,double y){
    xcord=x;
    ycord=y;

}
double Ojos::setx(double _xcord){
    xcord=_xcord;
}
double Ojos::getx(){
    return xcord;
}

double Ojos::sety(double _ycord){
    ycord=_ycord;
}
double Ojos::gety(){
    return ycord;
}



