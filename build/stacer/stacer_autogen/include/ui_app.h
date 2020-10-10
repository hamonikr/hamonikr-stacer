/********************************************************************************
** Form generated from reading UI file 'app.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APP_H
#define UI_APP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_App
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QWidget *sidebar;
    QVBoxLayout *sidebarLayout;
    QSpacerItem *verticalSpacer_2;
    QPushButton *btnDash;
    QPushButton *btnStartupApps;
    QPushButton *btnSystemCleaner;
    QPushButton *btnServices;
    QPushButton *btnProcesses;
    QPushButton *btnUninstaller;
    QPushButton *btnResources;
    QPushButton *btnHelpers;
    QPushButton *btnAptSourceManager;
    QPushButton *btnGnomeSettings;
    QPushButton *btnSettings;
    QSpacerItem *verticalSpacer;
    QWidget *pageContent;
    QVBoxLayout *pageContentLayout;
    QLabel *pageTitle;
    QButtonGroup *sidebarBtnGroup;

    void setupUi(QMainWindow *App)
    {
        if (App->objectName().isEmpty())
            App->setObjectName(QString::fromUtf8("App"));
        App->setWindowModality(Qt::NonModal);
        App->resize(850, 570);
        App->setWindowTitle(QString::fromUtf8("Stacer"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/static/icons/icon256x256.png"), QSize(), QIcon::Normal, QIcon::Off);
        App->setWindowIcon(icon);
        centralwidget = new QWidget(App);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        sidebar = new QWidget(centralwidget);
        sidebar->setObjectName(QString::fromUtf8("sidebar"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sidebar->sizePolicy().hasHeightForWidth());
        sidebar->setSizePolicy(sizePolicy);
        sidebar->setMinimumSize(QSize(60, 0));
        sidebar->setMaximumSize(QSize(60, 16777215));
        sidebar->setStyleSheet(QString::fromUtf8(""));
        sidebarLayout = new QVBoxLayout(sidebar);
        sidebarLayout->setSpacing(0);
        sidebarLayout->setObjectName(QString::fromUtf8("sidebarLayout"));
        sidebarLayout->setContentsMargins(0, 5, 0, 5);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        sidebarLayout->addItem(verticalSpacer_2);

        btnDash = new QPushButton(sidebar);
        sidebarBtnGroup = new QButtonGroup(App);
        sidebarBtnGroup->setObjectName(QString::fromUtf8("sidebarBtnGroup"));
        sidebarBtnGroup->addButton(btnDash);
        btnDash->setObjectName(QString::fromUtf8("btnDash"));
        btnDash->setCursor(QCursor(Qt::PointingHandCursor));
        btnDash->setFocusPolicy(Qt::NoFocus);
        btnDash->setStyleSheet(QString::fromUtf8(""));
        btnDash->setIconSize(QSize(28, 28));
        btnDash->setCheckable(true);
        btnDash->setChecked(true);

        sidebarLayout->addWidget(btnDash);

        btnStartupApps = new QPushButton(sidebar);
        sidebarBtnGroup->addButton(btnStartupApps);
        btnStartupApps->setObjectName(QString::fromUtf8("btnStartupApps"));
        btnStartupApps->setCursor(QCursor(Qt::PointingHandCursor));
        btnStartupApps->setFocusPolicy(Qt::NoFocus);
        btnStartupApps->setIconSize(QSize(28, 28));
        btnStartupApps->setCheckable(true);

        sidebarLayout->addWidget(btnStartupApps);

        btnSystemCleaner = new QPushButton(sidebar);
        sidebarBtnGroup->addButton(btnSystemCleaner);
        btnSystemCleaner->setObjectName(QString::fromUtf8("btnSystemCleaner"));
        btnSystemCleaner->setCursor(QCursor(Qt::PointingHandCursor));
        btnSystemCleaner->setFocusPolicy(Qt::NoFocus);
        btnSystemCleaner->setStyleSheet(QString::fromUtf8(""));
        btnSystemCleaner->setIconSize(QSize(28, 28));
        btnSystemCleaner->setCheckable(true);

        sidebarLayout->addWidget(btnSystemCleaner);

        btnServices = new QPushButton(sidebar);
        sidebarBtnGroup->addButton(btnServices);
        btnServices->setObjectName(QString::fromUtf8("btnServices"));
        btnServices->setCursor(QCursor(Qt::PointingHandCursor));
        btnServices->setFocusPolicy(Qt::NoFocus);
        btnServices->setIconSize(QSize(28, 28));
        btnServices->setCheckable(true);

        sidebarLayout->addWidget(btnServices);

        btnProcesses = new QPushButton(sidebar);
        sidebarBtnGroup->addButton(btnProcesses);
        btnProcesses->setObjectName(QString::fromUtf8("btnProcesses"));
        btnProcesses->setCursor(QCursor(Qt::PointingHandCursor));
        btnProcesses->setFocusPolicy(Qt::NoFocus);
        btnProcesses->setIconSize(QSize(28, 28));
        btnProcesses->setCheckable(true);

        sidebarLayout->addWidget(btnProcesses);

        btnUninstaller = new QPushButton(sidebar);
        sidebarBtnGroup->addButton(btnUninstaller);
        btnUninstaller->setObjectName(QString::fromUtf8("btnUninstaller"));
        btnUninstaller->setCursor(QCursor(Qt::PointingHandCursor));
        btnUninstaller->setFocusPolicy(Qt::NoFocus);
        btnUninstaller->setIconSize(QSize(28, 28));
        btnUninstaller->setCheckable(true);

        sidebarLayout->addWidget(btnUninstaller);

        btnResources = new QPushButton(sidebar);
        sidebarBtnGroup->addButton(btnResources);
        btnResources->setObjectName(QString::fromUtf8("btnResources"));
        btnResources->setCursor(QCursor(Qt::PointingHandCursor));
        btnResources->setFocusPolicy(Qt::NoFocus);
        btnResources->setIconSize(QSize(28, 28));
        btnResources->setCheckable(true);

        sidebarLayout->addWidget(btnResources);

        btnHelpers = new QPushButton(sidebar);
        sidebarBtnGroup->addButton(btnHelpers);
        btnHelpers->setObjectName(QString::fromUtf8("btnHelpers"));
        btnHelpers->setCursor(QCursor(Qt::PointingHandCursor));
        btnHelpers->setFocusPolicy(Qt::NoFocus);
        btnHelpers->setIconSize(QSize(28, 28));
        btnHelpers->setCheckable(true);

        sidebarLayout->addWidget(btnHelpers);

        btnAptSourceManager = new QPushButton(sidebar);
        sidebarBtnGroup->addButton(btnAptSourceManager);
        btnAptSourceManager->setObjectName(QString::fromUtf8("btnAptSourceManager"));
        btnAptSourceManager->setCursor(QCursor(Qt::PointingHandCursor));
        btnAptSourceManager->setFocusPolicy(Qt::NoFocus);
        btnAptSourceManager->setIconSize(QSize(28, 28));
        btnAptSourceManager->setCheckable(true);

        sidebarLayout->addWidget(btnAptSourceManager);

        btnGnomeSettings = new QPushButton(sidebar);
        sidebarBtnGroup->addButton(btnGnomeSettings);
        btnGnomeSettings->setObjectName(QString::fromUtf8("btnGnomeSettings"));
        btnGnomeSettings->setCursor(QCursor(Qt::PointingHandCursor));
        btnGnomeSettings->setFocusPolicy(Qt::NoFocus);
        btnGnomeSettings->setIconSize(QSize(28, 28));
        btnGnomeSettings->setCheckable(true);

        sidebarLayout->addWidget(btnGnomeSettings);

        btnSettings = new QPushButton(sidebar);
        sidebarBtnGroup->addButton(btnSettings);
        btnSettings->setObjectName(QString::fromUtf8("btnSettings"));
        btnSettings->setCursor(QCursor(Qt::PointingHandCursor));
        btnSettings->setFocusPolicy(Qt::NoFocus);
        btnSettings->setIconSize(QSize(28, 28));
        btnSettings->setCheckable(true);

        sidebarLayout->addWidget(btnSettings);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        sidebarLayout->addItem(verticalSpacer);

        btnDash->raise();
        btnStartupApps->raise();
        btnSystemCleaner->raise();
        btnServices->raise();
        btnProcesses->raise();
        btnUninstaller->raise();
        btnResources->raise();
        btnHelpers->raise();
        btnAptSourceManager->raise();
        btnGnomeSettings->raise();
        btnSettings->raise();

        horizontalLayout->addWidget(sidebar, 0, Qt::AlignHCenter);

        pageContent = new QWidget(centralwidget);
        pageContent->setObjectName(QString::fromUtf8("pageContent"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pageContent->sizePolicy().hasHeightForWidth());
        pageContent->setSizePolicy(sizePolicy1);
        pageContent->setStyleSheet(QString::fromUtf8(""));
        pageContentLayout = new QVBoxLayout(pageContent);
        pageContentLayout->setSpacing(0);
        pageContentLayout->setObjectName(QString::fromUtf8("pageContentLayout"));
        pageContentLayout->setContentsMargins(0, 0, 0, 0);
        pageTitle = new QLabel(pageContent);
        pageTitle->setObjectName(QString::fromUtf8("pageTitle"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pageTitle->sizePolicy().hasHeightForWidth());
        pageTitle->setSizePolicy(sizePolicy2);
        QFont font;
        font.setPointSize(10);
        pageTitle->setFont(font);
        pageTitle->setStyleSheet(QString::fromUtf8(""));
        pageTitle->setText(QString::fromUtf8("Title"));
        pageTitle->setAlignment(Qt::AlignCenter);

        pageContentLayout->addWidget(pageTitle);


        horizontalLayout->addWidget(pageContent);

        App->setCentralWidget(centralwidget);
        pageContent->raise();
        sidebar->raise();

        retranslateUi(App);

        QMetaObject::connectSlotsByName(App);
    } // setupUi

    void retranslateUi(QMainWindow *App)
    {
#ifndef QT_NO_TOOLTIP
        btnDash->setToolTip(QApplication::translate("App", "Dashboard", nullptr));
#endif // QT_NO_TOOLTIP
        btnDash->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnStartupApps->setToolTip(QApplication::translate("App", "Startup Apps", nullptr));
#endif // QT_NO_TOOLTIP
        btnStartupApps->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnSystemCleaner->setToolTip(QApplication::translate("App", "System Cleaner", nullptr));
#endif // QT_NO_TOOLTIP
        btnSystemCleaner->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnServices->setToolTip(QApplication::translate("App", "Services", nullptr));
#endif // QT_NO_TOOLTIP
        btnServices->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnProcesses->setToolTip(QApplication::translate("App", "Processes", nullptr));
#endif // QT_NO_TOOLTIP
        btnProcesses->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnUninstaller->setToolTip(QApplication::translate("App", "Uninstaller", nullptr));
#endif // QT_NO_TOOLTIP
        btnUninstaller->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnResources->setToolTip(QApplication::translate("App", "Resources", nullptr));
#endif // QT_NO_TOOLTIP
        btnResources->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnHelpers->setToolTip(QApplication::translate("App", "Helpers", nullptr));
#endif // QT_NO_TOOLTIP
        btnHelpers->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnAptSourceManager->setToolTip(QApplication::translate("App", "APT Repository Manager", nullptr));
#endif // QT_NO_TOOLTIP
        btnAptSourceManager->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnGnomeSettings->setToolTip(QApplication::translate("App", "Gnome Settings", nullptr));
#endif // QT_NO_TOOLTIP
        btnGnomeSettings->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnSettings->setToolTip(QApplication::translate("App", "Settings", nullptr));
#endif // QT_NO_TOOLTIP
        btnSettings->setText(QString());
        Q_UNUSED(App);
    } // retranslateUi

};

namespace Ui {
    class App: public Ui_App {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APP_H
