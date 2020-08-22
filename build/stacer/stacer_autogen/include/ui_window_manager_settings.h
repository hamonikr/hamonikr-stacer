/********************************************************************************
** Form generated from reading UI file 'window_manager_settings.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_MANAGER_SETTINGS_H
#define UI_WINDOW_MANAGER_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowManagerSettings
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaUnityContents;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QGroupBox *grpAdditionalTitlebar;
    QGridLayout *gridLayout_5;
    QComboBox *cmbTitleBarDoubleClick;
    QLabel *lblHomeIcon_9;
    QLabel *lblHomeIcon_7;
    QLabel *lblHomeIcon_8;
    QComboBox *cmbTitleBarRightClick;
    QComboBox *cmbTitleBarMiddleClick;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_3;
    QGroupBox *grpWorkspace;
    QGridLayout *gridLayout_3;
    QCheckBox *checkWorkspaceSwitcher;
    QLabel *lblMountedIcon_3;
    QSpinBox *spinVerticWorkspace;
    QLabel *lblMountedIcon_2;
    QSpinBox *spinHorizonWorkspace;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *grpAdditionalFocus;
    QGridLayout *gridLayout_4;
    QLabel *lblHomeIcon_4;
    QCheckBox *checkRaiseOnClick;
    QComboBox *cmbFocusMode;
    QLabel *lblHomeIcon_3;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *grpHardware;
    QGridLayout *gridLayout_2;
    QComboBox *cmbTextQuality;
    QLabel *lblHomeIcon;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *WindowManagerSettings)
    {
        if (WindowManagerSettings->objectName().isEmpty())
            WindowManagerSettings->setObjectName(QStringLiteral("WindowManagerSettings"));
        WindowManagerSettings->resize(933, 467);
        WindowManagerSettings->setWindowTitle(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(WindowManagerSettings);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(WindowManagerSettings);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setWidgetResizable(true);
        scrollAreaUnityContents = new QWidget();
        scrollAreaUnityContents->setObjectName(QStringLiteral("scrollAreaUnityContents"));
        scrollAreaUnityContents->setGeometry(QRect(0, 0, 931, 465));
        gridLayout = new QGridLayout(scrollAreaUnityContents);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(15);
        gridLayout->setVerticalSpacing(10);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 46, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 13, 0, 1, 1);

        label = new QLabel(scrollAreaUnityContents);
        label->setObjectName(QStringLiteral("label"));
#ifndef QT_NO_ACCESSIBILITY
        label->setAccessibleName(QStringLiteral("general-title"));
#endif // QT_NO_ACCESSIBILITY
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        grpAdditionalTitlebar = new QGroupBox(scrollAreaUnityContents);
        grpAdditionalTitlebar->setObjectName(QStringLiteral("grpAdditionalTitlebar"));
        gridLayout_5 = new QGridLayout(grpAdditionalTitlebar);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setHorizontalSpacing(30);
        gridLayout_5->setVerticalSpacing(15);
        gridLayout_5->setContentsMargins(5, 5, 5, 5);
        cmbTitleBarDoubleClick = new QComboBox(grpAdditionalTitlebar);
        cmbTitleBarDoubleClick->setObjectName(QStringLiteral("cmbTitleBarDoubleClick"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cmbTitleBarDoubleClick->sizePolicy().hasHeightForWidth());
        cmbTitleBarDoubleClick->setSizePolicy(sizePolicy1);
        cmbTitleBarDoubleClick->setMinimumSize(QSize(300, 0));
        cmbTitleBarDoubleClick->setMaximumSize(QSize(16777215, 16777215));
        cmbTitleBarDoubleClick->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);

        gridLayout_5->addWidget(cmbTitleBarDoubleClick, 0, 1, 1, 1);

        lblHomeIcon_9 = new QLabel(grpAdditionalTitlebar);
        lblHomeIcon_9->setObjectName(QStringLiteral("lblHomeIcon_9"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lblHomeIcon_9->sizePolicy().hasHeightForWidth());
        lblHomeIcon_9->setSizePolicy(sizePolicy2);

        gridLayout_5->addWidget(lblHomeIcon_9, 1, 0, 1, 1);

        lblHomeIcon_7 = new QLabel(grpAdditionalTitlebar);
        lblHomeIcon_7->setObjectName(QStringLiteral("lblHomeIcon_7"));
        sizePolicy2.setHeightForWidth(lblHomeIcon_7->sizePolicy().hasHeightForWidth());
        lblHomeIcon_7->setSizePolicy(sizePolicy2);

        gridLayout_5->addWidget(lblHomeIcon_7, 0, 0, 1, 1);

        lblHomeIcon_8 = new QLabel(grpAdditionalTitlebar);
        lblHomeIcon_8->setObjectName(QStringLiteral("lblHomeIcon_8"));
        sizePolicy2.setHeightForWidth(lblHomeIcon_8->sizePolicy().hasHeightForWidth());
        lblHomeIcon_8->setSizePolicy(sizePolicy2);

        gridLayout_5->addWidget(lblHomeIcon_8, 0, 2, 1, 1);

        cmbTitleBarRightClick = new QComboBox(grpAdditionalTitlebar);
        cmbTitleBarRightClick->setObjectName(QStringLiteral("cmbTitleBarRightClick"));
        sizePolicy1.setHeightForWidth(cmbTitleBarRightClick->sizePolicy().hasHeightForWidth());
        cmbTitleBarRightClick->setSizePolicy(sizePolicy1);
        cmbTitleBarRightClick->setMinimumSize(QSize(300, 0));
        cmbTitleBarRightClick->setMaximumSize(QSize(16777215, 16777215));
        cmbTitleBarRightClick->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);

        gridLayout_5->addWidget(cmbTitleBarRightClick, 1, 1, 1, 1);

        cmbTitleBarMiddleClick = new QComboBox(grpAdditionalTitlebar);
        cmbTitleBarMiddleClick->setObjectName(QStringLiteral("cmbTitleBarMiddleClick"));
        sizePolicy1.setHeightForWidth(cmbTitleBarMiddleClick->sizePolicy().hasHeightForWidth());
        cmbTitleBarMiddleClick->setSizePolicy(sizePolicy1);
        cmbTitleBarMiddleClick->setMinimumSize(QSize(300, 0));
        cmbTitleBarMiddleClick->setMaximumSize(QSize(16777215, 16777215));
        cmbTitleBarMiddleClick->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);

        gridLayout_5->addWidget(cmbTitleBarMiddleClick, 0, 3, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_4, 0, 4, 1, 1);


        gridLayout->addWidget(grpAdditionalTitlebar, 9, 0, 1, 1);

        label_3 = new QLabel(scrollAreaUnityContents);
        label_3->setObjectName(QStringLiteral("label_3"));
#ifndef QT_NO_ACCESSIBILITY
        label_3->setAccessibleName(QStringLiteral("general-title"));
#endif // QT_NO_ACCESSIBILITY
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 6, 0, 1, 1);

        grpWorkspace = new QGroupBox(scrollAreaUnityContents);
        grpWorkspace->setObjectName(QStringLiteral("grpWorkspace"));
        gridLayout_3 = new QGridLayout(grpWorkspace);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(30);
        gridLayout_3->setVerticalSpacing(15);
        gridLayout_3->setContentsMargins(5, 5, 5, 5);
        checkWorkspaceSwitcher = new QCheckBox(grpWorkspace);
        checkWorkspaceSwitcher->setObjectName(QStringLiteral("checkWorkspaceSwitcher"));
        checkWorkspaceSwitcher->setCursor(QCursor(Qt::PointingHandCursor));
        checkWorkspaceSwitcher->setFocusPolicy(Qt::NoFocus);

        gridLayout_3->addWidget(checkWorkspaceSwitcher, 0, 1, 1, 1);

        lblMountedIcon_3 = new QLabel(grpWorkspace);
        lblMountedIcon_3->setObjectName(QStringLiteral("lblMountedIcon_3"));
        sizePolicy2.setHeightForWidth(lblMountedIcon_3->sizePolicy().hasHeightForWidth());
        lblMountedIcon_3->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(lblMountedIcon_3, 1, 2, 1, 1);

        spinVerticWorkspace = new QSpinBox(grpWorkspace);
        spinVerticWorkspace->setObjectName(QStringLiteral("spinVerticWorkspace"));
        spinVerticWorkspace->setMinimum(1);
        spinVerticWorkspace->setMaximum(25);

        gridLayout_3->addWidget(spinVerticWorkspace, 1, 3, 1, 1, Qt::AlignLeft);

        lblMountedIcon_2 = new QLabel(grpWorkspace);
        lblMountedIcon_2->setObjectName(QStringLiteral("lblMountedIcon_2"));
        sizePolicy2.setHeightForWidth(lblMountedIcon_2->sizePolicy().hasHeightForWidth());
        lblMountedIcon_2->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(lblMountedIcon_2, 0, 0, 1, 1);

        spinHorizonWorkspace = new QSpinBox(grpWorkspace);
        spinHorizonWorkspace->setObjectName(QStringLiteral("spinHorizonWorkspace"));
        spinHorizonWorkspace->setMinimum(1);
        spinHorizonWorkspace->setMaximum(25);

        gridLayout_3->addWidget(spinHorizonWorkspace, 1, 1, 1, 1, Qt::AlignLeft);

        label_2 = new QLabel(grpWorkspace);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 1, 4, 1, 1);


        gridLayout->addWidget(grpWorkspace, 2, 0, 1, 1);

        grpAdditionalFocus = new QGroupBox(scrollAreaUnityContents);
        grpAdditionalFocus->setObjectName(QStringLiteral("grpAdditionalFocus"));
        gridLayout_4 = new QGridLayout(grpAdditionalFocus);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setHorizontalSpacing(30);
        gridLayout_4->setVerticalSpacing(15);
        gridLayout_4->setContentsMargins(5, 5, 5, 5);
        lblHomeIcon_4 = new QLabel(grpAdditionalFocus);
        lblHomeIcon_4->setObjectName(QStringLiteral("lblHomeIcon_4"));
        sizePolicy2.setHeightForWidth(lblHomeIcon_4->sizePolicy().hasHeightForWidth());
        lblHomeIcon_4->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(lblHomeIcon_4, 0, 2, 1, 1);

        checkRaiseOnClick = new QCheckBox(grpAdditionalFocus);
        checkRaiseOnClick->setObjectName(QStringLiteral("checkRaiseOnClick"));
        checkRaiseOnClick->setCursor(QCursor(Qt::PointingHandCursor));
        checkRaiseOnClick->setFocusPolicy(Qt::NoFocus);

        gridLayout_4->addWidget(checkRaiseOnClick, 0, 1, 1, 1);

        cmbFocusMode = new QComboBox(grpAdditionalFocus);
        cmbFocusMode->setObjectName(QStringLiteral("cmbFocusMode"));
        sizePolicy1.setHeightForWidth(cmbFocusMode->sizePolicy().hasHeightForWidth());
        cmbFocusMode->setSizePolicy(sizePolicy1);
        cmbFocusMode->setMinimumSize(QSize(300, 0));
        cmbFocusMode->setMaximumSize(QSize(16777215, 16777215));
        cmbFocusMode->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);

        gridLayout_4->addWidget(cmbFocusMode, 0, 3, 1, 1);

        lblHomeIcon_3 = new QLabel(grpAdditionalFocus);
        lblHomeIcon_3->setObjectName(QStringLiteral("lblHomeIcon_3"));
        sizePolicy2.setHeightForWidth(lblHomeIcon_3->sizePolicy().hasHeightForWidth());
        lblHomeIcon_3->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(lblHomeIcon_3, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 0, 4, 1, 1);


        gridLayout->addWidget(grpAdditionalFocus, 7, 0, 1, 1);

        grpHardware = new QGroupBox(scrollAreaUnityContents);
        grpHardware->setObjectName(QStringLiteral("grpHardware"));
        gridLayout_2 = new QGridLayout(grpHardware);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(30);
        gridLayout_2->setVerticalSpacing(15);
        gridLayout_2->setContentsMargins(5, 5, 5, 5);
        cmbTextQuality = new QComboBox(grpHardware);
        cmbTextQuality->setObjectName(QStringLiteral("cmbTextQuality"));
        sizePolicy1.setHeightForWidth(cmbTextQuality->sizePolicy().hasHeightForWidth());
        cmbTextQuality->setSizePolicy(sizePolicy1);
        cmbTextQuality->setMinimumSize(QSize(300, 0));
        cmbTextQuality->setMaximumSize(QSize(16777215, 16777215));
        cmbTextQuality->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);

        gridLayout_2->addWidget(cmbTextQuality, 0, 1, 1, 1);

        lblHomeIcon = new QLabel(grpHardware);
        lblHomeIcon->setObjectName(QStringLiteral("lblHomeIcon"));
        sizePolicy2.setHeightForWidth(lblHomeIcon->sizePolicy().hasHeightForWidth());
        lblHomeIcon->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(lblHomeIcon, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 2, 1, 1);


        gridLayout->addWidget(grpHardware, 1, 0, 1, 1);

        scrollArea->setWidget(scrollAreaUnityContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(WindowManagerSettings);

        QMetaObject::connectSlotsByName(WindowManagerSettings);
    } // setupUi

    void retranslateUi(QWidget *WindowManagerSettings)
    {
        label->setText(QApplication::translate("WindowManagerSettings", "General", Q_NULLPTR));
        grpAdditionalTitlebar->setTitle(QApplication::translate("WindowManagerSettings", "Titlebar Actions", Q_NULLPTR));
        lblHomeIcon_9->setText(QApplication::translate("WindowManagerSettings", "Right click", Q_NULLPTR));
        lblHomeIcon_7->setText(QApplication::translate("WindowManagerSettings", "Double click", Q_NULLPTR));
        lblHomeIcon_8->setText(QApplication::translate("WindowManagerSettings", "Middle click", Q_NULLPTR));
        label_3->setText(QApplication::translate("WindowManagerSettings", "Additional", Q_NULLPTR));
        grpWorkspace->setTitle(QApplication::translate("WindowManagerSettings", "Workspace Settings", Q_NULLPTR));
        checkWorkspaceSwitcher->setText(QString());
        lblMountedIcon_3->setText(QApplication::translate("WindowManagerSettings", "Vertical workspaces", Q_NULLPTR));
        lblMountedIcon_2->setText(QApplication::translate("WindowManagerSettings", "Workspace switcher", Q_NULLPTR));
        label_2->setText(QApplication::translate("WindowManagerSettings", "Horizontal workspaces", Q_NULLPTR));
        grpAdditionalFocus->setTitle(QApplication::translate("WindowManagerSettings", "Focus Behaviour", Q_NULLPTR));
        lblHomeIcon_4->setText(QApplication::translate("WindowManagerSettings", "Focus mode", Q_NULLPTR));
        checkRaiseOnClick->setText(QString());
        lblHomeIcon_3->setText(QApplication::translate("WindowManagerSettings", "Raise on click", Q_NULLPTR));
        grpHardware->setTitle(QApplication::translate("WindowManagerSettings", "Hardware Acceleration", Q_NULLPTR));
        lblHomeIcon->setText(QApplication::translate("WindowManagerSettings", "Text quality", Q_NULLPTR));
        Q_UNUSED(WindowManagerSettings);
    } // retranslateUi

};

namespace Ui {
    class WindowManagerSettings: public Ui_WindowManagerSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_MANAGER_SETTINGS_H
