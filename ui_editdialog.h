/********************************************************************************
** Form generated from reading UI file 'editdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITDIALOG_H
#define UI_EDITDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Editdialog
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *nameLabel;
    QLineEdit *nameLineEdit;
    QLabel *timeLabel;
    QTimeEdit *timeTimeEdit;
    QLabel *dateLabel;
    QDateEdit *dateDateEdit;
    QLabel *noteLabel;
    QLineEdit *noteLineEdit;
    QLabel *impoLabel;
    QComboBox *impoComboBox;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *Editdialog)
    {
        if (Editdialog->objectName().isEmpty())
            Editdialog->setObjectName(QString::fromUtf8("Editdialog"));
        Editdialog->resize(485, 216);
        formLayoutWidget = new QWidget(Editdialog);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 30, 471, 181));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        nameLabel = new QLabel(formLayoutWidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, nameLabel);

        nameLineEdit = new QLineEdit(formLayoutWidget);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nameLineEdit);

        timeLabel = new QLabel(formLayoutWidget);
        timeLabel->setObjectName(QString::fromUtf8("timeLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, timeLabel);

        timeTimeEdit = new QTimeEdit(formLayoutWidget);
        timeTimeEdit->setObjectName(QString::fromUtf8("timeTimeEdit"));
        timeTimeEdit->setCurrentSection(QDateTimeEdit::MinuteSection);

        formLayout->setWidget(1, QFormLayout::FieldRole, timeTimeEdit);

        dateLabel = new QLabel(formLayoutWidget);
        dateLabel->setObjectName(QString::fromUtf8("dateLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, dateLabel);

        dateDateEdit = new QDateEdit(formLayoutWidget);
        dateDateEdit->setObjectName(QString::fromUtf8("dateDateEdit"));
        dateDateEdit->setDateTime(QDateTime(QDate(2023, 1, 1), QTime(0, 0, 0)));
        dateDateEdit->setMinimumDateTime(QDateTime(QDate(2023, 1, 1), QTime(0, 0, 0)));
        dateDateEdit->setCurrentSection(QDateTimeEdit::DaySection);
        dateDateEdit->setCalendarPopup(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, dateDateEdit);

        noteLabel = new QLabel(formLayoutWidget);
        noteLabel->setObjectName(QString::fromUtf8("noteLabel"));
        noteLabel->setMinimumSize(QSize(0, 60));

        formLayout->setWidget(3, QFormLayout::LabelRole, noteLabel);

        noteLineEdit = new QLineEdit(formLayoutWidget);
        noteLineEdit->setObjectName(QString::fromUtf8("noteLineEdit"));
        noteLineEdit->setMinimumSize(QSize(0, 60));

        formLayout->setWidget(3, QFormLayout::FieldRole, noteLineEdit);

        impoLabel = new QLabel(formLayoutWidget);
        impoLabel->setObjectName(QString::fromUtf8("impoLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, impoLabel);

        impoComboBox = new QComboBox(formLayoutWidget);
        impoComboBox->addItem(QString());
        impoComboBox->addItem(QString());
        impoComboBox->addItem(QString());
        impoComboBox->addItem(QString());
        impoComboBox->addItem(QString());
        impoComboBox->setObjectName(QString::fromUtf8("impoComboBox"));

        formLayout->setWidget(4, QFormLayout::FieldRole, impoComboBox);

        label = new QLabel(Editdialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 131, 21));
        pushButton = new QPushButton(Editdialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 10, 181, 20));

        retranslateUi(Editdialog);

        QMetaObject::connectSlotsByName(Editdialog);
    } // setupUi

    void retranslateUi(QDialog *Editdialog)
    {
        Editdialog->setWindowTitle(QCoreApplication::translate("Editdialog", "Dialog", nullptr));
        nameLabel->setText(QCoreApplication::translate("Editdialog", "\345\247\223\345\220\215(Name)", nullptr));
        timeLabel->setText(QCoreApplication::translate("Editdialog", "\346\227\266\351\227\264(Time)", nullptr));
        timeTimeEdit->setDisplayFormat(QCoreApplication::translate("Editdialog", "HH:mm", nullptr));
        dateLabel->setText(QCoreApplication::translate("Editdialog", "\346\227\245\346\234\237(Date)", nullptr));
        dateDateEdit->setDisplayFormat(QCoreApplication::translate("Editdialog", "yyyy/MM/dd", nullptr));
        noteLabel->setText(QCoreApplication::translate("Editdialog", "\345\244\207\346\263\250(Note)", nullptr));
        impoLabel->setText(QCoreApplication::translate("Editdialog", "\351\207\215\350\246\201\346\200\247(Impo)", nullptr));
        impoComboBox->setItemText(0, QCoreApplication::translate("Editdialog", "\346\227\240", nullptr));
        impoComboBox->setItemText(1, QCoreApplication::translate("Editdialog", "\344\270\215\351\207\215\350\246\201", nullptr));
        impoComboBox->setItemText(2, QCoreApplication::translate("Editdialog", "\351\207\215\350\246\201", nullptr));
        impoComboBox->setItemText(3, QCoreApplication::translate("Editdialog", "\351\235\236\345\270\270\351\207\215\350\246\201", nullptr));
        impoComboBox->setItemText(4, QCoreApplication::translate("Editdialog", "\346\200\245\350\277\253", nullptr));

        label->setText(QCoreApplication::translate("Editdialog", "\347\274\226\350\276\221\347\225\214\351\235\242", nullptr));
        pushButton->setText(QCoreApplication::translate("Editdialog", "\347\274\226\350\276\221\345\256\214\346\210\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Editdialog: public Ui_Editdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITDIALOG_H
