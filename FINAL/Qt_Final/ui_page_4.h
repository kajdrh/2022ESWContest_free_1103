/********************************************************************************
** Form generated from reading UI file 'page_4.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE_4_H
#define UI_PAGE_4_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_page_4
{
public:
    QPushButton *pBack_page4;
    QLabel *label_4;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QDateTimeEdit *pdateTimeEditFrom;
    QDateTimeEdit *pdateTimeEditTo;
    QTableWidget *pTableWidget;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pPBSearch;
    QPushButton *pPBDelete;

    void setupUi(QWidget *page_4)
    {
        if (page_4->objectName().isEmpty())
            page_4->setObjectName(QString::fromUtf8("page_4"));
        page_4->resize(800, 480);
        pBack_page4 = new QPushButton(page_4);
        pBack_page4->setObjectName(QString::fromUtf8("pBack_page4"));
        pBack_page4->setGeometry(QRect(650, 330, 150, 150));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/arrows_back_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pBack_page4->setIcon(icon);
        pBack_page4->setIconSize(QSize(90, 90));
        pBack_page4->setFlat(true);
        label_4 = new QLabel(page_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 0, 800, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("Aa\354\202\220\354\202\220\353\241\261"));
        font.setPointSize(14);
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("padding: 40px;\n"
"background-color: rgba(89, 141, 204);\n"
"color:white;"));
        verticalLayoutWidget = new QWidget(page_4);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 70, 761, 281));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pdateTimeEditFrom = new QDateTimeEdit(verticalLayoutWidget);
        pdateTimeEditFrom->setObjectName(QString::fromUtf8("pdateTimeEditFrom"));
        pdateTimeEditFrom->setDate(QDate(2022, 9, 1));

        horizontalLayout->addWidget(pdateTimeEditFrom);

        pdateTimeEditTo = new QDateTimeEdit(verticalLayoutWidget);
        pdateTimeEditTo->setObjectName(QString::fromUtf8("pdateTimeEditTo"));
        pdateTimeEditTo->setDate(QDate(2022, 9, 30));

        horizontalLayout->addWidget(pdateTimeEditTo);


        verticalLayout->addLayout(horizontalLayout);

        pTableWidget = new QTableWidget(verticalLayoutWidget);
        if (pTableWidget->columnCount() < 3)
            pTableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        pTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        pTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        pTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        pTableWidget->setObjectName(QString::fromUtf8("pTableWidget"));
        pTableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        pTableWidget->horizontalHeader()->setDefaultSectionSize(252);
        pTableWidget->verticalHeader()->setCascadingSectionResizes(false);

        verticalLayout->addWidget(pTableWidget);

        horizontalLayoutWidget_2 = new QWidget(page_4);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(20, 360, 311, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pPBSearch = new QPushButton(horizontalLayoutWidget_2);
        pPBSearch->setObjectName(QString::fromUtf8("pPBSearch"));

        horizontalLayout_2->addWidget(pPBSearch);

        pPBDelete = new QPushButton(horizontalLayoutWidget_2);
        pPBDelete->setObjectName(QString::fromUtf8("pPBDelete"));

        horizontalLayout_2->addWidget(pPBDelete);


        retranslateUi(page_4);

        QMetaObject::connectSlotsByName(page_4);
    } // setupUi

    void retranslateUi(QWidget *page_4)
    {
        page_4->setWindowTitle(QCoreApplication::translate("page_4", "Form", nullptr));
        pBack_page4->setText(QString());
        label_4->setText(QCoreApplication::translate("page_4", "DataBase", nullptr));
        QTableWidgetItem *___qtablewidgetitem = pTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("page_4", "number", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = pTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("page_4", "Date/Time", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = pTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("page_4", "On/Off", nullptr));
        pPBSearch->setText(QCoreApplication::translate("page_4", "search", nullptr));
        pPBDelete->setText(QCoreApplication::translate("page_4", "delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class page_4: public Ui_page_4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_4_H
