/********************************************************************************
** Form generated from reading UI file 'startup_apps_page.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTUP_APPS_PAGE_H
#define UI_STARTUP_APPS_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
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
            StartupAppsPage->setObjectName(QStringLiteral("StartupAppsPage"));
        StartupAppsPage->resize(892, 591);
        gridLayout = new QGridLayout(StartupAppsPage);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widgetStartupApps = new QWidget(StartupAppsPage);
        widgetStartupApps->setObjectName(QStringLiteral("widgetStartupApps"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widgetStartupApps->sizePolicy().hasHeightForWidth());
        widgetStartupApps->setSizePolicy(sizePolicy);
        widgetStartupApps->setCursor(QCursor(Qt::ArrowCursor));
        widgetStartupApps->setStyleSheet(QStringLiteral(""));
        gridLayout_2 = new QGridLayout(widgetStartupApps);
        gridLayout_2->setSpacing(5);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(60, 10, 60, 20);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 1, 1, 1);

        btnAddStartupApp = new QPushButton(widgetStartupApps);
        btnAddStartupApp->setObjectName(QStringLiteral("btnAddStartupApp"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnAddStartupApp->sizePolicy().hasHeightForWidth());
        btnAddStartupApp->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QStringLiteral("NanumBarunGothic"));
        btnAddStartupApp->setFont(font);
        btnAddStartupApp->setCursor(QCursor(Qt::PointingHandCursor));
        btnAddStartupApp->setFocusPolicy(Qt::NoFocus);
#ifndef QT_NO_ACCESSIBILITY
        btnAddStartupApp->setAccessibleName(QStringLiteral("primary"));
#endif // QT_NO_ACCESSIBILITY
        btnAddStartupApp->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(btnAddStartupApp, 5, 2, 1, 1);

        lblStartupAppsTitle = new QLabel(widgetStartupApps);
        lblStartupAppsTitle->setObjectName(QStringLiteral("lblStartupAppsTitle"));
        QFont font1;
        font1.setFamily(QStringLiteral("NanumBarunGothic"));
        font1.setPointSize(11);
        font1.setItalic(false);
        lblStartupAppsTitle->setFont(font1);
        lblStartupAppsTitle->setStyleSheet(QStringLiteral(""));
        lblStartupAppsTitle->setText(QStringLiteral("System Startup Applications"));

        gridLayout_2->addWidget(lblStartupAppsTitle, 0, 0, 1, 1, Qt::AlignLeft);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_2, 4, 0, 1, 3);

        verticalWidget = new QWidget(widgetStartupApps);
        verticalWidget->setObjectName(QStringLiteral("verticalWidget"));
        verticalLayout = new QVBoxLayout(verticalWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        notFoundWidget = new QWidget(verticalWidget);
        notFoundWidget->setObjectName(QStringLiteral("notFoundWidget"));
        sizePolicy.setHeightForWidth(notFoundWidget->sizePolicy().hasHeightForWidth());
        notFoundWidget->setSizePolicy(sizePolicy);
        notFoundWidget->setMinimumSize(QSize(0, 200));
        notFoundWidget->setMaximumSize(QSize(16777215, 200));
        notFoundWidget->setStyleSheet(QStringLiteral(""));
        notFoundLayout = new QVBoxLayout(notFoundWidget);
        notFoundLayout->setSpacing(0);
        notFoundLayout->setObjectName(QStringLiteral("notFoundLayout"));
        notFoundLayout->setContentsMargins(0, 0, 0, 0);
        lblNotFound = new QLabel(notFoundWidget);
        lblNotFound->setObjectName(QStringLiteral("lblNotFound"));

        notFoundLayout->addWidget(lblNotFound, 0, Qt::AlignHCenter|Qt::AlignBottom);


        verticalLayout->addWidget(notFoundWidget);

        listWidgetStartup = new QListWidget(verticalWidget);
        listWidgetStartup->setObjectName(QStringLiteral("listWidgetStartup"));
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
        StartupAppsPage->setWindowTitle(QApplication::translate("StartupAppsPage", "Startup Apps", Q_NULLPTR));
        btnAddStartupApp->setText(QApplication::translate("StartupAppsPage", "Add Startup App", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        lblStartupAppsTitle->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        lblNotFound->setText(QApplication::translate("StartupAppsPage", "Not Found Startup Apps", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class StartupAppsPage: public Ui_StartupAppsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTUP_APPS_PAGE_H
