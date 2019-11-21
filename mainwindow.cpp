#include "mainwindow.h"
#include "ui_mainwindow.h"

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





void MainWindow::on_botaoCadastro_clicked()
{
    Aniversariante pessoa;

    pessoa.setNome(ui->inserirNome->text());


    ui->inserirNome->clear();


    int quantidade_linhas = ui->tabela->rowCount();

    ui->tabela->insertRow(quantidade_linhas);
    ui->tabela->setItem(quantidade_linhas,0, new QTableWidgetItem(pessoa.getNome()));

}
