#include "page_3.h"
#include "ui_page_3.h"

#include <QMessageBox>
#include <QLabel>
#include <QTimeEdit>
#include <QTimer>
#include <QtDebug>

page_3::page_3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::page_3)
{
    ui->setupUi(this);
    _isAlram = new bool();
    *_isAlram = false;
    AlarmTime = new QTime();
    AlarmTime->setHMS('\0','\0','\0');
    //Set up clock display
    SetupClock();

    //Setup threading, Timer Start
    TimeKeeper=new Timer(this,AlarmTime);
    TimeKeeper->StartTimer(AlarmTime, _isAlram);

    //ShowActiveAlarm(edit_on,dial_on);
    connect(ui->add,SIGNAL(clicked()),this,SLOT(SetTime()));
    connect(ui->remove,SIGNAL(clicked()),this,SLOT(ClearTime()));

    connect(ui->h_Up,SIGNAL(clicked()),this,SLOT(setHourUp()));
    connect(ui->h_Down,SIGNAL(clicked()),this,SLOT(setHourDown()));
    connect(ui->m_Up,SIGNAL(clicked()),this,SLOT(setMinuteUp()));
    connect(ui->m_Down,SIGNAL(clicked()),this,SLOT(setMinuteDown()));

}


void page_3::SetTime()
{
    //h = ui->TimeEdit->time().hour();
    //m = ui->TimeEdit->time().minute();
    //s = ui->TimeEdit->time().second();
    qDebug() << "h : " << h ;
    qDebug() << "m : " << m ;
    qDebug() << "s : " << s ;
    AlarmTime->setHMS(h,m,s);
    QString time_text = AlarmTime->toString("hh:mm:ss");
    ui->AlramTime->display(time_text);
    *_isAlram = true;
}

void page_3::ClearTime()
{
    AlarmTime->setHMS('\0','\0','\0');
    QString time_text = AlarmTime->toString("hh:mm:ss");
    ui->AlramTime->display(time_text);
    *_isAlram = false;
}

void page_3::SetupClock()
{
    QTimer *CurrentTime=new QTimer(this);
    connect(CurrentTime,SIGNAL(timeout()),this,SLOT(UpdateClock()));
    CurrentTime->start(500);
}

void page_3::UpdateClock()
{
    QTime time = QTime::currentTime();
    QString time_text = time.toString("hh:mm:ss");
    ui->CurrentTime->display(time_text);
}

void page_3::ShowActiveAlarm(bool edit_active, bool dial_active)
{
    if(*_isAlram == false)
    {
        //ui->TimeEdit->setDisabled(false);
    }
}

void page_3::setHourUp()
{
    h++;
    if(h > 23) h = 0;
    ui->h_Text->setText(QString::number(h));
    ui->h_Text->setAlignment(Qt::AlignCenter);
}

void page_3::setHourDown()
{
    h--;
    if(h < 0) h = 23;
    ui->h_Text->setText(QString::number(h));
    ui->h_Text->setAlignment(Qt::AlignCenter);
}

void page_3::setMinuteUp()
{
    m++;
    if(m > 59) m = 0;
    ui->m_Text->setText(QString::number(m));
    ui->m_Text->setAlignment(Qt::AlignCenter);
}

void page_3::setMinuteDown()
{
    m--;
    if(m < 0) m = 59;
    ui->m_Text->setText(QString::number(m));
    ui->m_Text->setAlignment(Qt::AlignCenter);
}

page_3::~page_3()
{
    delete ui;
}


void page_3::on_pBack_page3_clicked()
{
    emit pushButtonSig(1);
}

#include "moc_page_3.cpp"
