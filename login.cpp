#include "login.h"
#include "ui_login.h"
#include "gestion_des_patients.h"
LOGIN::LOGIN(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LOGIN)
{
    ui->setupUi(this);
}

LOGIN::~LOGIN()
{
    delete ui;
}


void LOGIN::on_connecter_clicked()
{
   gestion_des_patients p;
   hide();
   p.exec();
}
