/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_5;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_6;
    QPushButton *pushButton_2;
    QPushButton *pushButton_7;
    QPushButton *pushButton_5;
    QPushButton *pushButton;
    QLabel *label;
    QWidget *page_2;
    QPushButton *pushButton_4;
    QWidget *widget;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_6;
    QPushButton *pushButton_8;
    QWidget *page_3;
    QGridLayout *gridLayout_2;
    QTableWidget *tableWidget;
    QPushButton *pushButton_3;
    QWidget *page_4;
    QPushButton *pushButton_10;
    QLineEdit *lineEdit_10;
    QLabel *label_13;
    QTableWidget *tableWidget_2;
    QLabel *label_15;
    QPushButton *pushButton_12;
    QWidget *page_5;
    QPushButton *pushButton_11;
    QPushButton *pushButton_13;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit_11;
    QLabel *label_14;
    QWidget *page_6;
    QWidget *widget_2;
    QGridLayout *gridLayout_3;
    QLabel *label_7;
    QLineEdit *lineEdit_5;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *lineEdit_6;
    QLabel *label_10;
    QLineEdit *lineEdit_7;
    QLabel *label_11;
    QLineEdit *lineEdit_8;
    QLabel *label_12;
    QLineEdit *lineEdit_9;
    QPushButton *pushButton_9;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(493, 414);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_5 = new QGridLayout(centralWidget);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        layoutWidget = new QWidget(page);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(190, 140, 82, 151));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        gridLayout->addWidget(pushButton_6, 3, 0, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 0, 1, 1);

        pushButton_7 = new QPushButton(layoutWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        gridLayout->addWidget(pushButton_7, 5, 0, 1, 1);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        gridLayout->addWidget(pushButton_5, 4, 0, 1, 1);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 80, 131, 17));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        pushButton_4 = new QPushButton(page_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(240, 250, 89, 25));
        widget = new QWidget(page_2);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(120, 90, 219, 143));
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(68, 11, 142, 25));
        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(68, 45, 142, 25));
        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(68, 78, 142, 25));
        lineEdit_4 = new QLineEdit(widget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(68, 109, 142, 25));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(9, 109, 53, 17));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(9, 78, 44, 17));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(9, 55, 41, 17));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(9, 21, 16, 17));
        label_6 = new QLabel(page_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(120, 60, 181, 17));
        pushButton_8 = new QPushButton(page_2);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(130, 250, 89, 25));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        gridLayout_2 = new QGridLayout(page_3);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        tableWidget = new QTableWidget(page_3);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout_2->addWidget(tableWidget, 0, 0, 1, 1);

        pushButton_3 = new QPushButton(page_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout_2->addWidget(pushButton_3, 1, 0, 1, 1);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        pushButton_10 = new QPushButton(page_4);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(370, 110, 80, 25));
        lineEdit_10 = new QLineEdit(page_4);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(10, 110, 281, 25));
        label_13 = new QLabel(page_4);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 80, 269, 17));
        tableWidget_2 = new QTableWidget(page_4);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(10, 180, 451, 51));
        label_15 = new QLabel(page_4);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(10, 150, 67, 17));
        pushButton_12 = new QPushButton(page_4);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(190, 260, 89, 25));
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        pushButton_11 = new QPushButton(page_5);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(270, 120, 80, 25));
        pushButton_13 = new QPushButton(page_5);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(80, 250, 271, 25));
        lineEdit_12 = new QLineEdit(page_5);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));
        lineEdit_12->setGeometry(QRect(80, 150, 271, 91));
        lineEdit_11 = new QLineEdit(page_5);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(80, 120, 142, 25));
        label_14 = new QLabel(page_5);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(80, 90, 269, 17));
        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        widget_2 = new QWidget(page_6);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(70, 60, 308, 213));
        gridLayout_3 = new QGridLayout(widget_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_7 = new QLabel(widget_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_3->addWidget(label_7, 0, 0, 1, 2);

        lineEdit_5 = new QLineEdit(widget_2);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        gridLayout_3->addWidget(lineEdit_5, 1, 0, 1, 1);

        label_8 = new QLabel(widget_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_3->addWidget(label_8, 2, 0, 1, 2);

        label_9 = new QLabel(widget_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_3->addWidget(label_9, 3, 0, 1, 1);

        lineEdit_6 = new QLineEdit(widget_2);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        gridLayout_3->addWidget(lineEdit_6, 3, 1, 1, 1);

        label_10 = new QLabel(widget_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_3->addWidget(label_10, 4, 0, 1, 1);

        lineEdit_7 = new QLineEdit(widget_2);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        gridLayout_3->addWidget(lineEdit_7, 4, 1, 1, 1);

        label_11 = new QLabel(widget_2);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_3->addWidget(label_11, 5, 0, 1, 1);

        lineEdit_8 = new QLineEdit(widget_2);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));

        gridLayout_3->addWidget(lineEdit_8, 5, 1, 1, 1);

        label_12 = new QLabel(widget_2);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_3->addWidget(label_12, 6, 0, 1, 1);

        lineEdit_9 = new QLineEdit(widget_2);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));

        gridLayout_3->addWidget(lineEdit_9, 6, 1, 1, 1);

        pushButton_9 = new QPushButton(page_6);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(170, 290, 89, 25));
        stackedWidget->addWidget(page_6);

        gridLayout_5->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 493, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "Search", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "View", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", "Delete", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "Modify", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Add", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Welcome~", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "ok", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Adsress", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Phone", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Name", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Please input~", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainWindow", "return", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "ok", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("MainWindow", "search", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Please input the ID you want to search~", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "Find it~", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("MainWindow", "return", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("MainWindow", "Sure?", Q_NULLPTR));
        pushButton_13->setText(QApplication::translate("MainWindow", "return", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Please input the ID you want to delete~", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Please input the id you want to modify~", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Please input new information~", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Name", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Phone", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Address", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MainWindow", "Sure?", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
