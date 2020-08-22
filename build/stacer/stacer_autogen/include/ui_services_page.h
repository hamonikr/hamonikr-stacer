/********************************************************************************
** Form generated from reading UI file 'services_page.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVICES_PAGE_H
#define UI_SERVICES_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ServicesPage
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *titlesLayout;
    QLabel *lblServicesTitle;
    QComboBox *cmbStartupStatus;
    QComboBox *cmbRunningStatus;
    QSpacerItem *horizontalSpacer;
    QLabel *lblServiceStartupImg;
    QSpacerItem *horizontalSpacer_2;
    QLabel *lblSystemRunningImg;
    QWidget *notFoundWidget;
    QVBoxLayout *notFoundLayout;
    QLabel *lblNotFound;
    QListWidget *listWidgetServices;

    void setupUi(QWidget *ServicesPage)
    {
        if (ServicesPage->objectName().isEmpty())
            ServicesPage->setObjectName(QStringLiteral("ServicesPage"));
        ServicesPage->resize(882, 549);
        gridLayout = new QGridLayout(ServicesPage);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(30, 0, 30, 25);
        titlesLayout = new QHBoxLayout();
        titlesLayout->setSpacing(20);
        titlesLayout->setObjectName(QStringLiteral("titlesLayout"));
        titlesLayout->setContentsMargins(15, 5, 45, 5);
        lblServicesTitle = new QLabel(ServicesPage);
        lblServicesTitle->setObjectName(QStringLiteral("lblServicesTitle"));
        QFont font;
        font.setFamily(QStringLiteral("Ubuntu"));
        font.setPointSize(11);
        lblServicesTitle->setFont(font);
        lblServicesTitle->setStyleSheet(QStringLiteral(""));
        lblServicesTitle->setText(QStringLiteral("System Services"));

        titlesLayout->addWidget(lblServicesTitle, 0, Qt::AlignLeft|Qt::AlignVCenter);

        cmbStartupStatus = new QComboBox(ServicesPage);
        cmbStartupStatus->setObjectName(QStringLiteral("cmbStartupStatus"));
        cmbStartupStatus->setMinimumSize(QSize(120, 0));
        cmbStartupStatus->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);
        cmbStartupStatus->setFrame(false);

        titlesLayout->addWidget(cmbStartupStatus);

        cmbRunningStatus = new QComboBox(ServicesPage);
        cmbRunningStatus->setObjectName(QStringLiteral("cmbRunningStatus"));
        cmbRunningStatus->setMinimumSize(QSize(120, 0));
        cmbRunningStatus->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);
        cmbRunningStatus->setFrame(false);

        titlesLayout->addWidget(cmbRunningStatus);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        titlesLayout->addItem(horizontalSpacer);

        lblServiceStartupImg = new QLabel(ServicesPage);
        lblServiceStartupImg->setObjectName(QStringLiteral("lblServiceStartupImg"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblServiceStartupImg->sizePolicy().hasHeightForWidth());
        lblServiceStartupImg->setSizePolicy(sizePolicy);
        lblServiceStartupImg->setMinimumSize(QSize(20, 20));
        lblServiceStartupImg->setMaximumSize(QSize(80, 16777215));
        QFont font1;
        font1.setFamily(QStringLiteral("Ubuntu"));
        font1.setPointSize(10);
        lblServiceStartupImg->setFont(font1);
        lblServiceStartupImg->setStyleSheet(QStringLiteral(""));

        titlesLayout->addWidget(lblServiceStartupImg, 0, Qt::AlignLeft);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        titlesLayout->addItem(horizontalSpacer_2);

        lblSystemRunningImg = new QLabel(ServicesPage);
        lblSystemRunningImg->setObjectName(QStringLiteral("lblSystemRunningImg"));
        sizePolicy.setHeightForWidth(lblSystemRunningImg->sizePolicy().hasHeightForWidth());
        lblSystemRunningImg->setSizePolicy(sizePolicy);
        lblSystemRunningImg->setMinimumSize(QSize(20, 20));
        lblSystemRunningImg->setMaximumSize(QSize(100, 16777215));
        lblSystemRunningImg->setFont(font1);
        lblSystemRunningImg->setStyleSheet(QStringLiteral(""));

        titlesLayout->addWidget(lblSystemRunningImg, 0, Qt::AlignRight);


        gridLayout->addLayout(titlesLayout, 0, 0, 1, 1);

        notFoundWidget = new QWidget(ServicesPage);
        notFoundWidget->setObjectName(QStringLiteral("notFoundWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(notFoundWidget->sizePolicy().hasHeightForWidth());
        notFoundWidget->setSizePolicy(sizePolicy1);
        notFoundWidget->setMinimumSize(QSize(0, 200));
        notFoundWidget->setMaximumSize(QSize(16777215, 9999999));
        notFoundWidget->setStyleSheet(QStringLiteral(""));
        notFoundLayout = new QVBoxLayout(notFoundWidget);
        notFoundLayout->setSpacing(0);
        notFoundLayout->setObjectName(QStringLiteral("notFoundLayout"));
        notFoundLayout->setContentsMargins(0, 0, 0, 0);
        lblNotFound = new QLabel(notFoundWidget);
        lblNotFound->setObjectName(QStringLiteral("lblNotFound"));

        notFoundLayout->addWidget(lblNotFound, 0, Qt::AlignHCenter|Qt::AlignBottom);


        gridLayout->addWidget(notFoundWidget, 1, 0, 1, 1, Qt::AlignVCenter);

        listWidgetServices = new QListWidget(ServicesPage);
        listWidgetServices->setObjectName(QStringLiteral("listWidgetServices"));
        listWidgetServices->setFocusPolicy(Qt::NoFocus);
        listWidgetServices->setFrameShape(QFrame::NoFrame);
        listWidgetServices->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidgetServices->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listWidgetServices->setSelectionMode(QAbstractItemView::NoSelection);
        listWidgetServices->setSelectionBehavior(QAbstractItemView::SelectRows);
        listWidgetServices->setResizeMode(QListView::Adjust);
        listWidgetServices->setLayoutMode(QListView::Batched);
        listWidgetServices->setSpacing(4);
        listWidgetServices->setUniformItemSizes(true);

        gridLayout->addWidget(listWidgetServices, 2, 0, 1, 1);


        retranslateUi(ServicesPage);

        QMetaObject::connectSlotsByName(ServicesPage);
    } // setupUi

    void retranslateUi(QWidget *ServicesPage)
    {
        ServicesPage->setWindowTitle(QApplication::translate("ServicesPage", "Services", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lblServiceStartupImg->setToolTip(QApplication::translate("ServicesPage", "Startup at boot ?", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        lblServiceStartupImg->setText(QString());
#ifndef QT_NO_TOOLTIP
        lblSystemRunningImg->setToolTip(QApplication::translate("ServicesPage", "Running Now ?", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        lblSystemRunningImg->setText(QString());
        lblNotFound->setText(QApplication::translate("ServicesPage", "Not Found System Service", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ServicesPage: public Ui_ServicesPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVICES_PAGE_H
