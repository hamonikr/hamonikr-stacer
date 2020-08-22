/********************************************************************************
** Form generated from reading UI file 'unity_settings.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UNITY_SETTINGS_H
#define UI_UNITY_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UnitySettings
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaUnityContents;
    QGridLayout *gridLayout;
    QGroupBox *grpSearchApplications;
    QGridLayout *gridLayout_5;
    QCheckBox *checkSearchYourFiles;
    QLabel *lblHomeIcon_9;
    QCheckBox *checkMoreSuggestions;
    QLabel *lblHomeIcon_11;
    QCheckBox *checkRecentlyUsed;
    QLabel *lblHomeIcon_8;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_3;
    QGroupBox *grpPanelGeneral;
    QGridLayout *gridLayout_6;
    QLabel *label_5;
    QSlider *sliderPanelOpacity;
    QSpacerItem *horizontalSpacer_6;
    QGroupBox *grpLauncherBehaviour;
    QGridLayout *gridLayout_2;
    QCheckBox *checkLauncherAutoHide;
    QLabel *lblHomeIcon;
    QRadioButton *radioRevealLeft;
    QSlider *sliderRevealSensitivy;
    QLabel *lblMountedIcon;
    QRadioButton *radioRevealTopLeft;
    QLabel *lblTrashIcon;
    QCheckBox *checkMinimizeApps;
    QLabel *lblNetworkIcon;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QGroupBox *grpLauncherAppearance;
    QGridLayout *gridLayout_3;
    QRadioButton *radioLauncherPositionLeft;
    QRadioButton *radioLauncherPositionBottom;
    QLabel *lblNetworkIcon_3;
    QRadioButton *radioLauncherVisiblePrimaryDesktop;
    QSpinBox *spinIconSize;
    QSlider *sliderLauncherOpacity;
    QLabel *lblMountedIcon_4;
    QRadioButton *radioLauncherVisibleAllDesktop;
    QLabel *lblNetworkIcon_2;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *grpSearchGeneral;
    QGridLayout *gridLayout_4;
    QCheckBox *checkBackgroundBlur;
    QLabel *lblHomeIcon_5;
    QCheckBox *checkSearchOnlineResource;
    QLabel *lblHomeIcon_15;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_7;
    QSpacerItem *verticalSpacer;
    QGroupBox *grpPanelIndicator;
    QGridLayout *gridLayout_7;
    QCheckBox *checkDate;
    QCheckBox *checkCalendar;
    QLabel *lblHomeIcon_3;
    QLabel *lblHomeIcon_4;
    QCheckBox *checkWeekday;
    QLabel *lblHomeIcon_14;
    QCheckBox *checkSeconds;
    QLabel *lblHomeIcon_16;
    QLabel *lblHomeIcon_17;
    QCheckBox *checkDateTime;
    QCheckBox *check24Hour;
    QCheckBox *checkShowMyName;
    QCheckBox *checkVolume;
    QSpacerItem *horizontalSpacer_7;
    QButtonGroup *buttonGroup;
    QButtonGroup *buttonGroup_3;
    QButtonGroup *buttonGroup_2;

    void setupUi(QWidget *UnitySettings)
    {
        if (UnitySettings->objectName().isEmpty())
            UnitySettings->setObjectName(QStringLiteral("UnitySettings"));
        UnitySettings->resize(809, 817);
        UnitySettings->setWindowTitle(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(UnitySettings);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(UnitySettings);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaUnityContents = new QWidget();
        scrollAreaUnityContents->setObjectName(QStringLiteral("scrollAreaUnityContents"));
        scrollAreaUnityContents->setGeometry(QRect(0, 0, 807, 815));
        gridLayout = new QGridLayout(scrollAreaUnityContents);
        gridLayout->setSpacing(10);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        grpSearchApplications = new QGroupBox(scrollAreaUnityContents);
        grpSearchApplications->setObjectName(QStringLiteral("grpSearchApplications"));
        gridLayout_5 = new QGridLayout(grpSearchApplications);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setHorizontalSpacing(30);
        gridLayout_5->setVerticalSpacing(10);
        gridLayout_5->setContentsMargins(5, 5, 5, 5);
        checkSearchYourFiles = new QCheckBox(grpSearchApplications);
        checkSearchYourFiles->setObjectName(QStringLiteral("checkSearchYourFiles"));
        checkSearchYourFiles->setCursor(QCursor(Qt::PointingHandCursor));
        checkSearchYourFiles->setFocusPolicy(Qt::NoFocus);

        gridLayout_5->addWidget(checkSearchYourFiles, 1, 1, 1, 1);

        lblHomeIcon_9 = new QLabel(grpSearchApplications);
        lblHomeIcon_9->setObjectName(QStringLiteral("lblHomeIcon_9"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblHomeIcon_9->sizePolicy().hasHeightForWidth());
        lblHomeIcon_9->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(lblHomeIcon_9, 0, 2, 1, 1);

        checkMoreSuggestions = new QCheckBox(grpSearchApplications);
        checkMoreSuggestions->setObjectName(QStringLiteral("checkMoreSuggestions"));
        checkMoreSuggestions->setCursor(QCursor(Qt::PointingHandCursor));
        checkMoreSuggestions->setFocusPolicy(Qt::NoFocus);

        gridLayout_5->addWidget(checkMoreSuggestions, 0, 1, 1, 1);

        lblHomeIcon_11 = new QLabel(grpSearchApplications);
        lblHomeIcon_11->setObjectName(QStringLiteral("lblHomeIcon_11"));
        sizePolicy.setHeightForWidth(lblHomeIcon_11->sizePolicy().hasHeightForWidth());
        lblHomeIcon_11->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(lblHomeIcon_11, 1, 0, 1, 1);

        checkRecentlyUsed = new QCheckBox(grpSearchApplications);
        checkRecentlyUsed->setObjectName(QStringLiteral("checkRecentlyUsed"));
        checkRecentlyUsed->setCursor(QCursor(Qt::PointingHandCursor));
        checkRecentlyUsed->setFocusPolicy(Qt::NoFocus);

        gridLayout_5->addWidget(checkRecentlyUsed, 0, 3, 1, 1);

        lblHomeIcon_8 = new QLabel(grpSearchApplications);
        lblHomeIcon_8->setObjectName(QStringLiteral("lblHomeIcon_8"));
        sizePolicy.setHeightForWidth(lblHomeIcon_8->sizePolicy().hasHeightForWidth());
        lblHomeIcon_8->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(lblHomeIcon_8, 0, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_5, 0, 4, 1, 1);


        gridLayout->addWidget(grpSearchApplications, 15, 0, 1, 1);

        label_3 = new QLabel(scrollAreaUnityContents);
        label_3->setObjectName(QStringLiteral("label_3"));
#ifndef QT_NO_ACCESSIBILITY
        label_3->setAccessibleName(QStringLiteral("general-title"));
#endif // QT_NO_ACCESSIBILITY
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 11, 0, 1, 1);

        grpPanelGeneral = new QGroupBox(scrollAreaUnityContents);
        grpPanelGeneral->setObjectName(QStringLiteral("grpPanelGeneral"));
        gridLayout_6 = new QGridLayout(grpPanelGeneral);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setHorizontalSpacing(30);
        gridLayout_6->setVerticalSpacing(10);
        gridLayout_6->setContentsMargins(5, 5, 5, 5);
        label_5 = new QLabel(grpPanelGeneral);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        gridLayout_6->addWidget(label_5, 0, 0, 1, 1);

        sliderPanelOpacity = new QSlider(grpPanelGeneral);
        sliderPanelOpacity->setObjectName(QStringLiteral("sliderPanelOpacity"));
        sliderPanelOpacity->setCursor(QCursor(Qt::PointingHandCursor));
        sliderPanelOpacity->setFocusPolicy(Qt::NoFocus);
        sliderPanelOpacity->setMinimum(1);
        sliderPanelOpacity->setMaximum(10);
        sliderPanelOpacity->setPageStep(2);
        sliderPanelOpacity->setValue(1);
        sliderPanelOpacity->setSliderPosition(1);
        sliderPanelOpacity->setOrientation(Qt::Horizontal);

        gridLayout_6->addWidget(sliderPanelOpacity, 0, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_6, 0, 2, 1, 1);


        gridLayout->addWidget(grpPanelGeneral, 20, 0, 1, 1);

        grpLauncherBehaviour = new QGroupBox(scrollAreaUnityContents);
        grpLauncherBehaviour->setObjectName(QStringLiteral("grpLauncherBehaviour"));
        gridLayout_2 = new QGridLayout(grpLauncherBehaviour);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(30);
        gridLayout_2->setVerticalSpacing(15);
        gridLayout_2->setContentsMargins(5, 5, 5, 5);
        checkLauncherAutoHide = new QCheckBox(grpLauncherBehaviour);
        checkLauncherAutoHide->setObjectName(QStringLiteral("checkLauncherAutoHide"));
        checkLauncherAutoHide->setCursor(QCursor(Qt::PointingHandCursor));
        checkLauncherAutoHide->setFocusPolicy(Qt::NoFocus);

        gridLayout_2->addWidget(checkLauncherAutoHide, 0, 1, 1, 1, Qt::AlignLeft);

        lblHomeIcon = new QLabel(grpLauncherBehaviour);
        lblHomeIcon->setObjectName(QStringLiteral("lblHomeIcon"));
        sizePolicy.setHeightForWidth(lblHomeIcon->sizePolicy().hasHeightForWidth());
        lblHomeIcon->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(lblHomeIcon, 0, 0, 1, 1);

        radioRevealLeft = new QRadioButton(grpLauncherBehaviour);
        buttonGroup = new QButtonGroup(UnitySettings);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(radioRevealLeft);
        radioRevealLeft->setObjectName(QStringLiteral("radioRevealLeft"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(radioRevealLeft->sizePolicy().hasHeightForWidth());
        radioRevealLeft->setSizePolicy(sizePolicy1);
        radioRevealLeft->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_2->addWidget(radioRevealLeft, 1, 1, 1, 1, Qt::AlignLeft);

        sliderRevealSensitivy = new QSlider(grpLauncherBehaviour);
        sliderRevealSensitivy->setObjectName(QStringLiteral("sliderRevealSensitivy"));
        sliderRevealSensitivy->setCursor(QCursor(Qt::PointingHandCursor));
        sliderRevealSensitivy->setFocusPolicy(Qt::NoFocus);
        sliderRevealSensitivy->setMinimum(1);
        sliderRevealSensitivy->setMaximum(10);
        sliderRevealSensitivy->setPageStep(1);
        sliderRevealSensitivy->setValue(1);
        sliderRevealSensitivy->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(sliderRevealSensitivy, 2, 1, 1, 1);

        lblMountedIcon = new QLabel(grpLauncherBehaviour);
        lblMountedIcon->setObjectName(QStringLiteral("lblMountedIcon"));
        sizePolicy.setHeightForWidth(lblMountedIcon->sizePolicy().hasHeightForWidth());
        lblMountedIcon->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(lblMountedIcon, 3, 0, 1, 1);

        radioRevealTopLeft = new QRadioButton(grpLauncherBehaviour);
        buttonGroup->addButton(radioRevealTopLeft);
        radioRevealTopLeft->setObjectName(QStringLiteral("radioRevealTopLeft"));
        sizePolicy1.setHeightForWidth(radioRevealTopLeft->sizePolicy().hasHeightForWidth());
        radioRevealTopLeft->setSizePolicy(sizePolicy1);
        radioRevealTopLeft->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_2->addWidget(radioRevealTopLeft, 1, 2, 1, 1, Qt::AlignLeft);

        lblTrashIcon = new QLabel(grpLauncherBehaviour);
        lblTrashIcon->setObjectName(QStringLiteral("lblTrashIcon"));
        sizePolicy.setHeightForWidth(lblTrashIcon->sizePolicy().hasHeightForWidth());
        lblTrashIcon->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(lblTrashIcon, 2, 0, 1, 1);

        checkMinimizeApps = new QCheckBox(grpLauncherBehaviour);
        checkMinimizeApps->setObjectName(QStringLiteral("checkMinimizeApps"));
        checkMinimizeApps->setCursor(QCursor(Qt::PointingHandCursor));
        checkMinimizeApps->setFocusPolicy(Qt::NoFocus);

        gridLayout_2->addWidget(checkMinimizeApps, 3, 1, 1, 1, Qt::AlignLeft);

        lblNetworkIcon = new QLabel(grpLauncherBehaviour);
        lblNetworkIcon->setObjectName(QStringLiteral("lblNetworkIcon"));
        sizePolicy.setHeightForWidth(lblNetworkIcon->sizePolicy().hasHeightForWidth());
        lblNetworkIcon->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(lblNetworkIcon, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 3, 1, 1);


        gridLayout->addWidget(grpLauncherBehaviour, 1, 0, 1, 1);

        label = new QLabel(scrollAreaUnityContents);
        label->setObjectName(QStringLiteral("label"));
#ifndef QT_NO_ACCESSIBILITY
        label->setAccessibleName(QStringLiteral("general-title"));
#endif // QT_NO_ACCESSIBILITY
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        grpLauncherAppearance = new QGroupBox(scrollAreaUnityContents);
        grpLauncherAppearance->setObjectName(QStringLiteral("grpLauncherAppearance"));
        gridLayout_3 = new QGridLayout(grpLauncherAppearance);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(30);
        gridLayout_3->setVerticalSpacing(10);
        gridLayout_3->setContentsMargins(5, 5, 5, 5);
        radioLauncherPositionLeft = new QRadioButton(grpLauncherAppearance);
        buttonGroup_3 = new QButtonGroup(UnitySettings);
        buttonGroup_3->setObjectName(QStringLiteral("buttonGroup_3"));
        buttonGroup_3->addButton(radioLauncherPositionLeft);
        radioLauncherPositionLeft->setObjectName(QStringLiteral("radioLauncherPositionLeft"));
        sizePolicy1.setHeightForWidth(radioLauncherPositionLeft->sizePolicy().hasHeightForWidth());
        radioLauncherPositionLeft->setSizePolicy(sizePolicy1);
        radioLauncherPositionLeft->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_3->addWidget(radioLauncherPositionLeft, 2, 1, 1, 1);

        radioLauncherPositionBottom = new QRadioButton(grpLauncherAppearance);
        buttonGroup_3->addButton(radioLauncherPositionBottom);
        radioLauncherPositionBottom->setObjectName(QStringLiteral("radioLauncherPositionBottom"));
        sizePolicy1.setHeightForWidth(radioLauncherPositionBottom->sizePolicy().hasHeightForWidth());
        radioLauncherPositionBottom->setSizePolicy(sizePolicy1);
        radioLauncherPositionBottom->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_3->addWidget(radioLauncherPositionBottom, 2, 2, 1, 1);

        lblNetworkIcon_3 = new QLabel(grpLauncherAppearance);
        lblNetworkIcon_3->setObjectName(QStringLiteral("lblNetworkIcon_3"));
        sizePolicy.setHeightForWidth(lblNetworkIcon_3->sizePolicy().hasHeightForWidth());
        lblNetworkIcon_3->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(lblNetworkIcon_3, 1, 0, 1, 1);

        radioLauncherVisiblePrimaryDesktop = new QRadioButton(grpLauncherAppearance);
        buttonGroup_2 = new QButtonGroup(UnitySettings);
        buttonGroup_2->setObjectName(QStringLiteral("buttonGroup_2"));
        buttonGroup_2->addButton(radioLauncherVisiblePrimaryDesktop);
        radioLauncherVisiblePrimaryDesktop->setObjectName(QStringLiteral("radioLauncherVisiblePrimaryDesktop"));
        sizePolicy1.setHeightForWidth(radioLauncherVisiblePrimaryDesktop->sizePolicy().hasHeightForWidth());
        radioLauncherVisiblePrimaryDesktop->setSizePolicy(sizePolicy1);
        radioLauncherVisiblePrimaryDesktop->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_3->addWidget(radioLauncherVisiblePrimaryDesktop, 1, 2, 1, 1);

        spinIconSize = new QSpinBox(grpLauncherAppearance);
        spinIconSize->setObjectName(QStringLiteral("spinIconSize"));
        spinIconSize->setMinimum(8);
        spinIconSize->setMaximum(64);
        spinIconSize->setSingleStep(2);

        gridLayout_3->addWidget(spinIconSize, 3, 1, 1, 1, Qt::AlignLeft);

        sliderLauncherOpacity = new QSlider(grpLauncherAppearance);
        sliderLauncherOpacity->setObjectName(QStringLiteral("sliderLauncherOpacity"));
        sliderLauncherOpacity->setCursor(QCursor(Qt::PointingHandCursor));
        sliderLauncherOpacity->setFocusPolicy(Qt::NoFocus);
        sliderLauncherOpacity->setMinimum(1);
        sliderLauncherOpacity->setMaximum(10);
        sliderLauncherOpacity->setPageStep(2);
        sliderLauncherOpacity->setValue(1);
        sliderLauncherOpacity->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(sliderLauncherOpacity, 0, 1, 1, 1);

        lblMountedIcon_4 = new QLabel(grpLauncherAppearance);
        lblMountedIcon_4->setObjectName(QStringLiteral("lblMountedIcon_4"));
        sizePolicy.setHeightForWidth(lblMountedIcon_4->sizePolicy().hasHeightForWidth());
        lblMountedIcon_4->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(lblMountedIcon_4, 3, 0, 1, 1);

        radioLauncherVisibleAllDesktop = new QRadioButton(grpLauncherAppearance);
        buttonGroup_2->addButton(radioLauncherVisibleAllDesktop);
        radioLauncherVisibleAllDesktop->setObjectName(QStringLiteral("radioLauncherVisibleAllDesktop"));
        sizePolicy1.setHeightForWidth(radioLauncherVisibleAllDesktop->sizePolicy().hasHeightForWidth());
        radioLauncherVisibleAllDesktop->setSizePolicy(sizePolicy1);
        radioLauncherVisibleAllDesktop->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_3->addWidget(radioLauncherVisibleAllDesktop, 1, 1, 1, 1);

        lblNetworkIcon_2 = new QLabel(grpLauncherAppearance);
        lblNetworkIcon_2->setObjectName(QStringLiteral("lblNetworkIcon_2"));
        sizePolicy.setHeightForWidth(lblNetworkIcon_2->sizePolicy().hasHeightForWidth());
        lblNetworkIcon_2->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(lblNetworkIcon_2, 2, 0, 1, 1);

        label_8 = new QLabel(grpLauncherAppearance);
        label_8->setObjectName(QStringLiteral("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(label_8, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 1, 3, 1, 1);


        gridLayout->addWidget(grpLauncherAppearance, 6, 0, 1, 1);

        grpSearchGeneral = new QGroupBox(scrollAreaUnityContents);
        grpSearchGeneral->setObjectName(QStringLiteral("grpSearchGeneral"));
        gridLayout_4 = new QGridLayout(grpSearchGeneral);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setHorizontalSpacing(30);
        gridLayout_4->setVerticalSpacing(10);
        gridLayout_4->setContentsMargins(5, 5, 5, 5);
        checkBackgroundBlur = new QCheckBox(grpSearchGeneral);
        checkBackgroundBlur->setObjectName(QStringLiteral("checkBackgroundBlur"));
        checkBackgroundBlur->setCursor(QCursor(Qt::PointingHandCursor));
        checkBackgroundBlur->setFocusPolicy(Qt::NoFocus);

        gridLayout_4->addWidget(checkBackgroundBlur, 0, 1, 1, 1);

        lblHomeIcon_5 = new QLabel(grpSearchGeneral);
        lblHomeIcon_5->setObjectName(QStringLiteral("lblHomeIcon_5"));
        sizePolicy.setHeightForWidth(lblHomeIcon_5->sizePolicy().hasHeightForWidth());
        lblHomeIcon_5->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(lblHomeIcon_5, 0, 2, 1, 1);

        checkSearchOnlineResource = new QCheckBox(grpSearchGeneral);
        checkSearchOnlineResource->setObjectName(QStringLiteral("checkSearchOnlineResource"));
        checkSearchOnlineResource->setCursor(QCursor(Qt::PointingHandCursor));
        checkSearchOnlineResource->setFocusPolicy(Qt::NoFocus);

        gridLayout_4->addWidget(checkSearchOnlineResource, 0, 3, 1, 1);

        lblHomeIcon_15 = new QLabel(grpSearchGeneral);
        lblHomeIcon_15->setObjectName(QStringLiteral("lblHomeIcon_15"));
        sizePolicy.setHeightForWidth(lblHomeIcon_15->sizePolicy().hasHeightForWidth());
        lblHomeIcon_15->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(lblHomeIcon_15, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 0, 4, 1, 1);


        gridLayout->addWidget(grpSearchGeneral, 12, 0, 1, 1);

        label_7 = new QLabel(scrollAreaUnityContents);
        label_7->setObjectName(QStringLiteral("label_7"));
#ifndef QT_NO_ACCESSIBILITY
        label_7->setAccessibleName(QStringLiteral("general-title"));
#endif // QT_NO_ACCESSIBILITY
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 19, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 46, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 27, 0, 1, 1);

        grpPanelIndicator = new QGroupBox(scrollAreaUnityContents);
        grpPanelIndicator->setObjectName(QStringLiteral("grpPanelIndicator"));
        gridLayout_7 = new QGridLayout(grpPanelIndicator);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setHorizontalSpacing(30);
        gridLayout_7->setVerticalSpacing(10);
        gridLayout_7->setContentsMargins(5, 5, 5, 5);
        checkDate = new QCheckBox(grpPanelIndicator);
        checkDate->setObjectName(QStringLiteral("checkDate"));
        sizePolicy1.setHeightForWidth(checkDate->sizePolicy().hasHeightForWidth());
        checkDate->setSizePolicy(sizePolicy1);
        checkDate->setCursor(QCursor(Qt::PointingHandCursor));
        checkDate->setFocusPolicy(Qt::NoFocus);
#ifndef QT_NO_ACCESSIBILITY
        checkDate->setAccessibleName(QStringLiteral("circle"));
#endif // QT_NO_ACCESSIBILITY

        gridLayout_7->addWidget(checkDate, 1, 2, 1, 1);

        checkCalendar = new QCheckBox(grpPanelIndicator);
        checkCalendar->setObjectName(QStringLiteral("checkCalendar"));
        sizePolicy1.setHeightForWidth(checkCalendar->sizePolicy().hasHeightForWidth());
        checkCalendar->setSizePolicy(sizePolicy1);
        checkCalendar->setCursor(QCursor(Qt::PointingHandCursor));
        checkCalendar->setFocusPolicy(Qt::NoFocus);
#ifndef QT_NO_ACCESSIBILITY
        checkCalendar->setAccessibleName(QStringLiteral("circle"));
#endif // QT_NO_ACCESSIBILITY

        gridLayout_7->addWidget(checkCalendar, 2, 2, 1, 1);

        lblHomeIcon_3 = new QLabel(grpPanelIndicator);
        lblHomeIcon_3->setObjectName(QStringLiteral("lblHomeIcon_3"));
        sizePolicy.setHeightForWidth(lblHomeIcon_3->sizePolicy().hasHeightForWidth());
        lblHomeIcon_3->setSizePolicy(sizePolicy);

        gridLayout_7->addWidget(lblHomeIcon_3, 0, 0, 1, 1);

        lblHomeIcon_4 = new QLabel(grpPanelIndicator);
        lblHomeIcon_4->setObjectName(QStringLiteral("lblHomeIcon_4"));
        sizePolicy.setHeightForWidth(lblHomeIcon_4->sizePolicy().hasHeightForWidth());
        lblHomeIcon_4->setSizePolicy(sizePolicy);

        gridLayout_7->addWidget(lblHomeIcon_4, 0, 2, 1, 1);

        checkWeekday = new QCheckBox(grpPanelIndicator);
        checkWeekday->setObjectName(QStringLiteral("checkWeekday"));
        sizePolicy1.setHeightForWidth(checkWeekday->sizePolicy().hasHeightForWidth());
        checkWeekday->setSizePolicy(sizePolicy1);
        checkWeekday->setCursor(QCursor(Qt::PointingHandCursor));
        checkWeekday->setFocusPolicy(Qt::NoFocus);
#ifndef QT_NO_ACCESSIBILITY
        checkWeekday->setAccessibleName(QStringLiteral("circle"));
#endif // QT_NO_ACCESSIBILITY

        gridLayout_7->addWidget(checkWeekday, 2, 1, 1, 1);

        lblHomeIcon_14 = new QLabel(grpPanelIndicator);
        lblHomeIcon_14->setObjectName(QStringLiteral("lblHomeIcon_14"));
        sizePolicy.setHeightForWidth(lblHomeIcon_14->sizePolicy().hasHeightForWidth());
        lblHomeIcon_14->setSizePolicy(sizePolicy);

        gridLayout_7->addWidget(lblHomeIcon_14, 1, 0, 1, 1);

        checkSeconds = new QCheckBox(grpPanelIndicator);
        checkSeconds->setObjectName(QStringLiteral("checkSeconds"));
        sizePolicy1.setHeightForWidth(checkSeconds->sizePolicy().hasHeightForWidth());
        checkSeconds->setSizePolicy(sizePolicy1);
        checkSeconds->setCursor(QCursor(Qt::PointingHandCursor));
        checkSeconds->setFocusPolicy(Qt::NoFocus);
#ifndef QT_NO_ACCESSIBILITY
        checkSeconds->setAccessibleName(QStringLiteral("circle"));
#endif // QT_NO_ACCESSIBILITY

        gridLayout_7->addWidget(checkSeconds, 1, 1, 1, 1);

        lblHomeIcon_16 = new QLabel(grpPanelIndicator);
        lblHomeIcon_16->setObjectName(QStringLiteral("lblHomeIcon_16"));
        sizePolicy.setHeightForWidth(lblHomeIcon_16->sizePolicy().hasHeightForWidth());
        lblHomeIcon_16->setSizePolicy(sizePolicy);

        gridLayout_7->addWidget(lblHomeIcon_16, 3, 0, 1, 1);

        lblHomeIcon_17 = new QLabel(grpPanelIndicator);
        lblHomeIcon_17->setObjectName(QStringLiteral("lblHomeIcon_17"));
        sizePolicy.setHeightForWidth(lblHomeIcon_17->sizePolicy().hasHeightForWidth());
        lblHomeIcon_17->setSizePolicy(sizePolicy);

        gridLayout_7->addWidget(lblHomeIcon_17, 3, 2, 1, 1);

        checkDateTime = new QCheckBox(grpPanelIndicator);
        checkDateTime->setObjectName(QStringLiteral("checkDateTime"));
        checkDateTime->setCursor(QCursor(Qt::PointingHandCursor));
        checkDateTime->setFocusPolicy(Qt::NoFocus);

        gridLayout_7->addWidget(checkDateTime, 0, 1, 1, 1);

        check24Hour = new QCheckBox(grpPanelIndicator);
        check24Hour->setObjectName(QStringLiteral("check24Hour"));
        check24Hour->setCursor(QCursor(Qt::PointingHandCursor));
        check24Hour->setFocusPolicy(Qt::NoFocus);

        gridLayout_7->addWidget(check24Hour, 0, 3, 1, 1);

        checkShowMyName = new QCheckBox(grpPanelIndicator);
        checkShowMyName->setObjectName(QStringLiteral("checkShowMyName"));
        checkShowMyName->setCursor(QCursor(Qt::PointingHandCursor));
        checkShowMyName->setFocusPolicy(Qt::NoFocus);

        gridLayout_7->addWidget(checkShowMyName, 3, 3, 1, 1);

        checkVolume = new QCheckBox(grpPanelIndicator);
        checkVolume->setObjectName(QStringLiteral("checkVolume"));
        checkVolume->setCursor(QCursor(Qt::PointingHandCursor));
        checkVolume->setFocusPolicy(Qt::NoFocus);

        gridLayout_7->addWidget(checkVolume, 3, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_7, 0, 4, 1, 1);


        gridLayout->addWidget(grpPanelIndicator, 22, 0, 1, 1);

        scrollArea->setWidget(scrollAreaUnityContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(UnitySettings);

        QMetaObject::connectSlotsByName(UnitySettings);
    } // setupUi

    void retranslateUi(QWidget *UnitySettings)
    {
        grpSearchApplications->setTitle(QApplication::translate("UnitySettings", "Applications", Q_NULLPTR));
        checkSearchYourFiles->setText(QString());
        lblHomeIcon_9->setText(QApplication::translate("UnitySettings", "Show \"Recently Used\" applications", Q_NULLPTR));
        checkMoreSuggestions->setText(QString());
        lblHomeIcon_11->setText(QApplication::translate("UnitySettings", "Enable search of your files", Q_NULLPTR));
        checkRecentlyUsed->setText(QString());
        lblHomeIcon_8->setText(QApplication::translate("UnitySettings", "Show \"More Suggestions\"", Q_NULLPTR));
        label_3->setText(QApplication::translate("UnitySettings", "Search", Q_NULLPTR));
        grpPanelGeneral->setTitle(QApplication::translate("UnitySettings", "General", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        label_5->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        label_5->setText(QApplication::translate("UnitySettings", "Transparency Level", Q_NULLPTR));
        grpLauncherBehaviour->setTitle(QApplication::translate("UnitySettings", "Behaviour", Q_NULLPTR));
        checkLauncherAutoHide->setText(QString());
        lblHomeIcon->setText(QApplication::translate("UnitySettings", "Auto Hide", Q_NULLPTR));
        radioRevealLeft->setText(QApplication::translate("UnitySettings", "Left Side", Q_NULLPTR));
        lblMountedIcon->setText(QApplication::translate("UnitySettings", "Minimize applications with clicking", Q_NULLPTR));
        radioRevealTopLeft->setText(QApplication::translate("UnitySettings", "Top-Left Corner", Q_NULLPTR));
        lblTrashIcon->setText(QApplication::translate("UnitySettings", "Reveal Sensitivity", Q_NULLPTR));
        checkMinimizeApps->setText(QString());
        lblNetworkIcon->setText(QApplication::translate("UnitySettings", "Reveal Location", Q_NULLPTR));
        label->setText(QApplication::translate("UnitySettings", "Launcher", Q_NULLPTR));
        grpLauncherAppearance->setTitle(QApplication::translate("UnitySettings", "Appearance", Q_NULLPTR));
        radioLauncherPositionLeft->setText(QApplication::translate("UnitySettings", "Left", Q_NULLPTR));
        radioLauncherPositionBottom->setText(QApplication::translate("UnitySettings", "Bottom", Q_NULLPTR));
        lblNetworkIcon_3->setText(QApplication::translate("UnitySettings", "Visibility", Q_NULLPTR));
        radioLauncherVisiblePrimaryDesktop->setText(QApplication::translate("UnitySettings", "Primary Desktop", Q_NULLPTR));
        lblMountedIcon_4->setText(QApplication::translate("UnitySettings", "Icon size", Q_NULLPTR));
        radioLauncherVisibleAllDesktop->setText(QApplication::translate("UnitySettings", "All Desktops", Q_NULLPTR));
        lblNetworkIcon_2->setText(QApplication::translate("UnitySettings", "Position", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        label_8->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        label_8->setText(QApplication::translate("UnitySettings", "Transparency Level", Q_NULLPTR));
        grpSearchGeneral->setTitle(QApplication::translate("UnitySettings", "General", Q_NULLPTR));
        checkBackgroundBlur->setText(QString());
        lblHomeIcon_5->setText(QApplication::translate("UnitySettings", "Search online sources", Q_NULLPTR));
        checkSearchOnlineResource->setText(QString());
        lblHomeIcon_15->setText(QApplication::translate("UnitySettings", "Background Blur", Q_NULLPTR));
        label_7->setText(QApplication::translate("UnitySettings", "Panel", Q_NULLPTR));
        grpPanelIndicator->setTitle(QApplication::translate("UnitySettings", "Indicators", Q_NULLPTR));
        checkDate->setText(QApplication::translate("UnitySettings", "Date", Q_NULLPTR));
        checkCalendar->setText(QApplication::translate("UnitySettings", "Calendar", Q_NULLPTR));
        lblHomeIcon_3->setText(QApplication::translate("UnitySettings", "Date & Time", Q_NULLPTR));
        lblHomeIcon_4->setText(QApplication::translate("UnitySettings", "24-Hour Time", Q_NULLPTR));
        checkWeekday->setText(QApplication::translate("UnitySettings", "Weekday", Q_NULLPTR));
        lblHomeIcon_14->setText(QApplication::translate("UnitySettings", "Include", Q_NULLPTR));
        checkSeconds->setText(QApplication::translate("UnitySettings", "Seconds", Q_NULLPTR));
        lblHomeIcon_16->setText(QApplication::translate("UnitySettings", "Volume", Q_NULLPTR));
        lblHomeIcon_17->setText(QApplication::translate("UnitySettings", "Show my name", Q_NULLPTR));
        checkDateTime->setText(QString());
        check24Hour->setText(QString());
        checkShowMyName->setText(QString());
        checkVolume->setText(QString());
        Q_UNUSED(UnitySettings);
    } // retranslateUi

};

namespace Ui {
    class UnitySettings: public Ui_UnitySettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UNITY_SETTINGS_H
