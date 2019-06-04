#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    ui->lineEdit_4->setEchoMode(QLineEdit::Password);
    mes = new QMessageBox();
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_clicked()
{
    db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName(QString("DRIVER={SQL Server};SERVER=%1;DATABASE=%2;")
                       .arg(ui->lineEdit->text())
                       .arg(ui->lineEdit_2->text()));
    db.setUserName(ui->lineEdit_3->text());
    db.setPassword(ui->lineEdit_4->text());

    if (db.open()){
        mes->setText("Succes connect");
    } else {
        mes->setText("Fail connected");
    }

    mes->show();
}
