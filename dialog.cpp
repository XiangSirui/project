#include "dialog.h"
#include "ui_dialog.h"
#include "addnew.h"
#include "about.h"
#include "history.h"
#include "windows.h"
#include <QGridLayout>
#include <QDebug>
#include "note.h"
#include <QFile>
#include <QTextCodec>
#include <QDateTime>
#include <QTime>
#include <QTimer>
#include <QMessageBox>
#include <QString>
#include "datetime.h"


QString name;
QString thing;
QString importance;

//主界面窗口设置
Dialog::Dialog(QWidget *parent)
        : QDialog(parent), ui(new Ui::Dialog) {
    ui->setupUi(this);
    datetime = QDateTime::currentDateTime();
    systime = datetime.toString("hhh:mm yyyy/MM/dd");

    //创建定时器定时更新时间和日期
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &Dialog::timeUpdate);
    timer->start(1000);
    //显示日期时间

    extern QString str_read[10][7];

}

Dialog::~Dialog() {
    delete ui;
}  //析构函数

void Dialog::on_pushButton_clicked() {
    Addnew *add = new Addnew(&note_vector);
    add->exec();
    onRefresh() ; //刷新
}   //打开新增面板

void Dialog::on_pushButton_2_clicked() {
    About *about = new About;
    about->show();

}  //打开关于面板

void Dialog::on_pushButton_3_toggled(bool checked) {

    if (checked) {
        ui->pushButton_3->setText(tr("显示"));
        ui->frame->hide();
    } else {
        ui->pushButton_3->setText(tr("最小化"));
        ui->frame->show();
    }
}

void Dialog::on_pushButton_4_clicked() {
    history *a = new history(this, &note_vector);
    a->show();
}


void Dialog::onRefresh() {//创建时调用
//
    if (ui->frame_2->widget()->layout() != nullptr) {//删除原有布局
        QLayoutItem *item;
        while ((item = ui->frame_2->widget()->layout()->takeAt(0)) != nullptr) {
            delete item->widget();
            delete item;
        }
        delete ui->frame_2->widget()->layout();
    }
    QGridLayout *gridLayout = new QGridLayout();                   //网格布局

    //

    QFile file;
    file.setFileName("log.txt");   //保存到本地地址
    QString str_read[7];
    QString strline;
    int num;
    if (file.open(QIODevice::ReadOnly))                               //只读
    {
        QTextCodec *codec = QTextCodec::codecForName("GBK");         //指定读码方式为GBK
        note_vector.clear();
        while (!file.atEnd())                                        //当没有读到文件末尾时
        {
            strline = codec->toUnicode(file.readLine());             //以GBK的编码方式读取一行
            QChar c = strline[0];                       //判断第一个字符是否是回车符（空文件只有一个回车符）
            char c0 = c.toLatin1();
            if (c0 > 57 || c0 < 48) { return; }

            //

            QStringList list = strline.split(" ");                   //以一个空格为分隔符
            for (int i = 0; i < 7; i++) {
                str_read[i] = list[i];
            }
            num = str_read[0].toInt();   //将第一个数据转化为int类
            Note *n1 = new Note(&note_vector, num, str_read[1], str_read[2], str_read[3], str_read[4], str_read[5]);
            note_vector.push_back(n1);   //放到vector最后一个位置
            if (n1->finish == 0) {
                gridLayout->addWidget(n1);
            }
        }
        ui->frame_2->widget()->setLayout(gridLayout);
        repaint();     //顺序输出vector所有的东西
    }
    for(int k = 0; k < 10; k++)                                      //更新时就将sign值初始化
        sign[k] = 0;
}


void Dialog::timeUpdate(void)
{
    datetime = QDateTime::currentDateTime();
    systime = datetime.toString("hh:mm yyyy/MM/dd");
    QFile file;
    file.setFileName("log.txt");                                      //保存到本地地址
    //QString str_read[10][7];
    QString strline;
    int mark[10];
    int j = 0;
    if (file.open(QIODevice::ReadOnly))                               //只读
    {
        QTextCodec *codec = QTextCodec::codecForName("GBK");         //指定读码方式为GBK
        //note_vector1.clear();

        while (!file.atEnd())                                        //当没有读到文件末尾时
        {
            strline = codec->toUnicode(file.readLine());             //以GBK的编码方式读取一行
            QChar c = strline[0];                       //判断第一个字符是否是回车符（空文件只有一个回车符）
            char c0 = c.toLatin1();
            if (c0 > 57 || c0 < 48) { return; }

            //

            QStringList list = strline.split(" ");                   //以一个空格为分隔符
            for (int i = 0; i < 7; i++) {
                str_time[j][i] = list[i];
            }
            mark[j] = str_time[j][0].toInt();   //将第一个数据转化为int类
            //Note *n1 = new Note(&note_vector, mark, str_read[1], str_read[2], str_read[3], str_read[4], str_read[5]);
            //QString settime = str_read[2] + " " + str_read[3];
            j ++;
}}


    QString settime[10];
    for(int z = 0; z < j; z++)                                             //读取所有设定时间并转化为字符串
    settime[z] = str_time[z][2] + " " + str_time[z][3];

    for(m = 0;m < j; m++)
    if((settime[m] == systime)&&(mark[m] == 0)&&(sign[m] == 0))           //判定时间是否到达
    {
 //       QMessageBox::information(this,"alarm","时间到了！");
        //Ui::dateTime  *warning;
        //warning->title->setText("hello");
        //QLabel* warningit;
        //warningit = warning->title;
        //warningit->setText("Hello");
        name = str_time[m][1];
        thing = str_time[m][5];
        importance = str_time[m][4];
        dateTime *alarm = new dateTime;                                   //打开提醒页面
        alarm -> show();

        sign[m] = 1;                                                     //防止不会一直弹出

    }

}

