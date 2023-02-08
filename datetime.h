#ifndef DATETIME_H
#define DATETIME_H

#include <QDialog>
#include <QDateTime>
#include <QDebug>
#include <QTimer>
#include <QLabel>
#include <QVBoxLayout>
#include <QApplication>
#include <vector>
#include "note.h"
#include <QTime>
#include <QString>
#include <QObject>
#include <QFile>
#include <QTextCodec>
#include <QMessageBox>
#include "note.h"
#include "ui_datetime.h"

namespace Ui {
class dateTime;
}

class dateTime : public QDialog
{
    Q_OBJECT

public:
    explicit dateTime(QWidget *parent = nullptr);
    ~dateTime();

    void timeUpdate(void);

    //Ui::dateTime *warning_time;



private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

   // void myslot();

private:
    Ui::dateTime *ui;
    QDateTime datetime;
    QTimer *timer;
    QString systime;

public:
    Ui::dateTime *warning_time;
};

#endif // DATETIME_H
