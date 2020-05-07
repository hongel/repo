#include "widget.h"
#include <QLabel>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setGeometry(0,0,600,400);
    QLabel *label=new QLabel(tr("Deepin"),this);
    label->move(300,200);
}

Widget::~Widget()
{

}
