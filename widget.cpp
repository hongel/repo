#include "widget.h"
#include <QLabel>
#include <QVBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setGeometry(0,0,600,400);
    QVBoxLayout *layout=new QVBoxLayout(this);
    setLayout(layout);
    QLabel *label=new QLabel(tr("Deepin"),this);
    QLabel *label1=new QLabel(tr("UnionTech is a company that develop Computer OS in China."),this);
    QLabel *label2=new QLabel(tr("UnionTech is the mother company of Deepin."),this);
    QLabel *label3=new QLabel(tr("Hello."),this);
    QLabel *label3=new QLabel(tr("world."),this);
    layout->addWidget(label);
    layout->addWidget(label1);
}

Widget::~Widget()
{

}
