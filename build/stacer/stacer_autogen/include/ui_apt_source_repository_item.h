/********************************************************************************
** Form generated from reading UI file 'apt_source_repository_item.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APT_SOURCE_REPOSITORY_ITEM_H
#define UI_APT_SOURCE_REPOSITORY_ITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_APTSourceRepositoryItem
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *aptSourceRepositoryItemWidget;
    QHBoxLayout *startupAppLayout;
    QLabel *lblAptSourceIcon;
    QLabel *lblAptSourceName;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkAptSource;

    void setupUi(QWidget *APTSourceRepositoryItem)
    {
        if (APTSourceRepositoryItem->objectName().isEmpty())
            APTSourceRepositoryItem->setObjectName(QStringLiteral("APTSourceRepositoryItem"));
        APTSourceRepositoryItem->resize(727, 45);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(APTSourceRepositoryItem->sizePolicy().hasHeightForWidth());
        APTSourceRepositoryItem->setSizePolicy(sizePolicy);
        APTSourceRepositoryItem->setMinimumSize(QSize(0, 45));
        APTSourceRepositoryItem->setMaximumSize(QSize(16777215, 45));
        verticalLayout = new QVBoxLayout(APTSourceRepositoryItem);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        aptSourceRepositoryItemWidget = new QWidget(APTSourceRepositoryItem);
        aptSourceRepositoryItemWidget->setObjectName(QStringLiteral("aptSourceRepositoryItemWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(aptSourceRepositoryItemWidget->sizePolicy().hasHeightForWidth());
        aptSourceRepositoryItemWidget->setSizePolicy(sizePolicy1);
        aptSourceRepositoryItemWidget->setCursor(QCursor(Qt::PointingHandCursor));
        startupAppLayout = new QHBoxLayout(aptSourceRepositoryItemWidget);
        startupAppLayout->setSpacing(15);
        startupAppLayout->setObjectName(QStringLiteral("startupAppLayout"));
        startupAppLayout->setContentsMargins(15, 10, 10, 10);
        lblAptSourceIcon = new QLabel(aptSourceRepositoryItemWidget);
        lblAptSourceIcon->setObjectName(QStringLiteral("lblAptSourceIcon"));
        lblAptSourceIcon->setMinimumSize(QSize(26, 26));
        lblAptSourceIcon->setMaximumSize(QSize(26, 26));
        lblAptSourceIcon->setScaledContents(true);

        startupAppLayout->addWidget(lblAptSourceIcon);

        lblAptSourceName = new QLabel(aptSourceRepositoryItemWidget);
        lblAptSourceName->setObjectName(QStringLiteral("lblAptSourceName"));
#ifndef QT_NO_ACCESSIBILITY
        lblAptSourceName->setAccessibleName(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        lblAptSourceName->setText(QStringLiteral("APT Source Repository"));

        startupAppLayout->addWidget(lblAptSourceName);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        startupAppLayout->addItem(horizontalSpacer);

        checkAptSource = new QCheckBox(aptSourceRepositoryItemWidget);
        checkAptSource->setObjectName(QStringLiteral("checkAptSource"));
        checkAptSource->setCursor(QCursor(Qt::PointingHandCursor));
        checkAptSource->setFocusPolicy(Qt::NoFocus);
        checkAptSource->setStyleSheet(QStringLiteral(""));
        checkAptSource->setIconSize(QSize(45, 23));

        startupAppLayout->addWidget(checkAptSource);


        verticalLayout->addWidget(aptSourceRepositoryItemWidget);


        retranslateUi(APTSourceRepositoryItem);

        QMetaObject::connectSlotsByName(APTSourceRepositoryItem);
    } // setupUi

    void retranslateUi(QWidget *APTSourceRepositoryItem)
    {
        APTSourceRepositoryItem->setWindowTitle(QString());
        lblAptSourceIcon->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class APTSourceRepositoryItem: public Ui_APTSourceRepositoryItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APT_SOURCE_REPOSITORY_ITEM_H
