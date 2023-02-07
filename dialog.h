#ifndef DIALOG_H
#define DIALOG_H
#include <vector>
#include <QDialog>
#include "note.h"
#include <QTime>
#include <QString>
#include <QObject>
#include "datetime.h"
#include <QLabel>
QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

extern QString name;
extern QString thing;
extern QString importance;

class Dialog : public QDialog
{
Q_OBJECT

public:
    std::vector<Note*> note_vector;
    Dialog(QWidget *parent = nullptr);
    ~Dialog();
    void onRefresh();

public slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_toggled(bool checked);

    void on_pushButton_4_clicked();

   // void deal_alartime();

   // void GetDateTime();//动态显示时间

    void timeUpdate(void);

    //void change_title(QString str);

public:
    Ui::Dialog *ui;
    Ui::dateTime  *warning;
    Ui::Dialog *warningit;
   // QTime setTime,nowTime;
    //QTimer *myTimer;
    QDateTime datetime;
    QTimer *timer;
    QString systime;
    QString str_time[10][7];
    int sign[10] = {0};
    int m;
};
#endif // DIALOG_H
