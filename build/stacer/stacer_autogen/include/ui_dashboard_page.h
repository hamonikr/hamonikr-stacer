/********************************************************************************
** Form generated from reading UI file 'dashboard_page.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_PAGE_H
#define UI_DASHBOARD_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DashboardPage
{
public:
    QGridLayout *gridLayout;
    QWidget *circleBars;
    QHBoxLayout *circleBarsLayout;
    QWidget *lineBars;
    QVBoxLayout *lineBarsLayout;
    QWidget *systemInfo;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *lblSystemInfoTitle;
    QListView *listViewSystemInfo;
    QWidget *widgetUpdateBar;
    QHBoxLayout *updateBarLayout;
    QLabel *lblUpdateBarText;
    QPushButton *btnDownloadUpdate;

    void setupUi(QWidget *DashboardPage)
    {
        if (DashboardPage->objectName().isEmpty())
            DashboardPage->setObjectName(QString::fromUtf8("DashboardPage"));
        DashboardPage->resize(811, 583);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DashboardPage->sizePolicy().hasHeightForWidth());
        DashboardPage->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(DashboardPage);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(5, 5, 5, 5);
        circleBars = new QWidget(DashboardPage);
        circleBars->setObjectName(QString::fromUtf8("circleBars"));
        sizePolicy.setHeightForWidth(circleBars->sizePolicy().hasHeightForWidth());
        circleBars->setSizePolicy(sizePolicy);
        circleBars->setMinimumSize(QSize(0, 200));
        circleBarsLayout = new QHBoxLayout(circleBars);
        circleBarsLayout->setSpacing(20);
        circleBarsLayout->setObjectName(QString::fromUtf8("circleBarsLayout"));
        circleBarsLayout->setContentsMargins(10, 5, 10, 5);

        gridLayout->addWidget(circleBars, 0, 0, 1, 2);

        lineBars = new QWidget(DashboardPage);
        lineBars->setObjectName(QString::fromUtf8("lineBars"));
        sizePolicy.setHeightForWidth(lineBars->sizePolicy().hasHeightForWidth());
        lineBars->setSizePolicy(sizePolicy);
        lineBars->setMinimumSize(QSize(150, 0));
        lineBarsLayout = new QVBoxLayout(lineBars);
        lineBarsLayout->setSpacing(20);
        lineBarsLayout->setObjectName(QString::fromUtf8("lineBarsLayout"));
        lineBarsLayout->setContentsMargins(10, 10, 10, 10);

        gridLayout->addWidget(lineBars, 2, 1, 1, 1);

        systemInfo = new QWidget(DashboardPage);
        systemInfo->setObjectName(QString::fromUtf8("systemInfo"));
        sizePolicy.setHeightForWidth(systemInfo->sizePolicy().hasHeightForWidth());
        systemInfo->setSizePolicy(sizePolicy);
        systemInfo->setMinimumSize(QSize(200, 0));
        systemInfo->setFocusPolicy(Qt::WheelFocus);
        verticalLayout = new QVBoxLayout(systemInfo);
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(15, 0, 10, 0);
        verticalSpacer_2 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        lblSystemInfoTitle = new QLabel(systemInfo);
        lblSystemInfoTitle->setObjectName(QString::fromUtf8("lblSystemInfoTitle"));

        verticalLayout->addWidget(lblSystemInfoTitle);

        listViewSystemInfo = new QListView(systemInfo);
        listViewSystemInfo->setObjectName(QString::fromUtf8("listViewSystemInfo"));
        listViewSystemInfo->setFocusPolicy(Qt::NoFocus);
        listViewSystemInfo->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listViewSystemInfo->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listViewSystemInfo->setAutoScroll(false);
        listViewSystemInfo->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listViewSystemInfo->setSelectionMode(QAbstractItemView::NoSelection);
        listViewSystemInfo->setSelectionBehavior(QAbstractItemView::SelectRows);
        listViewSystemInfo->setSpacing(5);
        listViewSystemInfo->setWordWrap(true);

        verticalLayout->addWidget(listViewSystemInfo);


        gridLayout->addWidget(systemInfo, 2, 0, 1, 1);

        widgetUpdateBar = new QWidget(DashboardPage);
        widgetUpdateBar->setObjectName(QString::fromUtf8("widgetUpdateBar"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widgetUpdateBar->sizePolicy().hasHeightForWidth());
        widgetUpdateBar->setSizePolicy(sizePolicy1);
        widgetUpdateBar->setMinimumSize(QSize(0, 31));
        widgetUpdateBar->setStyleSheet(QString::fromUtf8(""));
        updateBarLayout = new QHBoxLayout(widgetUpdateBar);
        updateBarLayout->setSpacing(0);
        updateBarLayout->setObjectName(QString::fromUtf8("updateBarLayout"));
        updateBarLayout->setContentsMargins(15, 0, 5, 0);
        lblUpdateBarText = new QLabel(widgetUpdateBar);
        lblUpdateBarText->setObjectName(QString::fromUtf8("lblUpdateBarText"));

        updateBarLayout->addWidget(lblUpdateBarText, 0, Qt::AlignLeft|Qt::AlignVCenter);

        btnDownloadUpdate = new QPushButton(widgetUpdateBar);
        btnDownloadUpdate->setObjectName(QString::fromUtf8("btnDownloadUpdate"));
        btnDownloadUpdate->setCursor(QCursor(Qt::PointingHandCursor));
        btnDownloadUpdate->setFocusPolicy(Qt::NoFocus);
#ifndef QT_NO_ACCESSIBILITY
        btnDownloadUpdate->setAccessibleName(QString::fromUtf8("primary"));
#endif // QT_NO_ACCESSIBILITY

        updateBarLayout->addWidget(btnDownloadUpdate, 0, Qt::AlignRight|Qt::AlignVCenter);


        gridLayout->addWidget(widgetUpdateBar, 3, 0, 1, 2);


        retranslateUi(DashboardPage);

        QMetaObject::connectSlotsByName(DashboardPage);
    } // setupUi

    void retranslateUi(QWidget *DashboardPage)
    {
        DashboardPage->setWindowTitle(QApplication::translate("DashboardPage", "Dashboard", nullptr));
        lblSystemInfoTitle->setText(QApplication::translate("DashboardPage", "SYSTEM INFO", nullptr));
        lblUpdateBarText->setText(QApplication::translate("DashboardPage", "There are update currently available.", nullptr));
        btnDownloadUpdate->setText(QApplication::translate("DashboardPage", "Download", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DashboardPage: public Ui_DashboardPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_PAGE_H
