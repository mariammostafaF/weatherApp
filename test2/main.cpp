#include "mainwindow.h"
#include<QLabel>
#include <QApplication>

#include<QtWidgets/QMainWindow>
#include<QtCharts/QChartView>
#include<QtCharts/QBarSeries>
#include<QtCharts/QBarSet>
#include<QtCharts/QLegend>
#include<QtCharts/QBarCategoryAxis>
#include<QHorizontalStackedBarSeries>
#include<QtCharts/QLineSeries>
#include<QtCharts/QCategoryAxis>
#include<QtCharts/QPieSeries>
#include<QtCharts/QPieSlice>
#include <QtCharts/QValueAxis>

QT_CHARTS_USE_NAMESPACE

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    QString styleSheet="QWidget{font-size :16px;}";
    a.setStyleSheet(styleSheet);


    QLabel *lable=w.findChild<QLabel*>("lbltemp");

    if(lable)
    {
        QFont font;
        font=lable->font();
        font.setPointSize(40);
        lable->setFont(font);
        lable->setStyleSheet("QWidget{font-size :50px;}");
    }

    w.show();
    return a.exec();
}
