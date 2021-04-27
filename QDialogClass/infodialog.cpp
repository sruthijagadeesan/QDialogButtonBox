#include "infodialog.h"
#include "ui_infodialog.h"

InfoDialog::InfoDialog(QWidget *parent) :
    QDialog(parent,Qt::WindowSystemMenuHint|Qt::WindowTitleHint),
    ui(new Ui::InfoDialog)
{
    ui->setupUi(this);
}

InfoDialog::~InfoDialog()
{
    delete ui;
}

void InfoDialog::on_OKpushButton_clicked()
{
    QString userposition= ui->PositionlineEdit->text();
       if(userposition.isEmpty())
       {
           position=userposition;
           if(ui->WindowsradioButton->isChecked())
           {
               FavouriteoS="Windows";
           }
           if(ui->MACradioButton->isChecked())
           {
               FavouriteoS="MAC";
           }
           if(ui->LinuxradioButton->isChecked())
           {
               FavouriteoS="Linux";
           }
       }
       accept();
}

void InfoDialog::on_CANCELpushButton_2_clicked()
{
     reject();
}

QString InfoDialog::getPosition() const
{
    return position;
}

QString InfoDialog::getFavouriteoS() const
{
    return FavouriteoS;
}
