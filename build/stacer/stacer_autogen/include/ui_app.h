/********************************************************************************
** Form generated from reading UI file 'app.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APP_H
#define UI_APP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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
            App->setObjectName(QStringLiteral("App"));
        App->setWindowModality(Qt::NonModal);
        App->resize(850, 570);
        App->setWindowTitle(QStringLiteral("Stacer"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/static/icons/icon256x256.png"), QSize(), QIcon::Normal, QIcon::Off);
        App->setWindowIcon(icon);
        centralwidget = new QWidget(App);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        sidebar = new QWidget(centralwidget);
        sidebar->setObjectName(QStringLiteral("sidebar"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sidebar->sizePolicy().hasHeightForWidth());
        sidebar->setSizePolicy(sizePolicy);
        sidebar->setMinimumSize(QSize(60, 0));
        sidebar->setMaximumSize(QSize(60, 16777215));
        sidebar->setStyleSheet(QStringLiteral(""));
        sidebarLayout = new QVBoxLayout(sidebar);
        sidebarLayout->setSpacing(0);
        sidebarLayout->setObjectName(QStringLiteral("sidebarLayout"));
        sidebarLayout->setContentsMargins(0, 5, 0, 5);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        sidebarLayout->addItem(verticalSpacer_2);

        btnDash = new QPushButton(sidebar);
        sidebarBtnGroup = new QButtonGroup(App);
        sidebarBtnGroup->setObjectName(QStringLiteral("sidebarBtnGroup"));
        sidebarBtnGroup->addButton(btnDash);
        btnDash->setObjectName(QStringLiteral("btnDash"));
        btnDash->setCursor(QCursor(Qt::PointingHandCursor));
        btnDash->setFocusPolicy(Qt::NoFocus);
        btnDash->setStyleSheet(QStringLiteral(""));
        btnDash->setIconSize(QSize(28, 28));
        btnDash->setCheckable(true);
        btnDash->setChecked(true);

        sidebarLayout->addWidget(btnDash);

        btnStartupApps = new QPushButton(sidebar);
        sidebarBtnGroup->addButton(btnStartupApps);
        btnStartupApps->setObjectName(QStringLiteral("btnStartupApps"));
        btnStartupApps->setCursor(QCursor(Qt::PointingHandCursor));
        btnStartupApps->setFocusPolicy(Qt::NoFocus);
        btnStartupApps->setIconSize(QSize(28, 28));
        btnStartupApps->setCheckable(true);

        sidebarLayout->addWidget(btnStartupApps);

        btnSystemCleaner = new QPushButton(sidebar);
        sidebarBtnGroup->addButton(btnSystemCleaner);
        btnSystemCleaner->setObjectName(QStringLiteral("btnSystemCleaner"));
        btnSystemCleaner->setCursor(QCursor(Qt::PointingHandCursor));
        btnSystemCleaner->setFocusPolicy(Qt::NoFocus);
        btnSystemCleaner->setStyleSheet(QStringLiteral(""));
        btnSystemCleaner->setIconSize(QSize(28, 28));
        btnSystemCleaner->setCheckable(true);

        sidebarLayout->addWidget(btnSystemCleaner);

        btnServices = new QPushButton(sidebar);
        sidebarBtnGroup->addButton(btnServices);
        btnServices->setObjectName(QStringLiteral("btnServices"));
        btnServices->setCursor(QCursor(Qt::PointingHandCursor));
        btnServices->setFocusPolicy(Qt::NoFocus);
        btnServices->setIconSize(QSize(28, 28));
        btnServices->setCheckable(true);

        sidebarLayout->addWidget(btnServices);

        btnProcesses = new QPushButton(sidebar);
        sidebarBtnGroup->addButton(btnProcesses);
        btnProcesses->setObjectName(QStringLiteral("btnProcesses"));
        btnProcesses->setCursor(QCursor(Qt::PointingHandCursor));
        btnProcesses->setFocusPolicy(Qt::NoFocus);
        btnProcesses->setIconSize(QSize(28, 28));
        btnProcesses->setCheckable(true);

        sidebarLayout->addWidget(btnProcesses);

        btnUninstaller = new QPushButton(sidebar);
        sidebarBtnGroup->addButton(btnUninstaller);
        btnUninstaller->setObjectName(QStringLiteral("btnUninstaller"));
        btnUninstaller->setCursor(QCursor(Qt::PointingHandCursor));
        btnUninstaller->setFocusPolicy(Qt::NoFocus);
        btnUninstaller->setIconSize(QSize(28, 28));
        btnUninstaller->setCheckable(true);

        sidebarLayout->addWidget(btnUninstaller);

        btnResources = new QPushButton(sidebar);
        sidebarBtnGroup->addButton(btnResources);
        btnResources->setObjectName(QStringLiteral("btnResources"));
        btnResources->setCursor(QCursor(Qt::PointingHandCursor));
        btnResources->setFocusPolicy(Qt::NoFocus);
        btnResources->setIconSize(QSize(28, 28));
        btnResources->setCheckable(true);

        sidebarLayout->addWidget(btnResources);

        btnHelpers = new QPushButton(sidebar);
        sidebarBtnGroup->addButton(btnHelpers);
        btnHelpers->setObjectName(QStringLiteral("btnHelpers"));
        btnHelpers->setCursor(QCursor(Qt::PointingHandCursor));
        btnHelpers->setFocusPolicy(Qt::NoFocus);
        btnHelpers->setIconSize(QSize(28, 28));
        btnHelpers->setCheckable(true);

        sidebarLayout->addWidget(btnHelpers);

        btnAptSourceManager = new QPushButton(sidebar);
        sidebarBtnGroup->addButton(btnAptSourceManager);
        btnAptSourceManager->setObjectName(QStringLiteral("btnAptSourceManager"));
        btnAptSourceManager->setCursor(QCursor(Qt::PointingHandCursor));
        btnAptSourceManager->setFocusPolicy(Qt::NoFocus);
        btnAptSourceManager->setIconSize(QSize(28, 28));
        btnAptSourceManager->setCheckable(true);

        sidebarLayout->addWidget(btnAptSourceManager);

        btnGnomeSettings = new QPushButton(sidebar);
        sidebarBtnGroup->addButton(btnGnomeSettings);
        btnGnomeSettings->setObjectName(QStringLiteral("btnGnomeSettings"));
        btnGnomeSettings->setCursor(QCursor(Qt::PointingHandCursor));
        btnGnomeSettings->setFocusPolicy(Qt::NoFocus);
        btnGnomeSettings->setIconSize(QSize(28, 28));
        btnGnomeSettings->setCheckable(true);

        sidebarLayout->addWidget(btnGnomeSettings);

        btnSettings = new QPushButton(sidebar);
        sidebarBtnGroup->addButton(btnSettings);
        btnSettings->setObjectName(QStringLiteral("btnSettings"));
        btnSettings->setCursor(QCursor(Qt::PointingHandCursor));
        btnSettings->setFocusPolicy(Qt::NoFocus);
        btnSettings->setIconSize(QSize(28, 28));
        btnSettings->setCheckable(true);

        sidebarLayout->addWidget(btnSettings);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        sidebarLayout->addItem(verticalSpacer);

        btnDash->raise();
        btnServices->raise();
        btnUninstaller->raise();
        btnStartupApps->raise();
        btnResources->raise();
        btnSystemCleaner->raise();
        btnProcesses->raise();
        btnSettings->raise();
        btnGnomeSettings->raise();
        btnAptSourceManager->raise();
        btnHelpers->raise();

        horizontalLayout->addWidget(sidebar, 0, Qt::AlignHCenter);

        pageContent = new QWidget(centralwidget);
        pageContent->setObjectName(QStringLiteral("pageContent"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pageContent->sizePolicy().hasHeightForWidth());
        pageContent->setSizePolicy(sizePolicy1);
        pageContent->setStyleSheet(QStringLiteral(""));
        pageContentLayout = new QVBoxLayout(pageContent);
        pageContentLayout->setSpacing(0);
        pageContentLayout->setObjectName(QStringLiteral("pageContentLayout"));
        pageContentLayout->setContentsMargins(0, 0, 0, 0);
        pageTitle = new QLabel(pageContent);
        pageTitle->setObjectName(QStringLiteral("pageTitle"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pageTitle->sizePolicy().hasHeightForWidth());
        pageTitle->setSizePolicy(sizePolicy2);
        QFont font;
        font.setFamily(QStringLiteral("NanumBarunGothic"));
        font.setPointSize(12);
        pageTitle->setFont(font);
        pageTitle->setStyleSheet(QStringLiteral(""));
        pageTitle->setText(QStringLiteral("Title"));
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
        btnDash->setToolTip(QApplication::translate("App", "Dashboard", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnDash->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnStartupApps->setToolTip(QApplication::translate("App", "Startup Apps", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnStartupApps->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnSystemCleaner->setToolTip(QApplication::translate("App", "System Cleaner", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnSystemCleaner->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnServices->setToolTip(QApplication::translate("App", "Services", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnServices->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnProcesses->setToolTip(QApplication::translate("App", "Processes", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnProcesses->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnUninstaller->setToolTip(QApplication::translate("App", "Uninstaller", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnUninstaller->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnResources->setToolTip(QApplication::translate("App", "Resources", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnResources->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnHelpers->setToolTip(QApplication::translate("App", "Helpers", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnHelpers->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnAptSourceManager->setToolTip(QApplication::translate("App", "APT Repository Manager", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnAptSourceManager->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnGnomeSettings->setToolTip(QApplication::translate("App", "Gnome Settings", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnGnomeSettings->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnSettings->setToolTip(QApplication::translate("App", "Settings", Q_NULLPTR));
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
