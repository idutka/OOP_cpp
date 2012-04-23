#include "dialog.h"
#include "ui_dialog.h"
#include "calc.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    z = a = act =0;
    b = d = 1;
    i = 10;
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::update()
{
    ui->lcdNumber->display(z);
}

void Dialog::on_pushButton_clicked()
{

    switch(act)
        {
    case 1:
        z = a*b;
         break;
    case 2:
        z = a/b;
        break;
    case 3:
        z = a-b;
        break;
    case 4:
        z = a+b;
        break;
        }
     a = z;
     i = 10;
     d = 1;
     update();
}

void Dialog::on_pushButton_15_clicked()
{
    z = a = act =0; //clean
    b = d = 1;
    i = 10;
    update();
}

void Dialog::on_pushButton_1_clicked()
{
   addChar(1);
}

void Dialog::on_pushButton_2_clicked()
{
    addChar(2);
}

void Dialog::on_pushButton_3_clicked()
{
    addChar(3);
}

void Dialog::on_pushButton_4_clicked()
{
    addChar(4);
}

void Dialog::on_pushButton_5_clicked()
{
    addChar(5);
}

void Dialog::on_pushButton_6_clicked()
{
   addChar(6);
}

void Dialog::on_pushButton_7_clicked()
{
    addChar(7);
}

void Dialog::on_pushButton_8_clicked()
{
    addChar(8);
}

void Dialog::on_pushButton_9_clicked()
{
    addChar(9);
}


void Dialog::on_pushButton_0_clicked()
{
    addChar(0);
}

void Dialog::on_pushButton_10_clicked()
{
    i = 1;
    d = 10;
}

void Dialog::addChar(int c){
   if(a==z) z = 0;
    b = z = z*i + 1.0*c/d;
    if(d!=1) d*=10;
    update();

};

void Dialog::on_pushButton_11_clicked()
{
    action(1);
}

void Dialog::on_pushButton_12_clicked()
{
    action(2);
}

void Dialog::on_pushButton_13_clicked()
{
    action(3);
}

void Dialog::on_pushButton_14_clicked()
{
    action(4);
}

void Dialog::action(int ac){
    a = z;
    i = 10;
    d = 1;
    act = ac;
}

void Dialog::on_pushButton_16_clicked()
{
    z*=(-1);
    b = z;
    update();
}

void Dialog::on_pushButton_17_clicked()
{
    z*=z;
    update();
}
