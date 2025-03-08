#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include<QNetworkAccessManager>
#include <QMainWindow>
#include<QNetworkReply>
#include<QJsonDocument>
#include<QJsonObject>
#include<QJsonArray>

#include<QtCore>
#include<QtGui>
#include<QtCharts>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    int on_gobtn_clicked();

    //void on_showbtn_clicked();


    void on_statisticsbtn_clicked();

private:
    Ui::MainWindow *ui;
    void getCountryList();
    QStringList countryListWithCode;
    void populateComboBox();
    QNetworkAccessManager *manager;;
    QNetworkReply *reply;
    void onWeatherDataReceived();
    void showWeatherLogo(int);
};
#endif // MAINWINDOW_H
