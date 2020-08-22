/********************************************************************************
** Form generated from reading UI file 'apt_source_manager_page.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APT_SOURCE_MANAGER_PAGE_H
#define UI_APT_SOURCE_MANAGER_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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
            APTSourceManagerPage->setObjectName(QStringLiteral("APTSourceManagerPage"));
        APTSourceManagerPage->resize(836, 582);
        verticalLayout_2 = new QVBoxLayout(APTSourceManagerPage);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalWidget = new QWidget(APTSourceManagerPage);
        verticalWidget->setObjectName(QStringLiteral("verticalWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(verticalWidget->sizePolicy().hasHeightForWidth());
        verticalWidget->setSizePolicy(sizePolicy);
        verticalWidget->setCursor(QCursor(Qt::ArrowCursor));
        verticalWidget->setStyleSheet(QStringLiteral(""));
        gridLayout_2 = new QGridLayout(verticalWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(10);
        gridLayout_2->setVerticalSpacing(5);
        gridLayout_2->setContentsMargins(30, 5, 30, 20);
        verticalWidget_2 = new QWidget(verticalWidget);
        verticalWidget_2->setObjectName(QStringLiteral("verticalWidget_2"));
        verticalLayout = new QVBoxLayout(verticalWidget_2);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        notFoundWidget = new QWidget(verticalWidget_2);
        notFoundWidget->setObjectName(QStringLiteral("notFoundWidget"));
        sizePolicy.setHeightForWidth(notFoundWidget->sizePolicy().hasHeightForWidth());
        notFoundWidget->setSizePolicy(sizePolicy);
        notFoundWidget->setMinimumSize(QSize(0, 200));
        notFoundWidget->setMaximumSize(QSize(16777215, 200));
        notFoundWidget->setStyleSheet(QStringLiteral(""));
        notFoundLayout = new QVBoxLayout(notFoundWidget);
        notFoundLayout->setSpacing(0);
        notFoundLayout->setObjectName(QStringLiteral("notFoundLayout"));
        notFoundLayout->setContentsMargins(0, 0, 0, 0);
        lblNotFound = new QLabel(notFoundWidget);
        lblNotFound->setObjectName(QStringLiteral("lblNotFound"));

        notFoundLayout->addWidget(lblNotFound, 0, Qt::AlignHCenter|Qt::AlignBottom);


        verticalLayout->addWidget(notFoundWidget);

        listWidgetAptSources = new QListWidget(verticalWidget_2);
        listWidgetAptSources->setObjectName(QStringLiteral("listWidgetAptSources"));
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
        txtSearchAptSource->setObjectName(QStringLiteral("txtSearchAptSource"));

        gridLayout_2->addWidget(txtSearchAptSource, 0, 6, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 0);
        btnEditAptSource = new QPushButton(verticalWidget);
        btnEditAptSource->setObjectName(QStringLiteral("btnEditAptSource"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnEditAptSource->sizePolicy().hasHeightForWidth());
        btnEditAptSource->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QStringLiteral("NanumBarunGothic"));
        btnEditAptSource->setFont(font);
        btnEditAptSource->setCursor(QCursor(Qt::PointingHandCursor));
        btnEditAptSource->setFocusPolicy(Qt::NoFocus);
#ifndef QT_NO_ACCESSIBILITY
        btnEditAptSource->setAccessibleName(QStringLiteral("primary"));
#endif // QT_NO_ACCESSIBILITY
        btnEditAptSource->setStyleSheet(QStringLiteral(""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/static/themes/default/img/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnEditAptSource->setIcon(icon);
        btnEditAptSource->setIconSize(QSize(16, 16));
        btnEditAptSource->setCheckable(false);

        horizontalLayout_2->addWidget(btnEditAptSource);

        btnDeleteAptSource = new QPushButton(verticalWidget);
        btnDeleteAptSource->setObjectName(QStringLiteral("btnDeleteAptSource"));
        sizePolicy1.setHeightForWidth(btnDeleteAptSource->sizePolicy().hasHeightForWidth());
        btnDeleteAptSource->setSizePolicy(sizePolicy1);
        btnDeleteAptSource->setFont(font);
        btnDeleteAptSource->setCursor(QCursor(Qt::PointingHandCursor));
        btnDeleteAptSource->setFocusPolicy(Qt::NoFocus);
#ifndef QT_NO_ACCESSIBILITY
        btnDeleteAptSource->setAccessibleName(QStringLiteral("danger"));
#endif // QT_NO_ACCESSIBILITY
        btnDeleteAptSource->setStyleSheet(QStringLiteral(""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/static/themes/default/img/trash.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnDeleteAptSource->setIcon(icon1);
        btnDeleteAptSource->setIconSize(QSize(16, 16));
        btnDeleteAptSource->setCheckable(false);

        horizontalLayout_2->addWidget(btnDeleteAptSource);

        bottomSectionHorizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(bottomSectionHorizontalSpacer);

        txtAptSource = new QLineEdit(verticalWidget);
        txtAptSource->setObjectName(QStringLiteral("txtAptSource"));

        horizontalLayout_2->addWidget(txtAptSource);

        checkEnableSource = new QCheckBox(verticalWidget);
        checkEnableSource->setObjectName(QStringLiteral("checkEnableSource"));
#ifndef QT_NO_ACCESSIBILITY
        checkEnableSource->setAccessibleName(QStringLiteral("circle"));
#endif // QT_NO_ACCESSIBILITY

        horizontalLayout_2->addWidget(checkEnableSource);

        btnAddAPTSourceRepository = new QPushButton(verticalWidget);
        btnAddAPTSourceRepository->setObjectName(QStringLiteral("btnAddAPTSourceRepository"));
        sizePolicy1.setHeightForWidth(btnAddAPTSourceRepository->sizePolicy().hasHeightForWidth());
        btnAddAPTSourceRepository->setSizePolicy(sizePolicy1);
        btnAddAPTSourceRepository->setFont(font);
        btnAddAPTSourceRepository->setCursor(QCursor(Qt::PointingHandCursor));
        btnAddAPTSourceRepository->setFocusPolicy(Qt::NoFocus);
#ifndef QT_NO_ACCESSIBILITY
        btnAddAPTSourceRepository->setAccessibleName(QStringLiteral("primary"));
#endif // QT_NO_ACCESSIBILITY
        btnAddAPTSourceRepository->setStyleSheet(QStringLiteral(""));
        btnAddAPTSourceRepository->setCheckable(true);

        horizontalLayout_2->addWidget(btnAddAPTSourceRepository);

        btnCancel = new QPushButton(verticalWidget);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        sizePolicy1.setHeightForWidth(btnCancel->sizePolicy().hasHeightForWidth());
        btnCancel->setSizePolicy(sizePolicy1);
        btnCancel->setFont(font);
        btnCancel->setCursor(QCursor(Qt::PointingHandCursor));
        btnCancel->setFocusPolicy(Qt::NoFocus);
#ifndef QT_NO_ACCESSIBILITY
        btnCancel->setAccessibleName(QStringLiteral("danger"));
#endif // QT_NO_ACCESSIBILITY
        btnCancel->setStyleSheet(QStringLiteral(""));
        btnCancel->setIconSize(QSize(16, 16));
        btnCancel->setCheckable(false);

        horizontalLayout_2->addWidget(btnCancel);


        gridLayout_2->addLayout(horizontalLayout_2, 5, 0, 1, 7);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 5, 1, 1);

        lblAptSourceTitle = new QLabel(verticalWidget);
        lblAptSourceTitle->setObjectName(QStringLiteral("lblAptSourceTitle"));
        QFont font1;
        font1.setFamily(QStringLiteral("NanumBarunGothic"));
        font1.setPointSize(11);
        font1.setItalic(false);
        lblAptSourceTitle->setFont(font1);
        lblAptSourceTitle->setStyleSheet(QStringLiteral(""));
        lblAptSourceTitle->setText(QStringLiteral(""));

        gridLayout_2->addWidget(lblAptSourceTitle, 0, 0, 1, 5);

        lblAptSourceSelectInfo = new QLabel(verticalWidget);
        lblAptSourceSelectInfo->setObjectName(QStringLiteral("lblAptSourceSelectInfo"));

        gridLayout_2->addWidget(lblAptSourceSelectInfo, 2, 0, 1, 7);


        verticalLayout_2->addWidget(verticalWidget);


        retranslateUi(APTSourceManagerPage);

        QMetaObject::connectSlotsByName(APTSourceManagerPage);
    } // setupUi

    void retranslateUi(QWidget *APTSourceManagerPage)
    {
        APTSourceManagerPage->setWindowTitle(QApplication::translate("APTSourceManagerPage", "APT Repository Manager", Q_NULLPTR));
        lblNotFound->setText(QApplication::translate("APTSourceManagerPage", "Not Found APT Repositories", Q_NULLPTR));
        txtSearchAptSource->setPlaceholderText(QApplication::translate("APTSourceManagerPage", "Search...", Q_NULLPTR));
        btnEditAptSource->setText(QApplication::translate("APTSourceManagerPage", "Edit", Q_NULLPTR));
        btnDeleteAptSource->setText(QApplication::translate("APTSourceManagerPage", "Delete", Q_NULLPTR));
        checkEnableSource->setText(QApplication::translate("APTSourceManagerPage", "Enable Source", Q_NULLPTR));
        btnAddAPTSourceRepository->setText(QApplication::translate("APTSourceManagerPage", "Add Repository", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("APTSourceManagerPage", "Cancel", Q_NULLPTR));
        lblAptSourceSelectInfo->setText(QApplication::translate("APTSourceManagerPage", "Select to delete or edit.", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class APTSourceManagerPage: public Ui_APTSourceManagerPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APT_SOURCE_MANAGER_PAGE_H
