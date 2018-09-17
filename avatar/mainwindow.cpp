#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cara.h"
#include "caradebalon.h"
#include "caraovalada.h"
#include "cararedonda.h"
#include "avatar.h"
#include "ojos.h"
#include "ojosenojados.h"
#include "ojosfelises.h"
#include "ojospro.h"
#include "boca.h"
#include "bocafeliz.h"
#include "bocaserio.h"
#include "bocatriste.h"
#include "blanco.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    pixmap=new QPixmap(400,300);
    pixmap->fill();


    QColor color("black");
    lapiz=new QPen(color);


    ui->l_area->setPixmap(*pixmap);
    q=new QPainter(pixmap);
    q->setPen(*lapiz);
    avatar = new Avatar();
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_caritas_activated(int index)
{
    switch(ui->caritas->currentIndex())
        {


            case 1: cara=new caradebalon(50,50);
            avatar->crearCara(cara);
            //break;
            case 2: cara=new caraovalada(50,50);
            avatar->crearCara(cara);
            //break;
            case 3: cara=new cararedonda(50,50);
            avatar->crearCara(cara);
            //break;
        }

/*
        avatar->drawMe(q);
        ui->l_area->setPixmap(*pixmap);
*/
}

void MainWindow::on_ojitos_activated(int index)
{
    switch(ui->ojitos->currentIndex())
        {
            case 1: ojos=new ojosenojados(100,120);
            avatar->crearOjos(ojos);
            //break;
            case 2: ojos=new ojosfelises(115,120);
            avatar->crearOjos(ojos);
            //break;
            case 3: ojos=new ojospro(100,120);
            avatar->crearOjos(ojos);
            //break;
        }
/*
        avatar->drawMe(q);
        ui->l_area->setPixmap(*pixmap);
*/
}

void MainWindow::on_boquitas_activated(int index)
{
    switch(ui->boquitas->currentIndex())
        {
            case 1: boca=new bocafeliz(120,170);
            avatar->crearBoca(boca);
  //          break;
            case 2: boca=new bocaserio(120,170);
            avatar->crearBoca(boca);
    //        break;
            case 3: boca=new bocatriste(120,170);
            avatar->crearBoca(boca);
      //      break;
        }
/*
        avatar->drawMe(q);
        ui->l_area->setPixmap(*pixmap);
*/
}



void MainWindow::on_pushButton_clicked()
{
    boca=new blanco(50,50);
    avatar->crearBoca(boca);
    avatar->drawMe(q);
    ui->l_area->setPixmap(*pixmap);

    switch(ui->caritas->currentIndex())
        {


            case 1: cara=new caradebalon(50,50);
            avatar->crearCara(cara);
            break;
            case 2: cara=new caraovalada(50,50);
            avatar->crearCara(cara);
            break;
            case 3: cara=new cararedonda(50,50);
            avatar->crearCara(cara);
            break;
        }



    switch(ui->ojitos->currentIndex())
        {
            case 1: ojos=new ojosenojados(100,120);
            avatar->crearOjos(ojos);
            break;
            case 2: ojos=new ojosfelises(115,120);
            avatar->crearOjos(ojos);
            break;
            case 3: ojos=new ojospro(100,120);
            avatar->crearOjos(ojos);
            break;
        }

    switch(ui->boquitas->currentIndex())
        {
            case 1: boca=new bocafeliz(115,170);
            avatar->crearBoca(boca);
            break;
            case 2: boca=new bocaserio(50,50);
            avatar->crearBoca(boca);
            break;
            case 3: boca=new bocatriste(115,170);
            avatar->crearBoca(boca);
            break;
        }




        pixmap->fill(QColor(255,255,255));
        avatar->drawMe(q);

        ui->l_area->setPixmap(*pixmap);


}
