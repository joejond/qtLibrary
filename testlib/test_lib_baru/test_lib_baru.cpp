#include "test_lib_baru.h"
#include <QtDebug>
#include <QGridLayout>
#include <QLabel>

Test_lib_baru::Test_lib_baru(QWidget * parent): QDialog(parent)
{
    qDebug()<<"Test ini Lib Baruuuu";

    QGridLayout* gridLayout = new QGridLayout(this);
    setLayout(gridLayout);
    gridLayout->addWidget(new QLabel("Hello world from dynamic library", this));
}
