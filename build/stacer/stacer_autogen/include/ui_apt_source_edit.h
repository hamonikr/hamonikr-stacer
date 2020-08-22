/********************************************************************************
** Form generated from reading UI file 'apt_source_edit.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APT_SOURCE_EDIT_H
#define UI_APT_SOURCE_EDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_APTSourceEdit
{
public:
    QGridLayout *gridLayout;
    QLabel *lblTitle;
    QLineEdit *txtComponents;
    QLineEdit *txtOptions;
    QPushButton *btnCancel;
    QLabel *lblErrorMsg;
    QLineEdit *txtUri;
    QPushButton *btnSave;
    QSpacerItem *verticalSpacer;
    QLineEdit *txtDistribution;
    QRadioButton *radioSource;
    QRadioButton *radioBinary;
    QSpacerItem *horizontalSpacer;
    QButtonGroup *debTypeGroup;

    void setupUi(QDialog *APTSourceEdit)
    {
        if (APTSourceEdit->objectName().isEmpty())
            APTSourceEdit->setObjectName(QStringLiteral("APTSourceEdit"));
        APTSourceEdit->resize(452, 295);
        gridLayout = new QGridLayout(APTSourceEdit);
        gridLayout->setSpacing(15);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(30, 10, 30, 15);
        lblTitle = new QLabel(APTSourceEdit);
        lblTitle->setObjectName(QStringLiteral("lblTitle"));
#ifndef QT_NO_ACCESSIBILITY
        lblTitle->setAccessibleName(QStringLiteral("dialog-title"));
#endif // QT_NO_ACCESSIBILITY
        lblTitle->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblTitle, 0, 0, 1, 4);

        txtComponents = new QLineEdit(APTSourceEdit);
        txtComponents->setObjectName(QStringLiteral("txtComponents"));

        gridLayout->addWidget(txtComponents, 6, 0, 1, 4);

        txtOptions = new QLineEdit(APTSourceEdit);
        txtOptions->setObjectName(QStringLiteral("txtOptions"));

        gridLayout->addWidget(txtOptions, 3, 0, 1, 4);

        btnCancel = new QPushButton(APTSourceEdit);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setCursor(QCursor(Qt::PointingHandCursor));
        btnCancel->setFocusPolicy(Qt::NoFocus);
#ifndef QT_NO_ACCESSIBILITY
        btnCancel->setAccessibleName(QStringLiteral("danger"));
#endif // QT_NO_ACCESSIBILITY

        gridLayout->addWidget(btnCancel, 7, 2, 1, 1, Qt::AlignRight);

        lblErrorMsg = new QLabel(APTSourceEdit);
        lblErrorMsg->setObjectName(QStringLiteral("lblErrorMsg"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblErrorMsg->sizePolicy().hasHeightForWidth());
        lblErrorMsg->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lblErrorMsg, 7, 0, 1, 1);

        txtUri = new QLineEdit(APTSourceEdit);
        txtUri->setObjectName(QStringLiteral("txtUri"));

        gridLayout->addWidget(txtUri, 4, 0, 1, 4);

        btnSave = new QPushButton(APTSourceEdit);
        btnSave->setObjectName(QStringLiteral("btnSave"));
        btnSave->setCursor(QCursor(Qt::PointingHandCursor));
        btnSave->setFocusPolicy(Qt::NoFocus);
#ifndef QT_NO_ACCESSIBILITY
        btnSave->setAccessibleName(QStringLiteral("primary"));
#endif // QT_NO_ACCESSIBILITY

        gridLayout->addWidget(btnSave, 7, 3, 1, 1, Qt::AlignRight);

        verticalSpacer = new QSpacerItem(347, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 8, 0, 1, 4);

        txtDistribution = new QLineEdit(APTSourceEdit);
        txtDistribution->setObjectName(QStringLiteral("txtDistribution"));

        gridLayout->addWidget(txtDistribution, 5, 0, 1, 4);

        radioSource = new QRadioButton(APTSourceEdit);
        debTypeGroup = new QButtonGroup(APTSourceEdit);
        debTypeGroup->setObjectName(QStringLiteral("debTypeGroup"));
        debTypeGroup->addButton(radioSource);
        radioSource->setObjectName(QStringLiteral("radioSource"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(radioSource->sizePolicy().hasHeightForWidth());
        radioSource->setSizePolicy(sizePolicy1);
        radioSource->setCursor(QCursor(Qt::PointingHandCursor));
        radioSource->setFocusPolicy(Qt::NoFocus);
        radioSource->setChecked(true);

        gridLayout->addWidget(radioSource, 1, 0, 1, 2);

        radioBinary = new QRadioButton(APTSourceEdit);
        debTypeGroup->addButton(radioBinary);
        radioBinary->setObjectName(QStringLiteral("radioBinary"));
        sizePolicy1.setHeightForWidth(radioBinary->sizePolicy().hasHeightForWidth());
        radioBinary->setSizePolicy(sizePolicy1);
        radioBinary->setCursor(QCursor(Qt::PointingHandCursor));
        radioBinary->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(radioBinary, 1, 2, 1, 2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 7, 1, 1, 1);

        QWidget::setTabOrder(txtOptions, txtUri);
        QWidget::setTabOrder(txtUri, txtDistribution);
        QWidget::setTabOrder(txtDistribution, txtComponents);

        retranslateUi(APTSourceEdit);

        btnCancel->setDefault(false);
        btnSave->setDefault(false);


        QMetaObject::connectSlotsByName(APTSourceEdit);
    } // setupUi

    void retranslateUi(QDialog *APTSourceEdit)
    {
        APTSourceEdit->setWindowTitle(QApplication::translate("APTSourceEdit", "APT Repository Edit", Q_NULLPTR));
        lblTitle->setText(QApplication::translate("APTSourceEdit", "APT Repository", Q_NULLPTR));
        txtComponents->setPlaceholderText(QApplication::translate("APTSourceEdit", "Components", Q_NULLPTR));
        txtOptions->setPlaceholderText(QApplication::translate("APTSourceEdit", "Options", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("APTSourceEdit", "Cancel", Q_NULLPTR));
        lblErrorMsg->setText(QApplication::translate("APTSourceEdit", "Fields cannot be left blank. ", Q_NULLPTR));
        txtUri->setPlaceholderText(QApplication::translate("APTSourceEdit", "URI", Q_NULLPTR));
        btnSave->setText(QApplication::translate("APTSourceEdit", "Save", Q_NULLPTR));
        txtDistribution->setPlaceholderText(QApplication::translate("APTSourceEdit", "Distribution", Q_NULLPTR));
        radioSource->setText(QApplication::translate("APTSourceEdit", "Source", Q_NULLPTR));
        radioBinary->setText(QApplication::translate("APTSourceEdit", "Binary", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class APTSourceEdit: public Ui_APTSourceEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APT_SOURCE_EDIT_H
