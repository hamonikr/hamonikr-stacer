/********************************************************************************
** Form generated from reading UI file 'resources_page.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESOURCES_PAGE_H
#define UI_RESOURCES_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ResourcesPage
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollAreaResource;
    QWidget *charts;
    QVBoxLayout *chartsLayout;

    void setupUi(QWidget *ResourcesPage)
    {
        if (ResourcesPage->objectName().isEmpty())
            ResourcesPage->setObjectName(QStringLiteral("ResourcesPage"));
        ResourcesPage->resize(890, 537);
        verticalLayout = new QVBoxLayout(ResourcesPage);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(10, 0, 10, 10);
        scrollAreaResource = new QScrollArea(ResourcesPage);
        scrollAreaResource->setObjectName(QStringLiteral("scrollAreaResource"));
        scrollAreaResource->setWidgetResizable(true);
        charts = new QWidget();
        charts->setObjectName(QStringLiteral("charts"));
        charts->setGeometry(QRect(0, 0, 868, 525));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(charts->sizePolicy().hasHeightForWidth());
        charts->setSizePolicy(sizePolicy);
        chartsLayout = new QVBoxLayout(charts);
        chartsLayout->setSpacing(10);
        chartsLayout->setObjectName(QStringLiteral("chartsLayout"));
        chartsLayout->setContentsMargins(10, 5, 10, 5);
        scrollAreaResource->setWidget(charts);

        verticalLayout->addWidget(scrollAreaResource);


        retranslateUi(ResourcesPage);

        QMetaObject::connectSlotsByName(ResourcesPage);
    } // setupUi

    void retranslateUi(QWidget *ResourcesPage)
    {
        ResourcesPage->setWindowTitle(QApplication::translate("ResourcesPage", "Resources", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ResourcesPage: public Ui_ResourcesPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESOURCES_PAGE_H
