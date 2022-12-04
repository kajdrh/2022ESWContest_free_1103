/********************************************************************************
** Form generated from reading UI file 'page_2.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE_2_H
#define UI_PAGE_2_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_page_2
{
public:
    QPushButton *pBack_page2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pDB;
    QPushButton *pToggle;
    QLabel *on_off_label;
    QLabel *Alarm_label;
    QLabel *Data_label;
    QLabel *label_4;

    void setupUi(QWidget *page_2)
    {
        if (page_2->objectName().isEmpty())
            page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->resize(800, 480);
        pBack_page2 = new QPushButton(page_2);
        pBack_page2->setObjectName(QString::fromUtf8("pBack_page2"));
        pBack_page2->setGeometry(QRect(650, 330, 150, 150));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/arrows_back_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pBack_page2->setIcon(icon);
        pBack_page2->setIconSize(QSize(90, 90));
        pBack_page2->setFlat(true);
        horizontalLayoutWidget = new QWidget(page_2);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(110, 60, 571, 361));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("border-radius: 35px; \n"
"padding: 40px;\n"
"background-color: rgba(113, 160, 227);\n"
"color:white;"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("border-radius: 35px; \n"
"padding: 40px;\n"
"background-color: rgba(176, 204, 239);\n"
"color:white;"));

        horizontalLayout->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("border-radius: 35px; \n"
"padding: 40px;\n"
"background-color: rgba(200, 218, 239);\n"
"color:black;"));

        horizontalLayout->addWidget(label_3);

        pushButton = new QPushButton(page_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(340, 70, 111, 221));
        QFont font;
        font.setFamily(QString::fromUtf8("DearMyday"));
        font.setPointSize(11);
        font.setBold(false);
        font.setWeight(50);
        pushButton->setFont(font);
        pushButton->setContextMenuPolicy(Qt::DefaultContextMenu);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/CLOCK_IMG.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(100, 100));
        pushButton->setCheckable(true);
        pushButton->setAutoRepeat(false);
        pushButton->setAutoDefault(false);
        pushButton->setFlat(true);
        pDB = new QPushButton(page_2);
        pDB->setObjectName(QString::fromUtf8("pDB"));
        pDB->setGeometry(QRect(550, 80, 121, 221));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/database.png"), QSize(), QIcon::Normal, QIcon::Off);
        pDB->setIcon(icon2);
        pDB->setIconSize(QSize(100, 100));
        pDB->setFlat(true);
        pToggle = new QPushButton(page_2);
        pToggle->setObjectName(QString::fromUtf8("pToggle"));
        pToggle->setGeometry(QRect(110, 70, 151, 241));
        pToggle->setMaximumSize(QSize(16777215, 16777215));
        pToggle->setContextMenuPolicy(Qt::DefaultContextMenu);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/OFF_IMG.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QString::fromUtf8(":/new/prefix1/ON_IMG.png"), QSize(), QIcon::Normal, QIcon::On);
        pToggle->setIcon(icon3);
        pToggle->setIconSize(QSize(100, 100));
        pToggle->setCheckable(true);
        pToggle->setChecked(false);
        pToggle->setAutoDefault(false);
        pToggle->setFlat(true);
        on_off_label = new QLabel(page_2);
        on_off_label->setObjectName(QString::fromUtf8("on_off_label"));
        on_off_label->setGeometry(QRect(140, 340, 91, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Aa\354\202\220\354\202\220\353\241\261"));
        font1.setPointSize(28);
        on_off_label->setFont(font1);
        on_off_label->setStyleSheet(QString::fromUtf8(""));
        on_off_label->setAlignment(Qt::AlignCenter);
        Alarm_label = new QLabel(page_2);
        Alarm_label->setObjectName(QString::fromUtf8("Alarm_label"));
        Alarm_label->setGeometry(QRect(320, 330, 141, 71));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Aa\354\202\220\354\202\220\353\241\261"));
        font2.setPointSize(28);
        font2.setBold(false);
        font2.setWeight(50);
        Alarm_label->setFont(font2);
        Alarm_label->setStyleSheet(QString::fromUtf8(""));
        Alarm_label->setAlignment(Qt::AlignCenter);
        Data_label = new QLabel(page_2);
        Data_label->setObjectName(QString::fromUtf8("Data_label"));
        Data_label->setGeometry(QRect(530, 330, 150, 80));
        Data_label->setFont(font1);
        Data_label->setStyleSheet(QString::fromUtf8(""));
        Data_label->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(page_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 0, 800, 50));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Aa\354\202\220\354\202\220\353\241\261"));
        font3.setPointSize(14);
        label_4->setFont(font3);
        label_4->setStyleSheet(QString::fromUtf8("padding: 40px;\n"
"background-color: rgba(89, 141, 204);\n"
"color:white;"));
        pBack_page2->raise();
        horizontalLayoutWidget->raise();
        pDB->raise();
        pushButton->raise();
        pToggle->raise();
        on_off_label->raise();
        Alarm_label->raise();
        Data_label->raise();
        label_4->raise();

        retranslateUi(page_2);

        pToggle->setDefault(false);


        QMetaObject::connectSlotsByName(page_2);
    } // setupUi

    void retranslateUi(QWidget *page_2)
    {
        page_2->setWindowTitle(QCoreApplication::translate("page_2", "Form", nullptr));
        pBack_page2->setText(QString());
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        pushButton->setText(QString());
        pDB->setText(QString());
        pToggle->setText(QString());
        on_off_label->setText(QString());
        Alarm_label->setText(QCoreApplication::translate("page_2", "Alarm", nullptr));
        Data_label->setText(QCoreApplication::translate("page_2", "Data", nullptr));
        label_4->setText(QCoreApplication::translate("page_2", "Setting", nullptr));
    } // retranslateUi

};

namespace Ui {
    class page_2: public Ui_page_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_2_H
