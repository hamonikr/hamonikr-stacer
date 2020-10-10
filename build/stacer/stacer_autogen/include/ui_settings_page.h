/********************************************************************************
** Form generated from reading UI file 'settings_page.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_PAGE_H
#define UI_SETTINGS_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsPage
{
public:
    QGridLayout *gridLayout;
    QComboBox *cmbLanguages;
    QCheckBox *checkAutostart;
    QLabel *lblMemoryPercent;
    QSpinBox *spinMemoryPercent;
    QLabel *lblDiskPercent;
    QSpinBox *spinCpuPercent;
    QLabel *lblLanguage;
    QLabel *lblStartOnBoot;
    QSpacerItem *verticalSpacer;
    QSpinBox *spinDiskPercent;
    QLabel *lblCpuPercent;
    QLabel *lblAlertMessages;
    QLabel *lblCreatedBy;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QCheckBox *checkAppQuitDontAsk;
    QComboBox *cmbDisks;
    QLabel *lblDisks;
    QLabel *lblHomepage;
    QComboBox *cmbStartPage;

    void setupUi(QWidget *SettingsPage)
    {
        if (SettingsPage->objectName().isEmpty())
            SettingsPage->setObjectName(QString::fromUtf8("SettingsPage"));
        SettingsPage->resize(811, 479);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SettingsPage->sizePolicy().hasHeightForWidth());
        SettingsPage->setSizePolicy(sizePolicy);
        SettingsPage->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(SettingsPage);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(20);
        gridLayout->setVerticalSpacing(10);
        gridLayout->setContentsMargins(15, 15, 15, 15);
        cmbLanguages = new QComboBox(SettingsPage);
        cmbLanguages->setObjectName(QString::fromUtf8("cmbLanguages"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cmbLanguages->sizePolicy().hasHeightForWidth());
        cmbLanguages->setSizePolicy(sizePolicy1);
        cmbLanguages->setMinimumSize(QSize(150, 0));
        cmbLanguages->setMaximumSize(QSize(200, 16777215));
        cmbLanguages->setCursor(QCursor(Qt::PointingHandCursor));
        cmbLanguages->setFocusPolicy(Qt::NoFocus);
        cmbLanguages->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);

        gridLayout->addWidget(cmbLanguages, 1, 0, 1, 1, Qt::AlignLeft);

        checkAutostart = new QCheckBox(SettingsPage);
        checkAutostart->setObjectName(QString::fromUtf8("checkAutostart"));
        checkAutostart->setCursor(QCursor(Qt::PointingHandCursor));
        checkAutostart->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(checkAutostart, 8, 0, 1, 1, Qt::AlignLeft);

        lblMemoryPercent = new QLabel(SettingsPage);
        lblMemoryPercent->setObjectName(QString::fromUtf8("lblMemoryPercent"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lblMemoryPercent->sizePolicy().hasHeightForWidth());
        lblMemoryPercent->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(lblMemoryPercent, 4, 1, 1, 1, Qt::AlignLeft);

        spinMemoryPercent = new QSpinBox(SettingsPage);
        spinMemoryPercent->setObjectName(QString::fromUtf8("spinMemoryPercent"));
        spinMemoryPercent->setFocusPolicy(Qt::ClickFocus);
        spinMemoryPercent->setKeyboardTracking(false);
        spinMemoryPercent->setSuffix(QString::fromUtf8(" %"));
        spinMemoryPercent->setMinimum(0);
        spinMemoryPercent->setMaximum(100);

        gridLayout->addWidget(spinMemoryPercent, 5, 1, 1, 1, Qt::AlignLeft);

        lblDiskPercent = new QLabel(SettingsPage);
        lblDiskPercent->setObjectName(QString::fromUtf8("lblDiskPercent"));
        sizePolicy2.setHeightForWidth(lblDiskPercent->sizePolicy().hasHeightForWidth());
        lblDiskPercent->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(lblDiskPercent, 4, 2, 1, 1, Qt::AlignLeft);

        spinCpuPercent = new QSpinBox(SettingsPage);
        spinCpuPercent->setObjectName(QString::fromUtf8("spinCpuPercent"));
        spinCpuPercent->setFocusPolicy(Qt::ClickFocus);
        spinCpuPercent->setSuffix(QString::fromUtf8(" %"));
        spinCpuPercent->setMinimum(0);
        spinCpuPercent->setMaximum(100);

        gridLayout->addWidget(spinCpuPercent, 5, 0, 1, 1, Qt::AlignLeft);

        lblLanguage = new QLabel(SettingsPage);
        lblLanguage->setObjectName(QString::fromUtf8("lblLanguage"));
        sizePolicy2.setHeightForWidth(lblLanguage->sizePolicy().hasHeightForWidth());
        lblLanguage->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(lblLanguage, 0, 0, 1, 1, Qt::AlignLeft);

        lblStartOnBoot = new QLabel(SettingsPage);
        lblStartOnBoot->setObjectName(QString::fromUtf8("lblStartOnBoot"));
        sizePolicy2.setHeightForWidth(lblStartOnBoot->sizePolicy().hasHeightForWidth());
        lblStartOnBoot->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(lblStartOnBoot, 7, 0, 1, 1, Qt::AlignLeft);

        verticalSpacer = new QSpacerItem(10, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 9, 0, 1, 1);

        spinDiskPercent = new QSpinBox(SettingsPage);
        spinDiskPercent->setObjectName(QString::fromUtf8("spinDiskPercent"));
        spinDiskPercent->setFocusPolicy(Qt::ClickFocus);
        spinDiskPercent->setSuffix(QString::fromUtf8(" %"));
        spinDiskPercent->setMinimum(0);
        spinDiskPercent->setMaximum(100);

        gridLayout->addWidget(spinDiskPercent, 5, 2, 1, 1, Qt::AlignLeft);

        lblCpuPercent = new QLabel(SettingsPage);
        lblCpuPercent->setObjectName(QString::fromUtf8("lblCpuPercent"));
        sizePolicy2.setHeightForWidth(lblCpuPercent->sizePolicy().hasHeightForWidth());
        lblCpuPercent->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(lblCpuPercent, 4, 0, 1, 1, Qt::AlignLeft);

        lblAlertMessages = new QLabel(SettingsPage);
        lblAlertMessages->setObjectName(QString::fromUtf8("lblAlertMessages"));
        sizePolicy2.setHeightForWidth(lblAlertMessages->sizePolicy().hasHeightForWidth());
        lblAlertMessages->setSizePolicy(sizePolicy2);
#ifndef QT_NO_ACCESSIBILITY
        lblAlertMessages->setAccessibleName(QString::fromUtf8("title"));
#endif // QT_NO_ACCESSIBILITY

        gridLayout->addWidget(lblAlertMessages, 3, 0, 1, 5);

        lblCreatedBy = new QLabel(SettingsPage);
        lblCreatedBy->setObjectName(QString::fromUtf8("lblCreatedBy"));
        lblCreatedBy->setText(QString::fromUtf8("<html><head/><body><p>Stacer v1.1.0hamonikr <a href=\"https://github.com/hamonikr\"><span style=\" text-decoration: underline; color:#007af4;\">HamoniKR Team</span></a></p></body></html>"));
        lblCreatedBy->setTextFormat(Qt::RichText);
        lblCreatedBy->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lblCreatedBy->setOpenExternalLinks(true);

        gridLayout->addWidget(lblCreatedBy, 10, 3, 1, 2, Qt::AlignRight);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 4, 2, 1);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 6, 0, 1, 5);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 2, 0, 1, 5);

        label = new QLabel(SettingsPage);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 7, 1, 1, 1);

        checkAppQuitDontAsk = new QCheckBox(SettingsPage);
        checkAppQuitDontAsk->setObjectName(QString::fromUtf8("checkAppQuitDontAsk"));
        checkAppQuitDontAsk->setCursor(QCursor(Qt::PointingHandCursor));
        checkAppQuitDontAsk->setFocusPolicy(Qt::NoFocus);
#ifndef QT_NO_ACCESSIBILITY
        checkAppQuitDontAsk->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY

        gridLayout->addWidget(checkAppQuitDontAsk, 8, 1, 1, 1);

        cmbDisks = new QComboBox(SettingsPage);
        cmbDisks->setObjectName(QString::fromUtf8("cmbDisks"));
        sizePolicy1.setHeightForWidth(cmbDisks->sizePolicy().hasHeightForWidth());
        cmbDisks->setSizePolicy(sizePolicy1);
        cmbDisks->setMinimumSize(QSize(150, 0));
        cmbDisks->setMaximumSize(QSize(200, 16777215));
        cmbDisks->setCursor(QCursor(Qt::PointingHandCursor));
        cmbDisks->setFocusPolicy(Qt::NoFocus);
        cmbDisks->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);

        gridLayout->addWidget(cmbDisks, 1, 1, 1, 1);

        lblDisks = new QLabel(SettingsPage);
        lblDisks->setObjectName(QString::fromUtf8("lblDisks"));
        sizePolicy2.setHeightForWidth(lblDisks->sizePolicy().hasHeightForWidth());
        lblDisks->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(lblDisks, 0, 1, 1, 1);

        lblHomepage = new QLabel(SettingsPage);
        lblHomepage->setObjectName(QString::fromUtf8("lblHomepage"));
        sizePolicy2.setHeightForWidth(lblHomepage->sizePolicy().hasHeightForWidth());
        lblHomepage->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(lblHomepage, 0, 2, 1, 1);

        cmbStartPage = new QComboBox(SettingsPage);
        cmbStartPage->setObjectName(QString::fromUtf8("cmbStartPage"));
        sizePolicy1.setHeightForWidth(cmbStartPage->sizePolicy().hasHeightForWidth());
        cmbStartPage->setSizePolicy(sizePolicy1);
        cmbStartPage->setMinimumSize(QSize(150, 0));
        cmbStartPage->setMaximumSize(QSize(200, 16777215));
        cmbStartPage->setCursor(QCursor(Qt::PointingHandCursor));
        cmbStartPage->setFocusPolicy(Qt::NoFocus);
        cmbStartPage->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);

        gridLayout->addWidget(cmbStartPage, 1, 2, 1, 1);

        QWidget::setTabOrder(spinCpuPercent, spinMemoryPercent);
        QWidget::setTabOrder(spinMemoryPercent, spinDiskPercent);

        retranslateUi(SettingsPage);

        QMetaObject::connectSlotsByName(SettingsPage);
    } // setupUi

    void retranslateUi(QWidget *SettingsPage)
    {
        SettingsPage->setWindowTitle(QApplication::translate("SettingsPage", "Settings", nullptr));
        checkAutostart->setText(QString());
        lblMemoryPercent->setText(QApplication::translate("SettingsPage", "Memory Percent", nullptr));
        lblDiskPercent->setText(QApplication::translate("SettingsPage", "Disk Percent", nullptr));
        lblLanguage->setText(QApplication::translate("SettingsPage", "Language", nullptr));
        lblStartOnBoot->setText(QApplication::translate("SettingsPage", "Autostart Stacer", nullptr));
        lblCpuPercent->setText(QApplication::translate("SettingsPage", "CPU Percent", nullptr));
        lblAlertMessages->setText(QApplication::translate("SettingsPage", "Alert messages (Show a warning after the specified percentage)", nullptr));
        label->setText(QApplication::translate("SettingsPage", "App Quit Don't Ask", nullptr));
        checkAppQuitDontAsk->setText(QString());
        lblDisks->setText(QApplication::translate("SettingsPage", "Disks", nullptr));
        lblHomepage->setText(QApplication::translate("SettingsPage", "Start Page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsPage: public Ui_SettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_PAGE_H
