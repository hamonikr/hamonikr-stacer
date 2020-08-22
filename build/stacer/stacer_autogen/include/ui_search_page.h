/********************************************************************************
** Form generated from reading UI file 'search_page.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_PAGE_H
#define UI_SEARCH_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchPage
{
public:
    QGridLayout *gridLayout;
    QTableView *tableFoundResults;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnBrowseSearchDir;
    QLineEdit *txtSearchInput;
    QComboBox *cmbSearchTypes;
    QPushButton *btnSearchAdvance;
    QLabel *lblErrorMsg;
    QLabel *lblLoadingSearching;
    QWidget *advanceSearchPane;
    QGridLayout *gridLayout_2;
    QCheckBox *checkCaseInsensitive;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *layoutTime;
    QComboBox *cmbTimeType;
    QComboBox *cmbTimeCriteria;
    QSpinBox *spinTime;
    QHBoxLayout *layoutOwner;
    QComboBox *cmbUsers;
    QComboBox *cmbGroups;
    QCheckBox *checkSearchAsRoot;
    QLabel *lblOwner;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *checkRegEx;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *cmbSizeCriteria;
    QSpinBox *spinSize;
    QComboBox *cmbSizeUnits;
    QLabel *lblPermissions;
    QLabel *lblSize;
    QHBoxLayout *layoutOwner_2;
    QCheckBox *checkPermReadable;
    QCheckBox *checkPermWritable;
    QCheckBox *checkPermExecutable;
    QLabel *lblTime;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkEmpty;
    QLabel *lblFileOrFolder;
    QCheckBox *checkInvert;
    QHBoxLayout *footer;
    QLabel *lblSearchDir;
    QPushButton *btnAdvancePaneToggle;
    QLabel *lblFoundFilesInfo;
    QLabel *lblBetaInfo;

    void setupUi(QWidget *SearchPage)
    {
        if (SearchPage->objectName().isEmpty())
            SearchPage->setObjectName(QStringLiteral("SearchPage"));
        SearchPage->resize(764, 596);
        gridLayout = new QGridLayout(SearchPage);
        gridLayout->setSpacing(10);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(15, 15, 15, 15);
        tableFoundResults = new QTableView(SearchPage);
        tableFoundResults->setObjectName(QStringLiteral("tableFoundResults"));
        tableFoundResults->setFocusPolicy(Qt::NoFocus);
        tableFoundResults->setFrameShape(QFrame::NoFrame);
        tableFoundResults->setFrameShadow(QFrame::Sunken);
        tableFoundResults->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableFoundResults->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableFoundResults->setSelectionMode(QAbstractItemView::ExtendedSelection);
        tableFoundResults->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableFoundResults->setTextElideMode(Qt::ElideMiddle);
        tableFoundResults->setGridStyle(Qt::SolidLine);
        tableFoundResults->setSortingEnabled(true);
        tableFoundResults->setWordWrap(true);
        tableFoundResults->setCornerButtonEnabled(true);
        tableFoundResults->horizontalHeader()->setCascadingSectionResizes(false);
        tableFoundResults->horizontalHeader()->setStretchLastSection(true);
        tableFoundResults->verticalHeader()->setVisible(false);

        gridLayout->addWidget(tableFoundResults, 7, 0, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(10);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, -1, 0);
        btnBrowseSearchDir = new QPushButton(SearchPage);
        btnBrowseSearchDir->setObjectName(QStringLiteral("btnBrowseSearchDir"));
        btnBrowseSearchDir->setCursor(QCursor(Qt::PointingHandCursor));
        btnBrowseSearchDir->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_3->addWidget(btnBrowseSearchDir, 0, Qt::AlignTop);

        txtSearchInput = new QLineEdit(SearchPage);
        txtSearchInput->setObjectName(QStringLiteral("txtSearchInput"));
        QFont font;
        font.setPointSize(10);
        txtSearchInput->setFont(font);

        horizontalLayout_3->addWidget(txtSearchInput, 0, Qt::AlignTop);

        cmbSearchTypes = new QComboBox(SearchPage);
        cmbSearchTypes->setObjectName(QStringLiteral("cmbSearchTypes"));
        cmbSearchTypes->setMinimumSize(QSize(0, 30));
        cmbSearchTypes->setMaximumSize(QSize(16777215, 25));
        cmbSearchTypes->setFrame(false);

        horizontalLayout_3->addWidget(cmbSearchTypes, 0, Qt::AlignTop);

        btnSearchAdvance = new QPushButton(SearchPage);
        btnSearchAdvance->setObjectName(QStringLiteral("btnSearchAdvance"));
        btnSearchAdvance->setCursor(QCursor(Qt::PointingHandCursor));
        btnSearchAdvance->setFocusPolicy(Qt::NoFocus);
        QIcon icon;
        icon.addFile(QStringLiteral(":/static/themes/default/img/sidebar-icons/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSearchAdvance->setIcon(icon);
        btnSearchAdvance->setIconSize(QSize(24, 24));

        horizontalLayout_3->addWidget(btnSearchAdvance);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 2);

        lblErrorMsg = new QLabel(SearchPage);
        lblErrorMsg->setObjectName(QStringLiteral("lblErrorMsg"));
        lblErrorMsg->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblErrorMsg, 1, 0, 1, 2);

        lblLoadingSearching = new QLabel(SearchPage);
        lblLoadingSearching->setObjectName(QStringLiteral("lblLoadingSearching"));

        gridLayout->addWidget(lblLoadingSearching, 8, 0, 1, 2, Qt::AlignHCenter);

        advanceSearchPane = new QWidget(SearchPage);
        advanceSearchPane->setObjectName(QStringLiteral("advanceSearchPane"));
        gridLayout_2 = new QGridLayout(advanceSearchPane);
        gridLayout_2->setSpacing(12);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 5, 0, 2);
        checkCaseInsensitive = new QCheckBox(advanceSearchPane);
        checkCaseInsensitive->setObjectName(QStringLiteral("checkCaseInsensitive"));
        checkCaseInsensitive->setCursor(QCursor(Qt::PointingHandCursor));
        checkCaseInsensitive->setFocusPolicy(Qt::NoFocus);

        gridLayout_2->addWidget(checkCaseInsensitive, 1, 2, 1, 1, Qt::AlignLeft);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 6, 7, 1, 1);

        layoutTime = new QHBoxLayout();
        layoutTime->setSpacing(10);
        layoutTime->setObjectName(QStringLiteral("layoutTime"));
        layoutTime->setContentsMargins(-1, 0, -1, 4);
        cmbTimeType = new QComboBox(advanceSearchPane);
        cmbTimeType->setObjectName(QStringLiteral("cmbTimeType"));
        cmbTimeType->setMinimumSize(QSize(0, 28));
        cmbTimeType->setMaximumSize(QSize(16777215, 28));
        cmbTimeType->setFrame(false);

        layoutTime->addWidget(cmbTimeType);

        cmbTimeCriteria = new QComboBox(advanceSearchPane);
        cmbTimeCriteria->setObjectName(QStringLiteral("cmbTimeCriteria"));
        cmbTimeCriteria->setMinimumSize(QSize(0, 28));
        cmbTimeCriteria->setMaximumSize(QSize(16777215, 28));
        cmbTimeCriteria->setFrame(false);

        layoutTime->addWidget(cmbTimeCriteria);

        spinTime = new QSpinBox(advanceSearchPane);
        spinTime->setObjectName(QStringLiteral("spinTime"));
        spinTime->setMinimumSize(QSize(100, 28));
        spinTime->setMaximumSize(QSize(50, 16777215));
        spinTime->setFrame(true);
        spinTime->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinTime->setMaximum(9999999);

        layoutTime->addWidget(spinTime);


        gridLayout_2->addLayout(layoutTime, 3, 0, 1, 4);

        layoutOwner = new QHBoxLayout();
        layoutOwner->setSpacing(10);
        layoutOwner->setObjectName(QStringLiteral("layoutOwner"));
        cmbUsers = new QComboBox(advanceSearchPane);
        cmbUsers->setObjectName(QStringLiteral("cmbUsers"));
        cmbUsers->setMinimumSize(QSize(0, 28));
        cmbUsers->setMaximumSize(QSize(16777215, 28));
#ifndef QT_NO_TOOLTIP
        cmbUsers->setToolTip(QStringLiteral(""));
#endif // QT_NO_TOOLTIP
        cmbUsers->setFrame(false);

        layoutOwner->addWidget(cmbUsers);

        cmbGroups = new QComboBox(advanceSearchPane);
        cmbGroups->setObjectName(QStringLiteral("cmbGroups"));
        cmbGroups->setMinimumSize(QSize(0, 28));
        cmbGroups->setMaximumSize(QSize(16777215, 28));
#ifndef QT_NO_TOOLTIP
        cmbGroups->setToolTip(QStringLiteral(""));
#endif // QT_NO_TOOLTIP
        cmbGroups->setFrame(false);

        layoutOwner->addWidget(cmbGroups);


        gridLayout_2->addLayout(layoutOwner, 6, 4, 1, 3);

        checkSearchAsRoot = new QCheckBox(advanceSearchPane);
        checkSearchAsRoot->setObjectName(QStringLiteral("checkSearchAsRoot"));
        checkSearchAsRoot->setCursor(QCursor(Qt::PointingHandCursor));
        checkSearchAsRoot->setFocusPolicy(Qt::NoFocus);

        gridLayout_2->addWidget(checkSearchAsRoot, 1, 0, 1, 1);

        lblOwner = new QLabel(advanceSearchPane);
        lblOwner->setObjectName(QStringLiteral("lblOwner"));

        gridLayout_2->addWidget(lblOwner, 5, 4, 1, 3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 3, 7, 1, 1);

        checkRegEx = new QCheckBox(advanceSearchPane);
        checkRegEx->setObjectName(QStringLiteral("checkRegEx"));
        checkRegEx->setCursor(QCursor(Qt::PointingHandCursor));
        checkRegEx->setFocusPolicy(Qt::NoFocus);

        gridLayout_2->addWidget(checkRegEx, 1, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        cmbSizeCriteria = new QComboBox(advanceSearchPane);
        cmbSizeCriteria->setObjectName(QStringLiteral("cmbSizeCriteria"));
        cmbSizeCriteria->setMinimumSize(QSize(0, 28));
        cmbSizeCriteria->setMaximumSize(QSize(16777215, 28));
        cmbSizeCriteria->setFrame(false);

        horizontalLayout_2->addWidget(cmbSizeCriteria);

        spinSize = new QSpinBox(advanceSearchPane);
        spinSize->setObjectName(QStringLiteral("spinSize"));
        spinSize->setMinimumSize(QSize(15, 28));
        spinSize->setMaximumSize(QSize(68, 16777215));
        spinSize->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinSize->setMaximum(9999999);

        horizontalLayout_2->addWidget(spinSize);

        cmbSizeUnits = new QComboBox(advanceSearchPane);
        cmbSizeUnits->setObjectName(QStringLiteral("cmbSizeUnits"));
        cmbSizeUnits->setMinimumSize(QSize(0, 28));
        cmbSizeUnits->setMaximumSize(QSize(16777215, 28));
        cmbSizeUnits->setFrame(false);

        horizontalLayout_2->addWidget(cmbSizeUnits);


        gridLayout_2->addLayout(horizontalLayout_2, 6, 0, 1, 4);

        lblPermissions = new QLabel(advanceSearchPane);
        lblPermissions->setObjectName(QStringLiteral("lblPermissions"));

        gridLayout_2->addWidget(lblPermissions, 2, 4, 1, 3);

        lblSize = new QLabel(advanceSearchPane);
        lblSize->setObjectName(QStringLiteral("lblSize"));

        gridLayout_2->addWidget(lblSize, 5, 0, 1, 4);

        layoutOwner_2 = new QHBoxLayout();
        layoutOwner_2->setSpacing(5);
        layoutOwner_2->setObjectName(QStringLiteral("layoutOwner_2"));
        layoutOwner_2->setContentsMargins(-1, -1, -1, 4);
        checkPermReadable = new QCheckBox(advanceSearchPane);
        checkPermReadable->setObjectName(QStringLiteral("checkPermReadable"));
        checkPermReadable->setCursor(QCursor(Qt::PointingHandCursor));
        checkPermReadable->setFocusPolicy(Qt::NoFocus);

        layoutOwner_2->addWidget(checkPermReadable);

        checkPermWritable = new QCheckBox(advanceSearchPane);
        checkPermWritable->setObjectName(QStringLiteral("checkPermWritable"));
        checkPermWritable->setCursor(QCursor(Qt::PointingHandCursor));
        checkPermWritable->setFocusPolicy(Qt::NoFocus);

        layoutOwner_2->addWidget(checkPermWritable);

        checkPermExecutable = new QCheckBox(advanceSearchPane);
        checkPermExecutable->setObjectName(QStringLiteral("checkPermExecutable"));
        checkPermExecutable->setCursor(QCursor(Qt::PointingHandCursor));
        checkPermExecutable->setFocusPolicy(Qt::NoFocus);

        layoutOwner_2->addWidget(checkPermExecutable);


        gridLayout_2->addLayout(layoutOwner_2, 3, 4, 1, 3);

        lblTime = new QLabel(advanceSearchPane);
        lblTime->setObjectName(QStringLiteral("lblTime"));

        gridLayout_2->addWidget(lblTime, 2, 0, 1, 4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 7, 1, 1);

        checkEmpty = new QCheckBox(advanceSearchPane);
        checkEmpty->setObjectName(QStringLiteral("checkEmpty"));
        checkEmpty->setCursor(QCursor(Qt::PointingHandCursor));
        checkEmpty->setFocusPolicy(Qt::NoFocus);

        gridLayout_2->addWidget(checkEmpty, 1, 6, 1, 1);

        lblFileOrFolder = new QLabel(advanceSearchPane);
        lblFileOrFolder->setObjectName(QStringLiteral("lblFileOrFolder"));

        gridLayout_2->addWidget(lblFileOrFolder, 1, 5, 1, 1);

        checkInvert = new QCheckBox(advanceSearchPane);
        checkInvert->setObjectName(QStringLiteral("checkInvert"));
        checkInvert->setCursor(QCursor(Qt::PointingHandCursor));
        checkInvert->setFocusPolicy(Qt::NoFocus);

        gridLayout_2->addWidget(checkInvert, 1, 4, 1, 1);


        gridLayout->addWidget(advanceSearchPane, 4, 0, 1, 2);

        footer = new QHBoxLayout();
        footer->setSpacing(10);
        footer->setObjectName(QStringLiteral("footer"));
        footer->setContentsMargins(-1, -1, -1, 0);
        lblSearchDir = new QLabel(SearchPage);
        lblSearchDir->setObjectName(QStringLiteral("lblSearchDir"));
        lblSearchDir->setLineWidth(0);
        lblSearchDir->setTextFormat(Qt::PlainText);
        lblSearchDir->setScaledContents(true);
        lblSearchDir->setWordWrap(false);

        footer->addWidget(lblSearchDir, 0, Qt::AlignLeft);

        btnAdvancePaneToggle = new QPushButton(SearchPage);
        btnAdvancePaneToggle->setObjectName(QStringLiteral("btnAdvancePaneToggle"));
        btnAdvancePaneToggle->setCursor(QCursor(Qt::PointingHandCursor));
#ifndef QT_NO_ACCESSIBILITY
        btnAdvancePaneToggle->setAccessibleName(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        btnAdvancePaneToggle->setCheckable(false);
        btnAdvancePaneToggle->setChecked(false);

        footer->addWidget(btnAdvancePaneToggle, 0, Qt::AlignRight);


        gridLayout->addLayout(footer, 3, 0, 1, 2);

        lblFoundFilesInfo = new QLabel(SearchPage);
        lblFoundFilesInfo->setObjectName(QStringLiteral("lblFoundFilesInfo"));
        lblFoundFilesInfo->setLineWidth(0);
        lblFoundFilesInfo->setTextFormat(Qt::PlainText);
        lblFoundFilesInfo->setScaledContents(true);
        lblFoundFilesInfo->setWordWrap(false);

        gridLayout->addWidget(lblFoundFilesInfo, 9, 0, 1, 1);

        lblBetaInfo = new QLabel(SearchPage);
        lblBetaInfo->setObjectName(QStringLiteral("lblBetaInfo"));
        lblBetaInfo->setStyleSheet(QStringLiteral("color: rgb(252, 175, 62);"));
        lblBetaInfo->setLineWidth(0);
        lblBetaInfo->setTextFormat(Qt::PlainText);
        lblBetaInfo->setScaledContents(true);
        lblBetaInfo->setWordWrap(false);

        gridLayout->addWidget(lblBetaInfo, 9, 1, 1, 1, Qt::AlignRight);


        retranslateUi(SearchPage);

        QMetaObject::connectSlotsByName(SearchPage);
    } // setupUi

    void retranslateUi(QWidget *SearchPage)
    {
        SearchPage->setWindowTitle(QApplication::translate("SearchPage", "Search", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        btnBrowseSearchDir->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        btnBrowseSearchDir->setText(QApplication::translate("SearchPage", "Browse...", Q_NULLPTR));
        txtSearchInput->setPlaceholderText(QApplication::translate("SearchPage", "Search...", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        btnSearchAdvance->setAccessibleName(QApplication::translate("SearchPage", "primary", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
        btnSearchAdvance->setText(QString());
        lblErrorMsg->setText(QString());
        lblLoadingSearching->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        checkCaseInsensitive->setAccessibleName(QApplication::translate("SearchPage", "circle", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
        checkCaseInsensitive->setText(QApplication::translate("SearchPage", "Case Insensitive", Q_NULLPTR));
        spinTime->setSuffix(QApplication::translate("SearchPage", " minute", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        checkSearchAsRoot->setAccessibleName(QApplication::translate("SearchPage", "circle", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
        checkSearchAsRoot->setText(QApplication::translate("SearchPage", "Search as Root", Q_NULLPTR));
        lblOwner->setText(QApplication::translate("SearchPage", "Owner", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        checkRegEx->setAccessibleName(QApplication::translate("SearchPage", "circle", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
        checkRegEx->setText(QApplication::translate("SearchPage", "RegEx", Q_NULLPTR));
        lblPermissions->setText(QApplication::translate("SearchPage", "Permissions", Q_NULLPTR));
        lblSize->setText(QApplication::translate("SearchPage", "Size", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        checkPermReadable->setAccessibleName(QApplication::translate("SearchPage", "circle", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
        checkPermReadable->setText(QApplication::translate("SearchPage", "Readable", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        checkPermWritable->setAccessibleName(QApplication::translate("SearchPage", "circle", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
        checkPermWritable->setText(QApplication::translate("SearchPage", "Writable", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        checkPermExecutable->setAccessibleName(QApplication::translate("SearchPage", "circle", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
        checkPermExecutable->setText(QApplication::translate("SearchPage", "Executable", Q_NULLPTR));
        lblTime->setText(QApplication::translate("SearchPage", "Time", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        checkEmpty->setAccessibleName(QApplication::translate("SearchPage", "circle", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
        checkEmpty->setText(QApplication::translate("SearchPage", "Empty", Q_NULLPTR));
        lblFileOrFolder->setText(QApplication::translate("SearchPage", "File or Folder:", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        checkInvert->setAccessibleName(QApplication::translate("SearchPage", "circle", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
        checkInvert->setText(QApplication::translate("SearchPage", "Invert", Q_NULLPTR));
        lblSearchDir->setText(QString());
        btnAdvancePaneToggle->setText(QApplication::translate("SearchPage", "Advanced Search", Q_NULLPTR));
        lblFoundFilesInfo->setText(QString());
        lblBetaInfo->setText(QApplication::translate("SearchPage", "BETA version", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SearchPage: public Ui_SearchPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_PAGE_H
