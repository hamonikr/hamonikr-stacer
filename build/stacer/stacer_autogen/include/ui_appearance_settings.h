/********************************************************************************
** Form generated from reading UI file 'appearance_settings.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPEARANCE_SETTINGS_H
#define UI_APPEARANCE_SETTINGS_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AppearanceSettings
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widgetAppearance;
    QGridLayout *gridLayout;
    QGroupBox *grpScreenApps;
    QGridLayout *gridLayout_4;
    QLabel *lblMountedIcon_5;
    QCheckBox *checkScreenReader;
    QLabel *lblMountedIcon_4;
    QCheckBox *checkScreenKeyboard;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *grpBackground;
    QGridLayout *gridLayout_3;
    QLabel *lblMountedIcon_2;
    QComboBox *cmbLoginBackMode;
    QLabel *lblMountedIcon_3;
    QComboBox *cmbDesktopBackMode;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *grpIcons;
    QGridLayout *gridLayout_2;
    QLabel *lblHomeIcon;
    QCheckBox *checkNetworkIcon;
    QLabel *lblTrashIcon;
    QLabel *lblMountedIcon;
    QCheckBox *checkHomeIcon;
    QLabel *label;
    QCheckBox *checkShowDesktopIcons;
    QLabel *lblNetworkIcon;
    QCheckBox *checkMountedVulmesIcon;
    QCheckBox *checkTrashIcon;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *AppearanceSettings)
    {
        if (AppearanceSettings->objectName().isEmpty())
            AppearanceSettings->setObjectName(QStringLiteral("AppearanceSettings"));
        AppearanceSettings->resize(801, 438);
        AppearanceSettings->setWindowTitle(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(AppearanceSettings);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widgetAppearance = new QWidget(AppearanceSettings);
        widgetAppearance->setObjectName(QStringLiteral("widgetAppearance"));
        gridLayout = new QGridLayout(widgetAppearance);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(20);
        gridLayout->setVerticalSpacing(10);
        grpScreenApps = new QGroupBox(widgetAppearance);
        grpScreenApps->setObjectName(QStringLiteral("grpScreenApps"));
        gridLayout_4 = new QGridLayout(grpScreenApps);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setHorizontalSpacing(30);
        gridLayout_4->setVerticalSpacing(15);
        gridLayout_4->setContentsMargins(5, 5, 5, 5);
        lblMountedIcon_5 = new QLabel(grpScreenApps);
        lblMountedIcon_5->setObjectName(QStringLiteral("lblMountedIcon_5"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblMountedIcon_5->sizePolicy().hasHeightForWidth());
        lblMountedIcon_5->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(lblMountedIcon_5, 0, 2, 1, 1, Qt::AlignLeft);

        checkScreenReader = new QCheckBox(grpScreenApps);
        checkScreenReader->setObjectName(QStringLiteral("checkScreenReader"));
        checkScreenReader->setCursor(QCursor(Qt::PointingHandCursor));
        checkScreenReader->setFocusPolicy(Qt::NoFocus);

        gridLayout_4->addWidget(checkScreenReader, 0, 3, 1, 1);

        lblMountedIcon_4 = new QLabel(grpScreenApps);
        lblMountedIcon_4->setObjectName(QStringLiteral("lblMountedIcon_4"));
        sizePolicy.setHeightForWidth(lblMountedIcon_4->sizePolicy().hasHeightForWidth());
        lblMountedIcon_4->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(lblMountedIcon_4, 0, 0, 1, 1, Qt::AlignLeft);

        checkScreenKeyboard = new QCheckBox(grpScreenApps);
        checkScreenKeyboard->setObjectName(QStringLiteral("checkScreenKeyboard"));
        checkScreenKeyboard->setCursor(QCursor(Qt::PointingHandCursor));
        checkScreenKeyboard->setFocusPolicy(Qt::NoFocus);

        gridLayout_4->addWidget(checkScreenKeyboard, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 0, 4, 1, 1);


        gridLayout->addWidget(grpScreenApps, 2, 0, 1, 5);

        grpBackground = new QGroupBox(widgetAppearance);
        grpBackground->setObjectName(QStringLiteral("grpBackground"));
        gridLayout_3 = new QGridLayout(grpBackground);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(30);
        gridLayout_3->setVerticalSpacing(15);
        gridLayout_3->setContentsMargins(5, 5, 5, 5);
        lblMountedIcon_2 = new QLabel(grpBackground);
        lblMountedIcon_2->setObjectName(QStringLiteral("lblMountedIcon_2"));
        sizePolicy.setHeightForWidth(lblMountedIcon_2->sizePolicy().hasHeightForWidth());
        lblMountedIcon_2->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(lblMountedIcon_2, 0, 0, 1, 1, Qt::AlignLeft);

        cmbLoginBackMode = new QComboBox(grpBackground);
        cmbLoginBackMode->setObjectName(QStringLiteral("cmbLoginBackMode"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cmbLoginBackMode->sizePolicy().hasHeightForWidth());
        cmbLoginBackMode->setSizePolicy(sizePolicy1);
        cmbLoginBackMode->setMinimumSize(QSize(200, 0));
        cmbLoginBackMode->setMaximumSize(QSize(300, 16777215));
        cmbLoginBackMode->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);

        gridLayout_3->addWidget(cmbLoginBackMode, 0, 3, 1, 1);

        lblMountedIcon_3 = new QLabel(grpBackground);
        lblMountedIcon_3->setObjectName(QStringLiteral("lblMountedIcon_3"));
        sizePolicy.setHeightForWidth(lblMountedIcon_3->sizePolicy().hasHeightForWidth());
        lblMountedIcon_3->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(lblMountedIcon_3, 0, 2, 1, 1, Qt::AlignLeft);

        cmbDesktopBackMode = new QComboBox(grpBackground);
        cmbDesktopBackMode->setObjectName(QStringLiteral("cmbDesktopBackMode"));
        sizePolicy1.setHeightForWidth(cmbDesktopBackMode->sizePolicy().hasHeightForWidth());
        cmbDesktopBackMode->setSizePolicy(sizePolicy1);
        cmbDesktopBackMode->setMinimumSize(QSize(200, 0));
        cmbDesktopBackMode->setMaximumSize(QSize(300, 16777215));
        cmbDesktopBackMode->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);

        gridLayout_3->addWidget(cmbDesktopBackMode, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 4, 1, 1);


        gridLayout->addWidget(grpBackground, 1, 0, 1, 5);

        grpIcons = new QGroupBox(widgetAppearance);
        grpIcons->setObjectName(QStringLiteral("grpIcons"));
        gridLayout_2 = new QGridLayout(grpIcons);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(30);
        gridLayout_2->setVerticalSpacing(15);
        gridLayout_2->setContentsMargins(5, 5, 5, 5);
        lblHomeIcon = new QLabel(grpIcons);
        lblHomeIcon->setObjectName(QStringLiteral("lblHomeIcon"));
        sizePolicy.setHeightForWidth(lblHomeIcon->sizePolicy().hasHeightForWidth());
        lblHomeIcon->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(lblHomeIcon, 1, 0, 1, 1, Qt::AlignLeft);

        checkNetworkIcon = new QCheckBox(grpIcons);
        checkNetworkIcon->setObjectName(QStringLiteral("checkNetworkIcon"));
        checkNetworkIcon->setCursor(QCursor(Qt::PointingHandCursor));
        checkNetworkIcon->setFocusPolicy(Qt::NoFocus);

        gridLayout_2->addWidget(checkNetworkIcon, 1, 3, 1, 1);

        lblTrashIcon = new QLabel(grpIcons);
        lblTrashIcon->setObjectName(QStringLiteral("lblTrashIcon"));
        sizePolicy.setHeightForWidth(lblTrashIcon->sizePolicy().hasHeightForWidth());
        lblTrashIcon->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(lblTrashIcon, 0, 2, 1, 1, Qt::AlignLeft);

        lblMountedIcon = new QLabel(grpIcons);
        lblMountedIcon->setObjectName(QStringLiteral("lblMountedIcon"));
        sizePolicy.setHeightForWidth(lblMountedIcon->sizePolicy().hasHeightForWidth());
        lblMountedIcon->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(lblMountedIcon, 2, 0, 1, 1, Qt::AlignLeft);

        checkHomeIcon = new QCheckBox(grpIcons);
        checkHomeIcon->setObjectName(QStringLiteral("checkHomeIcon"));
        checkHomeIcon->setCursor(QCursor(Qt::PointingHandCursor));
        checkHomeIcon->setFocusPolicy(Qt::NoFocus);

        gridLayout_2->addWidget(checkHomeIcon, 1, 1, 1, 1);

        label = new QLabel(grpIcons);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label, 0, 0, 1, 1, Qt::AlignLeft);

        checkShowDesktopIcons = new QCheckBox(grpIcons);
        checkShowDesktopIcons->setObjectName(QStringLiteral("checkShowDesktopIcons"));
        checkShowDesktopIcons->setCursor(QCursor(Qt::PointingHandCursor));
        checkShowDesktopIcons->setFocusPolicy(Qt::NoFocus);

        gridLayout_2->addWidget(checkShowDesktopIcons, 0, 1, 1, 1);

        lblNetworkIcon = new QLabel(grpIcons);
        lblNetworkIcon->setObjectName(QStringLiteral("lblNetworkIcon"));
        sizePolicy.setHeightForWidth(lblNetworkIcon->sizePolicy().hasHeightForWidth());
        lblNetworkIcon->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(lblNetworkIcon, 1, 2, 1, 1, Qt::AlignLeft);

        checkMountedVulmesIcon = new QCheckBox(grpIcons);
        checkMountedVulmesIcon->setObjectName(QStringLiteral("checkMountedVulmesIcon"));
        checkMountedVulmesIcon->setCursor(QCursor(Qt::PointingHandCursor));
        checkMountedVulmesIcon->setFocusPolicy(Qt::NoFocus);

        gridLayout_2->addWidget(checkMountedVulmesIcon, 2, 1, 1, 1);

        checkTrashIcon = new QCheckBox(grpIcons);
        checkTrashIcon->setObjectName(QStringLiteral("checkTrashIcon"));
        checkTrashIcon->setCursor(QCursor(Qt::PointingHandCursor));
        checkTrashIcon->setFocusPolicy(Qt::NoFocus);

        gridLayout_2->addWidget(checkTrashIcon, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 4, 1, 1);


        gridLayout->addWidget(grpIcons, 0, 0, 1, 5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 3, 1);


        verticalLayout->addWidget(widgetAppearance);


        retranslateUi(AppearanceSettings);

        QMetaObject::connectSlotsByName(AppearanceSettings);
    } // setupUi

    void retranslateUi(QWidget *AppearanceSettings)
    {
        grpScreenApps->setTitle(QApplication::translate("AppearanceSettings", "Screen Applications", Q_NULLPTR));
        lblMountedIcon_5->setText(QApplication::translate("AppearanceSettings", "Screen Reader", Q_NULLPTR));
        checkScreenReader->setText(QString());
        lblMountedIcon_4->setText(QApplication::translate("AppearanceSettings", "Screen Keyboard", Q_NULLPTR));
        checkScreenKeyboard->setText(QString());
        grpBackground->setTitle(QApplication::translate("AppearanceSettings", "Background Image Mode", Q_NULLPTR));
        lblMountedIcon_2->setText(QApplication::translate("AppearanceSettings", "Desktop Mode", Q_NULLPTR));
        lblMountedIcon_3->setText(QApplication::translate("AppearanceSettings", "Login Mode", Q_NULLPTR));
        grpIcons->setTitle(QApplication::translate("AppearanceSettings", "Icons", Q_NULLPTR));
        lblHomeIcon->setText(QApplication::translate("AppearanceSettings", "Home Icon", Q_NULLPTR));
        checkNetworkIcon->setText(QString());
        lblTrashIcon->setText(QApplication::translate("AppearanceSettings", "Trash Icon", Q_NULLPTR));
        lblMountedIcon->setText(QApplication::translate("AppearanceSettings", "Mounted Volumes Icon", Q_NULLPTR));
        checkHomeIcon->setText(QString());
        label->setText(QApplication::translate("AppearanceSettings", "Show Desktop Icons", Q_NULLPTR));
        checkShowDesktopIcons->setText(QString());
        lblNetworkIcon->setText(QApplication::translate("AppearanceSettings", "Network Icon", Q_NULLPTR));
        checkMountedVulmesIcon->setText(QString());
        checkTrashIcon->setText(QString());
        Q_UNUSED(AppearanceSettings);
    } // retranslateUi

};

namespace Ui {
    class AppearanceSettings: public Ui_AppearanceSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPEARANCE_SETTINGS_H
