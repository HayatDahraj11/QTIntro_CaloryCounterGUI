#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "Person.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
  // void  CalculateCalories();


    ~Widget();

private:
    PERSON personOBJ;
    Ui::Widget *ui;
    double time;
    double speed;
    double calorycount;



private slots:

    void CalculateCalories();
    void calorycountchanged();
    //void DONE();
    void weight_changed(double );
    void time_changed(double  );
    void speed_changed(double);
};
#endif // WIDGET_H
