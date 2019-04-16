/********************************************************************************
** Form generated from reading UI file 'coloregg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLOREGG_H
#define UI_COLOREGG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_coloregg
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *okbut;

    void setupUi(QWidget *coloregg)
    {
        if (coloregg->objectName().isEmpty())
            coloregg->setObjectName(QStringLiteral("coloregg"));
        coloregg->resize(400, 300);
        gridLayout = new QGridLayout(coloregg);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(coloregg);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 2, 1, 1);

        pushButton = new QPushButton(coloregg);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 2, 2, 1, 1);

        okbut = new QPushButton(coloregg);
        okbut->setObjectName(QStringLiteral("okbut"));

        gridLayout->addWidget(okbut, 1, 2, 1, 1);


        retranslateUi(coloregg);

        QMetaObject::connectSlotsByName(coloregg);
    } // setupUi

    void retranslateUi(QWidget *coloregg)
    {
        coloregg->setWindowTitle(QApplication::translate("coloregg", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("coloregg", "TextLabel", Q_NULLPTR));
        pushButton->setText(QApplication::translate("coloregg", "this is a egg", Q_NULLPTR));
        okbut->setText(QApplication::translate("coloregg", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class coloregg: public Ui_coloregg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLOREGG_H
