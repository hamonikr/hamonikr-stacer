/********************************************************************************
** Form generated from reading UI file 'feedback.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEEDBACK_H
#define UI_FEEDBACK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Feedback
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QPlainTextEdit *txtMessage;
    QLineEdit *txtName;
    QLineEdit *txtEmail;
    QLabel *lblTitle;
    QPushButton *btnSend;
    QLabel *lblErrorMsg;
    QPushButton *btnClose;

    void setupUi(QDialog *Feedback)
    {
        if (Feedback->objectName().isEmpty())
            Feedback->setObjectName(QString::fromUtf8("Feedback"));
        Feedback->resize(476, 350);
        Feedback->setModal(true);
        gridLayout = new QGridLayout(Feedback);
        gridLayout->setSpacing(15);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(30, 20, 30, 20);
        verticalSpacer = new QSpacerItem(359, 2, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 3);

        txtMessage = new QPlainTextEdit(Feedback);
        txtMessage->setObjectName(QString::fromUtf8("txtMessage"));

        gridLayout->addWidget(txtMessage, 3, 0, 1, 3);

        txtName = new QLineEdit(Feedback);
        txtName->setObjectName(QString::fromUtf8("txtName"));

        gridLayout->addWidget(txtName, 1, 0, 1, 3);

        txtEmail = new QLineEdit(Feedback);
        txtEmail->setObjectName(QString::fromUtf8("txtEmail"));

        gridLayout->addWidget(txtEmail, 2, 0, 1, 3);

        lblTitle = new QLabel(Feedback);
        lblTitle->setObjectName(QString::fromUtf8("lblTitle"));
#ifndef QT_NO_ACCESSIBILITY
        lblTitle->setAccessibleName(QString::fromUtf8("dialog-title"));
#endif // QT_NO_ACCESSIBILITY
        lblTitle->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblTitle, 0, 0, 1, 3);

        btnSend = new QPushButton(Feedback);
        btnSend->setObjectName(QString::fromUtf8("btnSend"));
        btnSend->setCursor(QCursor(Qt::PointingHandCursor));
        btnSend->setFocusPolicy(Qt::NoFocus);
#ifndef QT_NO_ACCESSIBILITY
        btnSend->setAccessibleName(QString::fromUtf8("primary"));
#endif // QT_NO_ACCESSIBILITY

        gridLayout->addWidget(btnSend, 4, 2, 1, 1);

        lblErrorMsg = new QLabel(Feedback);
        lblErrorMsg->setObjectName(QString::fromUtf8("lblErrorMsg"));

        gridLayout->addWidget(lblErrorMsg, 4, 0, 1, 1);

        btnClose = new QPushButton(Feedback);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        btnClose->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(btnClose, 4, 1, 1, 1);

        QWidget::setTabOrder(txtName, txtEmail);
        QWidget::setTabOrder(txtEmail, txtMessage);

        retranslateUi(Feedback);

        btnSend->setDefault(true);


        QMetaObject::connectSlotsByName(Feedback);
    } // setupUi

    void retranslateUi(QDialog *Feedback)
    {
        Feedback->setWindowTitle(QApplication::translate("Feedback", "Feedback", nullptr));
        txtMessage->setPlaceholderText(QApplication::translate("Feedback", "Message", nullptr));
        txtName->setPlaceholderText(QApplication::translate("Feedback", "Name", nullptr));
        txtEmail->setPlaceholderText(QApplication::translate("Feedback", "Email Address", nullptr));
        lblTitle->setText(QApplication::translate("Feedback", "Send a Feedback", nullptr));
        btnSend->setText(QApplication::translate("Feedback", "Send", nullptr));
        lblErrorMsg->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        btnClose->setAccessibleName(QApplication::translate("Feedback", "danger", nullptr));
#endif // QT_NO_ACCESSIBILITY
        btnClose->setText(QApplication::translate("Feedback", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Feedback: public Ui_Feedback {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEEDBACK_H
