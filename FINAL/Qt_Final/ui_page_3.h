/********************************************************************************
** Form generated from reading UI file 'page_3.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE_3_H
#define UI_PAGE_3_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_page_3
{
public:
    QPushButton *pBack_page3;
    QLabel *label_4;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLCDNumber *AlramTime;
    QLabel *currentlabel;
    QLabel *alramlabel;
    QLCDNumber *CurrentTime;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *h_Up;
    QTextEdit *h_Text;
    QPushButton *h_Down;
    QVBoxLayout *verticalLayout_2;
    QPushButton *m_Up;
    QTextEdit *m_Text;
    QPushButton *m_Down;
    QHBoxLayout *horizontalLayout;
    QPushButton *add;
    QPushButton *remove;

    void setupUi(QWidget *page_3)
    {
        if (page_3->objectName().isEmpty())
            page_3->setObjectName(QString::fromUtf8("page_3"));
        page_3->resize(800, 480);
        QFont font;
        font.setFamily(QString::fromUtf8("PibotoLt"));
        page_3->setFont(font);
        pBack_page3 = new QPushButton(page_3);
        pBack_page3->setObjectName(QString::fromUtf8("pBack_page3"));
        pBack_page3->setGeometry(QRect(650, 330, 150, 150));
        QFont font1;
        font1.setFamily(QString::fromUtf8("PibotoLt"));
        font1.setBold(true);
        font1.setWeight(75);
        pBack_page3->setFont(font1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/arrows_back_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pBack_page3->setIcon(icon);
        pBack_page3->setIconSize(QSize(90, 90));
        pBack_page3->setFlat(true);
        label_4 = new QLabel(page_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 0, 800, 50));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Aa\354\202\220\354\202\220\353\241\261"));
        font2.setPointSize(14);
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("padding: 40px;\n"
"background-color: rgba(89, 141, 204);\n"
"color:white;"));
        gridLayoutWidget = new QWidget(page_3);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(100, 100, 621, 171));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        AlramTime = new QLCDNumber(gridLayoutWidget);
        AlramTime->setObjectName(QString::fromUtf8("AlramTime"));
        AlramTime->setLineWidth(0);
        AlramTime->setDigitCount(8);
        AlramTime->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(AlramTime, 1, 1, 1, 1);

        currentlabel = new QLabel(gridLayoutWidget);
        currentlabel->setObjectName(QString::fromUtf8("currentlabel"));
        currentlabel->setFont(font2);

        gridLayout->addWidget(currentlabel, 0, 0, 1, 1);

        alramlabel = new QLabel(gridLayoutWidget);
        alramlabel->setObjectName(QString::fromUtf8("alramlabel"));
        alramlabel->setFont(font2);

        gridLayout->addWidget(alramlabel, 1, 0, 1, 1);

        CurrentTime = new QLCDNumber(gridLayoutWidget);
        CurrentTime->setObjectName(QString::fromUtf8("CurrentTime"));
        CurrentTime->setLineWidth(0);
        CurrentTime->setDigitCount(8);
        CurrentTime->setSegmentStyle(QLCDNumber::Flat);
        CurrentTime->setProperty("value", QVariant(0.000000000000000));

        gridLayout->addWidget(CurrentTime, 0, 1, 1, 1);

        gridLayout->setColumnMinimumWidth(0, 3);
        gridLayout->setColumnMinimumWidth(1, 7);
        horizontalLayoutWidget_2 = new QWidget(page_3);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(100, 280, 500, 146));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        h_Up = new QPushButton(horizontalLayoutWidget_2);
        h_Up->setObjectName(QString::fromUtf8("h_Up"));

        verticalLayout->addWidget(h_Up);

        h_Text = new QTextEdit(horizontalLayoutWidget_2);
        h_Text->setObjectName(QString::fromUtf8("h_Text"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("PibotoLt"));
        font3.setPointSize(30);
        font3.setBold(true);
        font3.setWeight(75);
        h_Text->setFont(font3);

        verticalLayout->addWidget(h_Text);

        h_Down = new QPushButton(horizontalLayoutWidget_2);
        h_Down->setObjectName(QString::fromUtf8("h_Down"));

        verticalLayout->addWidget(h_Down);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        m_Up = new QPushButton(horizontalLayoutWidget_2);
        m_Up->setObjectName(QString::fromUtf8("m_Up"));

        verticalLayout_2->addWidget(m_Up);

        m_Text = new QTextEdit(horizontalLayoutWidget_2);
        m_Text->setObjectName(QString::fromUtf8("m_Text"));
        m_Text->setFont(font3);

        verticalLayout_2->addWidget(m_Text);

        m_Down = new QPushButton(horizontalLayoutWidget_2);
        m_Down->setObjectName(QString::fromUtf8("m_Down"));

        verticalLayout_2->addWidget(m_Down);


        horizontalLayout_2->addLayout(verticalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        add = new QPushButton(horizontalLayoutWidget_2);
        add->setObjectName(QString::fromUtf8("add"));
        add->setFont(font2);
        add->setCheckable(false);
        add->setChecked(false);
        add->setFlat(true);

        horizontalLayout->addWidget(add);

        remove = new QPushButton(horizontalLayoutWidget_2);
        remove->setObjectName(QString::fromUtf8("remove"));
        remove->setFont(font2);
        remove->setCheckable(false);
        remove->setChecked(false);
        remove->setFlat(true);

        horizontalLayout->addWidget(remove);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(page_3);

        QMetaObject::connectSlotsByName(page_3);
    } // setupUi

    void retranslateUi(QWidget *page_3)
    {
        page_3->setWindowTitle(QCoreApplication::translate("page_3", "Form", nullptr));
        pBack_page3->setText(QString());
        label_4->setText(QCoreApplication::translate("page_3", "\354\202\254\354\232\251\354\213\234\352\260\204\354\230\210\354\225\275", nullptr));
        currentlabel->setText(QCoreApplication::translate("page_3", "current time", nullptr));
        alramlabel->setText(QCoreApplication::translate("page_3", "alram time", nullptr));
        h_Up->setText(QCoreApplication::translate("page_3", "Hour UP", nullptr));
        h_Down->setText(QCoreApplication::translate("page_3", "Hour DOWN", nullptr));
        m_Up->setText(QCoreApplication::translate("page_3", "Minute UP", nullptr));
        m_Down->setText(QCoreApplication::translate("page_3", "Minute DOWN", nullptr));
        add->setText(QCoreApplication::translate("page_3", "add", nullptr));
        remove->setText(QCoreApplication::translate("page_3", "remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class page_3: public Ui_page_3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_3_H
