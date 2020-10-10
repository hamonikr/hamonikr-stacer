/********************************************************************************
** Form generated from reading UI file 'apt_source_manager_page.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APT_SOURCE_MANAGER_PAGE_H
#define UI_APT_SOURCE_MANAGER_PAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_APTSourceManagerPage
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *verticalWidget;
    QGridLayout *gridLayout_2;
    QWidget *verticalWidget_2;
    QVBoxLayout *verticalLayout;
    QWidget *notFoundWidget;
    QVBoxLayout *notFoundLayout;
    QLabel *lblNotFound;
    QListWidget *listWidgetAptSources;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *txtSearchAptSource;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnEditAptSource;
    QPushButton *btnDeleteAptSource;
    QSpacerItem *bottomSectionHorizontalSpacer;
    QLineEdit *txtAptSource;
    QCheckBox *checkEnableSource;
    QPushButton *btnAddAPTSourceRepository;
    QPushButton *btnCancel;
    QSpacerItem *horizontalSpacer;
    QLabel *lblAptSourceTitle;
    QLabel *lblAptSourceSelectInfo;

    void setupUi(QWidget *APTSourceManagerPage)
    {
        if (APTSourceManagerPage->objectName().isEmpty())
            APTSourceManagerPage->setObjectName(QString::fromUtf8("APTSourceManagerPage"));
        APTSourceManagerPage->resize(836, 582);
        verticalLayout_2 = new QVBoxLayout(APTSourceManagerPage);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalWidget = new QWidget(APTSourceManagerPage);
        verticalWidget->setObjectName(QString::fromUtf8("verticalWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(verticalWidget->sizePolicy().hasHeightForWidth());
        verticalWidget->setSizePolicy(sizePolicy);
        verticalWidget->setCursor(QCursor(Qt::ArrowCursor));
        verticalWidget->setStyleSheet(QString::fromUtf8(""));
        gridLayout_2 = new QGridLayout(verticalWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(10);
        gridLayout_2->setVerticalSpacing(5);
        gridLayout_2->setContentsMargins(30, 5, 30, 20);
        verticalWidget_2 = new QWidget(verticalWidget);
        verticalWidget_2->setObjectName(QString::fromUtf8("verticalWidget_2"));
        verticalLayout = new QVBoxLayout(verticalWidget_2);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        notFoundWidget = new QWidget(verticalWidget_2);
        notFoundWidget->setObjectName(QString::fromUtf8("notFoundWidget"));
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

        notFoundLayout->addWidget(lblNotFound, 0, Qt::AlignHCenter|Qt::AlignBottom);


        verticalLayout->addWidget(notFoundWidget);

        listWidgetAptSources = new QListWidget(verticalWidget_2);
        listWidgetAptSources->setObjectName(QString::fromUtf8("listWidgetAptSources"));
        listWidgetAptSources->setFocusPolicy(Qt::NoFocus);
        listWidgetAptSources->setFrameShape(QFrame::NoFrame);
        listWidgetAptSources->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidgetAptSources->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listWidgetAptSources->setSelectionMode(QAbstractItemView::SingleSelection);
        listWidgetAptSources->setSelectionBehavior(QAbstractItemView::SelectRows);
        listWidgetAptSources->setResizeMode(QListView::Adjust);
        listWidgetAptSources->setLayoutMode(QListView::Batched);
        listWidgetAptSources->setSpacing(4);
        listWidgetAptSources->setUniformItemSizes(true);

        verticalLayout->addWidget(listWidgetAptSources);


        gridLayout_2->addWidget(verticalWidget_2, 1, 0, 1, 7);

        verticalSpacer_2 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_2, 4, 0, 1, 7);

        txtSearchAptSource = new QLineEdit(verticalWidget);
        txtSearchAptSource->setObjectName(QString::fromUtf8("txtSearchAptSource"));

        gridLayout_2->addWidget(txtSearchAptSource, 0, 6, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 0);
        btnEditAptSource = new QPushButton(verticalWidget);
        btnEditAptSource->setObjectName(QString::fromUtf8("btnEditAptSource"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnEditAptSource->sizePolicy().hasHeightForWidth());
        btnEditAptSource->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("NanumGothic"));
        btnEditAptSource->setFont(font);
        btnEditAptSource->setCursor(QCursor(Qt::PointingHandCursor));
        btnEditAptSource->setFocusPolicy(Qt::NoFocus);
#ifndef QT_NO_ACCESSIBILITY
        btnEditAptSource->setAccessibleName(QString::fromUtf8("primary"));
#endif // QT_NO_ACCESSIBILITY
        btnEditAptSource->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/static/themes/default/img/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnEditAptSource->setIcon(icon);
        btnEditAptSource->setIconSize(QSize(16, 16));
        btnEditAptSource->setCheckable(false);

        horizontalLayout_2->addWidget(btnEditAptSource);

        btnDeleteAptSource = new QPushButton(verticalWidget);
        btnDeleteAptSource->setObjectName(QString::fromUtf8("btnDeleteAptSource"));
        sizePolicy1.setHeightForWidth(btnDeleteAptSource->sizePolicy().hasHeightForWidth());
        btnDeleteAptSource->setSizePolicy(sizePolicy1);
        btnDeleteAptSource->setFont(font);
        btnDeleteAptSource->setCursor(QCursor(Qt::PointingHandCursor));
        btnDeleteAptSource->setFocusPolicy(Qt::NoFocus);
#ifndef QT_NO_ACCESSIBILITY
        btnDeleteAptSource->setAccessibleName(QString::fromUtf8("danger"));
#endif // QT_NO_ACCESSIBILITY
        btnDeleteAptSource->setStyleSheet(QString::fromUtf8(""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/static/themes/default/img/trash.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnDeleteAptSource->setIcon(icon1);
        btnDeleteAptSource->setIconSize(QSize(16, 16));
        btnDeleteAptSource->setCheckable(false);

        horizontalLayout_2->addWidget(btnDeleteAptSource);

        bottomSectionHorizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(bottomSectionHorizontalSpacer);

        txtAptSource = new QLineEdit(verticalWidget);
        txtAptSource->setObjectName(QString::fromUtf8("txtAptSource"));

        horizontalLayout_2->addWidget(txtAptSource);

        checkEnableSource = new QCheckBox(verticalWidget);
        checkEnableSource->setObjectName(QString::fromUtf8("checkEnableSource"));
#ifndef QT_NO_ACCESSIBILITY
        checkEnableSource->setAccessibleName(QString::fromUtf8("circle"));
#endif // QT_NO_ACCESSIBILITY

        horizontalLayout_2->addWidget(checkEnableSource);

        btnAddAPTSourceRepository = new QPushButton(verticalWidget);
        btnAddAPTSourceRepository->setObjectName(QString::fromUtf8("btnAddAPTSourceRepository"));
        sizePolicy1.setHeightForWidth(btnAddAPTSourceRepository->sizePolicy().hasHeightForWidth());
        btnAddAPTSourceRepository->setSizePolicy(sizePolicy1);
        btnAddAPTSourceRepository->setFont(font);
        btnAddAPTSourceRepository->setCursor(QCursor(Qt::PointingHandCursor));
        btnAddAPTSourceRepository->setFocusPolicy(Qt::NoFocus);
#ifndef QT_NO_ACCESSIBILITY
        btnAddAPTSourceRepository->setAccessibleName(QString::fromUtf8("primary"));
#endif // QT_NO_ACCESSIBILITY
        btnAddAPTSourceRepository->setStyleSheet(QString::fromUtf8(""));
        btnAddAPTSourceRepository->setCheckable(true);

        horizontalLayout_2->addWidget(btnAddAPTSourceRepository);

        btnCancel = new QPushButton(verticalWidget);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        sizePolicy1.setHeightForWidth(btnCancel->sizePolicy().hasHeightForWidth());
        btnCancel->setSizePolicy(sizePolicy1);
        btnCancel->setFont(font);
        btnCancel->setCursor(QCursor(Qt::PointingHandCursor));
        btnCancel->setFocusPolicy(Qt::NoFocus);
#ifndef QT_NO_ACCESSIBILITY
        btnCancel->setAccessibleName(QString::fromUtf8("danger"));
#endif // QT_NO_ACCESSIBILITY
        btnCancel->setStyleSheet(QString::fromUtf8(""));
        btnCancel->setIconSize(QSize(16, 16));
        btnCancel->setCheckable(false);

        horizontalLayout_2->addWidget(btnCancel);


        gridLayout_2->addLayout(horizontalLayout_2, 5, 0, 1, 7);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 5, 1, 1);

        lblAptSourceTitle = new QLabel(verticalWidget);
        lblAptSourceTitle->setObjectName(QString::fromUtf8("lblAptSourceTitle"));
        QFont font1;
        font1.setPointSize(10);
        font1.setItalic(false);
        lblAptSourceTitle->setFont(font1);
        lblAptSourceTitle->setStyleSheet(QString::fromUtf8(""));
        lblAptSourceTitle->setText(QString::fromUtf8(""));

        gridLayout_2->addWidget(lblAptSourceTitle, 0, 0, 1, 5);

        lblAptSourceSelectInfo = new QLabel(verticalWidget);
        lblAptSourceSelectInfo->setObjectName(QString::fromUtf8("lblAptSourceSelectInfo"));

        gridLayout_2->addWidget(lblAptSourceSelectInfo, 2, 0, 1, 7);


        verticalLayout_2->addWidget(verticalWidget);


        retranslateUi(APTSourceManagerPage);

        QMetaObject::connectSlotsByName(APTSourceManagerPage);
    } // setupUi

    void retranslateUi(QWidget *APTSourceManagerPage)
    {
        APTSourceManagerPage->setWindowTitle(QApplication::translate("APTSourceManagerPage", "APT Repository Manager", nullptr));
        lblNotFound->setText(QApplication::translate("APTSourceManagerPage", "Not Found APT Repositories", nullptr));
        txtSearchAptSource->setPlaceholderText(QApplication::translate("APTSourceManagerPage", "Search...", nullptr));
        btnEditAptSource->setText(QApplication::translate("APTSourceManagerPage", "Edit", nullptr));
        btnDeleteAptSource->setText(QApplication::translate("APTSourceManagerPage", "Delete", nullptr));
        checkEnableSource->setText(QApplication::translate("APTSourceManagerPage", "Enable Source", nullptr));
        btnAddAPTSourceRepository->setText(QApplication::translate("APTSourceManagerPage", "Add Repository", nullptr));
        btnCancel->setText(QApplication::translate("APTSourceManagerPage", "Cancel", nullptr));
        lblAptSourceSelectInfo->setText(QApplication::translate("APTSourceManagerPage", "Select to delete or edit.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class APTSourceManagerPage: public Ui_APTSourceManagerPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APT_SOURCE_MANAGER_PAGE_H
