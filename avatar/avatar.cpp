#include"avatar.h"



void Avatar::crearCara(Cara *c){

    cara = c;
}
void Avatar::crearBoca(Boca *b){
    boca = b;
}
void Avatar::crearOjos(Ojos *o){
    ojos = o;
}

void Avatar::drawMe(QPainter *DrawHere){
    if(cara){
        cara->drawMe(DrawHere);
    }
    if(ojos){
        ojos->drawMe(DrawHere);
    }
    if(boca){
        boca->drawMe(DrawHere);
    }
}
