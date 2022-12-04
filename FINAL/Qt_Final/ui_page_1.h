/********************************************************************************
** Form generated from reading UI file 'page_1.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE_1_H
#define UI_PAGE_1_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_page_1
{
public:
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QLabel *pTemp;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *pHumi;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_date_time;
    QLabel *label_4;

    void setupUi(QWidget *page_1)
    {
        if (page_1->objectName().isEmpty())
            page_1->setObjectName(QString::fromUtf8("page_1"));
        page_1->resize(800, 480);
        pushButton = new QPushButton(page_1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(650, 330, 150, 150));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/2849830_multimedia_options_setting_settings_gear_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(90, 90));
        pushButton->setCheckable(true);
        pushButton->setFlat(true);
        layoutWidget = new QWidget(page_1);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(220, 240, 411, 151));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pTemp = new QLabel(layoutWidget);
        pTemp->setObjectName(QString::fromUtf8("pTemp"));
        QFont font;
        font.setFamily(QString::fromUtf8("Aa\354\202\220\354\202\220\353\241\261"));
        font.setPointSize(14);
        pTemp->setFont(font);
        pTemp->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(pTemp, 3, 2, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setEnabled(true);
        label_3->setFont(font);
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_3, 3, 1, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Aa\354\202\220\354\202\220\353\241\261"));
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setWeight(50);
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_7, 5, 1, 1, 1);

        pHumi = new QLabel(layoutWidget);
        pHumi->setObjectName(QString::fromUtf8("pHumi"));
        pHumi->setFont(font);
        pHumi->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(pHumi, 5, 2, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        gridLayout_2->addWidget(label_6, 3, 3, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        gridLayout_2->addWidget(label_8, 5, 3, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(70, 70));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 3, 0, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setEnabled(true);
        label_2->setMaximumSize(QSize(70, 70));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 5, 0, 1, 1);

        label_date_time = new QLabel(page_1);
        label_date_time->setObjectName(QString::fromUtf8("label_date_time"));
        label_date_time->setGeometry(QRect(100, 70, 591, 151));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Aa\354\202\220\354\202\220\353\241\261"));
        font2.setPointSize(36);
        label_date_time->setFont(font2);
        label_date_time->setLayoutDirection(Qt::LeftToRight);
        label_4 = new QLabel(page_1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 0, 800, 50));
        label_4->setStyleSheet(QString::fromUtf8("padding: 40px;\n"
"background-color: rgba(89, 141, 204);\n"
"color:white;"));

        retranslateUi(page_1);

        QMetaObject::connectSlotsByName(page_1);
    } // setupUi

    void retranslateUi(QWidget *page_1)
    {
        page_1->setWindowTitle(QCoreApplication::translate("page_1", "Form", nullptr));
        pushButton->setText(QString());
        pTemp->setText(QCoreApplication::translate("page_1", "Temp", nullptr));
        label_3->setText(QCoreApplication::translate("page_1", "\355\230\204\354\236\254\354\230\250\353\217\204", nullptr));
        label_7->setText(QCoreApplication::translate("page_1", "\355\230\204\354\236\254\354\212\265\353\217\204", nullptr));
        pHumi->setText(QCoreApplication::translate("page_1", "humi", nullptr));
        label_6->setText(QCoreApplication::translate("page_1", "\302\260C", nullptr));
        label_8->setText(QCoreApplication::translate("page_1", "%", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_date_time->setText(QString());
        label_4->setText(QCoreApplication::translate("page_1", "\353\202\230\354\235\230 \354\225\204\354\240\200\354\224\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class page_1: public Ui_page_1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_1_H
