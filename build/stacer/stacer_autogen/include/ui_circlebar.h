/********************************************************************************
** Form generated from reading UI file 'circlebar.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CIRCLEBAR_H
#define UI_CIRCLEBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CircleBar
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widgetCircleBar;
    QVBoxLayout *layoutCircleBar;
    QLabel *lblCircleChartTitle;
    QLabel *lblCircleChartValue;

    void setupUi(QWidget *CircleBar)
    {
        if (CircleBar->objectName().isEmpty())
            CircleBar->setObjectName(QStringLiteral("CircleBar"));
        CircleBar->resize(383, 317);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CircleBar->sizePolicy().hasHeightForWidth());
        CircleBar->setSizePolicy(sizePolicy);
        CircleBar->setWindowTitle(QStringLiteral(""));
        CircleBar->setStyleSheet(QStringLiteral(""));
        verticalLayout_2 = new QVBoxLayout(CircleBar);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widgetCircleBar = new QWidget(CircleBar);
        widgetCircleBar->setObjectName(QStringLiteral("widgetCircleBar"));
        sizePolicy.setHeightForWidth(widgetCircleBar->sizePolicy().hasHeightForWidth());
        widgetCircleBar->setSizePolicy(sizePolicy);
        layoutCircleBar = new QVBoxLayout(widgetCircleBar);
        layoutCircleBar->setSpacing(2);
        layoutCircleBar->setObjectName(QStringLiteral("layoutCircleBar"));
        layoutCircleBar->setContentsMargins(20, 10, 20, 10);
        lblCircleChartTitle = new QLabel(widgetCircleBar);
        lblCircleChartTitle->setObjectName(QStringLiteral("lblCircleChartTitle"));
        lblCircleChartTitle->setStyleSheet(QStringLiteral(""));
        lblCircleChartTitle->setText(QStringLiteral("Title"));
        lblCircleChartTitle->setAlignment(Qt::AlignCenter);

        layoutCircleBar->addWidget(lblCircleChartTitle, 0, Qt::AlignTop);

        lblCircleChartValue = new QLabel(widgetCircleBar);
        lblCircleChartValue->setObjectName(QStringLiteral("lblCircleChartValue"));
        lblCircleChartValue->setText(QStringLiteral("Value"));
        lblCircleChartValue->setAlignment(Qt::AlignCenter);

        layoutCircleBar->addWidget(lblCircleChartValue, 0, Qt::AlignBottom);


        verticalLayout_2->addWidget(widgetCircleBar);


        retranslateUi(CircleBar);

        QMetaObject::connectSlotsByName(CircleBar);
    } // setupUi

    void retranslateUi(QWidget *CircleBar)
    {
        Q_UNUSED(CircleBar);
    } // retranslateUi

};

namespace Ui {
    class CircleBar: public Ui_CircleBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CIRCLEBAR_H
