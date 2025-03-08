#include "mainwindow.h"
#include "ui_mainwindow.h"


#include<QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    populateComboBox();
    //ui->txtJsonString->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::populateComboBox()
{
    getCountryList();
    ui->countryComboBox->addItems(countryListWithCode);
}

void MainWindow::getCountryList()
{
    countryListWithCode << "PS - Palestine";
    countryListWithCode << "EG - Egypt";
    countryListWithCode << "PE - Peru";
    countryListWithCode << "RO - Romania";
    countryListWithCode << "US - United States";
    countryListWithCode << "CA - Canada";
    countryListWithCode << "GB - United Kingdom";
    countryListWithCode << "DE - Germany";
    countryListWithCode << "IN - India";
    countryListWithCode << "AU - Australia";
    countryListWithCode << "JP - Japan";
    countryListWithCode << "FR - France";
    countryListWithCode << "IT - Italy";
    countryListWithCode << "BR - Brazil";
    countryListWithCode << "ZA - South Africa";
    countryListWithCode << "CN - China";
    countryListWithCode << "MX - Mexico";
    countryListWithCode << "RU - Russia";
}

// int MainWindow::on_gobtn_clicked()
// {
//     QString CountryCode,zipCode,apiKey;

//     apiKey="2d82c0cf687376c99ff1b980fb404b20";
//     CountryCode=ui->countryComboBox->currentText().split("-")[0].trimmed();
//     zipCode=ui->txtzipcode->text();

//     QString  url=QString("https://api.openweathermap.org/data/2.5/weather?zip=%1,%2&appid=%3").arg(zipCode).arg(CountryCode).arg(apiKey);

//     qDebug()<<url;

//     manager=new QNetworkAccessManager(this);
//     QNetworkRequest request((QUrl(url)));

//     reply=manager->get(request);

//     connect(reply, &QNetworkReply::finished,this,&MainWindow::onWeatherDataReceived);

//     if(reply->error()!=QNetworkReply::NoError)
//     {
//         qDebug()<<"Network Error :"<<reply->errorString();
//         return -1;
//     }

// }

int MainWindow::on_gobtn_clicked()
{
    QString CountryCode, City, apiKey;

    apiKey = "2d82c0cf687376c99ff1b980fb404b20";  // Your API key
    CountryCode = ui->countryComboBox->currentText().split("-")[0].trimmed();  // Extract country code

    // Map country codes to capital cities
    QMap<QString, QString> capitalCities;
    capitalCities["PS"] = "Ramallah";
    capitalCities["EG"] = "Cairo";
    capitalCities["PE"] = "Lima";
    capitalCities["RO"] = "Bucharest";
    capitalCities["US"] = "Washington";
    capitalCities["CA"] = "Ottawa";
    capitalCities["GB"] = "London";
    capitalCities["DE"] = "Berlin";
    capitalCities["IN"] = "New Delhi";
    capitalCities["AU"] = "Canberra";
    capitalCities["JP"] = "Tokyo";
    capitalCities["FR"] = "Paris";
    capitalCities["IT"] = "Rome";
    capitalCities["BR"] = "Brasilia";
    capitalCities["ZA"] = "Pretoria";  // Administrative capital
    capitalCities["CN"] = "Beijing";
    capitalCities["MX"] = "Mexico City";
    capitalCities["RU"] = "Moscow";

    // Get the capital city for the selected country
    City = capitalCities.value(CountryCode, "");

    if (City.isEmpty()) {
        qDebug() << "Error: No city found for country code" << CountryCode;
        return -1;
    }

    // Generate the API URL with city name instead of country code
    QString url = QString("https://api.openweathermap.org/data/2.5/weather?q=%1,%2&appid=%3")
                      .arg(City)
                      .arg(CountryCode)
                      .arg(apiKey);

    qDebug() << "Generated URL: " << url;

    manager = new QNetworkAccessManager(this);
    QNetworkRequest request((QUrl(url)));

    reply = manager->get(request);

    connect(reply, &QNetworkReply::finished, this, &MainWindow::onWeatherDataReceived);

    if (reply->error() != QNetworkReply::NoError) {
        qDebug() << "Network Error: " << reply->errorString();
        return -1;
    }
    return 0;
}


void MainWindow::onWeatherDataReceived()
{
    QNetworkReply *reply=qobject_cast<QNetworkReply*>(sender());


    if(reply->error()==QNetworkReply::NoError)
    {
        QByteArray responseData=reply->readAll();
        QJsonDocument jsonDoc=QJsonDocument::fromJson(responseData);
        QJsonObject jsonObj=jsonDoc.object();
        QString  jsonString=jsonDoc.toJson(QJsonDocument::Indented);
        qDebug()<<jsonString;
        //ui->txtJsonString->setText(jsonString);

        QString weatherDescription=jsonObj["weather"].toArray()[0].toObject()["description"].toString();
        qDebug()<<"Weather description: "<<weatherDescription ;
        int weatherConditionCode=jsonObj["weather"].toArray()[0].toObject()["id"].toInt();
        qDebug()<<"Weather condition code: "<<weatherConditionCode ;
        double windSpeed=jsonObj["wind"].toArray()[0].toObject()["speed"].toDouble();
        qDebug()<<"Wind speed: "<<windSpeed ;
        QString city=jsonObj["name"].toString();
        qDebug()<<"City: "<<city ;
        QString country=jsonObj["sys"].toObject()["country"].toString();
        qDebug()<<"Country: "<<country ;


        double temp=jsonObj["main"].toObject()["temp"].toDouble()-273;
        double temp_max=jsonObj["main"].toObject()["temp"].toDouble()-273;
        double temp_min=jsonObj["main"].toObject()["temp"].toDouble()-273;
        double feels_like=jsonObj["main"].toObject()["feels_like"].toDouble()-273;
        double humidity=jsonObj["main"].toObject()["humidity"].toDouble();

        ui->lbltemp->setText(QString::number(temp));
        ui->lblFL->setText(QString::number(feels_like));
        ui->lblhum->setText(QString::number(humidity));
        ui->lblwind->setText(QString::number(windSpeed));
        ui->lblMax->setText(QString::number(temp_max));
        ui->lblMin->setText(QString::number(temp_min));

        ui->lblDescriptionlogo->setText(weatherDescription);

        ui->lblcoun->setText(country);
        ui->lblcity->setText(city);

        //showWeatherLogo(weatherConditionCode);


    }

    else {
        qDebug()<<"Error :"<<reply->error();
    }

    reply->deleteLater();
}

// void MainWindow:: showWeatherLogo(int weatherConditionCode)
// {
//     qDebug()<<"in showWeatherLogo()";
//     QString imgName;

//     switch(weatherConditionCode)
//     {
//     case 801:imgName="803.png";break;
//     default:imgName="803.png";break;
//     }

//     ui->lblDescriptionlogo->setPixmap(":/images/images"+imgName);
// }

// void MainWindow::on_showbtn_clicked()
// {
//     if(ui->txtJsonString->isVisible())
//         ui->txtJsonString->hide();
//     else
//         ui->txtJsonString->show();

// }

void MainWindow::on_statisticsbtn_clicked()
{
    using namespace QtCharts;

    // Create a line series for temperature
    QLineSeries *series = new QLineSeries();
    series->append(1, ui->lbltemp->text().toDouble());  // Temp
    series->append(2, ui->lblMax->text().toDouble());   // Max Temp
    series->append(3, ui->lblMin->text().toDouble());   // Min Temp
    series->append(4, ui->lblFL->text().toDouble());    // Feels Like

    // Create a chart and add the series
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Temperature Statistics");
    chart->createDefaultAxes();

    // Display the chart in a window
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    QDialog *dialog = new QDialog(this);
    QVBoxLayout *layout = new QVBoxLayout(dialog);
    layout->addWidget(chartView);
    dialog->setLayout(layout);
    dialog->setWindowTitle("Weather Statistics");
    dialog->resize(650, 500);
    dialog->exec();
}



