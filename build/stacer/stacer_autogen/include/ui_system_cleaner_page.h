/********************************************************************************
** Form generated from reading UI file 'system_cleaner_page.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEM_CLEANER_PAGE_H
#define UI_SYSTEM_CLEANER_PAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SystemCleanerPage
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *cleanerCategories;
    QGridLayout *gridLayout_3;
    QLabel *lblCrashReports;
    QLabel *lblCrashReportsImg;
    QCheckBox *checkAppCache;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_2;
    QLabel *lblAppCacheImg;
    QLabel *lblAppLog;
    QLabel *lblTrashImg;
    QLabel *lblAppCache;
    QLabel *lblPackageCacheImg;
    QCheckBox *checkTrash;
    QCheckBox *checkCrashReports;
    QPushButton *btnScan;
    QSpacerItem *verticalSpacer_5;
    QCheckBox *checkPackageCache;
    QLabel *lblTrash;
    QLabel *lblLogImage;
    QLabel *lblPackageCache;
    QCheckBox *checkAppLog;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QLabel *lblLoadingScanner;
    QCheckBox *checkSelectAllSystemScan;
    QWidget *cleanerPage;
    QVBoxLayout *verticalLayout_2;
    QWidget *widgetCleaner;
    QGridLayout *gridLayout;
    QLabel *lblRemovedTotalSize;
    QLabel *lblLoadingCleaner;
    QPushButton *btnClean;
    QCheckBox *checkSelectAll;
    QPushButton *btnBackToCategories;
    QSpacerItem *horizontalSpacer_4;
    QLabel *lblTotalBytes;
    QSpacerItem *horizontalSpacer_5;
    QTreeWidget *treeWidgetScanResult;
    QHBoxLayout *horizontalLayout;
    QLabel *lblSortBy;
    QComboBox *cbSortBy;

    void setupUi(QWidget *SystemCleanerPage)
    {
        if (SystemCleanerPage->objectName().isEmpty())
            SystemCleanerPage->setObjectName(QString::fromUtf8("SystemCleanerPage"));
        SystemCleanerPage->resize(1025, 736);
        verticalLayout = new QVBoxLayout(SystemCleanerPage);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(15, 0, 15, 15);
        stackedWidget = new QStackedWidget(SystemCleanerPage);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
#ifndef QT_NO_ACCESSIBILITY
        stackedWidget->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        cleanerCategories = new QWidget();
        cleanerCategories->setObjectName(QString::fromUtf8("cleanerCategories"));
        gridLayout_3 = new QGridLayout(cleanerCategories);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(40);
        gridLayout_3->setVerticalSpacing(20);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        lblCrashReports = new QLabel(cleanerCategories);
        lblCrashReports->setObjectName(QString::fromUtf8("lblCrashReports"));
        lblCrashReports->setAlignment(Qt::AlignCenter);
        lblCrashReports->setWordWrap(true);

        gridLayout_3->addWidget(lblCrashReports, 3, 3, 1, 1, Qt::AlignHCenter);

        lblCrashReportsImg = new QLabel(cleanerCategories);
        lblCrashReportsImg->setObjectName(QString::fromUtf8("lblCrashReportsImg"));
        lblCrashReportsImg->setMinimumSize(QSize(90, 90));
        lblCrashReportsImg->setMaximumSize(QSize(90, 90));
        lblCrashReportsImg->setPixmap(QPixmap(QString::fromUtf8(":/static/themes/default/img/c_crash.png")));
        lblCrashReportsImg->setScaledContents(false);
        lblCrashReportsImg->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lblCrashReportsImg, 2, 3, 1, 1, Qt::AlignHCenter|Qt::AlignTop);

        checkAppCache = new QCheckBox(cleanerCategories);
        checkAppCache->setObjectName(QString::fromUtf8("checkAppCache"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(checkAppCache->sizePolicy().hasHeightForWidth());
        checkAppCache->setSizePolicy(sizePolicy);
        checkAppCache->setCursor(QCursor(Qt::PointingHandCursor));
        checkAppCache->setFocusPolicy(Qt::NoFocus);
#ifndef QT_NO_ACCESSIBILITY
        checkAppCache->setAccessibleName(QString::fromUtf8("circle"));
#endif // QT_NO_ACCESSIBILITY

        gridLayout_3->addWidget(checkAppCache, 4, 5, 1, 1, Qt::AlignHCenter|Qt::AlignTop);

        verticalSpacer_4 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_4, 11, 2, 1, 5);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 2, 1, 1, 1);

        lblAppCacheImg = new QLabel(cleanerCategories);
        lblAppCacheImg->setObjectName(QString::fromUtf8("lblAppCacheImg"));
        lblAppCacheImg->setMinimumSize(QSize(90, 90));
        lblAppCacheImg->setMaximumSize(QSize(90, 90));
        lblAppCacheImg->setPixmap(QPixmap(QString::fromUtf8(":/static/themes/default/img/c_cache.png")));
        lblAppCacheImg->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lblAppCacheImg, 2, 5, 1, 1, Qt::AlignHCenter);

        lblAppLog = new QLabel(cleanerCategories);
        lblAppLog->setObjectName(QString::fromUtf8("lblAppLog"));
        lblAppLog->setAlignment(Qt::AlignCenter);
        lblAppLog->setWordWrap(true);

        gridLayout_3->addWidget(lblAppLog, 3, 4, 1, 1, Qt::AlignHCenter);

        lblTrashImg = new QLabel(cleanerCategories);
        lblTrashImg->setObjectName(QString::fromUtf8("lblTrashImg"));
        lblTrashImg->setMinimumSize(QSize(90, 90));
        lblTrashImg->setMaximumSize(QSize(90, 90));
        lblTrashImg->setPixmap(QPixmap(QString::fromUtf8(":/static/themes/default/img/c_trash.png")));
        lblTrashImg->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lblTrashImg, 2, 6, 1, 1, Qt::AlignHCenter);

        lblAppCache = new QLabel(cleanerCategories);
        lblAppCache->setObjectName(QString::fromUtf8("lblAppCache"));
        lblAppCache->setAlignment(Qt::AlignCenter);
        lblAppCache->setWordWrap(true);

        gridLayout_3->addWidget(lblAppCache, 3, 5, 1, 1, Qt::AlignHCenter);

        lblPackageCacheImg = new QLabel(cleanerCategories);
        lblPackageCacheImg->setObjectName(QString::fromUtf8("lblPackageCacheImg"));
        lblPackageCacheImg->setMinimumSize(QSize(90, 90));
        lblPackageCacheImg->setMaximumSize(QSize(90, 90));
        lblPackageCacheImg->setTextFormat(Qt::AutoText);
        lblPackageCacheImg->setPixmap(QPixmap(QString::fromUtf8(":/static/themes/default/img/c_package.png")));
        lblPackageCacheImg->setScaledContents(false);
        lblPackageCacheImg->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lblPackageCacheImg, 2, 2, 1, 1, Qt::AlignHCenter);

        checkTrash = new QCheckBox(cleanerCategories);
        checkTrash->setObjectName(QString::fromUtf8("checkTrash"));
        sizePolicy.setHeightForWidth(checkTrash->sizePolicy().hasHeightForWidth());
        checkTrash->setSizePolicy(sizePolicy);
        checkTrash->setCursor(QCursor(Qt::PointingHandCursor));
        checkTrash->setFocusPolicy(Qt::NoFocus);
#ifndef QT_NO_ACCESSIBILITY
        checkTrash->setAccessibleName(QString::fromUtf8("circle"));
#endif // QT_NO_ACCESSIBILITY

        gridLayout_3->addWidget(checkTrash, 4, 6, 1, 1, Qt::AlignHCenter|Qt::AlignTop);

        checkCrashReports = new QCheckBox(cleanerCategories);
        checkCrashReports->setObjectName(QString::fromUtf8("checkCrashReports"));
        sizePolicy.setHeightForWidth(checkCrashReports->sizePolicy().hasHeightForWidth());
        checkCrashReports->setSizePolicy(sizePolicy);
        checkCrashReports->setCursor(QCursor(Qt::PointingHandCursor));
        checkCrashReports->setFocusPolicy(Qt::NoFocus);
#ifndef QT_NO_ACCESSIBILITY
        checkCrashReports->setAccessibleName(QString::fromUtf8("circle"));
#endif // QT_NO_ACCESSIBILITY

        gridLayout_3->addWidget(checkCrashReports, 4, 3, 1, 1, Qt::AlignHCenter|Qt::AlignTop);

        btnScan = new QPushButton(cleanerCategories);
        btnScan->setObjectName(QString::fromUtf8("btnScan"));
        btnScan->setMinimumSize(QSize(100, 100));
        btnScan->setCursor(QCursor(Qt::PointingHandCursor));
        btnScan->setFocusPolicy(Qt::NoFocus);
        btnScan->setIconSize(QSize(100, 100));

        gridLayout_3->addWidget(btnScan, 7, 4, 1, 1, Qt::AlignHCenter);

        verticalSpacer_5 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer_5, 6, 4, 1, 1);

        checkPackageCache = new QCheckBox(cleanerCategories);
        checkPackageCache->setObjectName(QString::fromUtf8("checkPackageCache"));
        sizePolicy.setHeightForWidth(checkPackageCache->sizePolicy().hasHeightForWidth());
        checkPackageCache->setSizePolicy(sizePolicy);
        checkPackageCache->setCursor(QCursor(Qt::PointingHandCursor));
        checkPackageCache->setFocusPolicy(Qt::NoFocus);
#ifndef QT_NO_ACCESSIBILITY
        checkPackageCache->setAccessibleName(QString::fromUtf8("circle"));
#endif // QT_NO_ACCESSIBILITY

        gridLayout_3->addWidget(checkPackageCache, 4, 2, 1, 1, Qt::AlignHCenter|Qt::AlignTop);

        lblTrash = new QLabel(cleanerCategories);
        lblTrash->setObjectName(QString::fromUtf8("lblTrash"));
        lblTrash->setAlignment(Qt::AlignCenter);
        lblTrash->setWordWrap(true);

        gridLayout_3->addWidget(lblTrash, 3, 6, 1, 1, Qt::AlignHCenter);

        lblLogImage = new QLabel(cleanerCategories);
        lblLogImage->setObjectName(QString::fromUtf8("lblLogImage"));
        lblLogImage->setMinimumSize(QSize(90, 90));
        lblLogImage->setMaximumSize(QSize(90, 90));
        lblLogImage->setPixmap(QPixmap(QString::fromUtf8(":/static/themes/default/img/c_logs.png")));
        lblLogImage->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lblLogImage, 2, 4, 1, 1, Qt::AlignHCenter|Qt::AlignTop);

        lblPackageCache = new QLabel(cleanerCategories);
        lblPackageCache->setObjectName(QString::fromUtf8("lblPackageCache"));
        lblPackageCache->setAlignment(Qt::AlignCenter);
        lblPackageCache->setWordWrap(true);

        gridLayout_3->addWidget(lblPackageCache, 3, 2, 1, 1, Qt::AlignHCenter);

        checkAppLog = new QCheckBox(cleanerCategories);
        checkAppLog->setObjectName(QString::fromUtf8("checkAppLog"));
        sizePolicy.setHeightForWidth(checkAppLog->sizePolicy().hasHeightForWidth());
        checkAppLog->setSizePolicy(sizePolicy);
        checkAppLog->setCursor(QCursor(Qt::PointingHandCursor));
        checkAppLog->setFocusPolicy(Qt::NoFocus);
#ifndef QT_NO_ACCESSIBILITY
        checkAppLog->setAccessibleName(QString::fromUtf8("circle"));
#endif // QT_NO_ACCESSIBILITY

        gridLayout_3->addWidget(checkAppLog, 4, 4, 1, 1, Qt::AlignHCenter|Qt::AlignTop);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 2, 8, 1, 1);

        verticalSpacer = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 0, 4, 1, 1);

        lblLoadingScanner = new QLabel(cleanerCategories);
        lblLoadingScanner->setObjectName(QString::fromUtf8("lblLoadingScanner"));
        lblLoadingScanner->setMinimumSize(QSize(100, 100));

        gridLayout_3->addWidget(lblLoadingScanner, 9, 4, 1, 1, Qt::AlignHCenter);

        checkSelectAllSystemScan = new QCheckBox(cleanerCategories);
        checkSelectAllSystemScan->setObjectName(QString::fromUtf8("checkSelectAllSystemScan"));
        sizePolicy.setHeightForWidth(checkSelectAllSystemScan->sizePolicy().hasHeightForWidth());
        checkSelectAllSystemScan->setSizePolicy(sizePolicy);
        checkSelectAllSystemScan->setCursor(QCursor(Qt::PointingHandCursor));
        checkSelectAllSystemScan->setFocusPolicy(Qt::NoFocus);
#ifndef QT_NO_ACCESSIBILITY
        checkSelectAllSystemScan->setAccessibleName(QString::fromUtf8("circle"));
#endif // QT_NO_ACCESSIBILITY
        checkSelectAllSystemScan->setIconSize(QSize(30, 30));

        gridLayout_3->addWidget(checkSelectAllSystemScan, 10, 4, 1, 1, Qt::AlignHCenter|Qt::AlignTop);

        stackedWidget->addWidget(cleanerCategories);
        cleanerPage = new QWidget();
        cleanerPage->setObjectName(QString::fromUtf8("cleanerPage"));
        verticalLayout_2 = new QVBoxLayout(cleanerPage);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 5, 0, 0);
        widgetCleaner = new QWidget(cleanerPage);
        widgetCleaner->setObjectName(QString::fromUtf8("widgetCleaner"));
        gridLayout = new QGridLayout(widgetCleaner);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setVerticalSpacing(10);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lblRemovedTotalSize = new QLabel(widgetCleaner);
        lblRemovedTotalSize->setObjectName(QString::fromUtf8("lblRemovedTotalSize"));
        lblRemovedTotalSize->setMinimumSize(QSize(20, 0));
        lblRemovedTotalSize->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(lblRemovedTotalSize, 0, 1, 1, 1, Qt::AlignHCenter);

        lblLoadingCleaner = new QLabel(widgetCleaner);
        lblLoadingCleaner->setObjectName(QString::fromUtf8("lblLoadingCleaner"));
        lblLoadingCleaner->setMinimumSize(QSize(100, 20));
        lblLoadingCleaner->setMaximumSize(QSize(16777215, 20));

        gridLayout->addWidget(lblLoadingCleaner, 6, 1, 1, 1);

        btnClean = new QPushButton(widgetCleaner);
        btnClean->setObjectName(QString::fromUtf8("btnClean"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnClean->sizePolicy().hasHeightForWidth());
        btnClean->setSizePolicy(sizePolicy1);
        btnClean->setMinimumSize(QSize(100, 100));
        btnClean->setMaximumSize(QSize(100, 100));
        btnClean->setCursor(QCursor(Qt::PointingHandCursor));
        btnClean->setFocusPolicy(Qt::NoFocus);
        btnClean->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(btnClean, 5, 1, 1, 1);

        checkSelectAll = new QCheckBox(widgetCleaner);
        checkSelectAll->setObjectName(QString::fromUtf8("checkSelectAll"));
        checkSelectAll->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setPointSize(10);
        checkSelectAll->setFont(font);
        checkSelectAll->setCursor(QCursor(Qt::PointingHandCursor));
        checkSelectAll->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(checkSelectAll, 4, 0, 1, 1);

        btnBackToCategories = new QPushButton(widgetCleaner);
        btnBackToCategories->setObjectName(QString::fromUtf8("btnBackToCategories"));
        btnBackToCategories->setCursor(QCursor(Qt::PointingHandCursor));
        btnBackToCategories->setFocusPolicy(Qt::NoFocus);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/static/themes/default/img/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnBackToCategories->setIcon(icon);
        btnBackToCategories->setIconSize(QSize(20, 20));

        gridLayout->addWidget(btnBackToCategories, 0, 0, 1, 1, Qt::AlignLeft);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 5, 0, 1, 1);

        lblTotalBytes = new QLabel(widgetCleaner);
        lblTotalBytes->setObjectName(QString::fromUtf8("lblTotalBytes"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lblTotalBytes->sizePolicy().hasHeightForWidth());
        lblTotalBytes->setSizePolicy(sizePolicy2);
        lblTotalBytes->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lblTotalBytes, 4, 3, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 5, 3, 1, 1);

        treeWidgetScanResult = new QTreeWidget(widgetCleaner);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidgetScanResult->setHeaderItem(__qtreewidgetitem);
        treeWidgetScanResult->setObjectName(QString::fromUtf8("treeWidgetScanResult"));
        QFont font1;
        font1.setStyleStrategy(QFont::PreferAntialias);
        treeWidgetScanResult->setFont(font1);
        treeWidgetScanResult->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        treeWidgetScanResult->setFocusPolicy(Qt::NoFocus);
        treeWidgetScanResult->setStyleSheet(QString::fromUtf8(""));
        treeWidgetScanResult->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeWidgetScanResult->setSelectionMode(QAbstractItemView::NoSelection);
        treeWidgetScanResult->setTextElideMode(Qt::ElideMiddle);
        treeWidgetScanResult->setHorizontalScrollMode(QAbstractItemView::ScrollPerItem);
        treeWidgetScanResult->setSortingEnabled(true);
        treeWidgetScanResult->setAnimated(true);
        treeWidgetScanResult->header()->setVisible(true);
        treeWidgetScanResult->header()->setProperty("showSortIndicator", QVariant(true));

        gridLayout->addWidget(treeWidgetScanResult, 1, 0, 2, 4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lblSortBy = new QLabel(widgetCleaner);
        lblSortBy->setObjectName(QString::fromUtf8("lblSortBy"));
        lblSortBy->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(lblSortBy);

        cbSortBy = new QComboBox(widgetCleaner);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/static/themes/default/img/asc.png"), QSize(), QIcon::Normal, QIcon::Off);
        cbSortBy->addItem(icon1, QString());
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/static/themes/default/img/dsc.png"), QSize(), QIcon::Normal, QIcon::Off);
        cbSortBy->addItem(icon2, QString());
        cbSortBy->addItem(icon1, QString());
        cbSortBy->addItem(icon2, QString());
        cbSortBy->setObjectName(QString::fromUtf8("cbSortBy"));

        horizontalLayout->addWidget(cbSortBy);


        gridLayout->addLayout(horizontalLayout, 0, 3, 1, 1);


        verticalLayout_2->addWidget(widgetCleaner);

        stackedWidget->addWidget(cleanerPage);

        verticalLayout->addWidget(stackedWidget);


        retranslateUi(SystemCleanerPage);

        stackedWidget->setCurrentIndex(1);
        cbSortBy->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(SystemCleanerPage);
    } // setupUi

    void retranslateUi(QWidget *SystemCleanerPage)
    {
        SystemCleanerPage->setWindowTitle(QApplication::translate("SystemCleanerPage", "System Cleaner", nullptr));
        lblCrashReports->setText(QApplication::translate("SystemCleanerPage", "Crash Reports", nullptr));
        lblCrashReportsImg->setText(QString());
        checkAppCache->setText(QString());
        lblAppCacheImg->setText(QString());
        lblAppLog->setText(QApplication::translate("SystemCleanerPage", "Application Logs", nullptr));
        lblTrashImg->setText(QString());
        lblAppCache->setText(QApplication::translate("SystemCleanerPage", "Application Caches", nullptr));
        checkTrash->setText(QString());
        checkCrashReports->setText(QString());
        btnScan->setText(QString());
        checkPackageCache->setText(QString());
        lblTrash->setText(QApplication::translate("SystemCleanerPage", "Trash", nullptr));
        lblLogImage->setText(QString());
        lblPackageCache->setText(QApplication::translate("SystemCleanerPage", "Package Caches", nullptr));
        checkAppLog->setText(QString());
        lblLoadingScanner->setText(QString());
        checkSelectAllSystemScan->setText(QApplication::translate("SystemCleanerPage", "Select All", nullptr));
        lblRemovedTotalSize->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        lblLoadingCleaner->setAccessibleName(QApplication::translate("SystemCleanerPage", "circle", nullptr));
#endif // QT_NO_ACCESSIBILITY
        lblLoadingCleaner->setText(QString());
        btnClean->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        checkSelectAll->setAccessibleName(QApplication::translate("SystemCleanerPage", "circle", nullptr));
#endif // QT_NO_ACCESSIBILITY
        checkSelectAll->setText(QApplication::translate("SystemCleanerPage", "Select All", nullptr));
        btnBackToCategories->setText(QApplication::translate("SystemCleanerPage", " Back", nullptr));
        lblTotalBytes->setText(QString());
        lblSortBy->setText(QApplication::translate("SystemCleanerPage", "Sort by: ", nullptr));
        cbSortBy->setItemText(0, QApplication::translate("SystemCleanerPage", "Name", nullptr));
        cbSortBy->setItemText(1, QApplication::translate("SystemCleanerPage", "Name", nullptr));
        cbSortBy->setItemText(2, QApplication::translate("SystemCleanerPage", "Size", nullptr));
        cbSortBy->setItemText(3, QApplication::translate("SystemCleanerPage", "Size", nullptr));

    } // retranslateUi

};

namespace Ui {
    class SystemCleanerPage: public Ui_SystemCleanerPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEM_CLEANER_PAGE_H
