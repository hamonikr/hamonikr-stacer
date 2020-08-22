/********************************************************************************
** Form generated from reading UI file 'host_manage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOST_MANAGE_H
#define UI_HOST_MANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
            HostManage->setObjectName(QStringLiteral("HostManage"));
        HostManage->resize(804, 534);
        gridLayout = new QGridLayout(HostManage);
        gridLayout->setSpacing(10);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(5, 0, 5, 10);
        lblErrorMsg = new QLabel(HostManage);
        lblErrorMsg->setObjectName(QStringLiteral("lblErrorMsg"));
        QFont font;
        font.setPointSize(10);
        lblErrorMsg->setFont(font);

        gridLayout->addWidget(lblErrorMsg, 2, 0, 1, 1);

        lblChangesMsg = new QLabel(HostManage);
        lblChangesMsg->setObjectName(QStringLiteral("lblChangesMsg"));

        gridLayout->addWidget(lblChangesMsg, 5, 0, 1, 1);

        btnSaveChanges = new QPushButton(HostManage);
        btnSaveChanges->setObjectName(QStringLiteral("btnSaveChanges"));
        btnSaveChanges->setCursor(QCursor(Qt::PointingHandCursor));
        btnSaveChanges->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(btnSaveChanges, 5, 1, 1, 1, Qt::AlignRight);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, -1, -1);
        lblHostTitle = new QLabel(HostManage);
        lblHostTitle->setObjectName(QStringLiteral("lblHostTitle"));

        horizontalLayout_2->addWidget(lblHostTitle, 0, Qt::AlignLeft);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btnNewHost = new QPushButton(HostManage);
        btnNewHost->setObjectName(QStringLiteral("btnNewHost"));
        btnNewHost->setCursor(QCursor(Qt::PointingHandCursor));
        btnNewHost->setFocusPolicy(Qt::NoFocus);
        btnNewHost->setCheckable(true);
        btnNewHost->setFlat(true);

        horizontalLayout_2->addWidget(btnNewHost, 0, Qt::AlignRight);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 2);

        widgetAddEditHost = new QWidget(HostManage);
        widgetAddEditHost->setObjectName(QStringLiteral("widgetAddEditHost"));
        horizontalLayout = new QHBoxLayout(widgetAddEditHost);
        horizontalLayout->setSpacing(8);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        txtIP = new QLineEdit(widgetAddEditHost);
        txtIP->setObjectName(QStringLiteral("txtIP"));
        txtIP->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout->addWidget(txtIP);

        txtFullyQualified = new QLineEdit(widgetAddEditHost);
        txtFullyQualified->setObjectName(QStringLiteral("txtFullyQualified"));

        horizontalLayout->addWidget(txtFullyQualified);

        txtAliases = new QLineEdit(widgetAddEditHost);
        txtAliases->setObjectName(QStringLiteral("txtAliases"));

        horizontalLayout->addWidget(txtAliases);

        btnSave = new QPushButton(widgetAddEditHost);
        btnSave->setObjectName(QStringLiteral("btnSave"));
        btnSave->setCursor(QCursor(Qt::PointingHandCursor));
        btnSave->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(btnSave);

        btnCancel = new QPushButton(widgetAddEditHost);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setCursor(QCursor(Qt::PointingHandCursor));
        btnCancel->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(btnCancel);


        gridLayout->addWidget(widgetAddEditHost, 1, 0, 1, 2);

        tableViewHosts = new QTableView(HostManage);
        tableViewHosts->setObjectName(QStringLiteral("tableViewHosts"));
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
        HostManage->setWindowTitle(QApplication::translate("HostManage", "Form", Q_NULLPTR));
        lblErrorMsg->setText(QString());
        lblChangesMsg->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        btnSaveChanges->setAccessibleName(QApplication::translate("HostManage", "primary", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
        btnSaveChanges->setText(QApplication::translate("HostManage", "Save Changes", Q_NULLPTR));
        lblHostTitle->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        btnNewHost->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        btnNewHost->setText(QApplication::translate("HostManage", "New Host", Q_NULLPTR));
        txtIP->setPlaceholderText(QApplication::translate("HostManage", "IP Address *", Q_NULLPTR));
        txtFullyQualified->setPlaceholderText(QApplication::translate("HostManage", "Fully Qualified Name *", Q_NULLPTR));
        txtAliases->setPlaceholderText(QApplication::translate("HostManage", "Aliases", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        btnSave->setAccessibleName(QApplication::translate("HostManage", "primary", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
        btnSave->setText(QApplication::translate("HostManage", "Save", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        btnCancel->setAccessibleName(QApplication::translate("HostManage", "danger", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
        btnCancel->setText(QApplication::translate("HostManage", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class HostManage: public Ui_HostManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOST_MANAGE_H
