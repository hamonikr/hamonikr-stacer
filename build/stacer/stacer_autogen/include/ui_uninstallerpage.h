/********************************************************************************
** Form generated from reading UI file 'uninstallerpage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UNINSTALLERPAGE_H
#define UI_UNINSTALLERPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UninstallerPage
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *pageSystemPackages;
    QGridLayout *gridLayout_2;
    QWidget *notFoundWidget;
    QVBoxLayout *notFoundLayout;
    QLabel *lblNotFound;
    QListWidget *listWidgetPackages;
    QWidget *pageSnapPackages;
    QGridLayout *gridLayout_3;
    QWidget *notFoundWidget_2;
    QVBoxLayout *notFoundLayout_2;
    QLabel *lblNotFoundSnap;
    QListWidget *listWidgetSnapPackages;
    QLabel *lblLoadingUninstaller;
    QSpacerItem *verticalSpacer;
    QPushButton *btnUninstall;
    QWidget *nav;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnSystemPackages;
    QPushButton *btnSnapPackages;
    QSpacerItem *horizontalSpacer;
    QLineEdit *txtPackageSearch;
    QButtonGroup *navBtnGroup;

    void setupUi(QWidget *UninstallerPage)
    {
        if (UninstallerPage->objectName().isEmpty())
            UninstallerPage->setObjectName(QString::fromUtf8("UninstallerPage"));
        UninstallerPage->resize(844, 635);
        gridLayout = new QGridLayout(UninstallerPage);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setVerticalSpacing(2);
        gridLayout->setContentsMargins(30, 5, 30, 20);
        stackedWidget = new QStackedWidget(UninstallerPage);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        pageSystemPackages = new QWidget();
        pageSystemPackages->setObjectName(QString::fromUtf8("pageSystemPackages"));
        gridLayout_2 = new QGridLayout(pageSystemPackages);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        notFoundWidget = new QWidget(pageSystemPackages);
        notFoundWidget->setObjectName(QString::fromUtf8("notFoundWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(notFoundWidget->sizePolicy().hasHeightForWidth());
        notFoundWidget->setSizePolicy(sizePolicy);
        notFoundWidget->setMinimumSize(QSize(0, 200));
        notFoundWidget->setMaximumSize(QSize(16777215, 200));
        notFoundWidget->setStyleSheet(QString::fromUtf8(""));
        notFoundLayout = new QVBoxLayout(notFoundWidget);
        notFoundLayout->setSpacing(0);
        notFoundLayout->setObjectName(QString::fromUtf8("notFoundLayout"));
        notFoundLayout->setContentsMargins(0, 0, 0, 0);
        lblNotFound = new QLabel(notFoundWidget);
        lblNotFound->setObjectName(QString::fromUtf8("lblNotFound"));
        sizePolicy.setHeightForWidth(lblNotFound->sizePolicy().hasHeightForWidth());
        lblNotFound->setSizePolicy(sizePolicy);
        lblNotFound->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        notFoundLayout->addWidget(lblNotFound);


        gridLayout_2->addWidget(notFoundWidget, 0, 0, 1, 1);

        listWidgetPackages = new QListWidget(pageSystemPackages);
        listWidgetPackages->setObjectName(QString::fromUtf8("listWidgetPackages"));
        QFont font;
        font.setPointSize(10);
        listWidgetPackages->setFont(font);
        listWidgetPackages->setFocusPolicy(Qt::NoFocus);
        listWidgetPackages->setStyleSheet(QString::fromUtf8(""));
        listWidgetPackages->setAutoScrollMargin(10);
        listWidgetPackages->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listWidgetPackages->setSelectionMode(QAbstractItemView::NoSelection);
        listWidgetPackages->setSelectionBehavior(QAbstractItemView::SelectRows);
        listWidgetPackages->setIconSize(QSize(20, 20));
        listWidgetPackages->setTextElideMode(Qt::ElideMiddle);
        listWidgetPackages->setSpacing(4);
        listWidgetPackages->setUniformItemSizes(false);

        gridLayout_2->addWidget(listWidgetPackages, 1, 0, 1, 1);

        stackedWidget->addWidget(pageSystemPackages);
        pageSnapPackages = new QWidget();
        pageSnapPackages->setObjectName(QString::fromUtf8("pageSnapPackages"));
        gridLayout_3 = new QGridLayout(pageSnapPackages);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        notFoundWidget_2 = new QWidget(pageSnapPackages);
        notFoundWidget_2->setObjectName(QString::fromUtf8("notFoundWidget_2"));
        sizePolicy.setHeightForWidth(notFoundWidget_2->sizePolicy().hasHeightForWidth());
        notFoundWidget_2->setSizePolicy(sizePolicy);
        notFoundWidget_2->setMinimumSize(QSize(0, 200));
        notFoundWidget_2->setMaximumSize(QSize(16777215, 200));
        notFoundWidget_2->setStyleSheet(QString::fromUtf8(""));
        notFoundLayout_2 = new QVBoxLayout(notFoundWidget_2);
        notFoundLayout_2->setSpacing(0);
        notFoundLayout_2->setObjectName(QString::fromUtf8("notFoundLayout_2"));
        notFoundLayout_2->setContentsMargins(0, 0, 0, 0);
        lblNotFoundSnap = new QLabel(notFoundWidget_2);
        lblNotFoundSnap->setObjectName(QString::fromUtf8("lblNotFoundSnap"));
        sizePolicy.setHeightForWidth(lblNotFoundSnap->sizePolicy().hasHeightForWidth());
        lblNotFoundSnap->setSizePolicy(sizePolicy);
        lblNotFoundSnap->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        notFoundLayout_2->addWidget(lblNotFoundSnap);


        gridLayout_3->addWidget(notFoundWidget_2, 0, 0, 1, 1);

        listWidgetSnapPackages = new QListWidget(pageSnapPackages);
        listWidgetSnapPackages->setObjectName(QString::fromUtf8("listWidgetSnapPackages"));
        listWidgetSnapPackages->setFont(font);
        listWidgetSnapPackages->setFocusPolicy(Qt::NoFocus);
        listWidgetSnapPackages->setStyleSheet(QString::fromUtf8(""));
        listWidgetSnapPackages->setAutoScrollMargin(10);
        listWidgetSnapPackages->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listWidgetSnapPackages->setSelectionMode(QAbstractItemView::NoSelection);
        listWidgetSnapPackages->setSelectionBehavior(QAbstractItemView::SelectRows);
        listWidgetSnapPackages->setIconSize(QSize(20, 20));
        listWidgetSnapPackages->setTextElideMode(Qt::ElideMiddle);
        listWidgetSnapPackages->setSpacing(4);
        listWidgetSnapPackages->setUniformItemSizes(false);

        gridLayout_3->addWidget(listWidgetSnapPackages, 1, 0, 1, 1);

        stackedWidget->addWidget(pageSnapPackages);

        gridLayout->addWidget(stackedWidget, 2, 0, 1, 3);

        lblLoadingUninstaller = new QLabel(UninstallerPage);
        lblLoadingUninstaller->setObjectName(QString::fromUtf8("lblLoadingUninstaller"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblLoadingUninstaller->sizePolicy().hasHeightForWidth());
        lblLoadingUninstaller->setSizePolicy(sizePolicy1);
        lblLoadingUninstaller->setText(QString::fromUtf8(""));

        gridLayout->addWidget(lblLoadingUninstaller, 5, 0, 1, 3, Qt::AlignHCenter|Qt::AlignBottom);

        verticalSpacer = new QSpacerItem(0, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 3);

        btnUninstall = new QPushButton(UninstallerPage);
        btnUninstall->setObjectName(QString::fromUtf8("btnUninstall"));
        btnUninstall->setEnabled(true);
        QFont font1;
        font1.setFamily(QString::fromUtf8("NanumGothic"));
        btnUninstall->setFont(font1);
        btnUninstall->setCursor(QCursor(Qt::PointingHandCursor));
        btnUninstall->setFocusPolicy(Qt::NoFocus);
#ifndef QT_NO_ACCESSIBILITY
        btnUninstall->setAccessibleName(QString::fromUtf8("primary"));
#endif // QT_NO_ACCESSIBILITY
        btnUninstall->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(btnUninstall, 4, 0, 1, 3, Qt::AlignHCenter);

        nav = new QWidget(UninstallerPage);
        nav->setObjectName(QString::fromUtf8("nav"));
        horizontalLayout = new QHBoxLayout(nav);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(4, 5, 4, 5);
        btnSystemPackages = new QPushButton(nav);
        navBtnGroup = new QButtonGroup(UninstallerPage);
        navBtnGroup->setObjectName(QString::fromUtf8("navBtnGroup"));
        navBtnGroup->addButton(btnSystemPackages);
        btnSystemPackages->setObjectName(QString::fromUtf8("btnSystemPackages"));
        btnSystemPackages->setCursor(QCursor(Qt::PointingHandCursor));
        btnSystemPackages->setFocusPolicy(Qt::NoFocus);
        btnSystemPackages->setCheckable(true);
        btnSystemPackages->setChecked(true);

        horizontalLayout->addWidget(btnSystemPackages);

        btnSnapPackages = new QPushButton(nav);
        navBtnGroup->addButton(btnSnapPackages);
        btnSnapPackages->setObjectName(QString::fromUtf8("btnSnapPackages"));
        btnSnapPackages->setCursor(QCursor(Qt::PointingHandCursor));
        btnSnapPackages->setFocusPolicy(Qt::NoFocus);
        btnSnapPackages->setCheckable(true);

        horizontalLayout->addWidget(btnSnapPackages);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        txtPackageSearch = new QLineEdit(nav);
        txtPackageSearch->setObjectName(QString::fromUtf8("txtPackageSearch"));
        txtPackageSearch->setMinimumSize(QSize(170, 0));
        txtPackageSearch->setMaximumSize(QSize(170, 16777215));
        txtPackageSearch->setFont(font);
        txtPackageSearch->setFocusPolicy(Qt::StrongFocus);
        txtPackageSearch->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(txtPackageSearch);


        gridLayout->addWidget(nav, 1, 0, 1, 3);


        retranslateUi(UninstallerPage);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(UninstallerPage);
    } // setupUi

    void retranslateUi(QWidget *UninstallerPage)
    {
        UninstallerPage->setWindowTitle(QApplication::translate("UninstallerPage", "Uninstaller", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        notFoundWidget->setAccessibleName(QApplication::translate("UninstallerPage", "notFoundWidget", nullptr));
#endif // QT_NO_ACCESSIBILITY
        lblNotFound->setText(QApplication::translate("UninstallerPage", "Not Found Installed Packages", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        notFoundWidget_2->setAccessibleName(QApplication::translate("UninstallerPage", "notFoundWidget", nullptr));
#endif // QT_NO_ACCESSIBILITY
        lblNotFoundSnap->setText(QApplication::translate("UninstallerPage", "Not Found Installed Packages", nullptr));
        btnUninstall->setText(QApplication::translate("UninstallerPage", "Uninstall Selected", nullptr));
        btnSystemPackages->setText(QApplication::translate("UninstallerPage", "System Packages", nullptr));
        btnSnapPackages->setText(QApplication::translate("UninstallerPage", "Snap Packages", nullptr));
        txtPackageSearch->setPlaceholderText(QApplication::translate("UninstallerPage", "Search...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UninstallerPage: public Ui_UninstallerPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UNINSTALLERPAGE_H
