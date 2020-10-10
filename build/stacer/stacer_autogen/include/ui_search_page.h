/********************************************************************************
** Form generated from reading UI file 'search_page.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_PAGE_H
#define UI_SEARCH_PAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
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
            SearchPage->setObjectName(QString::fromUtf8("SearchPage"));
        SearchPage->resize(764, 596);
        gridLayout = new QGridLayout(SearchPage);
        gridLayout->setSpacing(10);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(15, 15, 15, 15);
        tableFoundResults = new QTableView(SearchPage);
        tableFoundResults->setObjectName(QString::fromUtf8("tableFoundResults"));
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
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, -1, 0);
        btnBrowseSearchDir = new QPushButton(SearchPage);
        btnBrowseSearchDir->setObjectName(QString::fromUtf8("btnBrowseSearchDir"));
        btnBrowseSearchDir->setCursor(QCursor(Qt::PointingHandCursor));
        btnBrowseSearchDir->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_3->addWidget(btnBrowseSearchDir, 0, Qt::AlignTop);

        txtSearchInput = new QLineEdit(SearchPage);
        txtSearchInput->setObjectName(QString::fromUtf8("txtSearchInput"));
        QFont font;
        font.setPointSize(10);
        txtSearchInput->setFont(font);

        horizontalLayout_3->addWidget(txtSearchInput, 0, Qt::AlignTop);

        cmbSearchTypes = new QComboBox(SearchPage);
        cmbSearchTypes->setObjectName(QString::fromUtf8("cmbSearchTypes"));
        cmbSearchTypes->setMinimumSize(QSize(0, 30));
        cmbSearchTypes->setMaximumSize(QSize(16777215, 25));
        cmbSearchTypes->setFrame(false);

        horizontalLayout_3->addWidget(cmbSearchTypes, 0, Qt::AlignTop);

        btnSearchAdvance = new QPushButton(SearchPage);
        btnSearchAdvance->setObjectName(QString::fromUtf8("btnSearchAdvance"));
        btnSearchAdvance->setCursor(QCursor(Qt::PointingHandCursor));
        btnSearchAdvance->setFocusPolicy(Qt::NoFocus);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/static/themes/default/img/sidebar-icons/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSearchAdvance->setIcon(icon);
        btnSearchAdvance->setIconSize(QSize(24, 24));

        horizontalLayout_3->addWidget(btnSearchAdvance);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 2);

        lblErrorMsg = new QLabel(SearchPage);
        lblErrorMsg->setObjectName(QString::fromUtf8("lblErrorMsg"));
        lblErrorMsg->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblErrorMsg, 1, 0, 1, 2);

        lblLoadingSearching = new QLabel(SearchPage);
        lblLoadingSearching->setObjectName(QString::fromUtf8("lblLoadingSearching"));

        gridLayout->addWidget(lblLoadingSearching, 8, 0, 1, 2, Qt::AlignHCenter);

        advanceSearchPane = new QWidget(SearchPage);
        advanceSearchPane->setObjectName(QString::fromUtf8("advanceSearchPane"));
        gridLayout_2 = new QGridLayout(advanceSearchPane);
        gridLayout_2->setSpacing(12);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 5, 0, 2);
        checkCaseInsensitive = new QCheckBox(advanceSearchPane);
        checkCaseInsensitive->setObjectName(QString::fromUtf8("checkCaseInsensitive"));
        checkCaseInsensitive->setCursor(QCursor(Qt::PointingHandCursor));
        checkCaseInsensitive->setFocusPolicy(Qt::NoFocus);

        gridLayout_2->addWidget(checkCaseInsensitive, 1, 2, 1, 1, Qt::AlignLeft);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 6, 7, 1, 1);

        layoutTime = new QHBoxLayout();
        layoutTime->setSpacing(10);
        layoutTime->setObjectName(QString::fromUtf8("layoutTime"));
        layoutTime->setContentsMargins(-1, 0, -1, 4);
        cmbTimeType = new QComboBox(advanceSearchPane);
        cmbTimeType->setObjectName(QString::fromUtf8("cmbTimeType"));
        cmbTimeType->setMinimumSize(QSize(0, 28));
        cmbTimeType->setMaximumSize(QSize(16777215, 28));
        cmbTimeType->setFrame(false);

        layoutTime->addWidget(cmbTimeType);

        cmbTimeCriteria = new QComboBox(advanceSearchPane);
        cmbTimeCriteria->setObjectName(QString::fromUtf8("cmbTimeCriteria"));
        cmbTimeCriteria->setMinimumSize(QSize(0, 28));
        cmbTimeCriteria->setMaximumSize(QSize(16777215, 28));
        cmbTimeCriteria->setFrame(false);

        layoutTime->addWidget(cmbTimeCriteria);

        spinTime = new QSpinBox(advanceSearchPane);
        spinTime->setObjectName(QString::fromUtf8("spinTime"));
        spinTime->setMinimumSize(QSize(100, 28));
        spinTime->setMaximumSize(QSize(50, 16777215));
        spinTime->setFrame(true);
        spinTime->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinTime->setMaximum(9999999);

        layoutTime->addWidget(spinTime);


        gridLayout_2->addLayout(layoutTime, 3, 0, 1, 4);

        layoutOwner = new QHBoxLayout();
        layoutOwner->setSpacing(10);
        layoutOwner->setObjectName(QString::fromUtf8("layoutOwner"));
        cmbUsers = new QComboBox(advanceSearchPane);
        cmbUsers->setObjectName(QString::fromUtf8("cmbUsers"));
        cmbUsers->setMinimumSize(QSize(0, 28));
        cmbUsers->setMaximumSize(QSize(16777215, 28));
#ifndef QT_NO_TOOLTIP
        cmbUsers->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
        cmbUsers->setFrame(false);

        layoutOwner->addWidget(cmbUsers);

        cmbGroups = new QComboBox(advanceSearchPane);
        cmbGroups->setObjectName(QString::fromUtf8("cmbGroups"));
        cmbGroups->setMinimumSize(QSize(0, 28));
        cmbGroups->setMaximumSize(QSize(16777215, 28));
#ifndef QT_NO_TOOLTIP
        cmbGroups->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
        cmbGroups->setFrame(false);

        layoutOwner->addWidget(cmbGroups);


        gridLayout_2->addLayout(layoutOwner, 6, 4, 1, 3);

        checkSearchAsRoot = new QCheckBox(advanceSearchPane);
        checkSearchAsRoot->setObjectName(QString::fromUtf8("checkSearchAsRoot"));
        checkSearchAsRoot->setCursor(QCursor(Qt::PointingHandCursor));
        checkSearchAsRoot->setFocusPolicy(Qt::NoFocus);

        gridLayout_2->addWidget(checkSearchAsRoot, 1, 0, 1, 1);

        lblOwner = new QLabel(advanceSearchPane);
        lblOwner->setObjectName(QString::fromUtf8("lblOwner"));

        gridLayout_2->addWidget(lblOwner, 5, 4, 1, 3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 3, 7, 1, 1);

        checkRegEx = new QCheckBox(advanceSearchPane);
        checkRegEx->setObjectName(QString::fromUtf8("checkRegEx"));
        checkRegEx->setCursor(QCursor(Qt::PointingHandCursor));
        checkRegEx->setFocusPolicy(Qt::NoFocus);

        gridLayout_2->addWidget(checkRegEx, 1, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        cmbSizeCriteria = new QComboBox(advanceSearchPane);
        cmbSizeCriteria->setObjectName(QString::fromUtf8("cmbSizeCriteria"));
        cmbSizeCriteria->setMinimumSize(QSize(0, 28));
        cmbSizeCriteria->setMaximumSize(QSize(16777215, 28));
        cmbSizeCriteria->setFrame(false);

        horizontalLayout_2->addWidget(cmbSizeCriteria);

        spinSize = new QSpinBox(advanceSearchPane);
        spinSize->setObjectName(QString::fromUtf8("spinSize"));
        spinSize->setMinimumSize(QSize(15, 28));
        spinSize->setMaximumSize(QSize(68, 16777215));
        spinSize->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinSize->setMaximum(9999999);

        horizontalLayout_2->addWidget(spinSize);

        cmbSizeUnits = new QComboBox(advanceSearchPane);
        cmbSizeUnits->setObjectName(QString::fromUtf8("cmbSizeUnits"));
        cmbSizeUnits->setMinimumSize(QSize(0, 28));
        cmbSizeUnits->setMaximumSize(QSize(16777215, 28));
        cmbSizeUnits->setFrame(false);

        horizontalLayout_2->addWidget(cmbSizeUnits);


        gridLayout_2->addLayout(horizontalLayout_2, 6, 0, 1, 4);

        lblPermissions = new QLabel(advanceSearchPane);
        lblPermissions->setObjectName(QString::fromUtf8("lblPermissions"));

        gridLayout_2->addWidget(lblPermissions, 2, 4, 1, 3);

        lblSize = new QLabel(advanceSearchPane);
        lblSize->setObjectName(QString::fromUtf8("lblSize"));

        gridLayout_2->addWidget(lblSize, 5, 0, 1, 4);

        layoutOwner_2 = new QHBoxLayout();
        layoutOwner_2->setSpacing(5);
        layoutOwner_2->setObjectName(QString::fromUtf8("layoutOwner_2"));
        layoutOwner_2->setContentsMargins(-1, -1, -1, 4);
        checkPermReadable = new QCheckBox(advanceSearchPane);
        checkPermReadable->setObjectName(QString::fromUtf8("checkPermReadable"));
        checkPermReadable->setCursor(QCursor(Qt::PointingHandCursor));
        checkPermReadable->setFocusPolicy(Qt::NoFocus);

        layoutOwner_2->addWidget(checkPermReadable);

        checkPermWritable = new QCheckBox(advanceSearchPane);
        checkPermWritable->setObjectName(QString::fromUtf8("checkPermWritable"));
        checkPermWritable->setCursor(QCursor(Qt::PointingHandCursor));
        checkPermWritable->setFocusPolicy(Qt::NoFocus);

        layoutOwner_2->addWidget(checkPermWritable);

        checkPermExecutable = new QCheckBox(advanceSearchPane);
        checkPermExecutable->setObjectName(QString::fromUtf8("checkPermExecutable"));
        checkPermExecutable->setCursor(QCursor(Qt::PointingHandCursor));
        checkPermExecutable->setFocusPolicy(Qt::NoFocus);

        layoutOwner_2->addWidget(checkPermExecutable);


        gridLayout_2->addLayout(layoutOwner_2, 3, 4, 1, 3);

        lblTime = new QLabel(advanceSearchPane);
        lblTime->setObjectName(QString::fromUtf8("lblTime"));

        gridLayout_2->addWidget(lblTime, 2, 0, 1, 4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 7, 1, 1);

        checkEmpty = new QCheckBox(advanceSearchPane);
        checkEmpty->setObjectName(QString::fromUtf8("checkEmpty"));
        checkEmpty->setCursor(QCursor(Qt::PointingHandCursor));
        checkEmpty->setFocusPolicy(Qt::NoFocus);

        gridLayout_2->addWidget(checkEmpty, 1, 6, 1, 1);

        lblFileOrFolder = new QLabel(advanceSearchPane);
        lblFileOrFolder->setObjectName(QString::fromUtf8("lblFileOrFolder"));

        gridLayout_2->addWidget(lblFileOrFolder, 1, 5, 1, 1);

        checkInvert = new QCheckBox(advanceSearchPane);
        checkInvert->setObjectName(QString::fromUtf8("checkInvert"));
        checkInvert->setCursor(QCursor(Qt::PointingHandCursor));
        checkInvert->setFocusPolicy(Qt::NoFocus);

        gridLayout_2->addWidget(checkInvert, 1, 4, 1, 1);


        gridLayout->addWidget(advanceSearchPane, 4, 0, 1, 2);

        footer = new QHBoxLayout();
        footer->setSpacing(10);
        footer->setObjectName(QString::fromUtf8("footer"));
        footer->setContentsMargins(-1, -1, -1, 0);
        lblSearchDir = new QLabel(SearchPage);
        lblSearchDir->setObjectName(QString::fromUtf8("lblSearchDir"));
        lblSearchDir->setLineWidth(0);
        lblSearchDir->setTextFormat(Qt::PlainText);
        lblSearchDir->setScaledContents(true);
        lblSearchDir->setWordWrap(false);

        footer->addWidget(lblSearchDir, 0, Qt::AlignLeft);

        btnAdvancePaneToggle = new QPushButton(SearchPage);
        btnAdvancePaneToggle->setObjectName(QString::fromUtf8("btnAdvancePaneToggle"));
        btnAdvancePaneToggle->setCursor(QCursor(Qt::PointingHandCursor));
#ifndef QT_NO_ACCESSIBILITY
        btnAdvancePaneToggle->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        btnAdvancePaneToggle->setCheckable(false);
        btnAdvancePaneToggle->setChecked(false);

        footer->addWidget(btnAdvancePaneToggle, 0, Qt::AlignRight);


        gridLayout->addLayout(footer, 3, 0, 1, 2);

        lblFoundFilesInfo = new QLabel(SearchPage);
        lblFoundFilesInfo->setObjectName(QString::fromUtf8("lblFoundFilesInfo"));
        lblFoundFilesInfo->setLineWidth(0);
        lblFoundFilesInfo->setTextFormat(Qt::PlainText);
        lblFoundFilesInfo->setScaledContents(true);
        lblFoundFilesInfo->setWordWrap(false);

        gridLayout->addWidget(lblFoundFilesInfo, 9, 0, 1, 1);

        lblBetaInfo = new QLabel(SearchPage);
        lblBetaInfo->setObjectName(QString::fromUtf8("lblBetaInfo"));
        lblBetaInfo->setStyleSheet(QString::fromUtf8("color: rgb(252, 175, 62);"));
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
        SearchPage->setWindowTitle(QApplication::translate("SearchPage", "Search", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        btnBrowseSearchDir->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        btnBrowseSearchDir->setText(QApplication::translate("SearchPage", "Browse...", nullptr));
        txtSearchInput->setPlaceholderText(QApplication::translate("SearchPage", "Search...", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        btnSearchAdvance->setAccessibleName(QApplication::translate("SearchPage", "primary", nullptr));
#endif // QT_NO_ACCESSIBILITY
        btnSearchAdvance->setText(QString());
        lblErrorMsg->setText(QString());
        lblLoadingSearching->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        checkCaseInsensitive->setAccessibleName(QApplication::translate("SearchPage", "circle", nullptr));
#endif // QT_NO_ACCESSIBILITY
        checkCaseInsensitive->setText(QApplication::translate("SearchPage", "Case Insensitive", nullptr));
        spinTime->setSuffix(QApplication::translate("SearchPage", " minute", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        checkSearchAsRoot->setAccessibleName(QApplication::translate("SearchPage", "circle", nullptr));
#endif // QT_NO_ACCESSIBILITY
        checkSearchAsRoot->setText(QApplication::translate("SearchPage", "Search as Root", nullptr));
        lblOwner->setText(QApplication::translate("SearchPage", "Owner", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        checkRegEx->setAccessibleName(QApplication::translate("SearchPage", "circle", nullptr));
#endif // QT_NO_ACCESSIBILITY
        checkRegEx->setText(QApplication::translate("SearchPage", "RegEx", nullptr));
        lblPermissions->setText(QApplication::translate("SearchPage", "Permissions", nullptr));
        lblSize->setText(QApplication::translate("SearchPage", "Size", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        checkPermReadable->setAccessibleName(QApplication::translate("SearchPage", "circle", nullptr));
#endif // QT_NO_ACCESSIBILITY
        checkPermReadable->setText(QApplication::translate("SearchPage", "Readable", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        checkPermWritable->setAccessibleName(QApplication::translate("SearchPage", "circle", nullptr));
#endif // QT_NO_ACCESSIBILITY
        checkPermWritable->setText(QApplication::translate("SearchPage", "Writable", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        checkPermExecutable->setAccessibleName(QApplication::translate("SearchPage", "circle", nullptr));
#endif // QT_NO_ACCESSIBILITY
        checkPermExecutable->setText(QApplication::translate("SearchPage", "Executable", nullptr));
        lblTime->setText(QApplication::translate("SearchPage", "Time", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        checkEmpty->setAccessibleName(QApplication::translate("SearchPage", "circle", nullptr));
#endif // QT_NO_ACCESSIBILITY
        checkEmpty->setText(QApplication::translate("SearchPage", "Empty", nullptr));
        lblFileOrFolder->setText(QApplication::translate("SearchPage", "File or Folder:", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        checkInvert->setAccessibleName(QApplication::translate("SearchPage", "circle", nullptr));
#endif // QT_NO_ACCESSIBILITY
        checkInvert->setText(QApplication::translate("SearchPage", "Invert", nullptr));
        lblSearchDir->setText(QString());
        btnAdvancePaneToggle->setText(QApplication::translate("SearchPage", "Advanced Search", nullptr));
        lblFoundFilesInfo->setText(QString());
        lblBetaInfo->setText(QApplication::translate("SearchPage", "BETA version", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchPage: public Ui_SearchPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_PAGE_H
