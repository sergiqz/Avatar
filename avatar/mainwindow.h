#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QPixmap>
#include <QPen>
#include <QColor>
#include <QPainter>
#include "avatar.h"

namespace Ui {
class MainWindow;
}
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QPainter *q;
    QPixmap *pixmap;
    QPen *lapiz;
    Cara *cara;
    Ojos *ojos;
    Boca *boca;
    Avatar *avatar;

private slots:

    void on_caritas_activated(int index);
    void on_ojitos_activated(int index);
    void on_boquitas_activated(int index);
    void actualizar();
    void on_pushButton_clicked();
    void on_ojitos_activated(const QString &arg1);
};



#endif // MAINWINDOW_H
