/********************************************************************************
** Form generated from reading UI file 'linebar.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINEBAR_H
#define UI_LINEBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LineBar
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *lineChartWidget;
    QGridLayout *gridLayout_2;
    QLabel *lblLineChartTotal;
    QProgressBar *lineChartProgress;
    QLabel *lblLineChartValue;
    QLabel *lblLineChartTitle;

    void setupUi(QWidget *LineBar)
    {
        if (LineBar->objectName().isEmpty())
            LineBar->setObjectName(QStringLiteral("LineBar"));
        LineBar->resize(474, 114);
        LineBar->setWindowTitle(QStringLiteral(""));
        verticalLayout_2 = new QVBoxLayout(LineBar);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineChartWidget = new QWidget(LineBar);
        lineChartWidget->setObjectName(QStringLiteral("lineChartWidget"));
        gridLayout_2 = new QGridLayout(lineChartWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setVerticalSpacing(15);
        gridLayout_2->setContentsMargins(25, 15, 25, 15);
        lblLineChartTotal = new QLabel(lineChartWidget);
        lblLineChartTotal->setObjectName(QStringLiteral("lblLineChartTotal"));
        lblLineChartTotal->setText(QStringLiteral("Total"));

        gridLayout_2->addWidget(lblLineChartTotal, 3, 0, 1, 1, Qt::AlignLeft|Qt::AlignBottom);

        lineChartProgress = new QProgressBar(lineChartWidget);
        lineChartProgress->setObjectName(QStringLiteral("lineChartProgress"));
        lineChartProgress->setMinimumSize(QSize(0, 20));
        lineChartProgress->setMaximumSize(QSize(16777215, 20));
        lineChartProgress->setStyleSheet(QStringLiteral(""));
        lineChartProgress->setValue(0);
        lineChartProgress->setTextVisible(false);

        gridLayout_2->addWidget(lineChartProgress, 2, 0, 1, 2, Qt::AlignVCenter);

        lblLineChartValue = new QLabel(lineChartWidget);
        lblLineChartValue->setObjectName(QStringLiteral("lblLineChartValue"));
        lblLineChartValue->setText(QStringLiteral("Value"));

        gridLayout_2->addWidget(lblLineChartValue, 3, 1, 1, 1, Qt::AlignRight|Qt::AlignBottom);

        lblLineChartTitle = new QLabel(lineChartWidget);
        lblLineChartTitle->setObjectName(QStringLiteral("lblLineChartTitle"));
        lblLineChartTitle->setText(QStringLiteral("Title"));

        gridLayout_2->addWidget(lblLineChartTitle, 1, 0, 1, 2, Qt::AlignTop);


        verticalLayout_2->addWidget(lineChartWidget);


        retranslateUi(LineBar);

        QMetaObject::connectSlotsByName(LineBar);
    } // setupUi

    void retranslateUi(QWidget *LineBar)
    {
        Q_UNUSED(LineBar);
    } // retranslateUi

};

namespace Ui {
    class LineBar: public Ui_LineBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINEBAR_H
