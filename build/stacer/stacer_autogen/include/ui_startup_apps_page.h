/********************************************************************************
** Form generated from reading UI file 'startup_apps_page.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTUP_APPS_PAGE_H
#define UI_STARTUP_APPS_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StartupAppsPage
{
public:
    QGridLayout *gridLayout;
    QWidget *widgetStartupApps;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnAddStartupApp;
    QLabel *lblStartupAppsTitle;
    QSpacerItem *verticalSpacer_2;
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout;
    QWidget *notFoundWidget;
    QVBoxLayout *notFoundLayout;
    QLabel *lblNotFound;
    QListWidget *listWidgetStartup;

    void setupUi(QWidget *StartupAppsPage)
    {
        if (StartupAppsPage->objectName().isEmpty())
            StartupAppsPage->setObjectName(QString::fromUtf8("StartupAppsPage"));
        StartupAppsPage->resize(892, 591);
        gridLayout = new QGridLayout(StartupAppsPage);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widgetStartupApps = new QWidget(StartupAppsPage);
        widgetStartupApps->setObjectName(QString::fromUtf8("widgetStartupApps"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widgetStartupApps->sizePolicy().hasHeightForWidth());
        widgetStartupApps->setSizePolicy(sizePolicy);
        widgetStartupApps->setCursor(QCursor(Qt::ArrowCursor));
        widgetStartupApps->setStyleSheet(QString::fromUtf8(""));
        gridLayout_2 = new QGridLayout(widgetStartupApps);
        gridLayout_2->setSpacing(5);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(60, 10, 60, 20);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 1, 1, 1);

        btnAddStartupApp = new QPushButton(widgetStartupApps);
        btnAddStartupApp->setObjectName(QString::fromUtf8("btnAddStartupApp"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnAddStartupApp->sizePolicy().hasHeightForWidth());
        btnAddStartupApp->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("NanumGothic"));
        btnAddStartupApp->setFont(font);
        btnAddStartupApp->setCursor(QCursor(Qt::PointingHandCursor));
        btnAddStartupApp->setFocusPolicy(Qt::NoFocus);
#ifndef QT_NO_ACCESSIBILITY
        btnAddStartupApp->setAccessibleName(QString::fromUtf8("primary"));
#endif // QT_NO_ACCESSIBILITY
        btnAddStartupApp->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(btnAddStartupApp, 5, 2, 1, 1);

        lblStartupAppsTitle = new QLabel(widgetStartupApps);
        lblStartupAppsTitle->setObjectName(QString::fromUtf8("lblStartupAppsTitle"));
        QFont font1;
        font1.setPointSize(10);
        font1.setItalic(false);
        lblStartupAppsTitle->setFont(font1);
        lblStartupAppsTitle->setStyleSheet(QString::fromUtf8(""));
        lblStartupAppsTitle->setText(QString::fromUtf8("System Startup Applications"));

        gridLayout_2->addWidget(lblStartupAppsTitle, 0, 0, 1, 1, Qt::AlignLeft);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_2, 4, 0, 1, 3);

        verticalWidget = new QWidget(widgetStartupApps);
        verticalWidget->setObjectName(QString::fromUtf8("verticalWidget"));
        verticalLayout = new QVBoxLayout(verticalWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        notFoundWidget = new QWidget(verticalWidget);
        notFoundWidget->setObjectName(QString::fromUtf8("notFoundWidget"));
        sizePolicy.setHeightForWidth(notFoundWidget->sizePolicy().hasHeightForWidth());
        notFoundWidget->setSizePolicy(sizePolicy);
        notFoundWidget->setMinimumSize(QSize(0, 200));
        notFoundWidget->setMaximumSize(QSize(16777215, 200));
        notFoundWidget->setStyleSheet(QString::fromUtf8(""));
        notFoundLayout = new QVBoxLayout(notFoundWidget);
        notFoundLayout->setSpacing(0);
        notFoundLayout->setObjectName(QString::fromUtf8("notFoundLayout"));
        notFoundLayout->setContentsMargins(0, 0, 0, 0);
        lblNotFound = new QLabel(notFoundWidget);
        lblNotFound->setObjectName(QString::fromUtf8("lblNotFound"));

        notFoundLayout->addWidget(lblNotFound, 0, Qt::AlignHCenter|Qt::AlignBottom);


        verticalLayout->addWidget(notFoundWidget);

        listWidgetStartup = new QListWidget(verticalWidget);
        listWidgetStartup->setObjectName(QString::fromUtf8("listWidgetStartup"));
        listWidgetStartup->setFocusPolicy(Qt::NoFocus);
        listWidgetStartup->setFrameShape(QFrame::NoFrame);
        listWidgetStartup->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidgetStartup->setEditTriggers(QAbstractItemView::EditKeyPressed);
        listWidgetStartup->setSelectionMode(QAbstractItemView::NoSelection);
        listWidgetStartup->setSelectionBehavior(QAbstractItemView::SelectRows);
        listWidgetStartup->setResizeMode(QListView::Adjust);
        listWidgetStartup->setLayoutMode(QListView::Batched);
        listWidgetStartup->setSpacing(5);
        listWidgetStartup->setUniformItemSizes(true);

        verticalLayout->addWidget(listWidgetStartup);


        gridLayout_2->addWidget(verticalWidget, 1, 0, 1, 3);


        gridLayout->addWidget(widgetStartupApps, 0, 0, 1, 1);


        retranslateUi(StartupAppsPage);

        QMetaObject::connectSlotsByName(StartupAppsPage);
    } // setupUi

    void retranslateUi(QWidget *StartupAppsPage)
    {
        StartupAppsPage->setWindowTitle(QApplication::translate("StartupAppsPage", "Startup Apps", nullptr));
        btnAddStartupApp->setText(QApplication::translate("StartupAppsPage", "Add Startup App", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        lblStartupAppsTitle->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        lblNotFound->setText(QApplication::translate("StartupAppsPage", "Not Found Startup Apps", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StartupAppsPage: public Ui_StartupAppsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTUP_APPS_PAGE_H
