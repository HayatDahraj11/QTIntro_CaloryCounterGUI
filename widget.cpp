#include "widget.h"
#include <cmath>
#include "./ui_widget.h"

Widget::Widget(QWidget *parent): QWidget(parent), ui(new Ui::Widget)
{
    ui->setupUi(this);
    speed = 0;
    time = 0;
   personOBJ.SetWeight(0);
   ui->ShowCalories->setText("Set A Value!");

    connect(ui->WeightSpinBox , &QDoubleSpinBox::valueChanged  ,this , &Widget::weight_changed);
    connect(ui->SpeedSpinBox , &QDoubleSpinBox::valueChanged   ,  this , &Widget::speed_changed);
    connect(ui->TimeSpinBox , &QDoubleSpinBox::valueChanged , this , &Widget::time_changed);
}

void Widget::CalculateCalories()
{

    calorycount  = (0.00215* pow(speed , 3) - 0.1765 * pow(speed , 2) + 0.8710 * speed +
                      1.4577) * personOBJ.GetWeight() * time;

     calorycountchanged();


}

void Widget::calorycountchanged()
{
                ui->ShowCalories->setNum(calorycount);
}

void Widget::weight_changed(double weight)
{
            personOBJ.SetWeight(weight);
            CalculateCalories();
}

void Widget::time_changed(double time)
{
    this->time = time;
    CalculateCalories();
}

void Widget::speed_changed(double a)
{
this->speed = a;
    CalculateCalories();
}




Widget::~Widget()
{
    delete ui;
}





