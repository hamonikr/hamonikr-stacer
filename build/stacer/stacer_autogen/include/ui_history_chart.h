/********************************************************************************
** Form generated from reading UI file 'history_chart.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORY_CHART_H
#define UI_HISTORY_CHART_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HistoryChart
{
public:
    QGridLayout *layoutHistoryChart;
    QCheckBox *checkHistoryTitle;
    QLabel *lblHistoryTitle;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *HistoryChart)
    {
        if (HistoryChart->objectName().isEmpty())
            HistoryChart->setObjectName(QStringLiteral("HistoryChart"));
        HistoryChart->resize(759, 275);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(HistoryChart->sizePolicy().hasHeightForWidth());
        HistoryChart->setSizePolicy(sizePolicy);
        HistoryChart->setMinimumSize(QSize(0, 200));
        HistoryChart->setWindowTitle(QStringLiteral(""));
        layoutHistoryChart = new QGridLayout(HistoryChart);
        layoutHistoryChart->setObjectName(QStringLiteral("layoutHistoryChart"));
        layoutHistoryChart->setHorizontalSpacing(10);
        layoutHistoryChart->setVerticalSpacing(0);
        layoutHistoryChart->setContentsMargins(0, 0, 0, 0);
        checkHistoryTitle = new QCheckBox(HistoryChart);
        checkHistoryTitle->setObjectName(QStringLiteral("checkHistoryTitle"));
        checkHistoryTitle->setCursor(QCursor(Qt::PointingHandCursor));
        checkHistoryTitle->setFocusPolicy(Qt::NoFocus);
        checkHistoryTitle->setLayoutDirection(Qt::LeftToRight);
        checkHistoryTitle->setStyleSheet(QStringLiteral(""));
        checkHistoryTitle->setText(QStringLiteral(""));

        layoutHistoryChart->addWidget(checkHistoryTitle, 0, 1, 1, 1);

        lblHistoryTitle = new QLabel(HistoryChart);
        lblHistoryTitle->setObjectName(QStringLiteral("lblHistoryTitle"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblHistoryTitle->sizePolicy().hasHeightForWidth());
        lblHistoryTitle->setSizePolicy(sizePolicy1);
#ifndef QT_NO_ACCESSIBILITY
        lblHistoryTitle->setAccessibleName(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        lblHistoryTitle->setText(QStringLiteral("Chart Title"));

        layoutHistoryChart->addWidget(lblHistoryTitle, 0, 0, 1, 1, Qt::AlignLeft|Qt::AlignTop);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layoutHistoryChart->addItem(horizontalSpacer, 0, 2, 1, 1);


        retranslateUi(HistoryChart);

        QMetaObject::connectSlotsByName(HistoryChart);
    } // setupUi

    void retranslateUi(QWidget *HistoryChart)
    {
        Q_UNUSED(HistoryChart);
    } // retranslateUi

};

namespace Ui {
    class HistoryChart: public Ui_HistoryChart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORY_CHART_H
