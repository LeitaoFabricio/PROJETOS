/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *dados;
    QWidget *cadastro;
    QLabel *data_hoje;
    QDateEdit *ajuste_data_hoje;
    QLabel *nome_aniversario;
    QLabel *titulo;
    QLineEdit *inserirNome;
    QLabel *data_aniversario;
    QDateEdit *inserirData;
    QPushButton *botaoCadastro;
    QTableWidget *tabela;
    QWidget *tab_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(549, 591);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        dados = new QTabWidget(centralWidget);
        dados->setObjectName(QString::fromUtf8("dados"));
        dados->setGeometry(QRect(0, 0, 551, 531));
        cadastro = new QWidget();
        cadastro->setObjectName(QString::fromUtf8("cadastro"));
        data_hoje = new QLabel(cadastro);
        data_hoje->setObjectName(QString::fromUtf8("data_hoje"));
        data_hoje->setGeometry(QRect(10, 20, 91, 20));
        ajuste_data_hoje = new QDateEdit(cadastro);
        ajuste_data_hoje->setObjectName(QString::fromUtf8("ajuste_data_hoje"));
        ajuste_data_hoje->setGeometry(QRect(110, 10, 421, 31));
        nome_aniversario = new QLabel(cadastro);
        nome_aniversario->setObjectName(QString::fromUtf8("nome_aniversario"));
        nome_aniversario->setGeometry(QRect(20, 120, 62, 20));
        titulo = new QLabel(cadastro);
        titulo->setObjectName(QString::fromUtf8("titulo"));
        titulo->setGeometry(QRect(20, 70, 181, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        titulo->setFont(font);
        titulo->setTextFormat(Qt::AutoText);
        titulo->setScaledContents(false);
        inserirNome = new QLineEdit(cadastro);
        inserirNome->setObjectName(QString::fromUtf8("inserirNome"));
        inserirNome->setGeometry(QRect(80, 120, 451, 28));
        data_aniversario = new QLabel(cadastro);
        data_aniversario->setObjectName(QString::fromUtf8("data_aniversario"));
        data_aniversario->setGeometry(QRect(20, 170, 131, 20));
        inserirData = new QDateEdit(cadastro);
        inserirData->setObjectName(QString::fromUtf8("inserirData"));
        inserirData->setGeometry(QRect(160, 160, 371, 31));
        botaoCadastro = new QPushButton(cadastro);
        botaoCadastro->setObjectName(QString::fromUtf8("botaoCadastro"));
        botaoCadastro->setGeometry(QRect(20, 220, 91, 31));
        QFont font1;
        font1.setPointSize(12);
        botaoCadastro->setFont(font1);
        tabela = new QTableWidget(cadastro);
        if (tabela->columnCount() < 2)
            tabela->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tabela->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QFont font2;
        font2.setPointSize(12);
        font2.setKerning(true);
        font2.setStyleStrategy(QFont::PreferDefault);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem1->setFont(font2);
        __qtablewidgetitem1->setBackground(QColor(138, 226, 52));
        tabela->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tabela->setObjectName(QString::fromUtf8("tabela"));
        tabela->setGeometry(QRect(0, 260, 551, 192));
        tabela->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tabela->setAutoScrollMargin(20);
        tabela->horizontalHeader()->setDefaultSectionSize(250);
        dados->addTab(cadastro, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        dados->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 549, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        MainWindow->insertToolBarBreak(mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        dados->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        data_hoje->setText(QCoreApplication::translate("MainWindow", "Data de hoje:", nullptr));
        nome_aniversario->setText(QCoreApplication::translate("MainWindow", "Nome:", nullptr));
        titulo->setText(QCoreApplication::translate("MainWindow", "Aniversariante", nullptr));
        data_aniversario->setText(QCoreApplication::translate("MainWindow", "Data de anivers\303\241rio:", nullptr));
        botaoCadastro->setText(QCoreApplication::translate("MainWindow", "Confirmar", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tabela->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Nome", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tabela->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Data de anivers\303\241rio", nullptr));
        dados->setTabText(dados->indexOf(cadastro), QCoreApplication::translate("MainWindow", "Cadastrar", nullptr));
        dados->setTabText(dados->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Monitorar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
