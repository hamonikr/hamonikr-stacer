/********************************************************************************
** Form generated from reading UI file 'services_page.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVICES_PAGE_H
#define UI_SERVICES_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
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
            ServicesPage->setObjectName(QString::fromUtf8("ServicesPage"));
        ServicesPage->resize(882, 549);
        gridLayout = new QGridLayout(ServicesPage);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(30, 0, 30, 25);
        titlesLayout = new QHBoxLayout();
        titlesLayout->setSpacing(20);
        titlesLayout->setObjectName(QString::fromUtf8("titlesLayout"));
        titlesLayout->setContentsMargins(15, 5, 45, 5);
        lblServicesTitle = new QLabel(ServicesPage);
        lblServicesTitle->setObjectName(QString::fromUtf8("lblServicesTitle"));
        QFont font;
        font.setPointSize(10);
        lblServicesTitle->setFont(font);
        lblServicesTitle->setStyleSheet(QString::fromUtf8(""));
        lblServicesTitle->setText(QString::fromUtf8("System Services"));

        titlesLayout->addWidget(lblServicesTitle, 0, Qt::AlignLeft|Qt::AlignVCenter);

        cmbStartupStatus = new QComboBox(ServicesPage);
        cmbStartupStatus->setObjectName(QString::fromUtf8("cmbStartupStatus"));
        cmbStartupStatus->setMinimumSize(QSize(120, 0));
        cmbStartupStatus->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);
        cmbStartupStatus->setFrame(false);

        titlesLayout->addWidget(cmbStartupStatus);

        cmbRunningStatus = new QComboBox(ServicesPage);
        cmbRunningStatus->setObjectName(QString::fromUtf8("cmbRunningStatus"));
        cmbRunningStatus->setMinimumSize(QSize(120, 0));
        cmbRunningStatus->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);
        cmbRunningStatus->setFrame(false);

        titlesLayout->addWidget(cmbRunningStatus);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        titlesLayout->addItem(horizontalSpacer);

        lblServiceStartupImg = new QLabel(ServicesPage);
        lblServiceStartupImg->setObjectName(QString::fromUtf8("lblServiceStartupImg"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblServiceStartupImg->sizePolicy().hasHeightForWidth());
        lblServiceStartupImg->setSizePolicy(sizePolicy);
        lblServiceStartupImg->setMinimumSize(QSize(20, 20));
        lblServiceStartupImg->setMaximumSize(QSize(80, 16777215));
        lblServiceStartupImg->setFont(font);
        lblServiceStartupImg->setStyleSheet(QString::fromUtf8(""));

        titlesLayout->addWidget(lblServiceStartupImg, 0, Qt::AlignLeft);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        titlesLayout->addItem(horizontalSpacer_2);

        lblSystemRunningImg = new QLabel(ServicesPage);
        lblSystemRunningImg->setObjectName(QString::fromUtf8("lblSystemRunningImg"));
        sizePolicy.setHeightForWidth(lblSystemRunningImg->sizePolicy().hasHeightForWidth());
        lblSystemRunningImg->setSizePolicy(sizePolicy);
        lblSystemRunningImg->setMinimumSize(QSize(20, 20));
        lblSystemRunningImg->setMaximumSize(QSize(100, 16777215));
        lblSystemRunningImg->setFont(font);
        lblSystemRunningImg->setStyleSheet(QString::fromUtf8(""));

        titlesLayout->addWidget(lblSystemRunningImg, 0, Qt::AlignRight);


        gridLayout->addLayout(titlesLayout, 0, 0, 1, 1);

        notFoundWidget = new QWidget(ServicesPage);
        notFoundWidget->setObjectName(QString::fromUtf8("notFoundWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(notFoundWidget->sizePolicy().hasHeightForWidth());
        notFoundWidget->setSizePolicy(sizePolicy1);
        notFoundWidget->setMinimumSize(QSize(0, 200));
        notFoundWidget->setMaximumSize(QSize(16777215, 9999999));
        notFoundWidget->setStyleSheet(QString::fromUtf8(""));
        notFoundLayout = new QVBoxLayout(notFoundWidget);
        notFoundLayout->setSpacing(0);
        notFoundLayout->setObjectName(QString::fromUtf8("notFoundLayout"));
        notFoundLayout->setContentsMargins(0, 0, 0, 0);
        lblNotFound = new QLabel(notFoundWidget);
        lblNotFound->setObjectName(QString::fromUtf8("lblNotFound"));

        notFoundLayout->addWidget(lblNotFound, 0, Qt::AlignHCenter|Qt::AlignBottom);


        gridLayout->addWidget(notFoundWidget, 1, 0, 1, 1, Qt::AlignVCenter);

        listWidgetServices = new QListWidget(ServicesPage);
        listWidgetServices->setObjectName(QString::fromUtf8("listWidgetServices"));
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
        ServicesPage->setWindowTitle(QApplication::translate("ServicesPage", "Services", nullptr));
#ifndef QT_NO_TOOLTIP
        lblServiceStartupImg->setToolTip(QApplication::translate("ServicesPage", "Startup at boot ?", nullptr));
#endif // QT_NO_TOOLTIP
        lblServiceStartupImg->setText(QString());
#ifndef QT_NO_TOOLTIP
        lblSystemRunningImg->setToolTip(QApplication::translate("ServicesPage", "Running Now ?", nullptr));
#endif // QT_NO_TOOLTIP
        lblSystemRunningImg->setText(QString());
        lblNotFound->setText(QApplication::translate("ServicesPage", "Not Found System Service", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ServicesPage: public Ui_ServicesPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVICES_PAGE_H
