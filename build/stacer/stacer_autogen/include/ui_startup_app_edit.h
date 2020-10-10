/********************************************************************************
** Form generated from reading UI file 'startup_app_edit.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTUP_APP_EDIT_H
#define UI_STARTUP_APP_EDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_StartupAppEdit
{
public:
    QGridLayout *gridLayout;
    QLabel *lblErrorMsg;
    QLineEdit *txtStartupAppName;
    QLineEdit *txtStartupAppComment;
    QPushButton *btnSave;
    QLabel *lblTitle;
    QLineEdit *txtStartupAppCommand;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *StartupAppEdit)
    {
        if (StartupAppEdit->objectName().isEmpty())
            StartupAppEdit->setObjectName(QString::fromUtf8("StartupAppEdit"));
        StartupAppEdit->resize(380, 227);
        StartupAppEdit->setMinimumSize(QSize(380, 0));
        StartupAppEdit->setModal(true);
        gridLayout = new QGridLayout(StartupAppEdit);
        gridLayout->setSpacing(15);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(30, 20, 30, 15);
        lblErrorMsg = new QLabel(StartupAppEdit);
        lblErrorMsg->setObjectName(QString::fromUtf8("lblErrorMsg"));

        gridLayout->addWidget(lblErrorMsg, 6, 0, 1, 1);

        txtStartupAppName = new QLineEdit(StartupAppEdit);
        txtStartupAppName->setObjectName(QString::fromUtf8("txtStartupAppName"));

        gridLayout->addWidget(txtStartupAppName, 1, 0, 1, 2);

        txtStartupAppComment = new QLineEdit(StartupAppEdit);
        txtStartupAppComment->setObjectName(QString::fromUtf8("txtStartupAppComment"));

        gridLayout->addWidget(txtStartupAppComment, 4, 0, 1, 2);

        btnSave = new QPushButton(StartupAppEdit);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setCursor(QCursor(Qt::PointingHandCursor));
        btnSave->setFocusPolicy(Qt::NoFocus);
#ifndef QT_NO_ACCESSIBILITY
        btnSave->setAccessibleName(QString::fromUtf8("primary"));
#endif // QT_NO_ACCESSIBILITY

        gridLayout->addWidget(btnSave, 6, 1, 1, 1, Qt::AlignRight|Qt::AlignVCenter);

        lblTitle = new QLabel(StartupAppEdit);
        lblTitle->setObjectName(QString::fromUtf8("lblTitle"));
#ifndef QT_NO_ACCESSIBILITY
        lblTitle->setAccessibleName(QString::fromUtf8("dialog-title"));
#endif // QT_NO_ACCESSIBILITY
        lblTitle->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblTitle, 0, 0, 1, 2, Qt::AlignTop);

        txtStartupAppCommand = new QLineEdit(StartupAppEdit);
        txtStartupAppCommand->setObjectName(QString::fromUtf8("txtStartupAppCommand"));

        gridLayout->addWidget(txtStartupAppCommand, 5, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 7, 0, 1, 2);

        QWidget::setTabOrder(txtStartupAppName, txtStartupAppComment);
        QWidget::setTabOrder(txtStartupAppComment, txtStartupAppCommand);
        QWidget::setTabOrder(txtStartupAppCommand, btnSave);

        retranslateUi(StartupAppEdit);

        btnSave->setDefault(true);


        QMetaObject::connectSlotsByName(StartupAppEdit);
    } // setupUi

    void retranslateUi(QDialog *StartupAppEdit)
    {
        StartupAppEdit->setWindowTitle(QApplication::translate("StartupAppEdit", "Startup App", nullptr));
        lblErrorMsg->setText(QApplication::translate("StartupAppEdit", "Fields cannot be left blank. ", nullptr));
        txtStartupAppName->setPlaceholderText(QApplication::translate("StartupAppEdit", "App Name", nullptr));
        txtStartupAppComment->setPlaceholderText(QApplication::translate("StartupAppEdit", "App Comment", nullptr));
        btnSave->setText(QApplication::translate("StartupAppEdit", "Save", nullptr));
        lblTitle->setText(QApplication::translate("StartupAppEdit", "Application", nullptr));
        txtStartupAppCommand->setPlaceholderText(QApplication::translate("StartupAppEdit", "Command", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StartupAppEdit: public Ui_StartupAppEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTUP_APP_EDIT_H
