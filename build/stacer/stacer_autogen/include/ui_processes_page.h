/********************************************************************************
** Form generated from reading UI file 'processes_page.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROCESSES_PAGE_H
#define UI_PROCESSES_PAGE_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProcessesPage
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *topLayout;
    QLabel *lblProcessTitle;
    QCheckBox *checkAllProcesses;
    QSpacerItem *horizontalSpacer;
    QLineEdit *txtProcessSearch;
    QTableView *tableProcess;
    QWidget *bottomWidget;
    QHBoxLayout *bottomLayout;
    QLabel *lblRefresh;
    QSlider *sliderRefresh;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnEndProcess;

    void setupUi(QWidget *ProcessesPage)
    {
        if (ProcessesPage->objectName().isEmpty())
            ProcessesPage->setObjectName(QStringLiteral("ProcessesPage"));
        ProcessesPage->resize(835, 612);
        ProcessesPage->setStyleSheet(QStringLiteral(""));
        gridLayout = new QGridLayout(ProcessesPage);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setVerticalSpacing(5);
        gridLayout->setContentsMargins(20, 5, 20, 20);
        topLayout = new QHBoxLayout();
        topLayout->setSpacing(10);
        topLayout->setObjectName(QStringLiteral("topLayout"));
        topLayout->setContentsMargins(5, 0, 10, -1);
        lblProcessTitle = new QLabel(ProcessesPage);
        lblProcessTitle->setObjectName(QStringLiteral("lblProcessTitle"));

        topLayout->addWidget(lblProcessTitle);

        checkAllProcesses = new QCheckBox(ProcessesPage);
        checkAllProcesses->setObjectName(QStringLiteral("checkAllProcesses"));
        checkAllProcesses->setCursor(QCursor(Qt::PointingHandCursor));
        checkAllProcesses->setFocusPolicy(Qt::NoFocus);
#ifndef QT_NO_ACCESSIBILITY
        checkAllProcesses->setAccessibleName(QStringLiteral("circle"));
#endif // QT_NO_ACCESSIBILITY

        topLayout->addWidget(checkAllProcesses);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        topLayout->addItem(horizontalSpacer);

        txtProcessSearch = new QLineEdit(ProcessesPage);
        txtProcessSearch->setObjectName(QStringLiteral("txtProcessSearch"));
        QFont font;
        font.setPointSize(10);
        txtProcessSearch->setFont(font);

        topLayout->addWidget(txtProcessSearch, 0, Qt::AlignRight);


        gridLayout->addLayout(topLayout, 1, 0, 1, 1);

        tableProcess = new QTableView(ProcessesPage);
        tableProcess->setObjectName(QStringLiteral("tableProcess"));
        tableProcess->setFocusPolicy(Qt::NoFocus);
        tableProcess->setFrameShape(QFrame::NoFrame);
        tableProcess->setFrameShadow(QFrame::Sunken);
        tableProcess->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableProcess->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableProcess->setSelectionMode(QAbstractItemView::SingleSelection);
        tableProcess->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableProcess->setTextElideMode(Qt::ElideMiddle);
        tableProcess->setGridStyle(Qt::SolidLine);
        tableProcess->setSortingEnabled(true);
        tableProcess->setWordWrap(true);
        tableProcess->setCornerButtonEnabled(true);
        tableProcess->horizontalHeader()->setCascadingSectionResizes(false);
        tableProcess->horizontalHeader()->setStretchLastSection(true);
        tableProcess->verticalHeader()->setVisible(false);

        gridLayout->addWidget(tableProcess, 3, 0, 1, 1);

        bottomWidget = new QWidget(ProcessesPage);
        bottomWidget->setObjectName(QStringLiteral("bottomWidget"));
        bottomLayout = new QHBoxLayout(bottomWidget);
        bottomLayout->setSpacing(10);
        bottomLayout->setObjectName(QStringLiteral("bottomLayout"));
        bottomLayout->setContentsMargins(0, 5, 0, 0);
        lblRefresh = new QLabel(bottomWidget);
        lblRefresh->setObjectName(QStringLiteral("lblRefresh"));
        lblRefresh->setText(QStringLiteral("Refresh (1)"));

        bottomLayout->addWidget(lblRefresh, 0, Qt::AlignLeft|Qt::AlignVCenter);

        sliderRefresh = new QSlider(bottomWidget);
        sliderRefresh->setObjectName(QStringLiteral("sliderRefresh"));
        sliderRefresh->setCursor(QCursor(Qt::PointingHandCursor));
        sliderRefresh->setFocusPolicy(Qt::NoFocus);
        sliderRefresh->setStyleSheet(QStringLiteral(""));
        sliderRefresh->setOrientation(Qt::Horizontal);

        bottomLayout->addWidget(sliderRefresh, 0, Qt::AlignLeft|Qt::AlignVCenter);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        bottomLayout->addItem(horizontalSpacer_2);

        btnEndProcess = new QPushButton(bottomWidget);
        btnEndProcess->setObjectName(QStringLiteral("btnEndProcess"));
        btnEndProcess->setCursor(QCursor(Qt::PointingHandCursor));
        btnEndProcess->setFocusPolicy(Qt::NoFocus);
#ifndef QT_NO_ACCESSIBILITY
        btnEndProcess->setAccessibleName(QStringLiteral("primary"));
#endif // QT_NO_ACCESSIBILITY

        bottomLayout->addWidget(btnEndProcess);


        gridLayout->addWidget(bottomWidget, 4, 0, 1, 1);


        retranslateUi(ProcessesPage);

        QMetaObject::connectSlotsByName(ProcessesPage);
    } // setupUi

    void retranslateUi(QWidget *ProcessesPage)
    {
        ProcessesPage->setWindowTitle(QApplication::translate("ProcessesPage", "Processes", Q_NULLPTR));
        lblProcessTitle->setText(QApplication::translate("ProcessesPage", "Processes", Q_NULLPTR));
        checkAllProcesses->setText(QApplication::translate("ProcessesPage", "All Processes", Q_NULLPTR));
        txtProcessSearch->setPlaceholderText(QApplication::translate("ProcessesPage", "Search...", Q_NULLPTR));
        btnEndProcess->setText(QApplication::translate("ProcessesPage", "End Process", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ProcessesPage: public Ui_ProcessesPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROCESSES_PAGE_H
