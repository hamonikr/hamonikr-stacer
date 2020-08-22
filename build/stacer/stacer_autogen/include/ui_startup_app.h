/********************************************************************************
** Form generated from reading UI file 'startup_app.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTUP_APP_H
#define UI_STARTUP_APP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StartupApp
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widgetStartupApp;
    QHBoxLayout *startupAppLayout;
    QLabel *lblStartupAppIcon;
    QLabel *lblStartupAppName;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnEditStartupApp;
    QPushButton *btnDeleteStartupApp;
    QCheckBox *checkStartup;

    void setupUi(QWidget *StartupApp)
    {
        if (StartupApp->objectName().isEmpty())
            StartupApp->setObjectName(QStringLiteral("StartupApp"));
        StartupApp->resize(661, 45);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(StartupApp->sizePolicy().hasHeightForWidth());
        StartupApp->setSizePolicy(sizePolicy);
        StartupApp->setMinimumSize(QSize(0, 45));
        StartupApp->setMaximumSize(QSize(16777215, 45));
        StartupApp->setWindowTitle(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(StartupApp);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widgetStartupApp = new QWidget(StartupApp);
        widgetStartupApp->setObjectName(QStringLiteral("widgetStartupApp"));
        sizePolicy.setHeightForWidth(widgetStartupApp->sizePolicy().hasHeightForWidth());
        widgetStartupApp->setSizePolicy(sizePolicy);
        widgetStartupApp->setCursor(QCursor(Qt::ArrowCursor));
        startupAppLayout = new QHBoxLayout(widgetStartupApp);
        startupAppLayout->setSpacing(15);
        startupAppLayout->setObjectName(QStringLiteral("startupAppLayout"));
        startupAppLayout->setContentsMargins(15, 10, 10, 10);
        lblStartupAppIcon = new QLabel(widgetStartupApp);
        lblStartupAppIcon->setObjectName(QStringLiteral("lblStartupAppIcon"));
        lblStartupAppIcon->setMinimumSize(QSize(22, 24));
        lblStartupAppIcon->setMaximumSize(QSize(22, 24));
        lblStartupAppIcon->setScaledContents(true);

        startupAppLayout->addWidget(lblStartupAppIcon);

        lblStartupAppName = new QLabel(widgetStartupApp);
        lblStartupAppName->setObjectName(QStringLiteral("lblStartupAppName"));
        lblStartupAppName->setText(QStringLiteral("App Name"));

        startupAppLayout->addWidget(lblStartupAppName, 0, Qt::AlignLeft|Qt::AlignVCenter);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        startupAppLayout->addItem(horizontalSpacer);

        btnEditStartupApp = new QPushButton(widgetStartupApp);
        btnEditStartupApp->setObjectName(QStringLiteral("btnEditStartupApp"));
        btnEditStartupApp->setCursor(QCursor(Qt::PointingHandCursor));
        btnEditStartupApp->setFocusPolicy(Qt::NoFocus);
        btnEditStartupApp->setIconSize(QSize(18, 20));

        startupAppLayout->addWidget(btnEditStartupApp, 0, Qt::AlignRight|Qt::AlignVCenter);

        btnDeleteStartupApp = new QPushButton(widgetStartupApp);
        btnDeleteStartupApp->setObjectName(QStringLiteral("btnDeleteStartupApp"));
        btnDeleteStartupApp->setCursor(QCursor(Qt::PointingHandCursor));
        btnDeleteStartupApp->setFocusPolicy(Qt::NoFocus);
        btnDeleteStartupApp->setIconSize(QSize(22, 22));

        startupAppLayout->addWidget(btnDeleteStartupApp, 0, Qt::AlignRight|Qt::AlignVCenter);

        checkStartup = new QCheckBox(widgetStartupApp);
        checkStartup->setObjectName(QStringLiteral("checkStartup"));
        checkStartup->setCursor(QCursor(Qt::PointingHandCursor));
        checkStartup->setFocusPolicy(Qt::NoFocus);
        checkStartup->setStyleSheet(QStringLiteral(""));
        checkStartup->setIconSize(QSize(45, 23));

        startupAppLayout->addWidget(checkStartup, 0, Qt::AlignRight|Qt::AlignVCenter);


        verticalLayout->addWidget(widgetStartupApp);


        retranslateUi(StartupApp);

        QMetaObject::connectSlotsByName(StartupApp);
    } // setupUi

    void retranslateUi(QWidget *StartupApp)
    {
        lblStartupAppIcon->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnEditStartupApp->setToolTip(QApplication::translate("StartupApp", "Edit App", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnEditStartupApp->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnDeleteStartupApp->setToolTip(QApplication::translate("StartupApp", "Delete App", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnDeleteStartupApp->setText(QString());
        Q_UNUSED(StartupApp);
    } // retranslateUi

};

namespace Ui {
    class StartupApp: public Ui_StartupApp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTUP_APP_H
