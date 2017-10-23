#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gui_contratos.h"
#include "gui_ver.h"
#include "gui_solicitudes.h"
#include "gui_facturas.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_contrato_clicked()
{

    GUI_Contratos a;

    a.exec();


}

void MainWindow::on_pushButton_clicked()
{
    gui_ver e;
    e.exec();
}

void MainWindow::on_pushButton_2_clicked()
{  GUI_solicitudes* pushButton_2 = new GUI_solicitudes();
    pushButton_2 -> show() ;

}

void MainWindow::on_pushButton_3_clicked()
{ GUI_Facturas* pushButton_3 = new GUI_Facturas(this);
    pushButton_3 ->setModal(true);
             pushButton_3 -> show() ;


}
