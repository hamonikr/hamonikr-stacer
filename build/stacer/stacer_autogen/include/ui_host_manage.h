/********************************************************************************
** Form generated from reading UI file 'host_manage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOST_MANAGE_H
#define UI_HOST_MANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HostManage
{
public:
    QGridLayout *gridLayout;
    QLabel *lblErrorMsg;
    QLabel *lblChangesMsg;
    QPushButton *btnSaveChanges;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblHostTitle;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnNewHost;
    QWidget *widgetAddEditHost;
    QHBoxLayout *horizontalLayout;
    QLineEdit *txtIP;
    QLineEdit *txtFullyQualified;
    QLineEdit *txtAliases;
    QPushButton *btnSave;
    QPushButton *btnCancel;
    QTableView *tableViewHosts;

    void setupUi(QWidget *HostManage)
    {
        if (HostManage->objectName().isEmpty())
            HostManage->setObjectName(QString::fromUtf8("HostManage"));
        HostManage->resize(804, 534);
        gridLayout = new QGridLayout(HostManage);
        gridLayout->setSpacing(10);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(5, 0, 5, 10);
        lblErrorMsg = new QLabel(HostManage);
        lblErrorMsg->setObjectName(QString::fromUtf8("lblErrorMsg"));
        QFont font;
        font.setPointSize(10);
        lblErrorMsg->setFont(font);

        gridLayout->addWidget(lblErrorMsg, 2, 0, 1, 1);

        lblChangesMsg = new QLabel(HostManage);
        lblChangesMsg->setObjectName(QString::fromUtf8("lblChangesMsg"));

        gridLayout->addWidget(lblChangesMsg, 5, 0, 1, 1);

        btnSaveChanges = new QPushButton(HostManage);
        btnSaveChanges->setObjectName(QString::fromUtf8("btnSaveChanges"));
        btnSaveChanges->setCursor(QCursor(Qt::PointingHandCursor));
        btnSaveChanges->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(btnSaveChanges, 5, 1, 1, 1, Qt::AlignRight);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, -1, -1);
        lblHostTitle = new QLabel(HostManage);
        lblHostTitle->setObjectName(QString::fromUtf8("lblHostTitle"));

        horizontalLayout_2->addWidget(lblHostTitle, 0, Qt::AlignLeft);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btnNewHost = new QPushButton(HostManage);
        btnNewHost->setObjectName(QString::fromUtf8("btnNewHost"));
        btnNewHost->setCursor(QCursor(Qt::PointingHandCursor));
        btnNewHost->setFocusPolicy(Qt::NoFocus);
        btnNewHost->setCheckable(true);
        btnNewHost->setFlat(true);

        horizontalLayout_2->addWidget(btnNewHost, 0, Qt::AlignRight);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 2);

        widgetAddEditHost = new QWidget(HostManage);
        widgetAddEditHost->setObjectName(QString::fromUtf8("widgetAddEditHost"));
        horizontalLayout = new QHBoxLayout(widgetAddEditHost);
        horizontalLayout->setSpacing(8);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        txtIP = new QLineEdit(widgetAddEditHost);
        txtIP->setObjectName(QString::fromUtf8("txtIP"));
        txtIP->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout->addWidget(txtIP);

        txtFullyQualified = new QLineEdit(widgetAddEditHost);
        txtFullyQualified->setObjectName(QString::fromUtf8("txtFullyQualified"));

        horizontalLayout->addWidget(txtFullyQualified);

        txtAliases = new QLineEdit(widgetAddEditHost);
        txtAliases->setObjectName(QString::fromUtf8("txtAliases"));

        horizontalLayout->addWidget(txtAliases);

        btnSave = new QPushButton(widgetAddEditHost);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setCursor(QCursor(Qt::PointingHandCursor));
        btnSave->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(btnSave);

        btnCancel = new QPushButton(widgetAddEditHost);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setCursor(QCursor(Qt::PointingHandCursor));
        btnCancel->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(btnCancel);


        gridLayout->addWidget(widgetAddEditHost, 1, 0, 1, 2);

        tableViewHosts = new QTableView(HostManage);
        tableViewHosts->setObjectName(QString::fromUtf8("tableViewHosts"));
        tableViewHosts->setFocusPolicy(Qt::NoFocus);
        tableViewHosts->setFrameShape(QFrame::NoFrame);
        tableViewHosts->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableViewHosts->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableViewHosts->setTextElideMode(Qt::ElideMiddle);
        tableViewHosts->setSortingEnabled(true);
        tableViewHosts->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        tableViewHosts->horizontalHeader()->setStretchLastSection(true);
        tableViewHosts->verticalHeader()->setVisible(false);

        gridLayout->addWidget(tableViewHosts, 3, 0, 1, 2);


        retranslateUi(HostManage);

        QMetaObject::connectSlotsByName(HostManage);
    } // setupUi

    void retranslateUi(QWidget *HostManage)
    {
        HostManage->setWindowTitle(QApplication::translate("HostManage", "Form", nullptr));
        lblErrorMsg->setText(QString());
        lblChangesMsg->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        btnSaveChanges->setAccessibleName(QApplication::translate("HostManage", "primary", nullptr));
#endif // QT_NO_ACCESSIBILITY
        btnSaveChanges->setText(QApplication::translate("HostManage", "Save Changes", nullptr));
        lblHostTitle->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        btnNewHost->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        btnNewHost->setText(QApplication::translate("HostManage", "New Host", nullptr));
        txtIP->setPlaceholderText(QApplication::translate("HostManage", "IP Address *", nullptr));
        txtFullyQualified->setPlaceholderText(QApplication::translate("HostManage", "Fully Qualified Name *", nullptr));
        txtAliases->setPlaceholderText(QApplication::translate("HostManage", "Aliases", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        btnSave->setAccessibleName(QApplication::translate("HostManage", "primary", nullptr));
#endif // QT_NO_ACCESSIBILITY
        btnSave->setText(QApplication::translate("HostManage", "Save", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        btnCancel->setAccessibleName(QApplication::translate("HostManage", "danger", nullptr));
#endif // QT_NO_ACCESSIBILITY
        btnCancel->setText(QApplication::translate("HostManage", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HostManage: public Ui_HostManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOST_MANAGE_H
