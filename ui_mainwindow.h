/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSave;
    QAction *actionPrint;
    QAction *actionClose;
    QAction *actionGuide;
    QAction *action_About;
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *WelcomeScreen;
    QGroupBox *entranceMenu;
    QGroupBox *MenuGroupBox;
    QTextBrowser *checkingUserText;
    QPushButton *staffBtn;
    QPushButton *clientBtn;
    QTextBrowser *welcomeScreen;
    QWidget *StaffPage;
    QGroupBox *StaffMenu;
    QTextBrowser *userMenu_text;
    QGroupBox *StaffMenuBox;
    QPushButton *launchACM;
    QPushButton *animalsListBtn;
    QPushButton *viewClientsBtn;
    QPushButton *animalAddBtn;
    QPushButton *addClientBtn;
    QGroupBox *canvasStaff;
    QGroupBox *addAnimalPopUp;
    QPushButton *saveAnimalBtn;
    QPushButton *closeAnimalBtn;
    QTextEdit *titlePopUp;
    QTextEdit *errorMessage;
    QTextEdit *successMessage;
    QStackedWidget *animalForm;
    QWidget *animalBasicInfoPage;
    QComboBox *animalGenderField;
    QTextEdit *animalNameField;
    QComboBox *animalSpeciesField;
    QComboBox *animalColourField;
    QTextEdit *animalWeightField;
    QTextEdit *animalHeightField;
    QLabel *animalWeightLabel;
    QLabel *animalHeightLabel;
    QComboBox *animalAgeField;
    QComboBox *animalTypeField;
    QPushButton *animalNextBtn;
    QTextEdit *animalBasicInfoTitle;
    QWidget *animalAttributesPage;
    QPushButton *animalBackBtn;
    QComboBox *animalIntelligenceField;
    QComboBox *animalAffectionismField;
    QComboBox *animalIndividualismField;
    QTextEdit *animalTraitsTitleLabel;
    QComboBox *animalDisciplineField;
    QComboBox *animalSpaciousnessField;
    QComboBox *animalHabitatField;
    QComboBox *animalEnergeticField;
    QComboBox *animalAppetiteField;
    QComboBox *animalAssertivenessField;
    QComboBox *animalActivenessField;
    QComboBox *animalPlayfulnessField;
    QComboBox *animalDiurnalField;
    QPushButton *animalNextPhysBtn;
    QWidget *animalPhysAttributesPage;
    QTextEdit *animalPhysHeadline;
    QComboBox *animalPhysFurLengthField;
    QComboBox *animalPhysFurColourField;
    QComboBox *animalPhysBodyPatternField;
    QComboBox *animalPhysBodyLengthField;
    QComboBox *animalPhysWingSpanField;
    QComboBox *animalPhysBeakLengthField;
    QComboBox *animalPhysBeakColourField;
    QComboBox *animalPhysScaleTypeField;
    QComboBox *animalPhysFinnSizeField;
    QPushButton *backToNonPhysBtn;
    QComboBox *animalPhysBuildField;
    QGroupBox *addClientPopUp;
    QPushButton *saveClientBtn;
    QPushButton *closeClientBtn;
    QTextEdit *clientTitlePopUp;
    QStackedWidget *clientForm;
    QWidget *basicInfoPage;
    QTextEdit *clientFNameField;
    QTextEdit *clientLNameField;
    QTextEdit *clientAgeField;
    QTextEdit *clientEmailField;
    QTextEdit *clientPhoneField;
    QComboBox *clientGenderFIeld;
    QPushButton *nextInfoBtn;
    QTextEdit *clientContactInfoTitleLabel;
    QWidget *attributesPage;
    QComboBox *clientActivenessField;
    QComboBox *clientAffectionismField;
    QComboBox *clientHabitatPreferenceField;
    QComboBox *clientDiurnalField;
    QTextEdit *clientTraitsTitleLabel;
    QPushButton *backInfoBtn;
    QPushButton *nextToClientNonPhysPreBtn;
    QWidget *emptyPageKeepIt;
    QComboBox *clientNonPhysPreEnergeticField;
    QComboBox *clientNonPhysPreAppetiField;
    QComboBox *clientNonPhysPreIntelliField;
    QComboBox *clientNonPhysPreSpaciousField;
    QComboBox *clientNonPhysPreIndividField;
    QComboBox *clientNonPhysPreAssertField;
    QComboBox *clientNonPhysPreDiscipField;
    QComboBox *clientNonPhysPrePlayfulField;
    QPushButton *backToCharacterTraitsBtn;
    QTextEdit *clientTraitsTitleLabel_2;
    QTextEdit *clientErrMessage;
    QTextEdit *clientSucessMessage;
    QStackedWidget *viewAnimalsListPopUp;
    QWidget *viewAnimalsListPopUpPage;
    QTextBrowser *animalsListTitle;
    QTableWidget *animalsListTable;
    QPushButton *viewAnimalDetailsBtn;
    QPushButton *editAnimalDetailsBtn;
    QWidget *detailsPage;
    QGroupBox *animalInfoDetailsBox;
    QTextEdit *animalNameDetail;
    QLabel *nameAnimalDetailLabel;
    QLabel *animalTypeDetailLabel;
    QLabel *animalSpeciesDetailLabel;
    QLabel *animalColourDetailLabel;
    QLabel *animalAgeDetailLabel;
    QLabel *animalGenderDetailLabel;
    QLineEdit *animalColourDetail;
    QLineEdit *animalTypeDetail;
    QLineEdit *animalSpeciesDetail;
    QLineEdit *animalAgeDetail;
    QLineEdit *animalGenderDetail;
    QGroupBox *animalPhysicalAttrBox;
    QTextBrowser *animalHeadLineAttrbView;
    QLabel *beakColourLabel;
    QLabel *bodyLengthLabel;
    QLabel *furColourLabel;
    QLabel *beakLengthLabel;
    QLabel *buildLabel;
    QLabel *finnsizeLabel;
    QLabel *scaleTypeLabel;
    QLabel *bodyPatternLabel;
    QLabel *wingSpanLabel;
    QLabel *furLengthLabel;
    QLineEdit *animalAttributeOneField;
    QLineEdit *animalAttributeTwoField;
    QLineEdit *animalAttributeThreeField;
    QGroupBox *animalNonPhysicalAttrBox;
    QLabel *animalNonPhysLabel1;
    QLabel *animalNonPhysLabel2;
    QLabel *animalNonPhysLabel3;
    QLabel *animalNonPhysLabel4;
    QLabel *animalNonPhysLabel5;
    QLabel *animalNonPhysLabel6;
    QLabel *animalNonPhysLabel9;
    QLabel *animalNonPhysLabel8;
    QLabel *animalNonPhysLabel10;
    QLabel *animalNonPhysLabel11;
    QLabel *animalNonPhysLabel12;
    QLabel *animalNonPhysLabel12_2;
    QLineEdit *animalNonPhysicalAttr1;
    QLineEdit *animalNonPhysicalAttr2;
    QLineEdit *animalNonPhysicalAttr3;
    QLineEdit *animalNonPhysicalAttr4;
    QLineEdit *animalNonPhysicalAttr5;
    QLineEdit *animalNonPhysicalAttr6;
    QLineEdit *animalNonPhysicalAttr7;
    QLineEdit *animalNonPhysicalAttr8;
    QLineEdit *animalNonPhysicalAttr9;
    QLineEdit *animalNonPhysicalAttr10;
    QLineEdit *animalNonPhysicalAttr11;
    QLineEdit *animalNonPhysicalAttr12;
    QPushButton *backViewAnimalsBtn;
    QTextBrowser *animalOverViewHeadLine_2;
    QPushButton *saveAnimalsEditsBtn;
    QTextBrowser *animalOverViewHeadLine;
    QTextBrowser *animalViewTitle;
    QTextBrowser *animalEditTitle;
    QWidget *editAnimalPage;
    QStackedWidget *viewClientsListPopUp;
    QWidget *viewClientsPage;
    QTextEdit *viewClientsTitle;
    QTableWidget *clientListTable;
    QPushButton *viewClientDetailsBtn;
    QWidget *viewClientsDetailsPage;
    QTextBrowser *clientNonPhysHeadLine;
    QGroupBox *clientBasicInfoBox;
    QTextEdit *clientFNameDetailsField;
    QTextEdit *clientLNameDetailsField;
    QTextEdit *clientPhoneNumberField;
    QTextEdit *clientEmailAddressDetailsField;
    QTextEdit *clientAgeDetailsField;
    QTextEdit *clientGenderDetailsField;
    QLabel *clientFNameLabel;
    QLabel *clientLNameLabel;
    QLabel *clientPhoneLabel;
    QLabel *clientEmailLabel;
    QLabel *clientAgeLabel;
    QLabel *clientGenderLabel;
    QGroupBox *clientNonPhysAttributesBox;
    QTextEdit *clientHabitatPreferenceDetailsField;
    QTextEdit *clientActivenessDetailsField;
    QTextEdit *clientNocturnalDetailsField;
    QTextEdit *clientAffectionismDetailsField;
    QLabel *clientHabitatLabel;
    QLabel *clientActivenessLabel;
    QLabel *clientNocturnalLabel;
    QLabel *clientAffectionismLabel;
    QTextBrowser *clientOverViewHeadline;
    QPushButton *backtoClientsListBtn;
    QTextBrowser *clientHeadLineViewDetail;
    QPushButton *backToMenuFromStaffBtn;
    QWidget *ClientPage;
    QGroupBox *ClientMenu;
    QTextBrowser *clientMenuText;
    QGroupBox *clientMenuBox;
    QPushButton *clientProfileBtn;
    QPushButton *clientAnimalsBtn;
    QGroupBox *groupBox_5;
    QLabel *labelForUserLoggedIn;
    QTextBrowser *userLoggedIn;
    QGroupBox *ClientCanvas;
    QStackedWidget *viewAnimalsFromClientView;
    QWidget *viewAnimalsPage;
    QTextBrowser *animalHeadlineLabel;
    QTableWidget *animalsListFromClientView;
    QPushButton *animalViewDetailClientBtn;
    QWidget *animalDetailsPage;
    QGroupBox *animalNonPhysicalAttrBoxToclient;
    QTextEdit *animalNonPhysicalAttr1ToClient;
    QTextEdit *animalNonPhysicalAttr2ToClient;
    QTextEdit *animalNonPhysicalAttr3ToClient;
    QTextEdit *animalNonPhysicalAttr4ToClient;
    QTextEdit *animalNonPhysicalAttr5ToClient;
    QTextEdit *animalNonPhysicalAttr6ToClient;
    QTextEdit *animalNonPhysicalAttr7ToClient;
    QTextEdit *animalNonPhysicalAttr8ToClient;
    QTextEdit *animalNonPhysicalAttr9ToClient;
    QTextEdit *animalNonPhysicalAttr10ToClient;
    QTextEdit *animalNonPhysicalAttr11ToClient;
    QTextEdit *animalNonPhysicalAttr12ToClient;
    QLabel *animalNonPhysLabel1_3;
    QLabel *animalNonPhysLabel2_3;
    QLabel *animalNonPhysLabel3_3;
    QLabel *animalNonPhysLabel4_3;
    QLabel *animalNonPhysLabel5_3;
    QLabel *animalNonPhysLabel6_3;
    QLabel *animalNonPhysLabel9_3;
    QLabel *animalNonPhysLabel8_3;
    QLabel *animalNonPhysLabel10_3;
    QLabel *animalNonPhysLabel11_3;
    QLabel *animalNonPhysLabel12_5;
    QLabel *animalNonPhysLabel12_6;
    QGroupBox *animalInfoDetailsBoxToClient;
    QTextEdit *animalNameDetailToClient;
    QTextEdit *animalTypeDetailToClient;
    QTextEdit *animalSpeciesDetailToClient;
    QTextEdit *animalColourDetailToClient;
    QTextEdit *animalAgeDetailToClient;
    QTextEdit *animalGenderDetailToClient;
    QLabel *nameAnimalDetailLabel_3;
    QLabel *animalTypeDetailLabel_3;
    QLabel *animalSpeciesDetailLabel_3;
    QLabel *animalColourDetailLabel_3;
    QLabel *animalAgeDetailLabel_3;
    QLabel *animalGenderDetailLabel_3;
    QPushButton *backViewAnimalsToClientBtn;
    QTextBrowser *animalOverViewHeadLineToClient_2;
    QGroupBox *animalPhysicalAttrBoxToClient;
    QTextEdit *animalAttributeThreeFieldToClient;
    QTextEdit *animalAttributeOneFieldToClient;
    QTextEdit *animalAttributeTwoFieldToClient;
    QTextBrowser *animalHeadLineAttrbViewToClient;
    QLabel *beakColourLabelClient;
    QLabel *bodyLengthLabelClient;
    QLabel *furColourLabelClient;
    QLabel *beakLengthLabelClient;
    QLabel *buildLabelClient;
    QLabel *finnsizeLabelClient;
    QLabel *scaleTypeLabelClient;
    QLabel *bodyPatternLabelClient;
    QLabel *wingSpanLabelClient;
    QLabel *furLengthLabelClient;
    QTextBrowser *animalHeadLineForClient;
    QTextBrowser *animalOverViewHeadLineToClient;
    QStackedWidget *viewClientProfilePage;
    QWidget *profilePage;
    QTextBrowser *viewClientProfileHeadLine;
    QPushButton *editClientProfileBtn;
    QPushButton *setAnimalPreferencesBtn;
    QLineEdit *clientViewActivenessField;
    QLineEdit *clientViewAffectionisimField;
    QLineEdit *clientViewHabitatPreField;
    QLineEdit *clientViewNocturnalField;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QGroupBox *groupBox;
    QLineEdit *clientViewFNameField;
    QLineEdit *clientViewLNameField;
    QLineEdit *clientViewAgeField;
    QLineEdit *clientViewEmailField;
    QLineEdit *clientViewPhoneNumField;
    QLineEdit *clientViewGenderField;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label_10;
    QPushButton *saveClientProfileEditsBtn;
    QPushButton *cancelClientEditsBtn;
    QTextBrowser *clientBasicHeadLine;
    QTextBrowser *clientPhysHeadLine;
    QPushButton *setPhysPreferencesBtn;
    QGroupBox *nonPhysPreBox;
    QTextBrowser *clientNonPhysPreAnimalHeadLine;
    QLineEdit *clientNonPhysPreOut1;
    QLabel *label_14;
    QLabel *label_13;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *clientNonPhysPreOut2;
    QLineEdit *clientNonPhysPreOut3;
    QLineEdit *clientNonPhysPreOut4;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_22;
    QLabel *label_23;
    QLineEdit *clientNonPhysPreOut6;
    QLineEdit *clientNonPhysPreOut8;
    QLineEdit *clientNonPhysPreOut7;
    QLineEdit *clientNonPhysPreOut5;
    QPushButton *viewRanksAndPreferencesBtn;
    QWidget *clientSetAnimalRanks;
    QPushButton *savePreferencesBtn;
    QPushButton *backPrefenecesBtn;
    QTextBrowser *preferncesHeadLine;
    QLineEdit *preferenceDogField;
    QLineEdit *preferenceCatField;
    QLineEdit *preferenceFrogField;
    QLineEdit *preferenceGoldfisheField;
    QLineEdit *preferenceSalamanderField;
    QLineEdit *preferenceSnakeField;
    QLineEdit *preferenceParrotField;
    QLineEdit *preferenceFinchField;
    QLineEdit *preferenceLizardField;
    QLineEdit *preferenceBettaField;
    QWidget *clientSetPhysicalPreferences;
    QComboBox *dogFurBuildField;
    QTextBrowser *physicalAttributesHeadLine;
    QComboBox *dogFurColourField;
    QComboBox *dogFurLengthField;
    QComboBox *catFurColourField;
    QComboBox *catFurLengthField;
    QComboBox *catFurBuildField;
    QComboBox *snakeScaleTypeField;
    QComboBox *snakeBodyLengthField;
    QComboBox *snakeBodyPatternField;
    QComboBox *lizardBodyLengthField;
    QComboBox *lizardScaleTypeField;
    QComboBox *lizardBodyPatternField;
    QComboBox *bettaBodyLengthField;
    QComboBox *bettaFinnSizeField;
    QComboBox *bettaBodyPatternField;
    QComboBox *goldfishFinnSizeField;
    QComboBox *goldfishBodyLengthField;
    QComboBox *goldfishBodyPatternField;
    QComboBox *salamanderBuildField;
    QComboBox *frogBuildField;
    QComboBox *frogBodyLengthField;
    QComboBox *salamanderBodyPatternField;
    QComboBox *salamanderBodyLengthField;
    QComboBox *frogBodyPatternField;
    QComboBox *parrotWingSpanField;
    QComboBox *finchWingSpanField;
    QComboBox *parrotBeakLengthField;
    QComboBox *finchBeakLengthField;
    QComboBox *parrotBeakColourField;
    QComboBox *finchBeakColourField;
    QPushButton *backToProfileFromPhysPageBtn;
    QPushButton *saveClientPhysicalPreferencesBtn;
    QWidget *clientViewRanksAndPrefernces;
    QGroupBox *preferencesBox;
    QLineEdit *dogPreferenceField;
    QLineEdit *catPreferenceField;
    QLineEdit *goldfishPreferenceField;
    QLineEdit *salamanderPreferenceField;
    QLineEdit *bettaPreferenceField;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLineEdit *snakePreferenceField;
    QLabel *label_29;
    QLineEdit *finchPreferenceField;
    QLabel *label_30;
    QLabel *label_31;
    QLineEdit *frogPreferenceField;
    QLabel *label_32;
    QLineEdit *parrotPreferenceField;
    QLineEdit *lizardPreferenceField;
    QLabel *label_34;
    QLineEdit *dogFurColourOutField;
    QLabel *label_41;
    QLineEdit *dogFurLengthOutField;
    QLineEdit *dogBuildOutField;
    QLabel *label_42;
    QLabel *label_43;
    QLabel *label_57;
    QLineEdit *catFurLengthOutField;
    QLineEdit *catFurColourOutField;
    QLabel *label_58;
    QLineEdit *catBuildOutField;
    QLabel *label_59;
    QLabel *label_60;
    QLineEdit *snakeBodyPatternOutField;
    QLabel *label_61;
    QLineEdit *snakeBodyLengthOutField;
    QLabel *label_62;
    QLineEdit *snakeScaleTypeOutField;
    QLineEdit *lizardBodyLengthOutField;
    QLabel *label_82;
    QLabel *label_83;
    QLineEdit *lizardBodyPatternOutField;
    QLabel *label_84;
    QLineEdit *lizardScaleTypeOutField;
    QLabel *label_85;
    QLineEdit *parrotBeakLengthOutField;
    QLineEdit *parrotBeakColourOutField;
    QLabel *label_86;
    QLineEdit *parrotWingSpanOutField;
    QLabel *label_87;
    QLineEdit *finchBeakLengthOutField;
    QLabel *label_88;
    QLineEdit *finchBeakColourOutField;
    QLineEdit *finchWingSpanOutField;
    QLabel *label_89;
    QLabel *label_90;
    QLabel *label_91;
    QLineEdit *frogBodyLengthOutField;
    QLabel *label_92;
    QLineEdit *frogBuildOutField;
    QLineEdit *frogBodyPatternOutField;
    QLabel *label_93;
    QLabel *label_94;
    QLineEdit *salamanderBuildOutField;
    QLineEdit *salamanderBodyLengthOutField;
    QLineEdit *salamanderBodyPatternOutField;
    QLabel *label_95;
    QLabel *label_96;
    QLabel *label_97;
    QLabel *label_98;
    QLabel *label_99;
    QLineEdit *goldfishFinnSizeOutField;
    QLineEdit *goldfishBodyPatternOutField;
    QLineEdit *goldfishBodyLengthOutField;
    QLineEdit *bettaBodyLengthOutField;
    QLineEdit *bettaBodyPatternOutField;
    QLabel *label_100;
    QLabel *label_101;
    QLabel *label_102;
    QLineEdit *bettaFinnSizeOutField;
    QPushButton *backToProfileFromViewRanksAndPrefecnesBtn;
    QTextBrowser *viewRanksAndPreferencesHeadLine;
    QPushButton *backToMainMenuFromClientViewBtn;
    QWidget *LoginPage;
    QGroupBox *LoginBox;
    QTextBrowser *textBrowser;
    QLineEdit *userLoginEmail;
    QPushButton *loginBtn;
    QLabel *label_24;
    QListWidget *avaliableClients;
    QTextBrowser *textBrowser_2;
    QPushButton *mainMenuBtnFromLogin;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1000, 650);
        MainWindow->setStyleSheet(QStringLiteral("background: qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName(QStringLiteral("actionPrint"));
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        actionGuide = new QAction(MainWindow);
        actionGuide->setObjectName(QStringLiteral("actionGuide"));
        action_About = new QAction(MainWindow);
        action_About->setObjectName(QStringLiteral("action_About"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setEnabled(true);
        stackedWidget->setGeometry(QRect(-40, 0, 1031, 661));
        WelcomeScreen = new QWidget();
        WelcomeScreen->setObjectName(QStringLiteral("WelcomeScreen"));
        entranceMenu = new QGroupBox(WelcomeScreen);
        entranceMenu->setObjectName(QStringLiteral("entranceMenu"));
        entranceMenu->setGeometry(QRect(210, 160, 591, 361));
        entranceMenu->setStyleSheet(QLatin1String("background: #fff;\n"
"border-radius:45px;"));
        MenuGroupBox = new QGroupBox(entranceMenu);
        MenuGroupBox->setObjectName(QStringLiteral("MenuGroupBox"));
        MenuGroupBox->setGeometry(QRect(70, 90, 451, 191));
        MenuGroupBox->setStyleSheet(QLatin1String("border: 3px solid  qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);\n"
"border-radius: 25px;"));
        checkingUserText = new QTextBrowser(MenuGroupBox);
        checkingUserText->setObjectName(QStringLiteral("checkingUserText"));
        checkingUserText->setEnabled(false);
        checkingUserText->setGeometry(QRect(30, 20, 381, 41));
        checkingUserText->setStyleSheet(QStringLiteral("border: none;"));
        staffBtn = new QPushButton(MenuGroupBox);
        staffBtn->setObjectName(QStringLiteral("staffBtn"));
        staffBtn->setGeometry(QRect(252, 100, 141, 51));
        staffBtn->setCursor(QCursor(Qt::PointingHandCursor));
        staffBtn->setStyleSheet(QLatin1String("#staffBtn{\n"
"\n"
"border: 3px solid qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);\n"
"border-radius: 25px;\n"
"}\n"
"\n"
"#staffBtn:hover{\n"
"\n"
"	background:  qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);\n"
"	color:#555;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        clientBtn = new QPushButton(MenuGroupBox);
        clientBtn->setObjectName(QStringLiteral("clientBtn"));
        clientBtn->setGeometry(QRect(50, 100, 141, 51));
        clientBtn->setCursor(QCursor(Qt::PointingHandCursor));
        clientBtn->setStyleSheet(QLatin1String("#clientBtn{\n"
"\n"
"border: 3px solid qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);\n"
"border-radius: 25px;\n"
"}\n"
"\n"
"#clientBtn:hover{\n"
"\n"
"	background:  qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);\n"
"	color:#555;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        welcomeScreen = new QTextBrowser(entranceMenu);
        welcomeScreen->setObjectName(QStringLiteral("welcomeScreen"));
        welcomeScreen->setEnabled(false);
        welcomeScreen->setGeometry(QRect(100, 0, 391, 81));
        stackedWidget->addWidget(WelcomeScreen);
        StaffPage = new QWidget();
        StaffPage->setObjectName(QStringLiteral("StaffPage"));
        StaffMenu = new QGroupBox(StaffPage);
        StaffMenu->setObjectName(QStringLiteral("StaffMenu"));
        StaffMenu->setGeometry(QRect(740, 110, 271, 441));
        StaffMenu->setStyleSheet(QLatin1String("background: #fff;\n"
"border-radius: 35px;\n"
"border: 2px solid black;"));
        userMenu_text = new QTextBrowser(StaffMenu);
        userMenu_text->setObjectName(QStringLiteral("userMenu_text"));
        userMenu_text->setGeometry(QRect(20, 20, 231, 41));
        userMenu_text->setStyleSheet(QStringLiteral("border: none"));
        StaffMenuBox = new QGroupBox(StaffMenu);
        StaffMenuBox->setObjectName(QStringLiteral("StaffMenuBox"));
        StaffMenuBox->setGeometry(QRect(48, 60, 171, 341));
        StaffMenuBox->setStyleSheet(QLatin1String("border: none;\n"
"border-radius: none"));
        launchACM = new QPushButton(StaffMenuBox);
        launchACM->setObjectName(QStringLiteral("launchACM"));
        launchACM->setGeometry(QRect(15, 20, 141, 51));
        launchACM->setCursor(QCursor(Qt::PointingHandCursor));
        launchACM->setStyleSheet(QLatin1String("#launchACM{\n"
"\n"
"border: 3px solid qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);\n"
"border-radius: 25px;\n"
"}\n"
"\n"
"#launchACM:hover{\n"
"\n"
"	background:  qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);\n"
"	color:#555;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        animalsListBtn = new QPushButton(StaffMenuBox);
        animalsListBtn->setObjectName(QStringLiteral("animalsListBtn"));
        animalsListBtn->setGeometry(QRect(15, 80, 141, 51));
        animalsListBtn->setCursor(QCursor(Qt::PointingHandCursor));
        animalsListBtn->setStyleSheet(QLatin1String("#animalsListBtn{\n"
"\n"
"border: 3px solid qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);\n"
"border-radius: 25px;\n"
"}\n"
"\n"
"#animalsListBtn:hover{\n"
"\n"
"	background:  qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);\n"
"	color:#555;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        viewClientsBtn = new QPushButton(StaffMenuBox);
        viewClientsBtn->setObjectName(QStringLiteral("viewClientsBtn"));
        viewClientsBtn->setGeometry(QRect(15, 140, 141, 51));
        viewClientsBtn->setCursor(QCursor(Qt::PointingHandCursor));
        viewClientsBtn->setStyleSheet(QLatin1String("#viewClientsBtn{\n"
"\n"
"border: 3px solid qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);\n"
"\n"
"border-radius: 25px;\n"
"}\n"
"\n"
"#viewClientsBtn:hover{\n"
"\n"
"	background:  qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);\n"
"	color:#555;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        animalAddBtn = new QPushButton(StaffMenuBox);
        animalAddBtn->setObjectName(QStringLiteral("animalAddBtn"));
        animalAddBtn->setGeometry(QRect(15, 200, 141, 51));
        animalAddBtn->setCursor(QCursor(Qt::PointingHandCursor));
        animalAddBtn->setStyleSheet(QLatin1String("#animalAddBtn{\n"
"\n"
"border: 3px solid qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);\n"
"border-radius: 25px;\n"
"}\n"
"\n"
"#animalAddBtn:hover{\n"
"\n"
"	background:   qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);\n"
"\n"
"\n"
"	color:#555;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        addClientBtn = new QPushButton(StaffMenuBox);
        addClientBtn->setObjectName(QStringLiteral("addClientBtn"));
        addClientBtn->setGeometry(QRect(15, 260, 141, 51));
        addClientBtn->setCursor(QCursor(Qt::PointingHandCursor));
        addClientBtn->setStyleSheet(QLatin1String("#addClientBtn{\n"
"\n"
"border: 3px solid qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);\n"
"\n"
"border-radius: 25px;\n"
"}\n"
"\n"
"\n"
"#addClientBtn:hover{\n"
"\n"
"	background:  qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);\n"
"	color:#555;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        canvasStaff = new QGroupBox(StaffPage);
        canvasStaff->setObjectName(QStringLiteral("canvasStaff"));
        canvasStaff->setGeometry(QRect(50, 20, 681, 561));
        canvasStaff->setStyleSheet(QLatin1String("background: #fff;\n"
"border-radius: 25px;\n"
"border: 2px solid black;"));
        addAnimalPopUp = new QGroupBox(canvasStaff);
        addAnimalPopUp->setObjectName(QStringLiteral("addAnimalPopUp"));
        addAnimalPopUp->setEnabled(true);
        addAnimalPopUp->setGeometry(QRect(510, 500, 51, 31));
        addAnimalPopUp->setStyleSheet(QLatin1String("background: qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);\n"
""));
        addAnimalPopUp->setCheckable(false);
        saveAnimalBtn = new QPushButton(addAnimalPopUp);
        saveAnimalBtn->setObjectName(QStringLiteral("saveAnimalBtn"));
        saveAnimalBtn->setGeometry(QRect(500, 450, 141, 51));
        saveAnimalBtn->setCursor(QCursor(Qt::PointingHandCursor));
        saveAnimalBtn->setStyleSheet(QLatin1String("#saveAnimalBtn{\n"
"	background: white;\n"
"	border-radius: 25px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"#saveAnimalBtn:hover{\n"
"	background: #fab1a0\n"
"\n"
"}"));
        closeAnimalBtn = new QPushButton(addAnimalPopUp);
        closeAnimalBtn->setObjectName(QStringLiteral("closeAnimalBtn"));
        closeAnimalBtn->setGeometry(QRect(370, 450, 121, 51));
        closeAnimalBtn->setCursor(QCursor(Qt::PointingHandCursor));
        closeAnimalBtn->setStyleSheet(QLatin1String("#closeAnimalBtn{\n"
"	background: white;\n"
"	border-radius: 25px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"#closeAnimalBtn:hover{\n"
"	background: #fab1a0\n"
"\n"
"}"));
        titlePopUp = new QTextEdit(addAnimalPopUp);
        titlePopUp->setObjectName(QStringLiteral("titlePopUp"));
        titlePopUp->setEnabled(false);
        titlePopUp->setGeometry(QRect(360, 20, 281, 41));
        titlePopUp->setStyleSheet(QLatin1String("#titlePopUp{\n"
"\n"
"	background: white;\n"
"	border:none;\n"
"	border-radius: 8px;\n"
"\n"
"}"));
        errorMessage = new QTextEdit(addAnimalPopUp);
        errorMessage->setObjectName(QStringLiteral("errorMessage"));
        errorMessage->setGeometry(QRect(370, 240, 251, 101));
        errorMessage->setStyleSheet(QStringLiteral("background: white"));
        successMessage = new QTextEdit(addAnimalPopUp);
        successMessage->setObjectName(QStringLiteral("successMessage"));
        successMessage->setGeometry(QRect(370, 120, 251, 101));
        successMessage->setStyleSheet(QStringLiteral("background: white"));
        animalForm = new QStackedWidget(addAnimalPopUp);
        animalForm->setObjectName(QStringLiteral("animalForm"));
        animalForm->setGeometry(QRect(30, 10, 331, 491));
        animalForm->setStyleSheet(QLatin1String("\n"
"border:none;"));
        animalBasicInfoPage = new QWidget();
        animalBasicInfoPage->setObjectName(QStringLiteral("animalBasicInfoPage"));
        animalGenderField = new QComboBox(animalBasicInfoPage);
        animalGenderField->setObjectName(QStringLiteral("animalGenderField"));
        animalGenderField->setGeometry(QRect(10, 330, 141, 31));
        animalGenderField->setStyleSheet(QLatin1String("#animalGenderField{\n"
"	background: white;\n"
"	border-radius: 8px;\n"
"\n"
"\n"
"}\n"
"#animalGenderField:hover{\n"
"	background: white;\n"
"	color: white;\n"
"\n"
"}\n"
"#QListView{\n"
"\n"
"	background: white;\n"
"}\n"
"\n"
"\n"
""));
        animalNameField = new QTextEdit(animalBasicInfoPage);
        animalNameField->setObjectName(QStringLiteral("animalNameField"));
        animalNameField->setEnabled(true);
        animalNameField->setGeometry(QRect(10, 70, 301, 31));
        animalNameField->setStyleSheet(QLatin1String("#animalNameField{\n"
"	background: white;\n"
"	border-radius: 8px;\n"
"\n"
"\n"
"\n"
"}"));
        animalSpeciesField = new QComboBox(animalBasicInfoPage);
        animalSpeciesField->setObjectName(QStringLiteral("animalSpeciesField"));
        animalSpeciesField->setGeometry(QRect(10, 290, 301, 31));
        animalSpeciesField->setStyleSheet(QLatin1String("#animalSpeciesField{\n"
"	background: white;\n"
"	border-radius: 8px;\n"
"\n"
"\n"
"\n"
"}"));
        animalColourField = new QComboBox(animalBasicInfoPage);
        animalColourField->setObjectName(QStringLiteral("animalColourField"));
        animalColourField->setGeometry(QRect(10, 250, 301, 31));
        animalColourField->setStyleSheet(QLatin1String("#animalColourField{\n"
"	background: white;\n"
"	border-radius: 8px;\n"
"\n"
"\n"
"\n"
"}"));
        animalWeightField = new QTextEdit(animalBasicInfoPage);
        animalWeightField->setObjectName(QStringLiteral("animalWeightField"));
        animalWeightField->setGeometry(QRect(10, 110, 151, 31));
        animalWeightField->setStyleSheet(QLatin1String("#animalWeightField{\n"
"	background: white;\n"
"	border-radius: 8px;\n"
"\n"
"\n"
"\n"
"}"));
        animalHeightField = new QTextEdit(animalBasicInfoPage);
        animalHeightField->setObjectName(QStringLiteral("animalHeightField"));
        animalHeightField->setGeometry(QRect(170, 110, 151, 31));
        animalHeightField->setStyleSheet(QLatin1String("#animalHeightField{\n"
"	background: white;\n"
"	border-radius: 8px;\n"
"\n"
"\n"
"\n"
"}"));
        animalWeightLabel = new QLabel(animalBasicInfoPage);
        animalWeightLabel->setObjectName(QStringLiteral("animalWeightLabel"));
        animalWeightLabel->setGeometry(QRect(130, 115, 21, 20));
        animalWeightLabel->setStyleSheet(QLatin1String("#animalWeightLabel{\n"
"	border: none;\n"
"	border-radius: 5px;\n"
"	background: white;\n"
"\n"
"}"));
        animalHeightLabel = new QLabel(animalBasicInfoPage);
        animalHeightLabel->setObjectName(QStringLiteral("animalHeightLabel"));
        animalHeightLabel->setGeometry(QRect(290, 115, 21, 20));
        animalHeightLabel->setStyleSheet(QLatin1String("#animalHeightLabel{\n"
"	border: none;\n"
"	border-radius: 5px;\n"
"	background: white;\n"
"\n"
"}"));
        animalAgeField = new QComboBox(animalBasicInfoPage);
        animalAgeField->setObjectName(QStringLiteral("animalAgeField"));
        animalAgeField->setGeometry(QRect(10, 160, 311, 31));
        animalAgeField->setStyleSheet(QLatin1String("#animalAgeField{\n"
"	background: white;\n"
"	border-radius: 8px;\n"
"\n"
"\n"
"\n"
"}"));
        animalTypeField = new QComboBox(animalBasicInfoPage);
        animalTypeField->setObjectName(QStringLiteral("animalTypeField"));
        animalTypeField->setGeometry(QRect(10, 205, 311, 31));
        animalTypeField->setStyleSheet(QLatin1String("#animalTypeField{\n"
"\n"
"	border-radius:8px;\n"
"	background:white;\n"
"}"));
        animalNextBtn = new QPushButton(animalBasicInfoPage);
        animalNextBtn->setObjectName(QStringLiteral("animalNextBtn"));
        animalNextBtn->setGeometry(QRect(200, 410, 131, 41));
        animalNextBtn->setCursor(QCursor(Qt::PointingHandCursor));
        animalNextBtn->setStyleSheet(QLatin1String("#animalNextBtn{\n"
"	background: white;\n"
"	border-radius: 15px;\n"
"    border: 2px solid black;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"#animalNextBtn:hover{\n"
"	background: #fab1a0\n"
"\n"
"}"));
        animalBasicInfoTitle = new QTextEdit(animalBasicInfoPage);
        animalBasicInfoTitle->setObjectName(QStringLiteral("animalBasicInfoTitle"));
        animalBasicInfoTitle->setEnabled(false);
        animalBasicInfoTitle->setGeometry(QRect(50, 20, 231, 31));
        animalBasicInfoTitle->setStyleSheet(QLatin1String("#animalBasicInfoTitle{\n"
"\n"
"	background: white;\n"
"	border:none;\n"
"	border-radius: 8px;\n"
"\n"
"}"));
        animalBasicInfoTitle->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        animalForm->addWidget(animalBasicInfoPage);
        animalAttributesPage = new QWidget();
        animalAttributesPage->setObjectName(QStringLiteral("animalAttributesPage"));
        animalBackBtn = new QPushButton(animalAttributesPage);
        animalBackBtn->setObjectName(QStringLiteral("animalBackBtn"));
        animalBackBtn->setGeometry(QRect(20, 460, 101, 31));
        animalBackBtn->setCursor(QCursor(Qt::PointingHandCursor));
        animalBackBtn->setStyleSheet(QLatin1String("#animalBackBtn{\n"
"	background: white;\n"
"	border-radius: 15px;\n"
"	border: 2px solid black\n"
"\n"
"\n"
"}\n"
"\n"
"#animalBackBtn:hover{\n"
"	background: #fab1a0\n"
"\n"
"}"));
        animalIntelligenceField = new QComboBox(animalAttributesPage);
        animalIntelligenceField->setObjectName(QStringLiteral("animalIntelligenceField"));
        animalIntelligenceField->setGeometry(QRect(0, 110, 311, 25));
        animalIntelligenceField->setStyleSheet(QLatin1String("#animalIntelligenceField{\n"
"\n"
"	border-radius:8px;\n"
"	background:white;\n"
"}"));
        animalAffectionismField = new QComboBox(animalAttributesPage);
        animalAffectionismField->setObjectName(QStringLiteral("animalAffectionismField"));
        animalAffectionismField->setGeometry(QRect(0, 75, 311, 25));
        animalAffectionismField->setStyleSheet(QLatin1String("#animalAffectionismField{\n"
"\n"
"	border-radius:8px;\n"
"	background:white;\n"
"}"));
        animalIndividualismField = new QComboBox(animalAttributesPage);
        animalIndividualismField->setObjectName(QStringLiteral("animalIndividualismField"));
        animalIndividualismField->setGeometry(QRect(0, 40, 311, 25));
        animalIndividualismField->setStyleSheet(QLatin1String("#animalIndividualismField{\n"
"\n"
"	border-radius:8px;\n"
"	background:white;\n"
"}"));
        animalTraitsTitleLabel = new QTextEdit(animalAttributesPage);
        animalTraitsTitleLabel->setObjectName(QStringLiteral("animalTraitsTitleLabel"));
        animalTraitsTitleLabel->setEnabled(false);
        animalTraitsTitleLabel->setGeometry(QRect(40, 5, 231, 31));
        animalTraitsTitleLabel->setStyleSheet(QLatin1String("#animalTraitsTitleLabel{\n"
"\n"
"	background: white;\n"
"	border:none;\n"
"	border-radius: 8px;\n"
"\n"
"}"));
        animalDisciplineField = new QComboBox(animalAttributesPage);
        animalDisciplineField->setObjectName(QStringLiteral("animalDisciplineField"));
        animalDisciplineField->setGeometry(QRect(0, 145, 311, 25));
        animalDisciplineField->setStyleSheet(QLatin1String("#animalDisciplineField{\n"
"\n"
"	border-radius:8px;\n"
"	background:white;\n"
"}"));
        animalSpaciousnessField = new QComboBox(animalAttributesPage);
        animalSpaciousnessField->setObjectName(QStringLiteral("animalSpaciousnessField"));
        animalSpaciousnessField->setGeometry(QRect(0, 215, 311, 25));
        animalSpaciousnessField->setStyleSheet(QLatin1String("#animalSpaciousnessField{\n"
"\n"
"	border-radius:8px;\n"
"	background:white;\n"
"}"));
        animalHabitatField = new QComboBox(animalAttributesPage);
        animalHabitatField->setObjectName(QStringLiteral("animalHabitatField"));
        animalHabitatField->setGeometry(QRect(0, 320, 311, 25));
        animalHabitatField->setStyleSheet(QLatin1String("#animalHabitatField{\n"
"\n"
"	border-radius:8px;\n"
"	background:white;\n"
"}"));
        animalEnergeticField = new QComboBox(animalAttributesPage);
        animalEnergeticField->setObjectName(QStringLiteral("animalEnergeticField"));
        animalEnergeticField->setGeometry(QRect(0, 250, 311, 25));
        animalEnergeticField->setStyleSheet(QLatin1String("#animalEnergeticField{\n"
"\n"
"	border-radius:8px;\n"
"	background:white;\n"
"}"));
        animalAppetiteField = new QComboBox(animalAttributesPage);
        animalAppetiteField->setObjectName(QStringLiteral("animalAppetiteField"));
        animalAppetiteField->setGeometry(QRect(0, 355, 311, 25));
        animalAppetiteField->setStyleSheet(QLatin1String("#animalAppetiteField{\n"
"\n"
"	border-radius:8px;\n"
"	background:white;\n"
"}"));
        animalAssertivenessField = new QComboBox(animalAttributesPage);
        animalAssertivenessField->setObjectName(QStringLiteral("animalAssertivenessField"));
        animalAssertivenessField->setGeometry(QRect(0, 180, 311, 25));
        animalAssertivenessField->setStyleSheet(QLatin1String("#animalAssertivenessField{\n"
"\n"
"	border-radius:8px;\n"
"	background:white;\n"
"}"));
        animalActivenessField = new QComboBox(animalAttributesPage);
        animalActivenessField->setObjectName(QStringLiteral("animalActivenessField"));
        animalActivenessField->setGeometry(QRect(0, 425, 311, 25));
        animalActivenessField->setStyleSheet(QLatin1String("#animalActivenessField{\n"
"\n"
"	border-radius:8px;\n"
"	background:white;\n"
"}"));
        animalPlayfulnessField = new QComboBox(animalAttributesPage);
        animalPlayfulnessField->setObjectName(QStringLiteral("animalPlayfulnessField"));
        animalPlayfulnessField->setGeometry(QRect(0, 390, 311, 25));
        animalPlayfulnessField->setStyleSheet(QLatin1String("#animalPlayfulnessField{\n"
"\n"
"	border-radius:8px;\n"
"	background:white;\n"
"}"));
        animalDiurnalField = new QComboBox(animalAttributesPage);
        animalDiurnalField->setObjectName(QStringLiteral("animalDiurnalField"));
        animalDiurnalField->setGeometry(QRect(0, 285, 311, 25));
        animalDiurnalField->setStyleSheet(QLatin1String("#animalDiurnalField{\n"
"\n"
"	border-radius:8px;\n"
"	background:white;\n"
"}"));
        animalNextPhysBtn = new QPushButton(animalAttributesPage);
        animalNextPhysBtn->setObjectName(QStringLiteral("animalNextPhysBtn"));
        animalNextPhysBtn->setGeometry(QRect(190, 460, 101, 31));
        animalNextPhysBtn->setCursor(QCursor(Qt::PointingHandCursor));
        animalNextPhysBtn->setStyleSheet(QLatin1String("#animalNextPhysBtn{\n"
"	background: white;\n"
"	border-radius: 15px;\n"
"	border: 2px solid black\n"
"\n"
"\n"
"}\n"
"\n"
"#animalNextPhysBtn:hover{\n"
"	background: #fab1a0\n"
"\n"
"}"));
        animalForm->addWidget(animalAttributesPage);
        animalPhysAttributesPage = new QWidget();
        animalPhysAttributesPage->setObjectName(QStringLiteral("animalPhysAttributesPage"));
        animalPhysHeadline = new QTextEdit(animalPhysAttributesPage);
        animalPhysHeadline->setObjectName(QStringLiteral("animalPhysHeadline"));
        animalPhysHeadline->setEnabled(false);
        animalPhysHeadline->setGeometry(QRect(10, 10, 321, 41));
        animalPhysHeadline->setStyleSheet(QLatin1String("#animalPhysHeadline{\n"
"\n"
"	background: white;\n"
"	border:none;\n"
"	border-radius: 8px;\n"
"\n"
"}"));
        animalPhysFurLengthField = new QComboBox(animalPhysAttributesPage);
        animalPhysFurLengthField->setObjectName(QStringLiteral("animalPhysFurLengthField"));
        animalPhysFurLengthField->setGeometry(QRect(10, 180, 311, 31));
        animalPhysFurLengthField->setStyleSheet(QLatin1String("#animalPhysFurLengthField{\n"
"\n"
"	border-radius:8px;\n"
"	background:white;\n"
"}"));
        animalPhysFurColourField = new QComboBox(animalPhysAttributesPage);
        animalPhysFurColourField->setObjectName(QStringLiteral("animalPhysFurColourField"));
        animalPhysFurColourField->setGeometry(QRect(10, 100, 311, 31));
        animalPhysFurColourField->setStyleSheet(QLatin1String("#animalPhysFurColourField{\n"
"\n"
"	border-radius:8px;\n"
"	background:white;\n"
"}"));
        animalPhysBodyPatternField = new QComboBox(animalPhysAttributesPage);
        animalPhysBodyPatternField->setObjectName(QStringLiteral("animalPhysBodyPatternField"));
        animalPhysBodyPatternField->setGeometry(QRect(10, 60, 311, 31));
        animalPhysBodyPatternField->setStyleSheet(QLatin1String("#animalPhysBodyPatternField{\n"
"\n"
"	border-radius:8px;\n"
"	background:white;\n"
"}"));
        animalPhysBodyLengthField = new QComboBox(animalPhysAttributesPage);
        animalPhysBodyLengthField->setObjectName(QStringLiteral("animalPhysBodyLengthField"));
        animalPhysBodyLengthField->setGeometry(QRect(10, 100, 311, 31));
        animalPhysBodyLengthField->setStyleSheet(QLatin1String("#animalPhysBodyLengthField{\n"
"\n"
"	border-radius:8px;\n"
"	background:white;\n"
"}"));
        animalPhysWingSpanField = new QComboBox(animalPhysAttributesPage);
        animalPhysWingSpanField->setObjectName(QStringLiteral("animalPhysWingSpanField"));
        animalPhysWingSpanField->setGeometry(QRect(10, 60, 311, 31));
        animalPhysWingSpanField->setStyleSheet(QLatin1String("#animalPhysWingSpanField{\n"
"\n"
"	border-radius:8px;\n"
"	background:white;\n"
"}"));
        animalPhysBeakLengthField = new QComboBox(animalPhysAttributesPage);
        animalPhysBeakLengthField->setObjectName(QStringLiteral("animalPhysBeakLengthField"));
        animalPhysBeakLengthField->setGeometry(QRect(10, 140, 311, 31));
        animalPhysBeakLengthField->setStyleSheet(QLatin1String("#animalPhysBeakLengthField{\n"
"\n"
"	border-radius:8px;\n"
"	background:white;\n"
"}"));
        animalPhysBeakColourField = new QComboBox(animalPhysAttributesPage);
        animalPhysBeakColourField->setObjectName(QStringLiteral("animalPhysBeakColourField"));
        animalPhysBeakColourField->setGeometry(QRect(10, 100, 311, 31));
        animalPhysBeakColourField->setStyleSheet(QLatin1String("#animalPhysBeakColourField{\n"
"\n"
"	border-radius:8px;\n"
"	background:white;\n"
"}"));
        animalPhysScaleTypeField = new QComboBox(animalPhysAttributesPage);
        animalPhysScaleTypeField->setObjectName(QStringLiteral("animalPhysScaleTypeField"));
        animalPhysScaleTypeField->setGeometry(QRect(10, 140, 311, 31));
        animalPhysScaleTypeField->setStyleSheet(QLatin1String("#animalPhysScaleTypeField{\n"
"\n"
"	border-radius:8px;\n"
"	background:white;\n"
"}"));
        animalPhysFinnSizeField = new QComboBox(animalPhysAttributesPage);
        animalPhysFinnSizeField->setObjectName(QStringLiteral("animalPhysFinnSizeField"));
        animalPhysFinnSizeField->setGeometry(QRect(10, 140, 311, 31));
        animalPhysFinnSizeField->setStyleSheet(QLatin1String("#animalPhysFinnSizeField{\n"
"\n"
"	border-radius:8px;\n"
"	background:white;\n"
"}"));
        backToNonPhysBtn = new QPushButton(animalPhysAttributesPage);
        backToNonPhysBtn->setObjectName(QStringLiteral("backToNonPhysBtn"));
        backToNonPhysBtn->setGeometry(QRect(10, 220, 121, 51));
        backToNonPhysBtn->setCursor(QCursor(Qt::PointingHandCursor));
        backToNonPhysBtn->setStyleSheet(QLatin1String("#backToNonPhysBtn{\n"
"	background: white;\n"
"	border-radius: 25px;\n"
"  background: white;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"#backToNonPhysBtn:hover{\n"
"	background: #fab1a0\n"
"\n"
"}"));
        animalPhysBuildField = new QComboBox(animalPhysAttributesPage);
        animalPhysBuildField->setObjectName(QStringLiteral("animalPhysBuildField"));
        animalPhysBuildField->setGeometry(QRect(10, 140, 311, 31));
        animalPhysBuildField->setStyleSheet(QLatin1String("#animalPhysBuildField{\n"
"\n"
"	border-radius:8px;\n"
"	background:white;\n"
"}"));
        animalForm->addWidget(animalPhysAttributesPage);
        addClientPopUp = new QGroupBox(canvasStaff);
        addClientPopUp->setObjectName(QStringLiteral("addClientPopUp"));
        addClientPopUp->setEnabled(true);
        addClientPopUp->setGeometry(QRect(60, 530, 71, 21));
        addClientPopUp->setStyleSheet(QLatin1String("background: qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);\n"
""));
        addClientPopUp->setCheckable(false);
        saveClientBtn = new QPushButton(addClientPopUp);
        saveClientBtn->setObjectName(QStringLiteral("saveClientBtn"));
        saveClientBtn->setGeometry(QRect(500, 460, 141, 51));
        saveClientBtn->setCursor(QCursor(Qt::PointingHandCursor));
        saveClientBtn->setStyleSheet(QLatin1String("#saveClientBtn{\n"
"	background: white;\n"
"	border-radius: 25px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"#saveClientBtn:hover{\n"
"	background: #fab1a0\n"
"\n"
"}"));
        closeClientBtn = new QPushButton(addClientPopUp);
        closeClientBtn->setObjectName(QStringLiteral("closeClientBtn"));
        closeClientBtn->setGeometry(QRect(370, 460, 121, 51));
        closeClientBtn->setCursor(QCursor(Qt::PointingHandCursor));
        closeClientBtn->setStyleSheet(QLatin1String("#closeClientBtn{\n"
"	background: white;\n"
"	border-radius: 25px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"#closeClientBtn:hover{\n"
"	background: #fab1a0\n"
"\n"
"}"));
        clientTitlePopUp = new QTextEdit(addClientPopUp);
        clientTitlePopUp->setObjectName(QStringLiteral("clientTitlePopUp"));
        clientTitlePopUp->setEnabled(false);
        clientTitlePopUp->setGeometry(QRect(380, 10, 251, 41));
        clientTitlePopUp->setStyleSheet(QLatin1String("#clientTitlePopUp{\n"
"\n"
"	background: white;\n"
"	border:none;\n"
"	border-radius: 8px;\n"
"\n"
"}"));
        clientForm = new QStackedWidget(addClientPopUp);
        clientForm->setObjectName(QStringLiteral("clientForm"));
        clientForm->setGeometry(QRect(10, 10, 341, 511));
        clientForm->setStyleSheet(QStringLiteral("border: none;"));
        basicInfoPage = new QWidget();
        basicInfoPage->setObjectName(QStringLiteral("basicInfoPage"));
        clientFNameField = new QTextEdit(basicInfoPage);
        clientFNameField->setObjectName(QStringLiteral("clientFNameField"));
        clientFNameField->setEnabled(true);
        clientFNameField->setGeometry(QRect(10, 60, 301, 31));
        clientFNameField->setStyleSheet(QLatin1String("#clientFNameField{\n"
"	background: white;\n"
"	border-radius: 8px;\n"
"\n"
"\n"
"\n"
"}"));
        clientLNameField = new QTextEdit(basicInfoPage);
        clientLNameField->setObjectName(QStringLiteral("clientLNameField"));
        clientLNameField->setEnabled(true);
        clientLNameField->setGeometry(QRect(10, 100, 301, 31));
        clientLNameField->setStyleSheet(QLatin1String("#clientLNameField{\n"
"	background: white;\n"
"	border-radius: 8px;\n"
"\n"
"\n"
"\n"
"}"));
        clientAgeField = new QTextEdit(basicInfoPage);
        clientAgeField->setObjectName(QStringLiteral("clientAgeField"));
        clientAgeField->setEnabled(true);
        clientAgeField->setGeometry(QRect(10, 140, 301, 31));
        clientAgeField->setStyleSheet(QLatin1String("#clientAgeField{\n"
"	background: white;\n"
"	border-radius: 8px;\n"
"\n"
"\n"
"\n"
"}"));
        clientEmailField = new QTextEdit(basicInfoPage);
        clientEmailField->setObjectName(QStringLiteral("clientEmailField"));
        clientEmailField->setEnabled(true);
        clientEmailField->setGeometry(QRect(10, 190, 301, 31));
        clientEmailField->setStyleSheet(QLatin1String("#clientEmailField{\n"
"	background: white;\n"
"	border-radius: 8px;\n"
"\n"
"\n"
"\n"
"}"));
        clientPhoneField = new QTextEdit(basicInfoPage);
        clientPhoneField->setObjectName(QStringLiteral("clientPhoneField"));
        clientPhoneField->setEnabled(true);
        clientPhoneField->setGeometry(QRect(10, 240, 311, 31));
        clientPhoneField->setStyleSheet(QLatin1String("#clientPhoneField{\n"
"	background: white;\n"
"	border-radius: 8px;\n"
"\n"
"\n"
"\n"
"}"));
        clientGenderFIeld = new QComboBox(basicInfoPage);
        clientGenderFIeld->setObjectName(QStringLiteral("clientGenderFIeld"));
        clientGenderFIeld->setGeometry(QRect(10, 290, 301, 31));
        clientGenderFIeld->setStyleSheet(QLatin1String("#clientGenderFIeld{\n"
"	background: white;\n"
"	border-radius: 8px;\n"
"\n"
"\n"
"}\n"
"#clientGenderFIeld:hover{\n"
"	background: white;\n"
"	color: white;\n"
"\n"
"}\n"
"#QListView{\n"
"\n"
"	background: white;\n"
"}\n"
"\n"
"\n"
""));
        nextInfoBtn = new QPushButton(basicInfoPage);
        nextInfoBtn->setObjectName(QStringLiteral("nextInfoBtn"));
        nextInfoBtn->setGeometry(QRect(220, 360, 101, 41));
        nextInfoBtn->setStyleSheet(QLatin1String("#nextInfoBtn{\n"
"	background: white;\n"
"	border-radius: 15px;\n"
"	border: 2px solid black;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"#nextInfoBtn:hover{\n"
"	background: #fab1a0\n"
"\n"
"}\n"
"\n"
""));
        clientContactInfoTitleLabel = new QTextEdit(basicInfoPage);
        clientContactInfoTitleLabel->setObjectName(QStringLiteral("clientContactInfoTitleLabel"));
        clientContactInfoTitleLabel->setEnabled(false);
        clientContactInfoTitleLabel->setGeometry(QRect(70, 10, 191, 41));
        clientContactInfoTitleLabel->setStyleSheet(QLatin1String("#clientContactInfoTitleLabel{\n"
"\n"
"	background: white;\n"
"	border:none;\n"
"	border-radius: 8px;\n"
"\n"
"}"));
        clientContactInfoTitleLabel->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        clientForm->addWidget(basicInfoPage);
        attributesPage = new QWidget();
        attributesPage->setObjectName(QStringLiteral("attributesPage"));
        clientActivenessField = new QComboBox(attributesPage);
        clientActivenessField->setObjectName(QStringLiteral("clientActivenessField"));
        clientActivenessField->setGeometry(QRect(10, 50, 311, 25));
        clientActivenessField->setStyleSheet(QLatin1String("#clientActivenessField{\n"
"\n"
"	border-radius:8px;\n"
"	background:white;\n"
"}"));
        clientAffectionismField = new QComboBox(attributesPage);
        clientAffectionismField->setObjectName(QStringLiteral("clientAffectionismField"));
        clientAffectionismField->setGeometry(QRect(10, 80, 311, 25));
        clientAffectionismField->setStyleSheet(QLatin1String("#clientAffectionismField{\n"
"\n"
"	border-radius:8px;\n"
"	background:white;\n"
"}"));
        clientHabitatPreferenceField = new QComboBox(attributesPage);
        clientHabitatPreferenceField->setObjectName(QStringLiteral("clientHabitatPreferenceField"));
        clientHabitatPreferenceField->setGeometry(QRect(10, 115, 311, 25));
        clientHabitatPreferenceField->setStyleSheet(QLatin1String("#clientHabitatPreferenceField{\n"
"\n"
"	border-radius:8px;\n"
"	background:white;\n"
"}"));
        clientDiurnalField = new QComboBox(attributesPage);
        clientDiurnalField->setObjectName(QStringLiteral("clientDiurnalField"));
        clientDiurnalField->setGeometry(QRect(10, 150, 311, 25));
        clientDiurnalField->setStyleSheet(QLatin1String("#clientDiurnalField{\n"
"\n"
"	border-radius:8px;\n"
"	background:white;\n"
"}"));
        clientTraitsTitleLabel = new QTextEdit(attributesPage);
        clientTraitsTitleLabel->setObjectName(QStringLiteral("clientTraitsTitleLabel"));
        clientTraitsTitleLabel->setEnabled(false);
        clientTraitsTitleLabel->setGeometry(QRect(50, 10, 231, 31));
        clientTraitsTitleLabel->setStyleSheet(QLatin1String("#clientTraitsTitleLabel{\n"
"\n"
"	background: white;\n"
"	border:none;\n"
"	border-radius: 8px;\n"
"\n"
"}"));
        backInfoBtn = new QPushButton(attributesPage);
        backInfoBtn->setObjectName(QStringLiteral("backInfoBtn"));
        backInfoBtn->setGeometry(QRect(30, 200, 101, 41));
        backInfoBtn->setStyleSheet(QLatin1String("#backInfoBtn{\n"
"	background: white;\n"
"	border-radius: 15px;\n"
"	border: 2px solid black;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"#backInfoBtn:hover{\n"
"	background: #fab1a0\n"
"\n"
"}\n"
"\n"
""));
        nextToClientNonPhysPreBtn = new QPushButton(attributesPage);
        nextToClientNonPhysPreBtn->setObjectName(QStringLiteral("nextToClientNonPhysPreBtn"));
        nextToClientNonPhysPreBtn->setGeometry(QRect(190, 200, 101, 41));
        nextToClientNonPhysPreBtn->setStyleSheet(QLatin1String("#nextToClientNonPhysPreBtn{\n"
"	background: white;\n"
"	border-radius: 15px;\n"
"	border: 2px solid black;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"#nextToClientNonPhysPreBtn:hover{\n"
"	background: #fab1a0\n"
"\n"
"}\n"
"\n"
""));
        clientForm->addWidget(attributesPage);
        emptyPageKeepIt = new QWidget();
        emptyPageKeepIt->setObjectName(QStringLiteral("emptyPageKeepIt"));
        clientNonPhysPreEnergeticField = new QComboBox(emptyPageKeepIt);
        clientNonPhysPreEnergeticField->setObjectName(QStringLiteral("clientNonPhysPreEnergeticField"));
        clientNonPhysPreEnergeticField->setGeometry(QRect(10, 245, 311, 25));
        clientNonPhysPreEnergeticField->setStyleSheet(QLatin1String("\n"
"\n"
"	border-radius:8px;\n"
"	background:white;\n"
""));
        clientNonPhysPreAppetiField = new QComboBox(emptyPageKeepIt);
        clientNonPhysPreAppetiField->setObjectName(QStringLiteral("clientNonPhysPreAppetiField"));
        clientNonPhysPreAppetiField->setGeometry(QRect(10, 285, 311, 25));
        clientNonPhysPreAppetiField->setStyleSheet(QLatin1String("\n"
"\n"
"	border-radius:8px;\n"
"	background:white;\n"
""));
        clientNonPhysPreIntelliField = new QComboBox(emptyPageKeepIt);
        clientNonPhysPreIntelliField->setObjectName(QStringLiteral("clientNonPhysPreIntelliField"));
        clientNonPhysPreIntelliField->setGeometry(QRect(10, 105, 311, 25));
        clientNonPhysPreIntelliField->setStyleSheet(QLatin1String("\n"
"\n"
"	border-radius:8px;\n"
"	background:white;\n"
""));
        clientNonPhysPreSpaciousField = new QComboBox(emptyPageKeepIt);
        clientNonPhysPreSpaciousField->setObjectName(QStringLiteral("clientNonPhysPreSpaciousField"));
        clientNonPhysPreSpaciousField->setGeometry(QRect(10, 210, 311, 25));
        clientNonPhysPreSpaciousField->setStyleSheet(QLatin1String("\n"
"\n"
"	border-radius:8px;\n"
"	background:white;\n"
""));
        clientNonPhysPreIndividField = new QComboBox(emptyPageKeepIt);
        clientNonPhysPreIndividField->setObjectName(QStringLiteral("clientNonPhysPreIndividField"));
        clientNonPhysPreIndividField->setGeometry(QRect(10, 70, 311, 25));
        clientNonPhysPreIndividField->setStyleSheet(QLatin1String("\n"
"\n"
"	border-radius:8px;\n"
"	background:white;\n"
""));
        clientNonPhysPreAssertField = new QComboBox(emptyPageKeepIt);
        clientNonPhysPreAssertField->setObjectName(QStringLiteral("clientNonPhysPreAssertField"));
        clientNonPhysPreAssertField->setGeometry(QRect(10, 175, 311, 25));
        clientNonPhysPreAssertField->setStyleSheet(QLatin1String("\n"
"\n"
"	border-radius:8px;\n"
"	background:white;\n"
""));
        clientNonPhysPreDiscipField = new QComboBox(emptyPageKeepIt);
        clientNonPhysPreDiscipField->setObjectName(QStringLiteral("clientNonPhysPreDiscipField"));
        clientNonPhysPreDiscipField->setGeometry(QRect(10, 140, 311, 25));
        clientNonPhysPreDiscipField->setStyleSheet(QLatin1String("\n"
"\n"
"	border-radius:8px;\n"
"	background:white;\n"
""));
        clientNonPhysPrePlayfulField = new QComboBox(emptyPageKeepIt);
        clientNonPhysPrePlayfulField->setObjectName(QStringLiteral("clientNonPhysPrePlayfulField"));
        clientNonPhysPrePlayfulField->setGeometry(QRect(10, 325, 311, 25));
        clientNonPhysPrePlayfulField->setStyleSheet(QLatin1String("\n"
"\n"
"	border-radius:8px;\n"
"	background:white;\n"
""));
        backToCharacterTraitsBtn = new QPushButton(emptyPageKeepIt);
        backToCharacterTraitsBtn->setObjectName(QStringLiteral("backToCharacterTraitsBtn"));
        backToCharacterTraitsBtn->setGeometry(QRect(10, 365, 121, 41));
        backToCharacterTraitsBtn->setCursor(QCursor(Qt::PointingHandCursor));
        backToCharacterTraitsBtn->setStyleSheet(QLatin1String("#backToCharacterTraitsBtn{\n"
"	background: white;\n"
"	border-radius: 15px;\n"
" 	border: 2px solid black;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"#backToCharacterTraitsBtn:hover{\n"
"	background: #fab1a0\n"
"\n"
"}"));
        clientTraitsTitleLabel_2 = new QTextEdit(emptyPageKeepIt);
        clientTraitsTitleLabel_2->setObjectName(QStringLiteral("clientTraitsTitleLabel_2"));
        clientTraitsTitleLabel_2->setEnabled(false);
        clientTraitsTitleLabel_2->setGeometry(QRect(0, 20, 331, 31));
        clientTraitsTitleLabel_2->setStyleSheet(QLatin1String("\n"
"\n"
"	background: white;\n"
"	border:none;\n"
"	border-radius: 8px;\n"
""));
        clientTraitsTitleLabel_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        clientForm->addWidget(emptyPageKeepIt);
        clientErrMessage = new QTextEdit(addClientPopUp);
        clientErrMessage->setObjectName(QStringLiteral("clientErrMessage"));
        clientErrMessage->setGeometry(QRect(370, 210, 261, 131));
        clientErrMessage->setStyleSheet(QStringLiteral("background: white"));
        clientErrMessage->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        clientErrMessage->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        clientSucessMessage = new QTextEdit(addClientPopUp);
        clientSucessMessage->setObjectName(QStringLiteral("clientSucessMessage"));
        clientSucessMessage->setGeometry(QRect(370, 140, 261, 51));
        clientSucessMessage->setStyleSheet(QStringLiteral("background: white"));
        clientSucessMessage->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        clientSucessMessage->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        viewAnimalsListPopUp = new QStackedWidget(canvasStaff);
        viewAnimalsListPopUp->setObjectName(QStringLiteral("viewAnimalsListPopUp"));
        viewAnimalsListPopUp->setGeometry(QRect(10, 10, 651, 541));
        viewAnimalsListPopUp->setStyleSheet(QLatin1String("background: qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);\n"
""));
        viewAnimalsListPopUpPage = new QWidget();
        viewAnimalsListPopUpPage->setObjectName(QStringLiteral("viewAnimalsListPopUpPage"));
        animalsListTitle = new QTextBrowser(viewAnimalsListPopUpPage);
        animalsListTitle->setObjectName(QStringLiteral("animalsListTitle"));
        animalsListTitle->setEnabled(true);
        animalsListTitle->setGeometry(QRect(130, 10, 411, 41));
        animalsListTitle->setStyleSheet(QLatin1String("#animalsListTitle{\n"
"		background:white;\n"
"		border-radius:15px;\n"
"	    border:none;\n"
"}"));
        animalsListTable = new QTableWidget(viewAnimalsListPopUpPage);
        if (animalsListTable->columnCount() < 6)
            animalsListTable->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        animalsListTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        animalsListTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        animalsListTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        animalsListTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        animalsListTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        animalsListTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        if (animalsListTable->rowCount() < 1)
            animalsListTable->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        animalsListTable->setVerticalHeaderItem(0, __qtablewidgetitem6);
        animalsListTable->setObjectName(QStringLiteral("animalsListTable"));
        animalsListTable->setGeometry(QRect(10, 60, 621, 311));
        animalsListTable->setStyleSheet(QStringLiteral("border:none;"));
        animalsListTable->setEditTriggers(QAbstractItemView::AnyKeyPressed);
        viewAnimalDetailsBtn = new QPushButton(viewAnimalsListPopUpPage);
        viewAnimalDetailsBtn->setObjectName(QStringLiteral("viewAnimalDetailsBtn"));
        viewAnimalDetailsBtn->setGeometry(QRect(110, 410, 141, 51));
        viewAnimalDetailsBtn->setCursor(QCursor(Qt::PointingHandCursor));
        viewAnimalDetailsBtn->setStyleSheet(QLatin1String("#viewAnimalDetailsBtn{\n"
"\n"
"border: 3px solid qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);\n"
"border-radius: 25px;\n"
"background:white;\n"
"}\n"
"\n"
"#viewAnimalDetailsBtn:hover{\n"
"\n"
"	background:  qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);\n"
"	color:#555;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        editAnimalDetailsBtn = new QPushButton(viewAnimalsListPopUpPage);
        editAnimalDetailsBtn->setObjectName(QStringLiteral("editAnimalDetailsBtn"));
        editAnimalDetailsBtn->setGeometry(QRect(320, 410, 141, 51));
        editAnimalDetailsBtn->setCursor(QCursor(Qt::PointingHandCursor));
        editAnimalDetailsBtn->setStyleSheet(QLatin1String("#editAnimalDetailsBtn{\n"
"\n"
"border: 3px solid qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);\n"
"border-radius: 25px;\n"
"background:white;\n"
"}\n"
"\n"
"#editAnimalDetailsBtn:hover{\n"
"\n"
"	background:  qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);\n"
"	color:#555;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        viewAnimalsListPopUp->addWidget(viewAnimalsListPopUpPage);
        detailsPage = new QWidget();
        detailsPage->setObjectName(QStringLiteral("detailsPage"));
        animalInfoDetailsBox = new QGroupBox(detailsPage);
        animalInfoDetailsBox->setObjectName(QStringLiteral("animalInfoDetailsBox"));
        animalInfoDetailsBox->setGeometry(QRect(10, 120, 281, 261));
        animalInfoDetailsBox->setStyleSheet(QStringLiteral("border:none"));
        animalNameDetail = new QTextEdit(animalInfoDetailsBox);
        animalNameDetail->setObjectName(QStringLiteral("animalNameDetail"));
        animalNameDetail->setGeometry(QRect(60, 20, 211, 31));
        animalNameDetail->setStyleSheet(QLatin1String("#animalNameDetail{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        animalNameDetail->setReadOnly(true);
        nameAnimalDetailLabel = new QLabel(animalInfoDetailsBox);
        nameAnimalDetailLabel->setObjectName(QStringLiteral("nameAnimalDetailLabel"));
        nameAnimalDetailLabel->setGeometry(QRect(0, 21, 61, 28));
        nameAnimalDetailLabel->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        animalTypeDetailLabel = new QLabel(animalInfoDetailsBox);
        animalTypeDetailLabel->setObjectName(QStringLiteral("animalTypeDetailLabel"));
        animalTypeDetailLabel->setGeometry(QRect(0, 60, 61, 28));
        animalTypeDetailLabel->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        animalSpeciesDetailLabel = new QLabel(animalInfoDetailsBox);
        animalSpeciesDetailLabel->setObjectName(QStringLiteral("animalSpeciesDetailLabel"));
        animalSpeciesDetailLabel->setGeometry(QRect(0, 100, 61, 28));
        animalSpeciesDetailLabel->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        animalColourDetailLabel = new QLabel(animalInfoDetailsBox);
        animalColourDetailLabel->setObjectName(QStringLiteral("animalColourDetailLabel"));
        animalColourDetailLabel->setGeometry(QRect(0, 140, 61, 28));
        animalColourDetailLabel->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        animalAgeDetailLabel = new QLabel(animalInfoDetailsBox);
        animalAgeDetailLabel->setObjectName(QStringLiteral("animalAgeDetailLabel"));
        animalAgeDetailLabel->setGeometry(QRect(0, 180, 61, 28));
        animalAgeDetailLabel->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        animalGenderDetailLabel = new QLabel(animalInfoDetailsBox);
        animalGenderDetailLabel->setObjectName(QStringLiteral("animalGenderDetailLabel"));
        animalGenderDetailLabel->setGeometry(QRect(0, 220, 61, 28));
        animalGenderDetailLabel->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        animalColourDetail = new QLineEdit(animalInfoDetailsBox);
        animalColourDetail->setObjectName(QStringLiteral("animalColourDetail"));
        animalColourDetail->setGeometry(QRect(60, 140, 211, 31));
        animalColourDetail->setStyleSheet(QLatin1String("#animalColourDetail{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        animalTypeDetail = new QLineEdit(animalInfoDetailsBox);
        animalTypeDetail->setObjectName(QStringLiteral("animalTypeDetail"));
        animalTypeDetail->setGeometry(QRect(60, 60, 211, 31));
        animalTypeDetail->setStyleSheet(QLatin1String("#animalTypeDetail{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        animalSpeciesDetail = new QLineEdit(animalInfoDetailsBox);
        animalSpeciesDetail->setObjectName(QStringLiteral("animalSpeciesDetail"));
        animalSpeciesDetail->setGeometry(QRect(60, 100, 211, 31));
        animalSpeciesDetail->setStyleSheet(QLatin1String("#animalSpeciesDetail{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        animalAgeDetail = new QLineEdit(animalInfoDetailsBox);
        animalAgeDetail->setObjectName(QStringLiteral("animalAgeDetail"));
        animalAgeDetail->setGeometry(QRect(60, 180, 211, 31));
        animalAgeDetail->setStyleSheet(QLatin1String("#animalAgeDetail{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        animalGenderDetail = new QLineEdit(animalInfoDetailsBox);
        animalGenderDetail->setObjectName(QStringLiteral("animalGenderDetail"));
        animalGenderDetail->setGeometry(QRect(60, 220, 211, 31));
        animalGenderDetail->setStyleSheet(QLatin1String("#animalGenderDetail{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        animalPhysicalAttrBox = new QGroupBox(detailsPage);
        animalPhysicalAttrBox->setObjectName(QStringLiteral("animalPhysicalAttrBox"));
        animalPhysicalAttrBox->setGeometry(QRect(10, 380, 281, 141));
        animalPhysicalAttrBox->setStyleSheet(QStringLiteral("border:none"));
        animalHeadLineAttrbView = new QTextBrowser(animalPhysicalAttrBox);
        animalHeadLineAttrbView->setObjectName(QStringLiteral("animalHeadLineAttrbView"));
        animalHeadLineAttrbView->setGeometry(QRect(0, 0, 261, 31));
        animalHeadLineAttrbView->setStyleSheet(QLatin1String("border: none;\n"
"background: white;\n"
"border-radius:15px;"));
        beakColourLabel = new QLabel(animalPhysicalAttrBox);
        beakColourLabel->setObjectName(QStringLiteral("beakColourLabel"));
        beakColourLabel->setGeometry(QRect(0, 107, 98, 28));
        beakColourLabel->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        bodyLengthLabel = new QLabel(animalPhysicalAttrBox);
        bodyLengthLabel->setObjectName(QStringLiteral("bodyLengthLabel"));
        bodyLengthLabel->setGeometry(QRect(0, 107, 98, 28));
        bodyLengthLabel->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        furColourLabel = new QLabel(animalPhysicalAttrBox);
        furColourLabel->setObjectName(QStringLiteral("furColourLabel"));
        furColourLabel->setGeometry(QRect(0, 107, 98, 28));
        furColourLabel->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        beakLengthLabel = new QLabel(animalPhysicalAttrBox);
        beakLengthLabel->setObjectName(QStringLiteral("beakLengthLabel"));
        beakLengthLabel->setGeometry(QRect(0, 40, 98, 28));
        beakLengthLabel->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        buildLabel = new QLabel(animalPhysicalAttrBox);
        buildLabel->setObjectName(QStringLiteral("buildLabel"));
        buildLabel->setGeometry(QRect(0, 40, 98, 28));
        buildLabel->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        finnsizeLabel = new QLabel(animalPhysicalAttrBox);
        finnsizeLabel->setObjectName(QStringLiteral("finnsizeLabel"));
        finnsizeLabel->setGeometry(QRect(0, 40, 98, 28));
        finnsizeLabel->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        scaleTypeLabel = new QLabel(animalPhysicalAttrBox);
        scaleTypeLabel->setObjectName(QStringLiteral("scaleTypeLabel"));
        scaleTypeLabel->setGeometry(QRect(0, 40, 98, 28));
        scaleTypeLabel->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        bodyPatternLabel = new QLabel(animalPhysicalAttrBox);
        bodyPatternLabel->setObjectName(QStringLiteral("bodyPatternLabel"));
        bodyPatternLabel->setGeometry(QRect(0, 75, 98, 28));
        bodyPatternLabel->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        wingSpanLabel = new QLabel(animalPhysicalAttrBox);
        wingSpanLabel->setObjectName(QStringLiteral("wingSpanLabel"));
        wingSpanLabel->setGeometry(QRect(0, 75, 98, 28));
        wingSpanLabel->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        furLengthLabel = new QLabel(animalPhysicalAttrBox);
        furLengthLabel->setObjectName(QStringLiteral("furLengthLabel"));
        furLengthLabel->setGeometry(QRect(0, 75, 98, 28));
        furLengthLabel->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        animalAttributeOneField = new QLineEdit(animalPhysicalAttrBox);
        animalAttributeOneField->setObjectName(QStringLiteral("animalAttributeOneField"));
        animalAttributeOneField->setGeometry(QRect(100, 40, 171, 31));
        animalAttributeOneField->setStyleSheet(QLatin1String("#animalAttributeOneField{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        animalAttributeTwoField = new QLineEdit(animalPhysicalAttrBox);
        animalAttributeTwoField->setObjectName(QStringLiteral("animalAttributeTwoField"));
        animalAttributeTwoField->setGeometry(QRect(100, 73, 171, 31));
        animalAttributeTwoField->setStyleSheet(QLatin1String("#animalAttributeTwoField{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        animalAttributeThreeField = new QLineEdit(animalPhysicalAttrBox);
        animalAttributeThreeField->setObjectName(QStringLiteral("animalAttributeThreeField"));
        animalAttributeThreeField->setGeometry(QRect(100, 105, 171, 31));
        animalAttributeThreeField->setStyleSheet(QLatin1String("#animalAttributeThreeField{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        animalNonPhysicalAttrBox = new QGroupBox(detailsPage);
        animalNonPhysicalAttrBox->setObjectName(QStringLiteral("animalNonPhysicalAttrBox"));
        animalNonPhysicalAttrBox->setGeometry(QRect(290, 60, 361, 421));
        animalNonPhysicalAttrBox->setStyleSheet(QStringLiteral("border:none"));
        animalNonPhysLabel1 = new QLabel(animalNonPhysicalAttrBox);
        animalNonPhysLabel1->setObjectName(QStringLiteral("animalNonPhysLabel1"));
        animalNonPhysLabel1->setGeometry(QRect(10, 10, 101, 31));
        animalNonPhysLabel1->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        animalNonPhysLabel2 = new QLabel(animalNonPhysicalAttrBox);
        animalNonPhysLabel2->setObjectName(QStringLiteral("animalNonPhysLabel2"));
        animalNonPhysLabel2->setGeometry(QRect(10, 45, 101, 28));
        animalNonPhysLabel2->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        animalNonPhysLabel3 = new QLabel(animalNonPhysicalAttrBox);
        animalNonPhysLabel3->setObjectName(QStringLiteral("animalNonPhysLabel3"));
        animalNonPhysLabel3->setGeometry(QRect(10, 77, 101, 28));
        animalNonPhysLabel3->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        animalNonPhysLabel4 = new QLabel(animalNonPhysicalAttrBox);
        animalNonPhysLabel4->setObjectName(QStringLiteral("animalNonPhysLabel4"));
        animalNonPhysLabel4->setGeometry(QRect(10, 110, 101, 28));
        animalNonPhysLabel4->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        animalNonPhysLabel5 = new QLabel(animalNonPhysicalAttrBox);
        animalNonPhysLabel5->setObjectName(QStringLiteral("animalNonPhysLabel5"));
        animalNonPhysLabel5->setGeometry(QRect(10, 144, 101, 28));
        animalNonPhysLabel5->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        animalNonPhysLabel6 = new QLabel(animalNonPhysicalAttrBox);
        animalNonPhysLabel6->setObjectName(QStringLiteral("animalNonPhysLabel6"));
        animalNonPhysLabel6->setGeometry(QRect(10, 178, 101, 28));
        animalNonPhysLabel6->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        animalNonPhysLabel9 = new QLabel(animalNonPhysicalAttrBox);
        animalNonPhysLabel9->setObjectName(QStringLiteral("animalNonPhysLabel9"));
        animalNonPhysLabel9->setGeometry(QRect(10, 245, 101, 28));
        animalNonPhysLabel9->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        animalNonPhysLabel8 = new QLabel(animalNonPhysicalAttrBox);
        animalNonPhysLabel8->setObjectName(QStringLiteral("animalNonPhysLabel8"));
        animalNonPhysLabel8->setGeometry(QRect(10, 213, 101, 28));
        animalNonPhysLabel8->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        animalNonPhysLabel10 = new QLabel(animalNonPhysicalAttrBox);
        animalNonPhysLabel10->setObjectName(QStringLiteral("animalNonPhysLabel10"));
        animalNonPhysLabel10->setGeometry(QRect(10, 277, 101, 28));
        animalNonPhysLabel10->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        animalNonPhysLabel11 = new QLabel(animalNonPhysicalAttrBox);
        animalNonPhysLabel11->setObjectName(QStringLiteral("animalNonPhysLabel11"));
        animalNonPhysLabel11->setGeometry(QRect(10, 312, 101, 28));
        animalNonPhysLabel11->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        animalNonPhysLabel12 = new QLabel(animalNonPhysicalAttrBox);
        animalNonPhysLabel12->setObjectName(QStringLiteral("animalNonPhysLabel12"));
        animalNonPhysLabel12->setGeometry(QRect(10, 345, 101, 28));
        animalNonPhysLabel12->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        animalNonPhysLabel12_2 = new QLabel(animalNonPhysicalAttrBox);
        animalNonPhysLabel12_2->setObjectName(QStringLiteral("animalNonPhysLabel12_2"));
        animalNonPhysLabel12_2->setGeometry(QRect(10, 380, 101, 28));
        animalNonPhysLabel12_2->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        animalNonPhysicalAttr1 = new QLineEdit(animalNonPhysicalAttrBox);
        animalNonPhysicalAttr1->setObjectName(QStringLiteral("animalNonPhysicalAttr1"));
        animalNonPhysicalAttr1->setGeometry(QRect(110, 10, 251, 31));
        animalNonPhysicalAttr1->setStyleSheet(QLatin1String("#animalNonPhysicalAttr1{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        animalNonPhysicalAttr2 = new QLineEdit(animalNonPhysicalAttrBox);
        animalNonPhysicalAttr2->setObjectName(QStringLiteral("animalNonPhysicalAttr2"));
        animalNonPhysicalAttr2->setGeometry(QRect(110, 44, 251, 31));
        animalNonPhysicalAttr2->setStyleSheet(QLatin1String("#animalNonPhysicalAttr2{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        animalNonPhysicalAttr3 = new QLineEdit(animalNonPhysicalAttrBox);
        animalNonPhysicalAttr3->setObjectName(QStringLiteral("animalNonPhysicalAttr3"));
        animalNonPhysicalAttr3->setGeometry(QRect(110, 77, 251, 31));
        animalNonPhysicalAttr3->setStyleSheet(QLatin1String("#animalNonPhysicalAttr3{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        animalNonPhysicalAttr4 = new QLineEdit(animalNonPhysicalAttrBox);
        animalNonPhysicalAttr4->setObjectName(QStringLiteral("animalNonPhysicalAttr4"));
        animalNonPhysicalAttr4->setGeometry(QRect(110, 110, 251, 31));
        animalNonPhysicalAttr4->setStyleSheet(QLatin1String("#animalNonPhysicalAttr4{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        animalNonPhysicalAttr5 = new QLineEdit(animalNonPhysicalAttrBox);
        animalNonPhysicalAttr5->setObjectName(QStringLiteral("animalNonPhysicalAttr5"));
        animalNonPhysicalAttr5->setGeometry(QRect(110, 143, 251, 31));
        animalNonPhysicalAttr5->setStyleSheet(QLatin1String("#animalNonPhysicalAttr5{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        animalNonPhysicalAttr6 = new QLineEdit(animalNonPhysicalAttrBox);
        animalNonPhysicalAttr6->setObjectName(QStringLiteral("animalNonPhysicalAttr6"));
        animalNonPhysicalAttr6->setGeometry(QRect(110, 177, 251, 31));
        animalNonPhysicalAttr6->setStyleSheet(QLatin1String("#animalNonPhysicalAttr6{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        animalNonPhysicalAttr7 = new QLineEdit(animalNonPhysicalAttrBox);
        animalNonPhysicalAttr7->setObjectName(QStringLiteral("animalNonPhysicalAttr7"));
        animalNonPhysicalAttr7->setGeometry(QRect(110, 210, 251, 31));
        animalNonPhysicalAttr7->setStyleSheet(QLatin1String("#animalNonPhysicalAttr7{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        animalNonPhysicalAttr8 = new QLineEdit(animalNonPhysicalAttrBox);
        animalNonPhysicalAttr8->setObjectName(QStringLiteral("animalNonPhysicalAttr8"));
        animalNonPhysicalAttr8->setGeometry(QRect(110, 244, 251, 31));
        animalNonPhysicalAttr8->setStyleSheet(QLatin1String("#animalNonPhysicalAttr8{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        animalNonPhysicalAttr9 = new QLineEdit(animalNonPhysicalAttrBox);
        animalNonPhysicalAttr9->setObjectName(QStringLiteral("animalNonPhysicalAttr9"));
        animalNonPhysicalAttr9->setGeometry(QRect(110, 277, 251, 31));
        animalNonPhysicalAttr9->setStyleSheet(QLatin1String("#animalNonPhysicalAttr9{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        animalNonPhysicalAttr10 = new QLineEdit(animalNonPhysicalAttrBox);
        animalNonPhysicalAttr10->setObjectName(QStringLiteral("animalNonPhysicalAttr10"));
        animalNonPhysicalAttr10->setGeometry(QRect(110, 310, 251, 31));
        animalNonPhysicalAttr10->setStyleSheet(QLatin1String("#animalNonPhysicalAttr10{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        animalNonPhysicalAttr11 = new QLineEdit(animalNonPhysicalAttrBox);
        animalNonPhysicalAttr11->setObjectName(QStringLiteral("animalNonPhysicalAttr11"));
        animalNonPhysicalAttr11->setGeometry(QRect(110, 344, 251, 31));
        animalNonPhysicalAttr11->setStyleSheet(QLatin1String("#animalNonPhysicalAttr11{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        animalNonPhysicalAttr12 = new QLineEdit(animalNonPhysicalAttrBox);
        animalNonPhysicalAttr12->setObjectName(QStringLiteral("animalNonPhysicalAttr12"));
        animalNonPhysicalAttr12->setGeometry(QRect(110, 380, 251, 31));
        animalNonPhysicalAttr12->setStyleSheet(QLatin1String("#animalNonPhysicalAttr12{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        backViewAnimalsBtn = new QPushButton(detailsPage);
        backViewAnimalsBtn->setObjectName(QStringLiteral("backViewAnimalsBtn"));
        backViewAnimalsBtn->setGeometry(QRect(320, 490, 151, 41));
        backViewAnimalsBtn->setCursor(QCursor(Qt::PointingHandCursor));
        backViewAnimalsBtn->setStyleSheet(QLatin1String("#backViewAnimalsBtn{\n"
"\n"
"border: 2px solid black;\n"
"border-radius: 15px;\n"
"background:white;\n"
"}\n"
"\n"
"#backViewAnimalsBtn:hover{\n"
"\n"
"	background:  qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);\n"
"	color:#555;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        animalOverViewHeadLine_2 = new QTextBrowser(detailsPage);
        animalOverViewHeadLine_2->setObjectName(QStringLiteral("animalOverViewHeadLine_2"));
        animalOverViewHeadLine_2->setGeometry(QRect(330, 30, 321, 31));
        animalOverViewHeadLine_2->setStyleSheet(QLatin1String("border: none;\n"
"background: white;\n"
"border-radius:15px;"));
        saveAnimalsEditsBtn = new QPushButton(detailsPage);
        saveAnimalsEditsBtn->setObjectName(QStringLiteral("saveAnimalsEditsBtn"));
        saveAnimalsEditsBtn->setGeometry(QRect(480, 490, 151, 41));
        saveAnimalsEditsBtn->setCursor(QCursor(Qt::PointingHandCursor));
        saveAnimalsEditsBtn->setStyleSheet(QLatin1String("#saveAnimalsEditsBtn{\n"
"\n"
"border: 2px solid black;\n"
"border-radius: 15px;\n"
"background:white;\n"
"}\n"
"\n"
"#saveAnimalsEditsBtn:hover{\n"
"\n"
"	background:  qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);\n"
"	color:#555;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        animalOverViewHeadLine = new QTextBrowser(detailsPage);
        animalOverViewHeadLine->setObjectName(QStringLiteral("animalOverViewHeadLine"));
        animalOverViewHeadLine->setGeometry(QRect(10, 100, 271, 31));
        animalOverViewHeadLine->setStyleSheet(QLatin1String("border: none;\n"
"background: white;\n"
"border-radius:15px;"));
        animalViewTitle = new QTextBrowser(detailsPage);
        animalViewTitle->setObjectName(QStringLiteral("animalViewTitle"));
        animalViewTitle->setGeometry(QRect(20, 20, 271, 51));
        animalViewTitle->setStyleSheet(QLatin1String("border: none;\n"
"background: white;\n"
"border-radius:15px;"));
        animalViewTitle->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        animalEditTitle = new QTextBrowser(detailsPage);
        animalEditTitle->setObjectName(QStringLiteral("animalEditTitle"));
        animalEditTitle->setGeometry(QRect(20, 20, 271, 51));
        animalEditTitle->setStyleSheet(QLatin1String("border: none;\n"
"background: white;\n"
"border-radius:15px;"));
        animalEditTitle->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        viewAnimalsListPopUp->addWidget(detailsPage);
        editAnimalPage = new QWidget();
        editAnimalPage->setObjectName(QStringLiteral("editAnimalPage"));
        viewAnimalsListPopUp->addWidget(editAnimalPage);
        viewClientsListPopUp = new QStackedWidget(canvasStaff);
        viewClientsListPopUp->setObjectName(QStringLiteral("viewClientsListPopUp"));
        viewClientsListPopUp->setGeometry(QRect(310, 540, 91, 21));
        viewClientsListPopUp->setStyleSheet(QStringLiteral("background: qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);"));
        viewClientsPage = new QWidget();
        viewClientsPage->setObjectName(QStringLiteral("viewClientsPage"));
        viewClientsTitle = new QTextEdit(viewClientsPage);
        viewClientsTitle->setObjectName(QStringLiteral("viewClientsTitle"));
        viewClientsTitle->setEnabled(false);
        viewClientsTitle->setGeometry(QRect(180, 10, 301, 41));
        viewClientsTitle->setStyleSheet(QLatin1String("#viewClientsTitle{\n"
"\n"
"	background: white;\n"
"	border:none;\n"
"	border-radius: 8px;\n"
"\n"
"}"));
        clientListTable = new QTableWidget(viewClientsPage);
        if (clientListTable->columnCount() < 6)
            clientListTable->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        clientListTable->setHorizontalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        clientListTable->setHorizontalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        clientListTable->setHorizontalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        clientListTable->setHorizontalHeaderItem(3, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        clientListTable->setHorizontalHeaderItem(4, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        clientListTable->setHorizontalHeaderItem(5, __qtablewidgetitem12);
        if (clientListTable->rowCount() < 1)
            clientListTable->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        clientListTable->setVerticalHeaderItem(0, __qtablewidgetitem13);
        clientListTable->setObjectName(QStringLiteral("clientListTable"));
        clientListTable->setGeometry(QRect(10, 60, 621, 311));
        clientListTable->setStyleSheet(QStringLiteral("border: none;"));
        clientListTable->setEditTriggers(QAbstractItemView::AnyKeyPressed);
        viewClientDetailsBtn = new QPushButton(viewClientsPage);
        viewClientDetailsBtn->setObjectName(QStringLiteral("viewClientDetailsBtn"));
        viewClientDetailsBtn->setGeometry(QRect(50, 390, 141, 51));
        viewClientDetailsBtn->setCursor(QCursor(Qt::PointingHandCursor));
        viewClientDetailsBtn->setStyleSheet(QLatin1String("#viewClientDetailsBtn{\n"
"\n"
"border: 2px solid black;\n"
"background: white;\n"
"border-radius: 25px;\n"
"}\n"
"\n"
"#viewClientDetailsBtn:hover{\n"
"\n"
"	background:   qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);\n"
"\n"
"\n"
"	color:#555;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        viewClientsListPopUp->addWidget(viewClientsPage);
        viewClientsDetailsPage = new QWidget();
        viewClientsDetailsPage->setObjectName(QStringLiteral("viewClientsDetailsPage"));
        clientNonPhysHeadLine = new QTextBrowser(viewClientsDetailsPage);
        clientNonPhysHeadLine->setObjectName(QStringLiteral("clientNonPhysHeadLine"));
        clientNonPhysHeadLine->setGeometry(QRect(320, 100, 321, 31));
        clientNonPhysHeadLine->setStyleSheet(QLatin1String("border: none;\n"
"background: white;\n"
"border-radius:15px;"));
        clientBasicInfoBox = new QGroupBox(viewClientsDetailsPage);
        clientBasicInfoBox->setObjectName(QStringLiteral("clientBasicInfoBox"));
        clientBasicInfoBox->setGeometry(QRect(10, 130, 281, 261));
        clientBasicInfoBox->setStyleSheet(QStringLiteral("border:none"));
        clientFNameDetailsField = new QTextEdit(clientBasicInfoBox);
        clientFNameDetailsField->setObjectName(QStringLiteral("clientFNameDetailsField"));
        clientFNameDetailsField->setGeometry(QRect(80, 20, 191, 31));
        clientFNameDetailsField->setStyleSheet(QLatin1String("#clientFNameDetailsField{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        clientFNameDetailsField->setReadOnly(true);
        clientLNameDetailsField = new QTextEdit(clientBasicInfoBox);
        clientLNameDetailsField->setObjectName(QStringLiteral("clientLNameDetailsField"));
        clientLNameDetailsField->setGeometry(QRect(80, 60, 191, 31));
        clientLNameDetailsField->setStyleSheet(QLatin1String("#clientLNameDetailsField{\n"
"\n"
"	background:white;\n"
"	\n"
"	border: 2px solid black;\n"
"}"));
        clientLNameDetailsField->setReadOnly(true);
        clientPhoneNumberField = new QTextEdit(clientBasicInfoBox);
        clientPhoneNumberField->setObjectName(QStringLiteral("clientPhoneNumberField"));
        clientPhoneNumberField->setGeometry(QRect(80, 100, 191, 31));
        clientPhoneNumberField->setStyleSheet(QLatin1String("#clientPhoneNumberField{\n"
"\n"
"	background:white;\n"
"	\n"
"	border: 2px solid black;\n"
"}"));
        clientPhoneNumberField->setReadOnly(true);
        clientEmailAddressDetailsField = new QTextEdit(clientBasicInfoBox);
        clientEmailAddressDetailsField->setObjectName(QStringLiteral("clientEmailAddressDetailsField"));
        clientEmailAddressDetailsField->setGeometry(QRect(80, 140, 191, 31));
        clientEmailAddressDetailsField->setStyleSheet(QLatin1String("#clientEmailAddressDetailsField{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        clientEmailAddressDetailsField->setReadOnly(true);
        clientAgeDetailsField = new QTextEdit(clientBasicInfoBox);
        clientAgeDetailsField->setObjectName(QStringLiteral("clientAgeDetailsField"));
        clientAgeDetailsField->setGeometry(QRect(80, 180, 191, 31));
        clientAgeDetailsField->setStyleSheet(QLatin1String("#clientAgeDetailsField{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        clientAgeDetailsField->setReadOnly(true);
        clientGenderDetailsField = new QTextEdit(clientBasicInfoBox);
        clientGenderDetailsField->setObjectName(QStringLiteral("clientGenderDetailsField"));
        clientGenderDetailsField->setGeometry(QRect(80, 220, 191, 31));
        clientGenderDetailsField->setStyleSheet(QLatin1String("#clientGenderDetailsField{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        clientGenderDetailsField->setReadOnly(true);
        clientFNameLabel = new QLabel(clientBasicInfoBox);
        clientFNameLabel->setObjectName(QStringLiteral("clientFNameLabel"));
        clientFNameLabel->setGeometry(QRect(0, 21, 81, 28));
        clientFNameLabel->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        clientLNameLabel = new QLabel(clientBasicInfoBox);
        clientLNameLabel->setObjectName(QStringLiteral("clientLNameLabel"));
        clientLNameLabel->setGeometry(QRect(0, 60, 81, 28));
        clientLNameLabel->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        clientPhoneLabel = new QLabel(clientBasicInfoBox);
        clientPhoneLabel->setObjectName(QStringLiteral("clientPhoneLabel"));
        clientPhoneLabel->setGeometry(QRect(0, 100, 81, 28));
        clientPhoneLabel->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        clientEmailLabel = new QLabel(clientBasicInfoBox);
        clientEmailLabel->setObjectName(QStringLiteral("clientEmailLabel"));
        clientEmailLabel->setGeometry(QRect(0, 140, 81, 28));
        clientEmailLabel->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        clientAgeLabel = new QLabel(clientBasicInfoBox);
        clientAgeLabel->setObjectName(QStringLiteral("clientAgeLabel"));
        clientAgeLabel->setGeometry(QRect(0, 180, 81, 28));
        clientAgeLabel->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        clientGenderLabel = new QLabel(clientBasicInfoBox);
        clientGenderLabel->setObjectName(QStringLiteral("clientGenderLabel"));
        clientGenderLabel->setGeometry(QRect(0, 220, 81, 28));
        clientGenderLabel->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        clientNonPhysAttributesBox = new QGroupBox(viewClientsDetailsPage);
        clientNonPhysAttributesBox->setObjectName(QStringLiteral("clientNonPhysAttributesBox"));
        clientNonPhysAttributesBox->setGeometry(QRect(290, 130, 361, 161));
        clientNonPhysAttributesBox->setStyleSheet(QStringLiteral("border:none"));
        clientHabitatPreferenceDetailsField = new QTextEdit(clientNonPhysAttributesBox);
        clientHabitatPreferenceDetailsField->setObjectName(QStringLiteral("clientHabitatPreferenceDetailsField"));
        clientHabitatPreferenceDetailsField->setGeometry(QRect(110, 10, 251, 31));
        clientHabitatPreferenceDetailsField->setStyleSheet(QLatin1String("#clientHabitatPreferenceDetailsField{\n"
"\n"
"	background:white;\n"
"\n"
"	border: 2px solid black;\n"
"}"));
        clientHabitatPreferenceDetailsField->setReadOnly(true);
        clientActivenessDetailsField = new QTextEdit(clientNonPhysAttributesBox);
        clientActivenessDetailsField->setObjectName(QStringLiteral("clientActivenessDetailsField"));
        clientActivenessDetailsField->setGeometry(QRect(110, 43, 251, 31));
        clientActivenessDetailsField->setStyleSheet(QLatin1String("#clientActivenessDetailsField{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        clientActivenessDetailsField->setReadOnly(true);
        clientNocturnalDetailsField = new QTextEdit(clientNonPhysAttributesBox);
        clientNocturnalDetailsField->setObjectName(QStringLiteral("clientNocturnalDetailsField"));
        clientNocturnalDetailsField->setGeometry(QRect(110, 77, 251, 31));
        clientNocturnalDetailsField->setStyleSheet(QLatin1String("#clientNocturnalDetailsField{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        clientNocturnalDetailsField->setReadOnly(true);
        clientAffectionismDetailsField = new QTextEdit(clientNonPhysAttributesBox);
        clientAffectionismDetailsField->setObjectName(QStringLiteral("clientAffectionismDetailsField"));
        clientAffectionismDetailsField->setGeometry(QRect(110, 110, 251, 31));
        clientAffectionismDetailsField->setStyleSheet(QLatin1String("#clientAffectionismDetailsField{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        clientAffectionismDetailsField->setReadOnly(true);
        clientHabitatLabel = new QLabel(clientNonPhysAttributesBox);
        clientHabitatLabel->setObjectName(QStringLiteral("clientHabitatLabel"));
        clientHabitatLabel->setGeometry(QRect(10, 10, 101, 31));
        clientHabitatLabel->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        clientActivenessLabel = new QLabel(clientNonPhysAttributesBox);
        clientActivenessLabel->setObjectName(QStringLiteral("clientActivenessLabel"));
        clientActivenessLabel->setGeometry(QRect(10, 45, 101, 28));
        clientActivenessLabel->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        clientNocturnalLabel = new QLabel(clientNonPhysAttributesBox);
        clientNocturnalLabel->setObjectName(QStringLiteral("clientNocturnalLabel"));
        clientNocturnalLabel->setGeometry(QRect(10, 77, 101, 28));
        clientNocturnalLabel->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        clientAffectionismLabel = new QLabel(clientNonPhysAttributesBox);
        clientAffectionismLabel->setObjectName(QStringLiteral("clientAffectionismLabel"));
        clientAffectionismLabel->setGeometry(QRect(10, 110, 101, 28));
        clientAffectionismLabel->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        clientOverViewHeadline = new QTextBrowser(viewClientsDetailsPage);
        clientOverViewHeadline->setObjectName(QStringLiteral("clientOverViewHeadline"));
        clientOverViewHeadline->setGeometry(QRect(10, 100, 271, 31));
        clientOverViewHeadline->setStyleSheet(QLatin1String("border: none;\n"
"background: white;\n"
"border-radius:15px;"));
        backtoClientsListBtn = new QPushButton(viewClientsDetailsPage);
        backtoClientsListBtn->setObjectName(QStringLiteral("backtoClientsListBtn"));
        backtoClientsListBtn->setGeometry(QRect(40, 10, 191, 51));
        backtoClientsListBtn->setCursor(QCursor(Qt::PointingHandCursor));
        backtoClientsListBtn->setStyleSheet(QLatin1String("#backtoClientsListBtn{\n"
"\n"
"border: 3px solid black;\n"
"\n"
"border-radius: 25px;\n"
"background: white;\n"
"}\n"
"\n"
"#backtoClientsListBtn:hover{\n"
"\n"
"	background:  qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);\n"
"	color:#555;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        clientHeadLineViewDetail = new QTextBrowser(viewClientsDetailsPage);
        clientHeadLineViewDetail->setObjectName(QStringLiteral("clientHeadLineViewDetail"));
        clientHeadLineViewDetail->setGeometry(QRect(280, 10, 301, 51));
        clientHeadLineViewDetail->setStyleSheet(QLatin1String("border: none;\n"
"background: white;\n"
"border-radius:15px;"));
        viewClientsListPopUp->addWidget(viewClientsDetailsPage);
        backToMenuFromStaffBtn = new QPushButton(StaffPage);
        backToMenuFromStaffBtn->setObjectName(QStringLiteral("backToMenuFromStaffBtn"));
        backToMenuFromStaffBtn->setGeometry(QRect(770, 40, 191, 51));
        backToMenuFromStaffBtn->setCursor(QCursor(Qt::PointingHandCursor));
        backToMenuFromStaffBtn->setStyleSheet(QLatin1String("#backToMenuFromStaffBtn{\n"
"\n"
"border: 3px solid black;\n"
"\n"
"border-radius: 25px;\n"
"background: white;\n"
"}\n"
"\n"
"#backToMenuFromStaffBtn:hover{\n"
"\n"
"	background:  qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);\n"
"	color:#555;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        stackedWidget->addWidget(StaffPage);
        ClientPage = new QWidget();
        ClientPage->setObjectName(QStringLiteral("ClientPage"));
        ClientMenu = new QGroupBox(ClientPage);
        ClientMenu->setObjectName(QStringLiteral("ClientMenu"));
        ClientMenu->setGeometry(QRect(810, 210, 221, 251));
        ClientMenu->setStyleSheet(QLatin1String("background: #fff;\n"
"border-radius: 35px;\n"
"border: 2px solid black;"));
        clientMenuText = new QTextBrowser(ClientMenu);
        clientMenuText->setObjectName(QStringLiteral("clientMenuText"));
        clientMenuText->setGeometry(QRect(20, 20, 171, 41));
        clientMenuText->setStyleSheet(QStringLiteral("border: none"));
        clientMenuBox = new QGroupBox(ClientMenu);
        clientMenuBox->setObjectName(QStringLiteral("clientMenuBox"));
        clientMenuBox->setGeometry(QRect(13, 60, 191, 161));
        clientMenuBox->setStyleSheet(QLatin1String("border: none;\n"
"border-radius: none"));
        clientProfileBtn = new QPushButton(clientMenuBox);
        clientProfileBtn->setObjectName(QStringLiteral("clientProfileBtn"));
        clientProfileBtn->setGeometry(QRect(0, 20, 191, 51));
        clientProfileBtn->setCursor(QCursor(Qt::PointingHandCursor));
        clientProfileBtn->setStyleSheet(QLatin1String("#clientProfileBtn{\n"
"\n"
"border: 3px solid qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);\n"
"border-radius: 25px;\n"
"}\n"
"\n"
"#clientProfileBtn:hover{\n"
"\n"
"	background:  qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);\n"
"	color:#555;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        clientAnimalsBtn = new QPushButton(clientMenuBox);
        clientAnimalsBtn->setObjectName(QStringLiteral("clientAnimalsBtn"));
        clientAnimalsBtn->setGeometry(QRect(0, 80, 191, 51));
        clientAnimalsBtn->setCursor(QCursor(Qt::PointingHandCursor));
        clientAnimalsBtn->setStyleSheet(QLatin1String("#clientAnimalsBtn{\n"
"\n"
"border: 3px solid qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);\n"
"border-radius: 25px;\n"
"}\n"
"\n"
"#clientAnimalsBtn:hover{\n"
"\n"
"	background:  qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);\n"
"	color:#555;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        groupBox_5 = new QGroupBox(ClientPage);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(800, 100, 231, 101));
        groupBox_5->setStyleSheet(QLatin1String("background: #fff;\n"
"border-radius: 35px;\n"
"border: 2px solid black;"));
        labelForUserLoggedIn = new QLabel(groupBox_5);
        labelForUserLoggedIn->setObjectName(QStringLiteral("labelForUserLoggedIn"));
        labelForUserLoggedIn->setGeometry(QRect(30, 10, 161, 20));
        labelForUserLoggedIn->setStyleSheet(QLatin1String("border:none\n"
""));
        userLoggedIn = new QTextBrowser(groupBox_5);
        userLoggedIn->setObjectName(QStringLiteral("userLoggedIn"));
        userLoggedIn->setGeometry(QRect(25, 40, 181, 31));
        userLoggedIn->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ClientCanvas = new QGroupBox(ClientPage);
        ClientCanvas->setObjectName(QStringLiteral("ClientCanvas"));
        ClientCanvas->setGeometry(QRect(50, 10, 751, 551));
        ClientCanvas->setStyleSheet(QLatin1String("background: #fff;\n"
"border:15px;\n"
""));
        viewAnimalsFromClientView = new QStackedWidget(ClientCanvas);
        viewAnimalsFromClientView->setObjectName(QStringLiteral("viewAnimalsFromClientView"));
        viewAnimalsFromClientView->setGeometry(QRect(580, 510, 71, 21));
        viewAnimalsFromClientView->setStyleSheet(QLatin1String("background: qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);\n"
""));
        viewAnimalsPage = new QWidget();
        viewAnimalsPage->setObjectName(QStringLiteral("viewAnimalsPage"));
        animalHeadlineLabel = new QTextBrowser(viewAnimalsPage);
        animalHeadlineLabel->setObjectName(QStringLiteral("animalHeadlineLabel"));
        animalHeadlineLabel->setEnabled(true);
        animalHeadlineLabel->setGeometry(QRect(130, 10, 411, 41));
        animalHeadlineLabel->setStyleSheet(QLatin1String("#animalHeadlineLabel{\n"
"		background:white;\n"
"		border-radius:15px;\n"
"	    border:none;\n"
"}"));
        animalsListFromClientView = new QTableWidget(viewAnimalsPage);
        if (animalsListFromClientView->columnCount() < 6)
            animalsListFromClientView->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        animalsListFromClientView->setHorizontalHeaderItem(0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        animalsListFromClientView->setHorizontalHeaderItem(1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        animalsListFromClientView->setHorizontalHeaderItem(2, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        animalsListFromClientView->setHorizontalHeaderItem(3, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        animalsListFromClientView->setHorizontalHeaderItem(4, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        animalsListFromClientView->setHorizontalHeaderItem(5, __qtablewidgetitem19);
        animalsListFromClientView->setObjectName(QStringLiteral("animalsListFromClientView"));
        animalsListFromClientView->setGeometry(QRect(40, 60, 611, 291));
        animalsListFromClientView->setStyleSheet(QStringLiteral("border:none;"));
        animalsListFromClientView->setEditTriggers(QAbstractItemView::AnyKeyPressed);
        animalViewDetailClientBtn = new QPushButton(viewAnimalsPage);
        animalViewDetailClientBtn->setObjectName(QStringLiteral("animalViewDetailClientBtn"));
        animalViewDetailClientBtn->setGeometry(QRect(50, 410, 141, 51));
        animalViewDetailClientBtn->setCursor(QCursor(Qt::PointingHandCursor));
        animalViewDetailClientBtn->setStyleSheet(QLatin1String("#animalViewDetailClientBtn{\n"
"\n"
"border: 2px solid black;\n"
"border-radius: 25px;\n"
"background: white;\n"
"}\n"
"\n"
"#animalViewDetailClientBtn:hover{\n"
"\n"
"	background:  qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);\n"
"	color:#555;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        viewAnimalsFromClientView->addWidget(viewAnimalsPage);
        animalDetailsPage = new QWidget();
        animalDetailsPage->setObjectName(QStringLiteral("animalDetailsPage"));
        animalNonPhysicalAttrBoxToclient = new QGroupBox(animalDetailsPage);
        animalNonPhysicalAttrBoxToclient->setObjectName(QStringLiteral("animalNonPhysicalAttrBoxToclient"));
        animalNonPhysicalAttrBoxToclient->setGeometry(QRect(290, 90, 371, 421));
        animalNonPhysicalAttrBoxToclient->setStyleSheet(QStringLiteral("border:none"));
        animalNonPhysicalAttr1ToClient = new QTextEdit(animalNonPhysicalAttrBoxToclient);
        animalNonPhysicalAttr1ToClient->setObjectName(QStringLiteral("animalNonPhysicalAttr1ToClient"));
        animalNonPhysicalAttr1ToClient->setGeometry(QRect(110, 10, 251, 31));
        animalNonPhysicalAttr1ToClient->setStyleSheet(QLatin1String("#animalNonPhysicalAttr1ToClient{\n"
"\n"
"	background:white;\n"
"\n"
"	border: 2px solid black;\n"
"}"));
        animalNonPhysicalAttr1ToClient->setReadOnly(true);
        animalNonPhysicalAttr2ToClient = new QTextEdit(animalNonPhysicalAttrBoxToclient);
        animalNonPhysicalAttr2ToClient->setObjectName(QStringLiteral("animalNonPhysicalAttr2ToClient"));
        animalNonPhysicalAttr2ToClient->setGeometry(QRect(110, 43, 251, 31));
        animalNonPhysicalAttr2ToClient->setStyleSheet(QLatin1String("#animalNonPhysicalAttr2ToClient{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        animalNonPhysicalAttr2ToClient->setReadOnly(true);
        animalNonPhysicalAttr3ToClient = new QTextEdit(animalNonPhysicalAttrBoxToclient);
        animalNonPhysicalAttr3ToClient->setObjectName(QStringLiteral("animalNonPhysicalAttr3ToClient"));
        animalNonPhysicalAttr3ToClient->setGeometry(QRect(110, 77, 251, 31));
        animalNonPhysicalAttr3ToClient->setStyleSheet(QLatin1String("#animalNonPhysicalAttr3ToClient{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        animalNonPhysicalAttr3ToClient->setReadOnly(true);
        animalNonPhysicalAttr4ToClient = new QTextEdit(animalNonPhysicalAttrBoxToclient);
        animalNonPhysicalAttr4ToClient->setObjectName(QStringLiteral("animalNonPhysicalAttr4ToClient"));
        animalNonPhysicalAttr4ToClient->setGeometry(QRect(110, 110, 251, 31));
        animalNonPhysicalAttr4ToClient->setStyleSheet(QLatin1String("#animalNonPhysicalAttr4ToClient{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        animalNonPhysicalAttr4ToClient->setReadOnly(true);
        animalNonPhysicalAttr5ToClient = new QTextEdit(animalNonPhysicalAttrBoxToclient);
        animalNonPhysicalAttr5ToClient->setObjectName(QStringLiteral("animalNonPhysicalAttr5ToClient"));
        animalNonPhysicalAttr5ToClient->setGeometry(QRect(110, 143, 251, 31));
        animalNonPhysicalAttr5ToClient->setStyleSheet(QLatin1String("#animalNonPhysicalAttr5ToClient{\n"
"\n"
"	background:white;\n"
"\n"
"	border: 2px solid black;\n"
"}"));
        animalNonPhysicalAttr5ToClient->setReadOnly(true);
        animalNonPhysicalAttr6ToClient = new QTextEdit(animalNonPhysicalAttrBoxToclient);
        animalNonPhysicalAttr6ToClient->setObjectName(QStringLiteral("animalNonPhysicalAttr6ToClient"));
        animalNonPhysicalAttr6ToClient->setGeometry(QRect(110, 177, 251, 31));
        animalNonPhysicalAttr6ToClient->setStyleSheet(QLatin1String("#animalNonPhysicalAttr6ToClient{\n"
"\n"
"	background:white;\n"
"	\n"
"	border: 2px solid black;\n"
"}"));
        animalNonPhysicalAttr6ToClient->setReadOnly(true);
        animalNonPhysicalAttr7ToClient = new QTextEdit(animalNonPhysicalAttrBoxToclient);
        animalNonPhysicalAttr7ToClient->setObjectName(QStringLiteral("animalNonPhysicalAttr7ToClient"));
        animalNonPhysicalAttr7ToClient->setGeometry(QRect(110, 210, 251, 31));
        animalNonPhysicalAttr7ToClient->setStyleSheet(QLatin1String("#animalNonPhysicalAttr7ToClient{\n"
"\n"
"	background:white;\n"
"	\n"
"	border: 2px solid black;\n"
"}"));
        animalNonPhysicalAttr7ToClient->setReadOnly(true);
        animalNonPhysicalAttr8ToClient = new QTextEdit(animalNonPhysicalAttrBoxToclient);
        animalNonPhysicalAttr8ToClient->setObjectName(QStringLiteral("animalNonPhysicalAttr8ToClient"));
        animalNonPhysicalAttr8ToClient->setGeometry(QRect(110, 243, 251, 31));
        animalNonPhysicalAttr8ToClient->setStyleSheet(QLatin1String("#animalNonPhysicalAttr8ToClient{\n"
"\n"
"	background:white;\n"
"	\n"
"	border: 2px solid black;\n"
"}"));
        animalNonPhysicalAttr8ToClient->setReadOnly(true);
        animalNonPhysicalAttr9ToClient = new QTextEdit(animalNonPhysicalAttrBoxToclient);
        animalNonPhysicalAttr9ToClient->setObjectName(QStringLiteral("animalNonPhysicalAttr9ToClient"));
        animalNonPhysicalAttr9ToClient->setGeometry(QRect(110, 277, 251, 31));
        animalNonPhysicalAttr9ToClient->setStyleSheet(QLatin1String("#animalNonPhysicalAttr9ToClient{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        animalNonPhysicalAttr9ToClient->setReadOnly(true);
        animalNonPhysicalAttr10ToClient = new QTextEdit(animalNonPhysicalAttrBoxToclient);
        animalNonPhysicalAttr10ToClient->setObjectName(QStringLiteral("animalNonPhysicalAttr10ToClient"));
        animalNonPhysicalAttr10ToClient->setGeometry(QRect(110, 311, 251, 31));
        animalNonPhysicalAttr10ToClient->setStyleSheet(QLatin1String("#animalNonPhysicalAttr10ToClient{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        animalNonPhysicalAttr10ToClient->setReadOnly(true);
        animalNonPhysicalAttr11ToClient = new QTextEdit(animalNonPhysicalAttrBoxToclient);
        animalNonPhysicalAttr11ToClient->setObjectName(QStringLiteral("animalNonPhysicalAttr11ToClient"));
        animalNonPhysicalAttr11ToClient->setGeometry(QRect(110, 345, 251, 31));
        animalNonPhysicalAttr11ToClient->setStyleSheet(QLatin1String("#animalNonPhysicalAttr11ToClient{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        animalNonPhysicalAttr11ToClient->setReadOnly(true);
        animalNonPhysicalAttr12ToClient = new QTextEdit(animalNonPhysicalAttrBoxToclient);
        animalNonPhysicalAttr12ToClient->setObjectName(QStringLiteral("animalNonPhysicalAttr12ToClient"));
        animalNonPhysicalAttr12ToClient->setGeometry(QRect(110, 380, 251, 31));
        animalNonPhysicalAttr12ToClient->setStyleSheet(QLatin1String("#animalNonPhysicalAttr12ToClient{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        animalNonPhysicalAttr12ToClient->setReadOnly(true);
        animalNonPhysLabel1_3 = new QLabel(animalNonPhysicalAttrBoxToclient);
        animalNonPhysLabel1_3->setObjectName(QStringLiteral("animalNonPhysLabel1_3"));
        animalNonPhysLabel1_3->setGeometry(QRect(10, 10, 101, 31));
        animalNonPhysLabel1_3->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        animalNonPhysLabel2_3 = new QLabel(animalNonPhysicalAttrBoxToclient);
        animalNonPhysLabel2_3->setObjectName(QStringLiteral("animalNonPhysLabel2_3"));
        animalNonPhysLabel2_3->setGeometry(QRect(10, 45, 101, 28));
        animalNonPhysLabel2_3->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        animalNonPhysLabel3_3 = new QLabel(animalNonPhysicalAttrBoxToclient);
        animalNonPhysLabel3_3->setObjectName(QStringLiteral("animalNonPhysLabel3_3"));
        animalNonPhysLabel3_3->setGeometry(QRect(10, 77, 101, 28));
        animalNonPhysLabel3_3->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        animalNonPhysLabel4_3 = new QLabel(animalNonPhysicalAttrBoxToclient);
        animalNonPhysLabel4_3->setObjectName(QStringLiteral("animalNonPhysLabel4_3"));
        animalNonPhysLabel4_3->setGeometry(QRect(10, 110, 101, 28));
        animalNonPhysLabel4_3->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        animalNonPhysLabel5_3 = new QLabel(animalNonPhysicalAttrBoxToclient);
        animalNonPhysLabel5_3->setObjectName(QStringLiteral("animalNonPhysLabel5_3"));
        animalNonPhysLabel5_3->setGeometry(QRect(10, 144, 101, 28));
        animalNonPhysLabel5_3->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        animalNonPhysLabel6_3 = new QLabel(animalNonPhysicalAttrBoxToclient);
        animalNonPhysLabel6_3->setObjectName(QStringLiteral("animalNonPhysLabel6_3"));
        animalNonPhysLabel6_3->setGeometry(QRect(10, 178, 101, 28));
        animalNonPhysLabel6_3->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        animalNonPhysLabel9_3 = new QLabel(animalNonPhysicalAttrBoxToclient);
        animalNonPhysLabel9_3->setObjectName(QStringLiteral("animalNonPhysLabel9_3"));
        animalNonPhysLabel9_3->setGeometry(QRect(10, 245, 101, 28));
        animalNonPhysLabel9_3->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        animalNonPhysLabel8_3 = new QLabel(animalNonPhysicalAttrBoxToclient);
        animalNonPhysLabel8_3->setObjectName(QStringLiteral("animalNonPhysLabel8_3"));
        animalNonPhysLabel8_3->setGeometry(QRect(10, 213, 101, 28));
        animalNonPhysLabel8_3->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        animalNonPhysLabel10_3 = new QLabel(animalNonPhysicalAttrBoxToclient);
        animalNonPhysLabel10_3->setObjectName(QStringLiteral("animalNonPhysLabel10_3"));
        animalNonPhysLabel10_3->setGeometry(QRect(10, 277, 101, 28));
        animalNonPhysLabel10_3->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        animalNonPhysLabel11_3 = new QLabel(animalNonPhysicalAttrBoxToclient);
        animalNonPhysLabel11_3->setObjectName(QStringLiteral("animalNonPhysLabel11_3"));
        animalNonPhysLabel11_3->setGeometry(QRect(10, 312, 101, 28));
        animalNonPhysLabel11_3->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        animalNonPhysLabel12_5 = new QLabel(animalNonPhysicalAttrBoxToclient);
        animalNonPhysLabel12_5->setObjectName(QStringLiteral("animalNonPhysLabel12_5"));
        animalNonPhysLabel12_5->setGeometry(QRect(10, 345, 101, 28));
        animalNonPhysLabel12_5->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        animalNonPhysLabel12_6 = new QLabel(animalNonPhysicalAttrBoxToclient);
        animalNonPhysLabel12_6->setObjectName(QStringLiteral("animalNonPhysLabel12_6"));
        animalNonPhysLabel12_6->setGeometry(QRect(10, 380, 101, 28));
        animalNonPhysLabel12_6->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        animalInfoDetailsBoxToClient = new QGroupBox(animalDetailsPage);
        animalInfoDetailsBoxToClient->setObjectName(QStringLiteral("animalInfoDetailsBoxToClient"));
        animalInfoDetailsBoxToClient->setGeometry(QRect(20, 100, 271, 261));
        animalInfoDetailsBoxToClient->setStyleSheet(QStringLiteral("border:none"));
        animalNameDetailToClient = new QTextEdit(animalInfoDetailsBoxToClient);
        animalNameDetailToClient->setObjectName(QStringLiteral("animalNameDetailToClient"));
        animalNameDetailToClient->setGeometry(QRect(60, 20, 211, 31));
        animalNameDetailToClient->setStyleSheet(QLatin1String("#animalNameDetailToClient{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        animalNameDetailToClient->setReadOnly(true);
        animalTypeDetailToClient = new QTextEdit(animalInfoDetailsBoxToClient);
        animalTypeDetailToClient->setObjectName(QStringLiteral("animalTypeDetailToClient"));
        animalTypeDetailToClient->setGeometry(QRect(60, 60, 211, 31));
        animalTypeDetailToClient->setStyleSheet(QLatin1String("#animalTypeDetailToClient{\n"
"\n"
"	background:white;\n"
"	\n"
"	border: 2px solid black;\n"
"}"));
        animalTypeDetailToClient->setReadOnly(true);
        animalSpeciesDetailToClient = new QTextEdit(animalInfoDetailsBoxToClient);
        animalSpeciesDetailToClient->setObjectName(QStringLiteral("animalSpeciesDetailToClient"));
        animalSpeciesDetailToClient->setGeometry(QRect(60, 100, 211, 31));
        animalSpeciesDetailToClient->setStyleSheet(QLatin1String("#animalSpeciesDetailToClient{\n"
"\n"
"	background:white;\n"
"	\n"
"	border: 2px solid black;\n"
"}"));
        animalSpeciesDetailToClient->setReadOnly(true);
        animalColourDetailToClient = new QTextEdit(animalInfoDetailsBoxToClient);
        animalColourDetailToClient->setObjectName(QStringLiteral("animalColourDetailToClient"));
        animalColourDetailToClient->setGeometry(QRect(60, 140, 211, 31));
        animalColourDetailToClient->setStyleSheet(QLatin1String("#animalColourDetailToClient{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        animalColourDetailToClient->setReadOnly(true);
        animalAgeDetailToClient = new QTextEdit(animalInfoDetailsBoxToClient);
        animalAgeDetailToClient->setObjectName(QStringLiteral("animalAgeDetailToClient"));
        animalAgeDetailToClient->setGeometry(QRect(60, 180, 211, 31));
        animalAgeDetailToClient->setStyleSheet(QLatin1String("#animalAgeDetailToClient{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        animalAgeDetailToClient->setReadOnly(true);
        animalGenderDetailToClient = new QTextEdit(animalInfoDetailsBoxToClient);
        animalGenderDetailToClient->setObjectName(QStringLiteral("animalGenderDetailToClient"));
        animalGenderDetailToClient->setGeometry(QRect(60, 220, 211, 31));
        animalGenderDetailToClient->setStyleSheet(QLatin1String("#animalGenderDetailToClient{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        animalGenderDetailToClient->setReadOnly(true);
        nameAnimalDetailLabel_3 = new QLabel(animalInfoDetailsBoxToClient);
        nameAnimalDetailLabel_3->setObjectName(QStringLiteral("nameAnimalDetailLabel_3"));
        nameAnimalDetailLabel_3->setGeometry(QRect(0, 21, 61, 28));
        nameAnimalDetailLabel_3->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        animalTypeDetailLabel_3 = new QLabel(animalInfoDetailsBoxToClient);
        animalTypeDetailLabel_3->setObjectName(QStringLiteral("animalTypeDetailLabel_3"));
        animalTypeDetailLabel_3->setGeometry(QRect(0, 60, 61, 28));
        animalTypeDetailLabel_3->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        animalSpeciesDetailLabel_3 = new QLabel(animalInfoDetailsBoxToClient);
        animalSpeciesDetailLabel_3->setObjectName(QStringLiteral("animalSpeciesDetailLabel_3"));
        animalSpeciesDetailLabel_3->setGeometry(QRect(0, 100, 61, 28));
        animalSpeciesDetailLabel_3->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        animalColourDetailLabel_3 = new QLabel(animalInfoDetailsBoxToClient);
        animalColourDetailLabel_3->setObjectName(QStringLiteral("animalColourDetailLabel_3"));
        animalColourDetailLabel_3->setGeometry(QRect(0, 140, 61, 28));
        animalColourDetailLabel_3->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        animalAgeDetailLabel_3 = new QLabel(animalInfoDetailsBoxToClient);
        animalAgeDetailLabel_3->setObjectName(QStringLiteral("animalAgeDetailLabel_3"));
        animalAgeDetailLabel_3->setGeometry(QRect(0, 180, 61, 28));
        animalAgeDetailLabel_3->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        animalGenderDetailLabel_3 = new QLabel(animalInfoDetailsBoxToClient);
        animalGenderDetailLabel_3->setObjectName(QStringLiteral("animalGenderDetailLabel_3"));
        animalGenderDetailLabel_3->setGeometry(QRect(0, 220, 61, 28));
        animalGenderDetailLabel_3->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        backViewAnimalsToClientBtn = new QPushButton(animalDetailsPage);
        backViewAnimalsToClientBtn->setObjectName(QStringLiteral("backViewAnimalsToClientBtn"));
        backViewAnimalsToClientBtn->setGeometry(QRect(20, 10, 111, 51));
        backViewAnimalsToClientBtn->setCursor(QCursor(Qt::PointingHandCursor));
        backViewAnimalsToClientBtn->setStyleSheet(QLatin1String("#backViewAnimalsToClientBtn{\n"
"\n"
"border: 2px solid black;\n"
"border-radius: 25px;\n"
"background:white;\n"
"}\n"
"\n"
"#backViewAnimalsToClientBtn:hover{\n"
"\n"
"	background:  qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);\n"
"	color:#555;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        animalOverViewHeadLineToClient_2 = new QTextBrowser(animalDetailsPage);
        animalOverViewHeadLineToClient_2->setObjectName(QStringLiteral("animalOverViewHeadLineToClient_2"));
        animalOverViewHeadLineToClient_2->setGeometry(QRect(10, 70, 281, 31));
        animalOverViewHeadLineToClient_2->setStyleSheet(QLatin1String("border: none;\n"
"background: white;\n"
"border-radius:15px;"));
        animalPhysicalAttrBoxToClient = new QGroupBox(animalDetailsPage);
        animalPhysicalAttrBoxToClient->setObjectName(QStringLiteral("animalPhysicalAttrBoxToClient"));
        animalPhysicalAttrBoxToClient->setGeometry(QRect(20, 360, 271, 141));
        animalPhysicalAttrBoxToClient->setStyleSheet(QStringLiteral("border:none"));
        animalAttributeThreeFieldToClient = new QTextEdit(animalPhysicalAttrBoxToClient);
        animalAttributeThreeFieldToClient->setObjectName(QStringLiteral("animalAttributeThreeFieldToClient"));
        animalAttributeThreeFieldToClient->setGeometry(QRect(98, 107, 171, 31));
        animalAttributeThreeFieldToClient->setStyleSheet(QLatin1String("#animalAttributeThreeFieldToClient{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        animalAttributeThreeFieldToClient->setReadOnly(true);
        animalAttributeOneFieldToClient = new QTextEdit(animalPhysicalAttrBoxToClient);
        animalAttributeOneFieldToClient->setObjectName(QStringLiteral("animalAttributeOneFieldToClient"));
        animalAttributeOneFieldToClient->setGeometry(QRect(98, 40, 171, 31));
        animalAttributeOneFieldToClient->setStyleSheet(QLatin1String("#animalAttributeOneFieldToClient{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        animalAttributeOneFieldToClient->setReadOnly(true);
        animalAttributeTwoFieldToClient = new QTextEdit(animalPhysicalAttrBoxToClient);
        animalAttributeTwoFieldToClient->setObjectName(QStringLiteral("animalAttributeTwoFieldToClient"));
        animalAttributeTwoFieldToClient->setGeometry(QRect(98, 73, 171, 31));
        animalAttributeTwoFieldToClient->setStyleSheet(QLatin1String("#animalAttributeTwoFieldToClient{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        animalAttributeTwoFieldToClient->setReadOnly(true);
        animalHeadLineAttrbViewToClient = new QTextBrowser(animalPhysicalAttrBoxToClient);
        animalHeadLineAttrbViewToClient->setObjectName(QStringLiteral("animalHeadLineAttrbViewToClient"));
        animalHeadLineAttrbViewToClient->setGeometry(QRect(0, 0, 261, 31));
        animalHeadLineAttrbViewToClient->setStyleSheet(QLatin1String("border: none;\n"
"background: white;\n"
"border-radius:15px;"));
        beakColourLabelClient = new QLabel(animalPhysicalAttrBoxToClient);
        beakColourLabelClient->setObjectName(QStringLiteral("beakColourLabelClient"));
        beakColourLabelClient->setGeometry(QRect(0, 107, 98, 28));
        beakColourLabelClient->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        bodyLengthLabelClient = new QLabel(animalPhysicalAttrBoxToClient);
        bodyLengthLabelClient->setObjectName(QStringLiteral("bodyLengthLabelClient"));
        bodyLengthLabelClient->setGeometry(QRect(0, 107, 98, 28));
        bodyLengthLabelClient->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        furColourLabelClient = new QLabel(animalPhysicalAttrBoxToClient);
        furColourLabelClient->setObjectName(QStringLiteral("furColourLabelClient"));
        furColourLabelClient->setGeometry(QRect(0, 107, 98, 28));
        furColourLabelClient->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        beakLengthLabelClient = new QLabel(animalPhysicalAttrBoxToClient);
        beakLengthLabelClient->setObjectName(QStringLiteral("beakLengthLabelClient"));
        beakLengthLabelClient->setGeometry(QRect(0, 40, 98, 28));
        beakLengthLabelClient->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        buildLabelClient = new QLabel(animalPhysicalAttrBoxToClient);
        buildLabelClient->setObjectName(QStringLiteral("buildLabelClient"));
        buildLabelClient->setGeometry(QRect(0, 40, 98, 28));
        buildLabelClient->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        finnsizeLabelClient = new QLabel(animalPhysicalAttrBoxToClient);
        finnsizeLabelClient->setObjectName(QStringLiteral("finnsizeLabelClient"));
        finnsizeLabelClient->setGeometry(QRect(0, 40, 98, 28));
        finnsizeLabelClient->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        scaleTypeLabelClient = new QLabel(animalPhysicalAttrBoxToClient);
        scaleTypeLabelClient->setObjectName(QStringLiteral("scaleTypeLabelClient"));
        scaleTypeLabelClient->setGeometry(QRect(0, 40, 98, 28));
        scaleTypeLabelClient->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        bodyPatternLabelClient = new QLabel(animalPhysicalAttrBoxToClient);
        bodyPatternLabelClient->setObjectName(QStringLiteral("bodyPatternLabelClient"));
        bodyPatternLabelClient->setGeometry(QRect(0, 75, 98, 28));
        bodyPatternLabelClient->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        wingSpanLabelClient = new QLabel(animalPhysicalAttrBoxToClient);
        wingSpanLabelClient->setObjectName(QStringLiteral("wingSpanLabelClient"));
        wingSpanLabelClient->setGeometry(QRect(0, 75, 98, 28));
        wingSpanLabelClient->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        furLengthLabelClient = new QLabel(animalPhysicalAttrBoxToClient);
        furLengthLabelClient->setObjectName(QStringLiteral("furLengthLabelClient"));
        furLengthLabelClient->setGeometry(QRect(0, 75, 98, 28));
        furLengthLabelClient->setStyleSheet(QLatin1String("background: white;\n"
"\n"
""));
        animalHeadLineForClient = new QTextBrowser(animalDetailsPage);
        animalHeadLineForClient->setObjectName(QStringLiteral("animalHeadLineForClient"));
        animalHeadLineForClient->setGeometry(QRect(210, 10, 291, 31));
        animalHeadLineForClient->setStyleSheet(QLatin1String("border: none;\n"
"background: white;\n"
"border-radius:15px;"));
        animalHeadLineForClient->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        animalOverViewHeadLineToClient = new QTextBrowser(animalDetailsPage);
        animalOverViewHeadLineToClient->setObjectName(QStringLiteral("animalOverViewHeadLineToClient"));
        animalOverViewHeadLineToClient->setGeometry(QRect(320, 60, 321, 31));
        animalOverViewHeadLineToClient->setStyleSheet(QLatin1String("border: none;\n"
"background: white;\n"
"border-radius:15px;"));
        viewAnimalsFromClientView->addWidget(animalDetailsPage);
        viewClientProfilePage = new QStackedWidget(ClientCanvas);
        viewClientProfilePage->setObjectName(QStringLiteral("viewClientProfilePage"));
        viewClientProfilePage->setGeometry(QRect(10, 10, 731, 531));
        viewClientProfilePage->setStyleSheet(QLatin1String("background: qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);\n"
""));
        profilePage = new QWidget();
        profilePage->setObjectName(QStringLiteral("profilePage"));
        viewClientProfileHeadLine = new QTextBrowser(profilePage);
        viewClientProfileHeadLine->setObjectName(QStringLiteral("viewClientProfileHeadLine"));
        viewClientProfileHeadLine->setEnabled(true);
        viewClientProfileHeadLine->setGeometry(QRect(240, 5, 211, 41));
        viewClientProfileHeadLine->setStyleSheet(QLatin1String("#viewClientProfileHeadLine{\n"
"		background:white;\n"
"		border-radius:15px;\n"
"	    border:none;\n"
"}"));
        viewClientProfileHeadLine->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        editClientProfileBtn = new QPushButton(profilePage);
        editClientProfileBtn->setObjectName(QStringLiteral("editClientProfileBtn"));
        editClientProfileBtn->setGeometry(QRect(30, 480, 141, 41));
        editClientProfileBtn->setCursor(QCursor(Qt::PointingHandCursor));
        editClientProfileBtn->setStyleSheet(QLatin1String("#editClientProfileBtn{\n"
"\n"
"border: 2px solid black;\n"
"border-radius: 15px;\n"
"background: white;\n"
"}\n"
"\n"
"#editClientProfileBtn:hover{\n"
"\n"
"	background:  qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);\n"
"	color:#555;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        setAnimalPreferencesBtn = new QPushButton(profilePage);
        setAnimalPreferencesBtn->setObjectName(QStringLiteral("setAnimalPreferencesBtn"));
        setAnimalPreferencesBtn->setGeometry(QRect(190, 480, 141, 41));
        setAnimalPreferencesBtn->setCursor(QCursor(Qt::PointingHandCursor));
        setAnimalPreferencesBtn->setStyleSheet(QLatin1String("#setAnimalPreferencesBtn{\n"
"\n"
"border: 2px solid black;\n"
"border-radius: 15px;\n"
"background: white;\n"
"}\n"
"\n"
"#setAnimalPreferencesBtn:hover{\n"
"\n"
"	background:  qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);\n"
"	color:#555;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        clientViewActivenessField = new QLineEdit(profilePage);
        clientViewActivenessField->setObjectName(QStringLiteral("clientViewActivenessField"));
        clientViewActivenessField->setGeometry(QRect(430, 90, 231, 31));
        clientViewActivenessField->setStyleSheet(QLatin1String("#clientViewActivenessField{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        clientViewActivenessField->setReadOnly(true);
        clientViewAffectionisimField = new QLineEdit(profilePage);
        clientViewAffectionisimField->setObjectName(QStringLiteral("clientViewAffectionisimField"));
        clientViewAffectionisimField->setGeometry(QRect(430, 134, 231, 31));
        clientViewAffectionisimField->setStyleSheet(QLatin1String("#clientViewAffectionisimField{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        clientViewAffectionisimField->setReadOnly(true);
        clientViewHabitatPreField = new QLineEdit(profilePage);
        clientViewHabitatPreField->setObjectName(QStringLiteral("clientViewHabitatPreField"));
        clientViewHabitatPreField->setGeometry(QRect(430, 180, 231, 31));
        clientViewHabitatPreField->setStyleSheet(QLatin1String("#clientViewHabitatPreField{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        clientViewHabitatPreField->setReadOnly(true);
        clientViewNocturnalField = new QLineEdit(profilePage);
        clientViewNocturnalField->setObjectName(QStringLiteral("clientViewNocturnalField"));
        clientViewNocturnalField->setGeometry(QRect(430, 220, 231, 31));
        clientViewNocturnalField->setStyleSheet(QLatin1String("#clientViewNocturnalField{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        clientViewNocturnalField->setReadOnly(true);
        label = new QLabel(profilePage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(340, 90, 91, 31));
        label->setStyleSheet(QStringLiteral("	background:white;"));
        label_2 = new QLabel(profilePage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(340, 135, 91, 31));
        label_2->setStyleSheet(QStringLiteral("	background:white;"));
        label_3 = new QLabel(profilePage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(340, 180, 91, 31));
        label_3->setStyleSheet(QStringLiteral("	background:white;"));
        label_4 = new QLabel(profilePage);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(340, 220, 91, 31));
        label_4->setStyleSheet(QStringLiteral("	background:white;"));
        groupBox = new QGroupBox(profilePage);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 74, 291, 191));
        groupBox->setStyleSheet(QStringLiteral("background:none;"));
        clientViewFNameField = new QLineEdit(groupBox);
        clientViewFNameField->setObjectName(QStringLiteral("clientViewFNameField"));
        clientViewFNameField->setGeometry(QRect(90, 10, 191, 25));
        clientViewFNameField->setStyleSheet(QLatin1String("#clientViewFNameField{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        clientViewFNameField->setReadOnly(true);
        clientViewLNameField = new QLineEdit(groupBox);
        clientViewLNameField->setObjectName(QStringLiteral("clientViewLNameField"));
        clientViewLNameField->setGeometry(QRect(90, 40, 191, 25));
        clientViewLNameField->setStyleSheet(QLatin1String("#clientViewLNameField{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        clientViewLNameField->setReadOnly(true);
        clientViewAgeField = new QLineEdit(groupBox);
        clientViewAgeField->setObjectName(QStringLiteral("clientViewAgeField"));
        clientViewAgeField->setGeometry(QRect(90, 70, 191, 25));
        clientViewAgeField->setStyleSheet(QLatin1String("#clientViewAgeField{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        clientViewAgeField->setReadOnly(true);
        clientViewEmailField = new QLineEdit(groupBox);
        clientViewEmailField->setObjectName(QStringLiteral("clientViewEmailField"));
        clientViewEmailField->setGeometry(QRect(90, 100, 191, 25));
        clientViewEmailField->setStyleSheet(QLatin1String("#clientViewEmailField{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        clientViewEmailField->setReadOnly(true);
        clientViewPhoneNumField = new QLineEdit(groupBox);
        clientViewPhoneNumField->setObjectName(QStringLiteral("clientViewPhoneNumField"));
        clientViewPhoneNumField->setGeometry(QRect(90, 130, 191, 25));
        clientViewPhoneNumField->setStyleSheet(QLatin1String("#clientViewPhoneNumField{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        clientViewPhoneNumField->setReadOnly(true);
        clientViewGenderField = new QLineEdit(groupBox);
        clientViewGenderField->setObjectName(QStringLiteral("clientViewGenderField"));
        clientViewGenderField->setGeometry(QRect(90, 160, 191, 25));
        clientViewGenderField->setStyleSheet(QLatin1String("#clientViewGenderField{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        clientViewGenderField->setReadOnly(true);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(0, 10, 91, 25));
        label_5->setStyleSheet(QStringLiteral("	background:white;"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(0, 40, 91, 25));
        label_6->setStyleSheet(QStringLiteral("	background:white;"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(0, 70, 91, 25));
        label_7->setStyleSheet(QStringLiteral("	background:white;"));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(0, 100, 91, 25));
        label_9->setStyleSheet(QStringLiteral("	background:white;"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(0, 130, 91, 25));
        label_8->setStyleSheet(QStringLiteral("	background:white;"));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(0, 160, 91, 25));
        label_10->setStyleSheet(QStringLiteral("	background:white;"));
        saveClientProfileEditsBtn = new QPushButton(profilePage);
        saveClientProfileEditsBtn->setObjectName(QStringLiteral("saveClientProfileEditsBtn"));
        saveClientProfileEditsBtn->setGeometry(QRect(520, 480, 141, 41));
        saveClientProfileEditsBtn->setCursor(QCursor(Qt::PointingHandCursor));
        saveClientProfileEditsBtn->setStyleSheet(QLatin1String("#saveClientProfileEditsBtn{\n"
"\n"
"border: 2px solid black;\n"
"border-radius: 15px;\n"
"background: white;\n"
"}\n"
"\n"
"#saveClientProfileEditsBtn:hover{\n"
"\n"
"	background:  qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);\n"
"	color:#555;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        cancelClientEditsBtn = new QPushButton(profilePage);
        cancelClientEditsBtn->setObjectName(QStringLiteral("cancelClientEditsBtn"));
        cancelClientEditsBtn->setGeometry(QRect(350, 480, 141, 41));
        cancelClientEditsBtn->setCursor(QCursor(Qt::PointingHandCursor));
        cancelClientEditsBtn->setStyleSheet(QLatin1String("#cancelClientEditsBtn{\n"
"\n"
"border: 2px solid black;\n"
"border-radius:15px;\n"
"background: white;\n"
"}\n"
"\n"
"#cancelClientEditsBtn:hover{\n"
"\n"
"	background:  qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);\n"
"	color:#555;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        clientBasicHeadLine = new QTextBrowser(profilePage);
        clientBasicHeadLine->setObjectName(QStringLiteral("clientBasicHeadLine"));
        clientBasicHeadLine->setEnabled(true);
        clientBasicHeadLine->setGeometry(QRect(20, 50, 281, 31));
        clientBasicHeadLine->setStyleSheet(QLatin1String("#clientBasicHeadLine{\n"
"		background:white;\n"
"		border-radius:15px;\n"
"	    border:none;\n"
"}"));
        clientBasicHeadLine->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        clientPhysHeadLine = new QTextBrowser(profilePage);
        clientPhysHeadLine->setObjectName(QStringLiteral("clientPhysHeadLine"));
        clientPhysHeadLine->setEnabled(true);
        clientPhysHeadLine->setGeometry(QRect(330, 50, 331, 31));
        clientPhysHeadLine->setStyleSheet(QLatin1String("#clientPhysHeadLine{\n"
"		background:white;\n"
"		border-radius:15px;\n"
"	    border:none;\n"
"}"));
        clientPhysHeadLine->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        setPhysPreferencesBtn = new QPushButton(profilePage);
        setPhysPreferencesBtn->setObjectName(QStringLiteral("setPhysPreferencesBtn"));
        setPhysPreferencesBtn->setGeometry(QRect(350, 480, 141, 41));
        setPhysPreferencesBtn->setCursor(QCursor(Qt::PointingHandCursor));
        setPhysPreferencesBtn->setStyleSheet(QLatin1String("#setPhysPreferencesBtn{\n"
"\n"
"border: 2px solid black;\n"
"border-radius: 15px;\n"
"background: white;\n"
"}\n"
"\n"
"#setPhysPreferencesBtn:hover{\n"
"\n"
"	background:  qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);\n"
"	color:#555;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        nonPhysPreBox = new QGroupBox(profilePage);
        nonPhysPreBox->setObjectName(QStringLiteral("nonPhysPreBox"));
        nonPhysPreBox->setGeometry(QRect(20, 280, 691, 181));
        nonPhysPreBox->setStyleSheet(QStringLiteral("background:none;"));
        clientNonPhysPreAnimalHeadLine = new QTextBrowser(nonPhysPreBox);
        clientNonPhysPreAnimalHeadLine->setObjectName(QStringLiteral("clientNonPhysPreAnimalHeadLine"));
        clientNonPhysPreAnimalHeadLine->setEnabled(true);
        clientNonPhysPreAnimalHeadLine->setGeometry(QRect(0, 0, 661, 31));
        clientNonPhysPreAnimalHeadLine->setStyleSheet(QLatin1String("#clientNonPhysPreAnimalHeadLine{\n"
"		background:white;\n"
"		border-radius:15px;\n"
"	    border:none;\n"
"}"));
        clientNonPhysPreAnimalHeadLine->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        clientNonPhysPreOut1 = new QLineEdit(nonPhysPreBox);
        clientNonPhysPreOut1->setObjectName(QStringLiteral("clientNonPhysPreOut1"));
        clientNonPhysPreOut1->setGeometry(QRect(120, 40, 201, 21));
        clientNonPhysPreOut1->setStyleSheet(QLatin1String("#clientNonPhysPreOut1{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        clientNonPhysPreOut1->setReadOnly(true);
        label_14 = new QLabel(nonPhysPreBox);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(10, 100, 111, 21));
        label_14->setStyleSheet(QStringLiteral("	background:white;"));
        label_13 = new QLabel(nonPhysPreBox);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 70, 111, 21));
        label_13->setStyleSheet(QStringLiteral("	background:white;"));
        label_11 = new QLabel(nonPhysPreBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 130, 111, 21));
        label_11->setStyleSheet(QStringLiteral("	background:white;"));
        label_12 = new QLabel(nonPhysPreBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 40, 111, 21));
        label_12->setStyleSheet(QStringLiteral("	background:white;"));
        clientNonPhysPreOut2 = new QLineEdit(nonPhysPreBox);
        clientNonPhysPreOut2->setObjectName(QStringLiteral("clientNonPhysPreOut2"));
        clientNonPhysPreOut2->setGeometry(QRect(120, 69, 201, 21));
        clientNonPhysPreOut2->setStyleSheet(QLatin1String("#clientNonPhysPreOut2{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        clientNonPhysPreOut2->setReadOnly(true);
        clientNonPhysPreOut3 = new QLineEdit(nonPhysPreBox);
        clientNonPhysPreOut3->setObjectName(QStringLiteral("clientNonPhysPreOut3"));
        clientNonPhysPreOut3->setGeometry(QRect(120, 100, 201, 21));
        clientNonPhysPreOut3->setStyleSheet(QLatin1String("#clientNonPhysPreOut3{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        clientNonPhysPreOut3->setReadOnly(true);
        clientNonPhysPreOut4 = new QLineEdit(nonPhysPreBox);
        clientNonPhysPreOut4->setObjectName(QStringLiteral("clientNonPhysPreOut4"));
        clientNonPhysPreOut4->setGeometry(QRect(120, 130, 201, 21));
        clientNonPhysPreOut4->setStyleSheet(QLatin1String("#clientNonPhysPreOut4{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        clientNonPhysPreOut4->setReadOnly(true);
        label_15 = new QLabel(nonPhysPreBox);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(340, 100, 111, 21));
        label_15->setStyleSheet(QStringLiteral("	background:white;"));
        label_16 = new QLabel(nonPhysPreBox);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(340, 70, 111, 21));
        label_16->setStyleSheet(QStringLiteral("	background:white;"));
        label_22 = new QLabel(nonPhysPreBox);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(340, 130, 111, 21));
        label_22->setStyleSheet(QStringLiteral("	background:white;"));
        label_23 = new QLabel(nonPhysPreBox);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(340, 40, 111, 21));
        label_23->setStyleSheet(QStringLiteral("	background:white;"));
        clientNonPhysPreOut6 = new QLineEdit(nonPhysPreBox);
        clientNonPhysPreOut6->setObjectName(QStringLiteral("clientNonPhysPreOut6"));
        clientNonPhysPreOut6->setGeometry(QRect(450, 69, 201, 21));
        clientNonPhysPreOut6->setStyleSheet(QLatin1String("#clientNonPhysPreOut6{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        clientNonPhysPreOut6->setReadOnly(true);
        clientNonPhysPreOut8 = new QLineEdit(nonPhysPreBox);
        clientNonPhysPreOut8->setObjectName(QStringLiteral("clientNonPhysPreOut8"));
        clientNonPhysPreOut8->setGeometry(QRect(450, 130, 201, 21));
        clientNonPhysPreOut8->setStyleSheet(QLatin1String("#clientNonPhysPreOut8{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        clientNonPhysPreOut8->setReadOnly(true);
        clientNonPhysPreOut7 = new QLineEdit(nonPhysPreBox);
        clientNonPhysPreOut7->setObjectName(QStringLiteral("clientNonPhysPreOut7"));
        clientNonPhysPreOut7->setGeometry(QRect(450, 100, 201, 21));
        clientNonPhysPreOut7->setStyleSheet(QLatin1String("#clientNonPhysPreOut7{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        clientNonPhysPreOut7->setReadOnly(true);
        clientNonPhysPreOut5 = new QLineEdit(nonPhysPreBox);
        clientNonPhysPreOut5->setObjectName(QStringLiteral("clientNonPhysPreOut5"));
        clientNonPhysPreOut5->setGeometry(QRect(450, 40, 201, 21));
        clientNonPhysPreOut5->setStyleSheet(QLatin1String("#clientNonPhysPreOut5{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        clientNonPhysPreOut5->setReadOnly(true);
        viewRanksAndPreferencesBtn = new QPushButton(profilePage);
        viewRanksAndPreferencesBtn->setObjectName(QStringLiteral("viewRanksAndPreferencesBtn"));
        viewRanksAndPreferencesBtn->setGeometry(QRect(510, 480, 171, 41));
        viewRanksAndPreferencesBtn->setCursor(QCursor(Qt::PointingHandCursor));
        viewRanksAndPreferencesBtn->setStyleSheet(QLatin1String("#viewRanksAndPreferencesBtn{\n"
"\n"
"border: 2px solid black;\n"
"border-radius: 15px;\n"
"background: white;\n"
"}\n"
"\n"
"#viewRanksAndPreferencesBtn:hover{\n"
"\n"
"	background:  qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);\n"
"	color:#555;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        viewClientProfilePage->addWidget(profilePage);
        clientSetAnimalRanks = new QWidget();
        clientSetAnimalRanks->setObjectName(QStringLiteral("clientSetAnimalRanks"));
        savePreferencesBtn = new QPushButton(clientSetAnimalRanks);
        savePreferencesBtn->setObjectName(QStringLiteral("savePreferencesBtn"));
        savePreferencesBtn->setGeometry(QRect(480, 440, 191, 51));
        savePreferencesBtn->setCursor(QCursor(Qt::PointingHandCursor));
        savePreferencesBtn->setStyleSheet(QLatin1String("#savePreferencesBtn{\n"
"\n"
"border: 3px solid black;\n"
"border-radius: 25px;\n"
"background:white;\n"
"}\n"
"\n"
"#savePreferencesBtn:hover{\n"
"\n"
"	background:  qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);\n"
"	color:#555;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        backPrefenecesBtn = new QPushButton(clientSetAnimalRanks);
        backPrefenecesBtn->setObjectName(QStringLiteral("backPrefenecesBtn"));
        backPrefenecesBtn->setGeometry(QRect(270, 440, 191, 51));
        backPrefenecesBtn->setCursor(QCursor(Qt::PointingHandCursor));
        backPrefenecesBtn->setStyleSheet(QLatin1String("#backPrefenecesBtn{\n"
"\n"
"border: 3px solid black;\n"
"border-radius: 25px;\n"
"background:white;\n"
"}\n"
"\n"
"#backPrefenecesBtn:hover{\n"
"\n"
"	background:  qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);\n"
"	color:#555;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        preferncesHeadLine = new QTextBrowser(clientSetAnimalRanks);
        preferncesHeadLine->setObjectName(QStringLiteral("preferncesHeadLine"));
        preferncesHeadLine->setEnabled(true);
        preferncesHeadLine->setGeometry(QRect(170, 3, 351, 31));
        preferncesHeadLine->setStyleSheet(QLatin1String("#preferncesHeadLine{\n"
"		background:white;\n"
"		border-radius:15px;\n"
"	    border:none;\n"
"}"));
        preferncesHeadLine->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        preferenceDogField = new QLineEdit(clientSetAnimalRanks);
        preferenceDogField->setObjectName(QStringLiteral("preferenceDogField"));
        preferenceDogField->setGeometry(QRect(90, 40, 241, 31));
        preferenceDogField->setStyleSheet(QLatin1String("#preferenceDogField{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        preferenceDogField->setReadOnly(false);
        preferenceCatField = new QLineEdit(clientSetAnimalRanks);
        preferenceCatField->setObjectName(QStringLiteral("preferenceCatField"));
        preferenceCatField->setGeometry(QRect(90, 80, 241, 31));
        preferenceCatField->setStyleSheet(QLatin1String("#preferenceCatField{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        preferenceCatField->setReadOnly(false);
        preferenceFrogField = new QLineEdit(clientSetAnimalRanks);
        preferenceFrogField->setObjectName(QStringLiteral("preferenceFrogField"));
        preferenceFrogField->setGeometry(QRect(90, 120, 241, 31));
        preferenceFrogField->setStyleSheet(QLatin1String("#preferenceFrogField{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        preferenceFrogField->setReadOnly(false);
        preferenceGoldfisheField = new QLineEdit(clientSetAnimalRanks);
        preferenceGoldfisheField->setObjectName(QStringLiteral("preferenceGoldfisheField"));
        preferenceGoldfisheField->setGeometry(QRect(90, 200, 241, 31));
        preferenceGoldfisheField->setStyleSheet(QLatin1String("#preferenceGoldfisheField{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        preferenceGoldfisheField->setReadOnly(false);
        preferenceSalamanderField = new QLineEdit(clientSetAnimalRanks);
        preferenceSalamanderField->setObjectName(QStringLiteral("preferenceSalamanderField"));
        preferenceSalamanderField->setGeometry(QRect(90, 160, 241, 31));
        preferenceSalamanderField->setStyleSheet(QLatin1String("#preferenceSalamanderField{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        preferenceSalamanderField->setReadOnly(false);
        preferenceSnakeField = new QLineEdit(clientSetAnimalRanks);
        preferenceSnakeField->setObjectName(QStringLiteral("preferenceSnakeField"));
        preferenceSnakeField->setGeometry(QRect(430, 40, 241, 31));
        preferenceSnakeField->setStyleSheet(QLatin1String("#preferenceSnakeField{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        preferenceSnakeField->setReadOnly(false);
        preferenceParrotField = new QLineEdit(clientSetAnimalRanks);
        preferenceParrotField->setObjectName(QStringLiteral("preferenceParrotField"));
        preferenceParrotField->setGeometry(QRect(430, 80, 241, 31));
        preferenceParrotField->setStyleSheet(QLatin1String("#preferenceParrotField{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        preferenceParrotField->setReadOnly(false);
        preferenceFinchField = new QLineEdit(clientSetAnimalRanks);
        preferenceFinchField->setObjectName(QStringLiteral("preferenceFinchField"));
        preferenceFinchField->setGeometry(QRect(430, 120, 241, 31));
        preferenceFinchField->setStyleSheet(QLatin1String("#preferenceFinchField{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        preferenceFinchField->setReadOnly(false);
        preferenceLizardField = new QLineEdit(clientSetAnimalRanks);
        preferenceLizardField->setObjectName(QStringLiteral("preferenceLizardField"));
        preferenceLizardField->setGeometry(QRect(430, 160, 241, 31));
        preferenceLizardField->setStyleSheet(QLatin1String("#preferenceLizardField{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        preferenceLizardField->setReadOnly(false);
        preferenceBettaField = new QLineEdit(clientSetAnimalRanks);
        preferenceBettaField->setObjectName(QStringLiteral("preferenceBettaField"));
        preferenceBettaField->setGeometry(QRect(430, 200, 241, 31));
        preferenceBettaField->setStyleSheet(QLatin1String("#preferenceBettaField{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        preferenceBettaField->setReadOnly(false);
        viewClientProfilePage->addWidget(clientSetAnimalRanks);
        clientSetPhysicalPreferences = new QWidget();
        clientSetPhysicalPreferences->setObjectName(QStringLiteral("clientSetPhysicalPreferences"));
        dogFurBuildField = new QComboBox(clientSetPhysicalPreferences);
        dogFurBuildField->setObjectName(QStringLiteral("dogFurBuildField"));
        dogFurBuildField->setGeometry(QRect(50, 130, 181, 25));
        dogFurBuildField->setStyleSheet(QLatin1String("#dogFurBuildField{\n"
"\n"
"	background:white;\n"
"    border-radius:15px;\n"
"\n"
"}"));
        physicalAttributesHeadLine = new QTextBrowser(clientSetPhysicalPreferences);
        physicalAttributesHeadLine->setObjectName(QStringLiteral("physicalAttributesHeadLine"));
        physicalAttributesHeadLine->setEnabled(true);
        physicalAttributesHeadLine->setGeometry(QRect(180, 10, 351, 41));
        physicalAttributesHeadLine->setStyleSheet(QLatin1String("#physicalAttributesHeadLine{\n"
"		background:white;\n"
"		border-radius:15px;\n"
"	    border:none;\n"
"}"));
        physicalAttributesHeadLine->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        dogFurColourField = new QComboBox(clientSetPhysicalPreferences);
        dogFurColourField->setObjectName(QStringLiteral("dogFurColourField"));
        dogFurColourField->setGeometry(QRect(50, 100, 181, 25));
        dogFurColourField->setStyleSheet(QLatin1String("#dogFurColourField{\n"
"\n"
"	background:white;\n"
"    border-radius:15px;\n"
"\n"
"}"));
        dogFurLengthField = new QComboBox(clientSetPhysicalPreferences);
        dogFurLengthField->setObjectName(QStringLiteral("dogFurLengthField"));
        dogFurLengthField->setGeometry(QRect(50, 70, 181, 25));
        dogFurLengthField->setStyleSheet(QLatin1String("#dogFurLengthField{\n"
"\n"
"	background:white;\n"
"    border-radius:15px;\n"
"\n"
"}"));
        catFurColourField = new QComboBox(clientSetPhysicalPreferences);
        catFurColourField->setObjectName(QStringLiteral("catFurColourField"));
        catFurColourField->setGeometry(QRect(50, 200, 181, 25));
        catFurColourField->setStyleSheet(QLatin1String("#catFurColourField{\n"
"\n"
"	background:white;\n"
"    border-radius:15px;\n"
"\n"
"}"));
        catFurLengthField = new QComboBox(clientSetPhysicalPreferences);
        catFurLengthField->setObjectName(QStringLiteral("catFurLengthField"));
        catFurLengthField->setGeometry(QRect(50, 170, 181, 25));
        catFurLengthField->setStyleSheet(QLatin1String("#catFurLengthField{\n"
"\n"
"	background:white;\n"
"    border-radius:15px;\n"
"\n"
"}"));
        catFurBuildField = new QComboBox(clientSetPhysicalPreferences);
        catFurBuildField->setObjectName(QStringLiteral("catFurBuildField"));
        catFurBuildField->setGeometry(QRect(50, 230, 181, 25));
        catFurBuildField->setStyleSheet(QLatin1String("#catFurBuildField{\n"
"\n"
"	background:white;\n"
"    border-radius:15px;\n"
"\n"
"}"));
        snakeScaleTypeField = new QComboBox(clientSetPhysicalPreferences);
        snakeScaleTypeField->setObjectName(QStringLiteral("snakeScaleTypeField"));
        snakeScaleTypeField->setGeometry(QRect(50, 330, 181, 25));
        snakeScaleTypeField->setStyleSheet(QLatin1String("#snakeScaleTypeField{\n"
"\n"
"	background:white;\n"
"    border-radius:15px;\n"
"\n"
"}"));
        snakeBodyLengthField = new QComboBox(clientSetPhysicalPreferences);
        snakeBodyLengthField->setObjectName(QStringLiteral("snakeBodyLengthField"));
        snakeBodyLengthField->setGeometry(QRect(50, 300, 181, 25));
        snakeBodyLengthField->setStyleSheet(QLatin1String("#snakeBodyLengthField{\n"
"\n"
"	background:white;\n"
"    border-radius:15px;\n"
"\n"
"}"));
        snakeBodyPatternField = new QComboBox(clientSetPhysicalPreferences);
        snakeBodyPatternField->setObjectName(QStringLiteral("snakeBodyPatternField"));
        snakeBodyPatternField->setGeometry(QRect(50, 270, 181, 25));
        snakeBodyPatternField->setStyleSheet(QLatin1String("#snakeBodyPatternField{\n"
"\n"
"	background:white;\n"
"    border-radius:15px;\n"
"\n"
"}"));
        lizardBodyLengthField = new QComboBox(clientSetPhysicalPreferences);
        lizardBodyLengthField->setObjectName(QStringLiteral("lizardBodyLengthField"));
        lizardBodyLengthField->setGeometry(QRect(50, 400, 181, 25));
        lizardBodyLengthField->setStyleSheet(QLatin1String("#lizardBodyLengthField{\n"
"\n"
"	background:white;\n"
"    border-radius:15px;\n"
"\n"
"}"));
        lizardScaleTypeField = new QComboBox(clientSetPhysicalPreferences);
        lizardScaleTypeField->setObjectName(QStringLiteral("lizardScaleTypeField"));
        lizardScaleTypeField->setGeometry(QRect(50, 430, 181, 25));
        lizardScaleTypeField->setStyleSheet(QLatin1String("#lizardScaleTypeField{\n"
"\n"
"	background:white;\n"
"    border-radius:15px;\n"
"\n"
"}"));
        lizardBodyPatternField = new QComboBox(clientSetPhysicalPreferences);
        lizardBodyPatternField->setObjectName(QStringLiteral("lizardBodyPatternField"));
        lizardBodyPatternField->setGeometry(QRect(50, 370, 181, 25));
        lizardBodyPatternField->setStyleSheet(QLatin1String("#lizardBodyPatternField{\n"
"\n"
"	background:white;\n"
"    border-radius:15px;\n"
"\n"
"}"));
        bettaBodyLengthField = new QComboBox(clientSetPhysicalPreferences);
        bettaBodyLengthField->setObjectName(QStringLiteral("bettaBodyLengthField"));
        bettaBodyLengthField->setGeometry(QRect(250, 100, 181, 25));
        bettaBodyLengthField->setStyleSheet(QLatin1String("#bettaBodyLengthField{\n"
"\n"
"	background:white;\n"
"    border-radius:15px;\n"
"\n"
"}"));
        bettaFinnSizeField = new QComboBox(clientSetPhysicalPreferences);
        bettaFinnSizeField->setObjectName(QStringLiteral("bettaFinnSizeField"));
        bettaFinnSizeField->setGeometry(QRect(250, 130, 181, 25));
        bettaFinnSizeField->setStyleSheet(QLatin1String("#bettaFinnSizeField{\n"
"\n"
"	background:white;\n"
"    border-radius:15px;\n"
"\n"
"}"));
        bettaBodyPatternField = new QComboBox(clientSetPhysicalPreferences);
        bettaBodyPatternField->setObjectName(QStringLiteral("bettaBodyPatternField"));
        bettaBodyPatternField->setGeometry(QRect(250, 70, 181, 25));
        bettaBodyPatternField->setStyleSheet(QLatin1String("#bettaBodyPatternField{\n"
"\n"
"	background:white;\n"
"    border-radius:15px;\n"
"\n"
"}"));
        goldfishFinnSizeField = new QComboBox(clientSetPhysicalPreferences);
        goldfishFinnSizeField->setObjectName(QStringLiteral("goldfishFinnSizeField"));
        goldfishFinnSizeField->setGeometry(QRect(450, 130, 221, 25));
        goldfishFinnSizeField->setStyleSheet(QLatin1String("#goldfishFinnSizeField{\n"
"\n"
"	background:white;\n"
"    border-radius:15px;\n"
"\n"
"}"));
        goldfishBodyLengthField = new QComboBox(clientSetPhysicalPreferences);
        goldfishBodyLengthField->setObjectName(QStringLiteral("goldfishBodyLengthField"));
        goldfishBodyLengthField->setGeometry(QRect(450, 100, 221, 25));
        goldfishBodyLengthField->setStyleSheet(QLatin1String("#goldfishBodyLengthField{\n"
"\n"
"	background:white;\n"
"    border-radius:15px;\n"
"\n"
"}"));
        goldfishBodyPatternField = new QComboBox(clientSetPhysicalPreferences);
        goldfishBodyPatternField->setObjectName(QStringLiteral("goldfishBodyPatternField"));
        goldfishBodyPatternField->setGeometry(QRect(450, 70, 221, 25));
        goldfishBodyPatternField->setStyleSheet(QLatin1String("#goldfishBodyPatternField{\n"
"\n"
"	background:white;\n"
"    border-radius:15px;\n"
"\n"
"}"));
        salamanderBuildField = new QComboBox(clientSetPhysicalPreferences);
        salamanderBuildField->setObjectName(QStringLiteral("salamanderBuildField"));
        salamanderBuildField->setGeometry(QRect(450, 230, 221, 25));
        salamanderBuildField->setStyleSheet(QLatin1String("#salamanderBuildField{\n"
"\n"
"	background:white;\n"
"    border-radius:15px;\n"
"\n"
"}"));
        frogBuildField = new QComboBox(clientSetPhysicalPreferences);
        frogBuildField->setObjectName(QStringLiteral("frogBuildField"));
        frogBuildField->setGeometry(QRect(250, 230, 181, 25));
        frogBuildField->setStyleSheet(QLatin1String("#frogBuildField{\n"
"\n"
"	background:white;\n"
"    border-radius:15px;\n"
"\n"
"}"));
        frogBodyLengthField = new QComboBox(clientSetPhysicalPreferences);
        frogBodyLengthField->setObjectName(QStringLiteral("frogBodyLengthField"));
        frogBodyLengthField->setGeometry(QRect(250, 200, 181, 25));
        frogBodyLengthField->setStyleSheet(QLatin1String("#frogBodyLengthField{\n"
"\n"
"	background:white;\n"
"    border-radius:15px;\n"
"\n"
"}"));
        salamanderBodyPatternField = new QComboBox(clientSetPhysicalPreferences);
        salamanderBodyPatternField->setObjectName(QStringLiteral("salamanderBodyPatternField"));
        salamanderBodyPatternField->setGeometry(QRect(450, 170, 221, 25));
        salamanderBodyPatternField->setStyleSheet(QLatin1String("#salamanderBodyPatternField{\n"
"\n"
"	background:white;\n"
"    border-radius:15px;\n"
"\n"
"}"));
        salamanderBodyLengthField = new QComboBox(clientSetPhysicalPreferences);
        salamanderBodyLengthField->setObjectName(QStringLiteral("salamanderBodyLengthField"));
        salamanderBodyLengthField->setGeometry(QRect(450, 200, 221, 25));
        salamanderBodyLengthField->setStyleSheet(QLatin1String("#salamanderBodyLengthField{\n"
"\n"
"	background:white;\n"
"    border-radius:15px;\n"
"\n"
"}"));
        frogBodyPatternField = new QComboBox(clientSetPhysicalPreferences);
        frogBodyPatternField->setObjectName(QStringLiteral("frogBodyPatternField"));
        frogBodyPatternField->setGeometry(QRect(250, 170, 181, 25));
        frogBodyPatternField->setStyleSheet(QLatin1String("#frogBodyPatternField{\n"
"\n"
"	background:white;\n"
"    border-radius:15px;\n"
"\n"
"}"));
        parrotWingSpanField = new QComboBox(clientSetPhysicalPreferences);
        parrotWingSpanField->setObjectName(QStringLiteral("parrotWingSpanField"));
        parrotWingSpanField->setGeometry(QRect(450, 270, 221, 25));
        parrotWingSpanField->setStyleSheet(QLatin1String("#parrotWingSpanField{\n"
"\n"
"	background:white;\n"
"    border-radius:15px;\n"
"\n"
"}"));
        finchWingSpanField = new QComboBox(clientSetPhysicalPreferences);
        finchWingSpanField->setObjectName(QStringLiteral("finchWingSpanField"));
        finchWingSpanField->setGeometry(QRect(250, 270, 181, 25));
        finchWingSpanField->setStyleSheet(QLatin1String("#finchWingSpanField{\n"
"\n"
"	background:white;\n"
"    border-radius:15px;\n"
"\n"
"}"));
        parrotBeakLengthField = new QComboBox(clientSetPhysicalPreferences);
        parrotBeakLengthField->setObjectName(QStringLiteral("parrotBeakLengthField"));
        parrotBeakLengthField->setGeometry(QRect(450, 300, 221, 25));
        parrotBeakLengthField->setStyleSheet(QLatin1String("#parrotBeakLengthField{\n"
"\n"
"	background:white;\n"
"    border-radius:15px;\n"
"\n"
"}"));
        finchBeakLengthField = new QComboBox(clientSetPhysicalPreferences);
        finchBeakLengthField->setObjectName(QStringLiteral("finchBeakLengthField"));
        finchBeakLengthField->setGeometry(QRect(250, 300, 181, 25));
        finchBeakLengthField->setStyleSheet(QLatin1String("#finchBeakLengthField{\n"
"\n"
"	background:white;\n"
"    border-radius:15px;\n"
"\n"
"}"));
        parrotBeakColourField = new QComboBox(clientSetPhysicalPreferences);
        parrotBeakColourField->setObjectName(QStringLiteral("parrotBeakColourField"));
        parrotBeakColourField->setGeometry(QRect(450, 330, 221, 25));
        parrotBeakColourField->setStyleSheet(QLatin1String("#parrotBeakColourField{\n"
"\n"
"	background:white;\n"
"    border-radius:15px;\n"
"\n"
"}"));
        finchBeakColourField = new QComboBox(clientSetPhysicalPreferences);
        finchBeakColourField->setObjectName(QStringLiteral("finchBeakColourField"));
        finchBeakColourField->setGeometry(QRect(250, 330, 181, 25));
        finchBeakColourField->setStyleSheet(QLatin1String("#finchBeakColourField{\n"
"\n"
"	background:white;\n"
"    border-radius:15px;\n"
"\n"
"}"));
        backToProfileFromPhysPageBtn = new QPushButton(clientSetPhysicalPreferences);
        backToProfileFromPhysPageBtn->setObjectName(QStringLiteral("backToProfileFromPhysPageBtn"));
        backToProfileFromPhysPageBtn->setGeometry(QRect(260, 450, 191, 51));
        backToProfileFromPhysPageBtn->setCursor(QCursor(Qt::PointingHandCursor));
        backToProfileFromPhysPageBtn->setStyleSheet(QLatin1String("#backToProfileFromPhysPageBtn{\n"
"\n"
"border: 3px solid black;\n"
"background:white;\n"
"border-radius: 25px;\n"
"}\n"
"\n"
"#backToProfileFromPhysPageBtn:hover{\n"
"\n"
"	background:  qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);\n"
"	color:#555;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        saveClientPhysicalPreferencesBtn = new QPushButton(clientSetPhysicalPreferences);
        saveClientPhysicalPreferencesBtn->setObjectName(QStringLiteral("saveClientPhysicalPreferencesBtn"));
        saveClientPhysicalPreferencesBtn->setGeometry(QRect(470, 450, 191, 51));
        saveClientPhysicalPreferencesBtn->setCursor(QCursor(Qt::PointingHandCursor));
        saveClientPhysicalPreferencesBtn->setStyleSheet(QLatin1String("#saveClientPhysicalPreferencesBtn{\n"
"\n"
"border: 3px solid black;\n"
"background:white;\n"
"border-radius: 25px;\n"
"}\n"
"\n"
"#saveClientPhysicalPreferencesBtn:hover{\n"
"\n"
"	background:  qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);\n"
"	color:#555;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        viewClientProfilePage->addWidget(clientSetPhysicalPreferences);
        clientViewRanksAndPrefernces = new QWidget();
        clientViewRanksAndPrefernces->setObjectName(QStringLiteral("clientViewRanksAndPrefernces"));
        preferencesBox = new QGroupBox(clientViewRanksAndPrefernces);
        preferencesBox->setObjectName(QStringLiteral("preferencesBox"));
        preferencesBox->setGeometry(QRect(0, 50, 731, 481));
        preferencesBox->setStyleSheet(QStringLiteral(""));
        dogPreferenceField = new QLineEdit(preferencesBox);
        dogPreferenceField->setObjectName(QStringLiteral("dogPreferenceField"));
        dogPreferenceField->setGeometry(QRect(120, 0, 120, 25));
        dogPreferenceField->setStyleSheet(QLatin1String("#dogPreferenceField{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        dogPreferenceField->setReadOnly(true);
        catPreferenceField = new QLineEdit(preferencesBox);
        catPreferenceField->setObjectName(QStringLiteral("catPreferenceField"));
        catPreferenceField->setGeometry(QRect(120, 120, 120, 25));
        catPreferenceField->setStyleSheet(QLatin1String("#catPreferenceField{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        catPreferenceField->setReadOnly(true);
        goldfishPreferenceField = new QLineEdit(preferencesBox);
        goldfishPreferenceField->setObjectName(QStringLiteral("goldfishPreferenceField"));
        goldfishPreferenceField->setGeometry(QRect(360, 240, 121, 25));
        goldfishPreferenceField->setStyleSheet(QLatin1String("#goldfishPreferenceField{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        goldfishPreferenceField->setReadOnly(true);
        salamanderPreferenceField = new QLineEdit(preferencesBox);
        salamanderPreferenceField->setObjectName(QStringLiteral("salamanderPreferenceField"));
        salamanderPreferenceField->setGeometry(QRect(613, 120, 111, 25));
        salamanderPreferenceField->setStyleSheet(QLatin1String("#salamanderPreferenceField{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        salamanderPreferenceField->setReadOnly(true);
        bettaPreferenceField = new QLineEdit(preferencesBox);
        bettaPreferenceField->setObjectName(QStringLiteral("bettaPreferenceField"));
        bettaPreferenceField->setGeometry(QRect(613, 240, 111, 25));
        bettaPreferenceField->setStyleSheet(QLatin1String("#bettaPreferenceField{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        bettaPreferenceField->setReadOnly(true);
        label_17 = new QLabel(preferencesBox);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(10, 0, 111, 25));
        label_17->setStyleSheet(QStringLiteral("	background:white;"));
        label_18 = new QLabel(preferencesBox);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(10, 120, 111, 25));
        label_18->setStyleSheet(QStringLiteral("	background:white;"));
        label_19 = new QLabel(preferencesBox);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(250, 240, 111, 25));
        label_19->setStyleSheet(QStringLiteral("	background:white;"));
        label_20 = new QLabel(preferencesBox);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(485, 120, 127, 25));
        label_20->setStyleSheet(QStringLiteral("	background:white;"));
        label_21 = new QLabel(preferencesBox);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(485, 240, 127, 25));
        label_21->setStyleSheet(QStringLiteral("	background:white;"));
        snakePreferenceField = new QLineEdit(preferencesBox);
        snakePreferenceField->setObjectName(QStringLiteral("snakePreferenceField"));
        snakePreferenceField->setGeometry(QRect(120, 240, 120, 25));
        snakePreferenceField->setStyleSheet(QLatin1String("#snakePreferenceField{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        snakePreferenceField->setReadOnly(true);
        label_29 = new QLabel(preferencesBox);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(250, 0, 111, 25));
        label_29->setStyleSheet(QStringLiteral("	background:white;"));
        finchPreferenceField = new QLineEdit(preferencesBox);
        finchPreferenceField->setObjectName(QStringLiteral("finchPreferenceField"));
        finchPreferenceField->setGeometry(QRect(360, 120, 120, 25));
        finchPreferenceField->setStyleSheet(QLatin1String("#finchPreferenceField{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        finchPreferenceField->setReadOnly(true);
        label_30 = new QLabel(preferencesBox);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(10, 240, 111, 25));
        label_30->setStyleSheet(QStringLiteral("	background:white;"));
        label_31 = new QLabel(preferencesBox);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(250, 120, 111, 25));
        label_31->setStyleSheet(QStringLiteral("	background:white;"));
        frogPreferenceField = new QLineEdit(preferencesBox);
        frogPreferenceField->setObjectName(QStringLiteral("frogPreferenceField"));
        frogPreferenceField->setGeometry(QRect(613, 0, 111, 25));
        frogPreferenceField->setStyleSheet(QLatin1String("#frogPreferenceField{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        frogPreferenceField->setReadOnly(true);
        label_32 = new QLabel(preferencesBox);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(485, 0, 127, 25));
        label_32->setStyleSheet(QStringLiteral("	background:white;"));
        parrotPreferenceField = new QLineEdit(preferencesBox);
        parrotPreferenceField->setObjectName(QStringLiteral("parrotPreferenceField"));
        parrotPreferenceField->setGeometry(QRect(360, 0, 120, 25));
        parrotPreferenceField->setStyleSheet(QLatin1String("#parrotPreferenceField{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        parrotPreferenceField->setReadOnly(true);
        lizardPreferenceField = new QLineEdit(preferencesBox);
        lizardPreferenceField->setObjectName(QStringLiteral("lizardPreferenceField"));
        lizardPreferenceField->setGeometry(QRect(120, 360, 120, 25));
        lizardPreferenceField->setStyleSheet(QLatin1String("#lizardPreferenceField{\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
"}"));
        lizardPreferenceField->setReadOnly(true);
        label_34 = new QLabel(preferencesBox);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(10, 360, 111, 25));
        label_34->setStyleSheet(QStringLiteral("	background:white;"));
        dogFurColourOutField = new QLineEdit(preferencesBox);
        dogFurColourOutField->setObjectName(QStringLiteral("dogFurColourOutField"));
        dogFurColourOutField->setGeometry(QRect(120, 90, 120, 25));
        dogFurColourOutField->setStyleSheet(QLatin1String("\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
""));
        dogFurColourOutField->setReadOnly(true);
        label_41 = new QLabel(preferencesBox);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setGeometry(QRect(10, 30, 111, 25));
        label_41->setStyleSheet(QStringLiteral("	background:white;"));
        dogFurLengthOutField = new QLineEdit(preferencesBox);
        dogFurLengthOutField->setObjectName(QStringLiteral("dogFurLengthOutField"));
        dogFurLengthOutField->setGeometry(QRect(120, 60, 120, 25));
        dogFurLengthOutField->setStyleSheet(QLatin1String("\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
""));
        dogFurLengthOutField->setReadOnly(true);
        dogBuildOutField = new QLineEdit(preferencesBox);
        dogBuildOutField->setObjectName(QStringLiteral("dogBuildOutField"));
        dogBuildOutField->setGeometry(QRect(120, 30, 120, 25));
        dogBuildOutField->setStyleSheet(QLatin1String("background:white;\n"
"border: 2px solid black;\n"
""));
        dogBuildOutField->setReadOnly(true);
        label_42 = new QLabel(preferencesBox);
        label_42->setObjectName(QStringLiteral("label_42"));
        label_42->setGeometry(QRect(10, 60, 111, 25));
        label_42->setStyleSheet(QStringLiteral("	background:white;"));
        label_43 = new QLabel(preferencesBox);
        label_43->setObjectName(QStringLiteral("label_43"));
        label_43->setGeometry(QRect(10, 90, 111, 25));
        label_43->setStyleSheet(QStringLiteral("	background:white;"));
        label_57 = new QLabel(preferencesBox);
        label_57->setObjectName(QStringLiteral("label_57"));
        label_57->setGeometry(QRect(10, 150, 111, 25));
        label_57->setStyleSheet(QStringLiteral("	background:white;"));
        catFurLengthOutField = new QLineEdit(preferencesBox);
        catFurLengthOutField->setObjectName(QStringLiteral("catFurLengthOutField"));
        catFurLengthOutField->setGeometry(QRect(120, 180, 120, 25));
        catFurLengthOutField->setStyleSheet(QLatin1String("\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
""));
        catFurLengthOutField->setReadOnly(true);
        catFurColourOutField = new QLineEdit(preferencesBox);
        catFurColourOutField->setObjectName(QStringLiteral("catFurColourOutField"));
        catFurColourOutField->setGeometry(QRect(120, 210, 120, 25));
        catFurColourOutField->setStyleSheet(QLatin1String("\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
""));
        catFurColourOutField->setReadOnly(true);
        label_58 = new QLabel(preferencesBox);
        label_58->setObjectName(QStringLiteral("label_58"));
        label_58->setGeometry(QRect(10, 210, 111, 25));
        label_58->setStyleSheet(QStringLiteral("	background:white;"));
        catBuildOutField = new QLineEdit(preferencesBox);
        catBuildOutField->setObjectName(QStringLiteral("catBuildOutField"));
        catBuildOutField->setGeometry(QRect(120, 150, 120, 25));
        catBuildOutField->setStyleSheet(QLatin1String("background:white;\n"
"border: 2px solid black;\n"
""));
        catBuildOutField->setReadOnly(true);
        label_59 = new QLabel(preferencesBox);
        label_59->setObjectName(QStringLiteral("label_59"));
        label_59->setGeometry(QRect(10, 180, 111, 25));
        label_59->setStyleSheet(QStringLiteral("	background:white;"));
        label_60 = new QLabel(preferencesBox);
        label_60->setObjectName(QStringLiteral("label_60"));
        label_60->setGeometry(QRect(10, 300, 111, 25));
        label_60->setStyleSheet(QStringLiteral("	background:white;"));
        snakeBodyPatternOutField = new QLineEdit(preferencesBox);
        snakeBodyPatternOutField->setObjectName(QStringLiteral("snakeBodyPatternOutField"));
        snakeBodyPatternOutField->setGeometry(QRect(120, 270, 120, 25));
        snakeBodyPatternOutField->setStyleSheet(QLatin1String("background:white;\n"
"border: 2px solid black;\n"
""));
        snakeBodyPatternOutField->setReadOnly(true);
        label_61 = new QLabel(preferencesBox);
        label_61->setObjectName(QStringLiteral("label_61"));
        label_61->setGeometry(QRect(10, 330, 111, 25));
        label_61->setStyleSheet(QStringLiteral("	background:white;"));
        snakeBodyLengthOutField = new QLineEdit(preferencesBox);
        snakeBodyLengthOutField->setObjectName(QStringLiteral("snakeBodyLengthOutField"));
        snakeBodyLengthOutField->setGeometry(QRect(120, 300, 120, 25));
        snakeBodyLengthOutField->setStyleSheet(QLatin1String("\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
""));
        snakeBodyLengthOutField->setReadOnly(true);
        label_62 = new QLabel(preferencesBox);
        label_62->setObjectName(QStringLiteral("label_62"));
        label_62->setGeometry(QRect(10, 270, 111, 25));
        label_62->setStyleSheet(QStringLiteral("	background:white;"));
        snakeScaleTypeOutField = new QLineEdit(preferencesBox);
        snakeScaleTypeOutField->setObjectName(QStringLiteral("snakeScaleTypeOutField"));
        snakeScaleTypeOutField->setGeometry(QRect(120, 330, 120, 25));
        snakeScaleTypeOutField->setStyleSheet(QLatin1String("\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
""));
        snakeScaleTypeOutField->setReadOnly(true);
        lizardBodyLengthOutField = new QLineEdit(preferencesBox);
        lizardBodyLengthOutField->setObjectName(QStringLiteral("lizardBodyLengthOutField"));
        lizardBodyLengthOutField->setGeometry(QRect(120, 420, 120, 25));
        lizardBodyLengthOutField->setStyleSheet(QLatin1String("\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
""));
        lizardBodyLengthOutField->setReadOnly(true);
        label_82 = new QLabel(preferencesBox);
        label_82->setObjectName(QStringLiteral("label_82"));
        label_82->setGeometry(QRect(10, 450, 111, 25));
        label_82->setStyleSheet(QStringLiteral("	background:white;"));
        label_83 = new QLabel(preferencesBox);
        label_83->setObjectName(QStringLiteral("label_83"));
        label_83->setGeometry(QRect(10, 420, 111, 25));
        label_83->setStyleSheet(QStringLiteral("	background:white;"));
        lizardBodyPatternOutField = new QLineEdit(preferencesBox);
        lizardBodyPatternOutField->setObjectName(QStringLiteral("lizardBodyPatternOutField"));
        lizardBodyPatternOutField->setGeometry(QRect(120, 390, 120, 25));
        lizardBodyPatternOutField->setStyleSheet(QLatin1String("background:white;\n"
"border: 2px solid black;\n"
""));
        lizardBodyPatternOutField->setReadOnly(true);
        label_84 = new QLabel(preferencesBox);
        label_84->setObjectName(QStringLiteral("label_84"));
        label_84->setGeometry(QRect(10, 390, 111, 25));
        label_84->setStyleSheet(QStringLiteral("	background:white;"));
        lizardScaleTypeOutField = new QLineEdit(preferencesBox);
        lizardScaleTypeOutField->setObjectName(QStringLiteral("lizardScaleTypeOutField"));
        lizardScaleTypeOutField->setGeometry(QRect(120, 450, 120, 25));
        lizardScaleTypeOutField->setStyleSheet(QLatin1String("\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
""));
        lizardScaleTypeOutField->setReadOnly(true);
        label_85 = new QLabel(preferencesBox);
        label_85->setObjectName(QStringLiteral("label_85"));
        label_85->setGeometry(QRect(250, 30, 111, 25));
        label_85->setStyleSheet(QStringLiteral("	background:white;"));
        parrotBeakLengthOutField = new QLineEdit(preferencesBox);
        parrotBeakLengthOutField->setObjectName(QStringLiteral("parrotBeakLengthOutField"));
        parrotBeakLengthOutField->setGeometry(QRect(360, 60, 120, 25));
        parrotBeakLengthOutField->setStyleSheet(QLatin1String("\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
""));
        parrotBeakLengthOutField->setReadOnly(true);
        parrotBeakColourOutField = new QLineEdit(preferencesBox);
        parrotBeakColourOutField->setObjectName(QStringLiteral("parrotBeakColourOutField"));
        parrotBeakColourOutField->setGeometry(QRect(360, 90, 120, 25));
        parrotBeakColourOutField->setStyleSheet(QLatin1String("\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
""));
        parrotBeakColourOutField->setReadOnly(true);
        label_86 = new QLabel(preferencesBox);
        label_86->setObjectName(QStringLiteral("label_86"));
        label_86->setGeometry(QRect(250, 90, 111, 25));
        label_86->setStyleSheet(QStringLiteral("	background:white;"));
        parrotWingSpanOutField = new QLineEdit(preferencesBox);
        parrotWingSpanOutField->setObjectName(QStringLiteral("parrotWingSpanOutField"));
        parrotWingSpanOutField->setGeometry(QRect(360, 30, 120, 25));
        parrotWingSpanOutField->setStyleSheet(QLatin1String("background:white;\n"
"border: 2px solid black;\n"
""));
        parrotWingSpanOutField->setReadOnly(true);
        label_87 = new QLabel(preferencesBox);
        label_87->setObjectName(QStringLiteral("label_87"));
        label_87->setGeometry(QRect(250, 60, 111, 25));
        label_87->setStyleSheet(QStringLiteral("	background:white;"));
        finchBeakLengthOutField = new QLineEdit(preferencesBox);
        finchBeakLengthOutField->setObjectName(QStringLiteral("finchBeakLengthOutField"));
        finchBeakLengthOutField->setGeometry(QRect(360, 180, 120, 25));
        finchBeakLengthOutField->setStyleSheet(QLatin1String("\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
""));
        finchBeakLengthOutField->setReadOnly(true);
        label_88 = new QLabel(preferencesBox);
        label_88->setObjectName(QStringLiteral("label_88"));
        label_88->setGeometry(QRect(250, 150, 111, 25));
        label_88->setStyleSheet(QStringLiteral("	background:white;"));
        finchBeakColourOutField = new QLineEdit(preferencesBox);
        finchBeakColourOutField->setObjectName(QStringLiteral("finchBeakColourOutField"));
        finchBeakColourOutField->setGeometry(QRect(360, 210, 120, 25));
        finchBeakColourOutField->setStyleSheet(QLatin1String("\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
""));
        finchBeakColourOutField->setReadOnly(true);
        finchWingSpanOutField = new QLineEdit(preferencesBox);
        finchWingSpanOutField->setObjectName(QStringLiteral("finchWingSpanOutField"));
        finchWingSpanOutField->setGeometry(QRect(360, 150, 120, 25));
        finchWingSpanOutField->setStyleSheet(QLatin1String("background:white;\n"
"border: 2px solid black;\n"
""));
        finchWingSpanOutField->setReadOnly(true);
        label_89 = new QLabel(preferencesBox);
        label_89->setObjectName(QStringLiteral("label_89"));
        label_89->setGeometry(QRect(250, 210, 111, 25));
        label_89->setStyleSheet(QStringLiteral("	background:white;"));
        label_90 = new QLabel(preferencesBox);
        label_90->setObjectName(QStringLiteral("label_90"));
        label_90->setGeometry(QRect(250, 180, 111, 25));
        label_90->setStyleSheet(QStringLiteral("	background:white;"));
        label_91 = new QLabel(preferencesBox);
        label_91->setObjectName(QStringLiteral("label_91"));
        label_91->setGeometry(QRect(485, 30, 127, 25));
        label_91->setStyleSheet(QStringLiteral("	background:white;"));
        frogBodyLengthOutField = new QLineEdit(preferencesBox);
        frogBodyLengthOutField->setObjectName(QStringLiteral("frogBodyLengthOutField"));
        frogBodyLengthOutField->setGeometry(QRect(613, 60, 111, 25));
        frogBodyLengthOutField->setStyleSheet(QLatin1String("\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
""));
        frogBodyLengthOutField->setReadOnly(true);
        label_92 = new QLabel(preferencesBox);
        label_92->setObjectName(QStringLiteral("label_92"));
        label_92->setGeometry(QRect(485, 90, 127, 25));
        label_92->setStyleSheet(QStringLiteral("	background:white;"));
        frogBuildOutField = new QLineEdit(preferencesBox);
        frogBuildOutField->setObjectName(QStringLiteral("frogBuildOutField"));
        frogBuildOutField->setGeometry(QRect(613, 90, 111, 25));
        frogBuildOutField->setStyleSheet(QLatin1String("\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
""));
        frogBuildOutField->setReadOnly(true);
        frogBodyPatternOutField = new QLineEdit(preferencesBox);
        frogBodyPatternOutField->setObjectName(QStringLiteral("frogBodyPatternOutField"));
        frogBodyPatternOutField->setGeometry(QRect(613, 30, 111, 25));
        frogBodyPatternOutField->setStyleSheet(QLatin1String("background:white;\n"
"border: 2px solid black;\n"
""));
        frogBodyPatternOutField->setReadOnly(true);
        label_93 = new QLabel(preferencesBox);
        label_93->setObjectName(QStringLiteral("label_93"));
        label_93->setGeometry(QRect(485, 60, 127, 25));
        label_93->setStyleSheet(QStringLiteral("	background:white;"));
        label_94 = new QLabel(preferencesBox);
        label_94->setObjectName(QStringLiteral("label_94"));
        label_94->setGeometry(QRect(485, 150, 127, 25));
        label_94->setStyleSheet(QStringLiteral("	background:white;"));
        salamanderBuildOutField = new QLineEdit(preferencesBox);
        salamanderBuildOutField->setObjectName(QStringLiteral("salamanderBuildOutField"));
        salamanderBuildOutField->setGeometry(QRect(613, 210, 111, 25));
        salamanderBuildOutField->setStyleSheet(QLatin1String("\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
""));
        salamanderBuildOutField->setReadOnly(true);
        salamanderBodyLengthOutField = new QLineEdit(preferencesBox);
        salamanderBodyLengthOutField->setObjectName(QStringLiteral("salamanderBodyLengthOutField"));
        salamanderBodyLengthOutField->setGeometry(QRect(613, 180, 111, 25));
        salamanderBodyLengthOutField->setStyleSheet(QLatin1String("\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
""));
        salamanderBodyLengthOutField->setReadOnly(true);
        salamanderBodyPatternOutField = new QLineEdit(preferencesBox);
        salamanderBodyPatternOutField->setObjectName(QStringLiteral("salamanderBodyPatternOutField"));
        salamanderBodyPatternOutField->setGeometry(QRect(613, 150, 111, 25));
        salamanderBodyPatternOutField->setStyleSheet(QLatin1String("background:white;\n"
"border: 2px solid black;\n"
""));
        salamanderBodyPatternOutField->setReadOnly(true);
        label_95 = new QLabel(preferencesBox);
        label_95->setObjectName(QStringLiteral("label_95"));
        label_95->setGeometry(QRect(485, 210, 127, 25));
        label_95->setStyleSheet(QStringLiteral("	background:white;"));
        label_96 = new QLabel(preferencesBox);
        label_96->setObjectName(QStringLiteral("label_96"));
        label_96->setGeometry(QRect(485, 180, 127, 25));
        label_96->setStyleSheet(QStringLiteral("	background:white;"));
        label_97 = new QLabel(preferencesBox);
        label_97->setObjectName(QStringLiteral("label_97"));
        label_97->setGeometry(QRect(250, 270, 111, 25));
        label_97->setStyleSheet(QStringLiteral("	background:white;"));
        label_98 = new QLabel(preferencesBox);
        label_98->setObjectName(QStringLiteral("label_98"));
        label_98->setGeometry(QRect(250, 300, 111, 25));
        label_98->setStyleSheet(QStringLiteral("	background:white;"));
        label_99 = new QLabel(preferencesBox);
        label_99->setObjectName(QStringLiteral("label_99"));
        label_99->setGeometry(QRect(250, 330, 111, 25));
        label_99->setStyleSheet(QStringLiteral("	background:white;"));
        goldfishFinnSizeOutField = new QLineEdit(preferencesBox);
        goldfishFinnSizeOutField->setObjectName(QStringLiteral("goldfishFinnSizeOutField"));
        goldfishFinnSizeOutField->setGeometry(QRect(360, 330, 121, 25));
        goldfishFinnSizeOutField->setStyleSheet(QLatin1String("\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
""));
        goldfishFinnSizeOutField->setReadOnly(true);
        goldfishBodyPatternOutField = new QLineEdit(preferencesBox);
        goldfishBodyPatternOutField->setObjectName(QStringLiteral("goldfishBodyPatternOutField"));
        goldfishBodyPatternOutField->setGeometry(QRect(360, 270, 121, 25));
        goldfishBodyPatternOutField->setStyleSheet(QLatin1String("background:white;\n"
"border: 2px solid black;\n"
""));
        goldfishBodyPatternOutField->setReadOnly(true);
        goldfishBodyLengthOutField = new QLineEdit(preferencesBox);
        goldfishBodyLengthOutField->setObjectName(QStringLiteral("goldfishBodyLengthOutField"));
        goldfishBodyLengthOutField->setGeometry(QRect(360, 300, 121, 25));
        goldfishBodyLengthOutField->setStyleSheet(QLatin1String("\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
""));
        goldfishBodyLengthOutField->setReadOnly(true);
        bettaBodyLengthOutField = new QLineEdit(preferencesBox);
        bettaBodyLengthOutField->setObjectName(QStringLiteral("bettaBodyLengthOutField"));
        bettaBodyLengthOutField->setGeometry(QRect(613, 300, 111, 25));
        bettaBodyLengthOutField->setStyleSheet(QLatin1String("\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
""));
        bettaBodyLengthOutField->setReadOnly(true);
        bettaBodyPatternOutField = new QLineEdit(preferencesBox);
        bettaBodyPatternOutField->setObjectName(QStringLiteral("bettaBodyPatternOutField"));
        bettaBodyPatternOutField->setGeometry(QRect(614, 270, 111, 25));
        bettaBodyPatternOutField->setStyleSheet(QLatin1String("background:white;\n"
"border: 2px solid black;\n"
""));
        bettaBodyPatternOutField->setReadOnly(true);
        label_100 = new QLabel(preferencesBox);
        label_100->setObjectName(QStringLiteral("label_100"));
        label_100->setGeometry(QRect(485, 300, 129, 25));
        label_100->setStyleSheet(QStringLiteral("	background:white;"));
        label_101 = new QLabel(preferencesBox);
        label_101->setObjectName(QStringLiteral("label_101"));
        label_101->setGeometry(QRect(485, 330, 129, 25));
        label_101->setStyleSheet(QStringLiteral("	background:white;"));
        label_102 = new QLabel(preferencesBox);
        label_102->setObjectName(QStringLiteral("label_102"));
        label_102->setGeometry(QRect(485, 270, 129, 25));
        label_102->setStyleSheet(QStringLiteral("	background:white;"));
        bettaFinnSizeOutField = new QLineEdit(preferencesBox);
        bettaFinnSizeOutField->setObjectName(QStringLiteral("bettaFinnSizeOutField"));
        bettaFinnSizeOutField->setGeometry(QRect(613, 330, 111, 25));
        bettaFinnSizeOutField->setStyleSheet(QLatin1String("\n"
"\n"
"	background:white;\n"
"	border: 2px solid black;\n"
""));
        bettaFinnSizeOutField->setReadOnly(true);
        backToProfileFromViewRanksAndPrefecnesBtn = new QPushButton(preferencesBox);
        backToProfileFromViewRanksAndPrefecnesBtn->setObjectName(QStringLiteral("backToProfileFromViewRanksAndPrefecnesBtn"));
        backToProfileFromViewRanksAndPrefecnesBtn->setGeometry(QRect(270, 410, 191, 51));
        backToProfileFromViewRanksAndPrefecnesBtn->setCursor(QCursor(Qt::PointingHandCursor));
        backToProfileFromViewRanksAndPrefecnesBtn->setStyleSheet(QLatin1String("#backToProfileFromViewRanksAndPrefecnesBtn{\n"
"\n"
"border: 3px solid black;\n"
"border-radius: 25px;\n"
"background: white;\n"
"}\n"
"\n"
"#backToProfileFromViewRanksAndPrefecnesBtn:hover{\n"
"\n"
"	background:  qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);\n"
"	color:#555;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        viewRanksAndPreferencesHeadLine = new QTextBrowser(clientViewRanksAndPrefernces);
        viewRanksAndPreferencesHeadLine->setObjectName(QStringLiteral("viewRanksAndPreferencesHeadLine"));
        viewRanksAndPreferencesHeadLine->setEnabled(true);
        viewRanksAndPreferencesHeadLine->setGeometry(QRect(130, 3, 431, 41));
        viewRanksAndPreferencesHeadLine->setStyleSheet(QLatin1String("#viewRanksAndPreferencesHeadLine{\n"
"		background:white;\n"
"		border-radius:15px;\n"
"	    border:none;\n"
"}"));
        viewRanksAndPreferencesHeadLine->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        viewClientProfilePage->addWidget(clientViewRanksAndPrefernces);
        backToMainMenuFromClientViewBtn = new QPushButton(ClientPage);
        backToMainMenuFromClientViewBtn->setObjectName(QStringLiteral("backToMainMenuFromClientViewBtn"));
        backToMainMenuFromClientViewBtn->setGeometry(QRect(810, 30, 201, 51));
        backToMainMenuFromClientViewBtn->setCursor(QCursor(Qt::PointingHandCursor));
        backToMainMenuFromClientViewBtn->setStyleSheet(QLatin1String("#backToMainMenuFromClientViewBtn{\n"
"\n"
"border: 3px solid black;\n"
"background: white;\n"
"border-radius: 25px;\n"
"}\n"
"\n"
"#backToMainMenuFromClientViewBtn:hover{\n"
"\n"
"	background:  qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);\n"
"	color:#555;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        stackedWidget->addWidget(ClientPage);
        LoginPage = new QWidget();
        LoginPage->setObjectName(QStringLiteral("LoginPage"));
        LoginBox = new QGroupBox(LoginPage);
        LoginBox->setObjectName(QStringLiteral("LoginBox"));
        LoginBox->setGeometry(QRect(240, 140, 371, 241));
        LoginBox->setStyleSheet(QLatin1String("background: qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeea7, stop:1 #fae1a0);\n"
"\n"
"\n"
"border:2px solid black;"));
        textBrowser = new QTextBrowser(LoginBox);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(0, 0, 371, 51));
        textBrowser->setStyleSheet(QLatin1String("background:white;\n"
""));
        userLoginEmail = new QLineEdit(LoginBox);
        userLoginEmail->setObjectName(QStringLiteral("userLoginEmail"));
        userLoginEmail->setGeometry(QRect(68, 106, 231, 31));
        userLoginEmail->setStyleSheet(QLatin1String("border-radius:9px;\n"
"background:white;"));
        loginBtn = new QPushButton(LoginBox);
        loginBtn->setObjectName(QStringLiteral("loginBtn"));
        loginBtn->setGeometry(QRect(100, 170, 161, 51));
        loginBtn->setCursor(QCursor(Qt::PointingHandCursor));
        loginBtn->setStyleSheet(QLatin1String("#loginBtn{\n"
"\n"
"border: 3px solid black;\n"
"background:white;\n"
"border-radius: 25px;\n"
"}\n"
"\n"
"#loginBtn:hover{\n"
"\n"
"	background:  qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);\n"
"	color:#555;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        label_24 = new QLabel(LoginBox);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(70, 90, 64, 17));
        avaliableClients = new QListWidget(LoginPage);
        avaliableClients->setObjectName(QStringLiteral("avaliableClients"));
        avaliableClients->setGeometry(QRect(710, 120, 256, 321));
        avaliableClients->setStyleSheet(QLatin1String("border-radius:0px;\n"
"background:white;\n"
"border: 2px solid black;"));
        textBrowser_2 = new QTextBrowser(LoginPage);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(710, 80, 251, 41));
        textBrowser_2->setStyleSheet(QStringLiteral("background:white;"));
        mainMenuBtnFromLogin = new QPushButton(LoginPage);
        mainMenuBtnFromLogin->setObjectName(QStringLiteral("mainMenuBtnFromLogin"));
        mainMenuBtnFromLogin->setGeometry(QRect(60, 20, 211, 51));
        mainMenuBtnFromLogin->setCursor(QCursor(Qt::PointingHandCursor));
        mainMenuBtnFromLogin->setStyleSheet(QLatin1String("#mainMenuBtnFromLogin{\n"
"\n"
"border: 3px solid black;\n"
"background:white;\n"
"border-radius: 25px;\n"
"}\n"
"\n"
"#mainMenuBtnFromLogin:hover{\n"
"\n"
"	background:  qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #ffeaa7, stop:1 #fab1a0);\n"
"	color:#555;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        stackedWidget->addWidget(LoginPage);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1000, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionSave);
        menuFile->addAction(actionPrint);
        menuFile->addAction(actionClose);
        menuHelp->addAction(actionGuide);
        menuHelp->addAction(action_About);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);
        animalForm->setCurrentIndex(1);
        clientForm->setCurrentIndex(0);
        viewAnimalsListPopUp->setCurrentIndex(1);
        viewClientsListPopUp->setCurrentIndex(1);
        viewAnimalsFromClientView->setCurrentIndex(1);
        viewClientProfilePage->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionSave->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
        actionPrint->setText(QApplication::translate("MainWindow", "Print", Q_NULLPTR));
        actionClose->setText(QApplication::translate("MainWindow", "Close", Q_NULLPTR));
        actionGuide->setText(QApplication::translate("MainWindow", " Guide", Q_NULLPTR));
        action_About->setText(QApplication::translate("MainWindow", " About Us", Q_NULLPTR));
        entranceMenu->setTitle(QString());
        MenuGroupBox->setTitle(QString());
        checkingUserText->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#555555;\">Are you a client or staff member?</span></p></body></html>", Q_NULLPTR));
        staffBtn->setText(QApplication::translate("MainWindow", "Staff", Q_NULLPTR));
        clientBtn->setText(QApplication::translate("MainWindow", "Client", Q_NULLPTR));
        welcomeScreen->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#555555;\">Welcome to CUACS!</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:600; color:#555555;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty;"
                        " margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        StaffMenu->setTitle(QString());
        userMenu_text->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600; color:#555555;\">User Menu</span></p></body></html>", Q_NULLPTR));
        StaffMenuBox->setTitle(QString());
        launchACM->setText(QApplication::translate("MainWindow", "Launch ACM", Q_NULLPTR));
        animalsListBtn->setText(QApplication::translate("MainWindow", "View Animals List", Q_NULLPTR));
        viewClientsBtn->setText(QApplication::translate("MainWindow", "View Clients List", Q_NULLPTR));
        animalAddBtn->setText(QApplication::translate("MainWindow", "Add Animal", Q_NULLPTR));
        addClientBtn->setText(QApplication::translate("MainWindow", "Add Client", Q_NULLPTR));
        canvasStaff->setTitle(QString());
#ifndef QT_NO_ACCESSIBILITY
        addAnimalPopUp->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
        addAnimalPopUp->setTitle(QString());
        saveAnimalBtn->setText(QApplication::translate("MainWindow", "Save Animal", Q_NULLPTR));
        closeAnimalBtn->setText(QApplication::translate("MainWindow", "Close", Q_NULLPTR));
        titlePopUp->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt; font-weight:600; color:#2e3436;\">Adding An Animal</span></p></body></html>", Q_NULLPTR));
        errorMessage->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#cc0000;\">Oops! Something went wrong. Please try again, make sure to fill out all the forms correclty as specified in the place holders for each text field</span></p></body></html>", Q_NULLPTR));
        successMessage->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#73d216;\">The Animal has been successfually added to the Database and is avaliable for adoption</span></p></body></html>", Q_NULLPTR));
        animalGenderField->clear();
        animalGenderField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Select Gender", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Male", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Female", Q_NULLPTR)
        );
        animalNameField->setPlaceholderText(QApplication::translate("MainWindow", "Name of the Animal ex. \"Leo\" or \"Billy\"", Q_NULLPTR));
        animalSpeciesField->clear();
        animalSpeciesField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Select the type of species", Q_NULLPTR)
        );
        animalColourField->clear();
        animalColourField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Select the colour of the animal", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Black", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Blue", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Brown", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Cream", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Crimson", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Gray", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Green", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Orange", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Pink", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Purple", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Red", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Violet", Q_NULLPTR)
         << QApplication::translate("MainWindow", "White", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Yellow", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Bicolor", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Tricolor", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Colorful", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Colorless/Transparency", Q_NULLPTR)
        );
        animalWeightField->setPlaceholderText(QApplication::translate("MainWindow", "Animal Weight", Q_NULLPTR));
        animalHeightField->setPlaceholderText(QApplication::translate("MainWindow", "Animal Height", Q_NULLPTR));
        animalWeightLabel->setText(QApplication::translate("MainWindow", "KG", Q_NULLPTR));
        animalHeightLabel->setText(QApplication::translate("MainWindow", "CM", Q_NULLPTR));
        animalAgeField->clear();
        animalAgeField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Select the age of the animal(MO=Months old)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1-3 MO", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4-6 MO", Q_NULLPTR)
         << QApplication::translate("MainWindow", "7-9 MO", Q_NULLPTR)
         << QApplication::translate("MainWindow", "10-12 MO", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1-2 YO", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3-4 YO", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5-6 YO", Q_NULLPTR)
         << QApplication::translate("MainWindow", "7-8 YO", Q_NULLPTR)
         << QApplication::translate("MainWindow", "9-10 YO", Q_NULLPTR)
         << QApplication::translate("MainWindow", "11-12 YO", Q_NULLPTR)
         << QApplication::translate("MainWindow", "13-14 YO", Q_NULLPTR)
         << QApplication::translate("MainWindow", "15-16 YO", Q_NULLPTR)
         << QApplication::translate("MainWindow", "17-18 YO", Q_NULLPTR)
         << QApplication::translate("MainWindow", "19-20 YO", Q_NULLPTR)
         << QApplication::translate("MainWindow", "21 YO", Q_NULLPTR)
        );
        animalTypeField->clear();
        animalTypeField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Select the Type of animal", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Cat", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Dog", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Parrot", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Finch", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Frog", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Salamander", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Betta", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Goldfish", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Snake", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Lizard", Q_NULLPTR)
        );
        animalNextBtn->setText(QApplication::translate("MainWindow", "Next", Q_NULLPTR));
        animalBasicInfoTitle->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:600; color:#2e3436;\">Animal Info</span></p></body></html>", Q_NULLPTR));
        animalBackBtn->setText(QApplication::translate("MainWindow", "back", Q_NULLPTR));
        animalIntelligenceField->clear();
        animalIntelligenceField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Animal's Intelligence", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Barely Intelligent)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Somewhat Intelligent)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (Moderately Intelligent)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4 (Intelligent)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5 (Very Intelligent)", Q_NULLPTR)
        );
        animalAffectionismField->clear();
        animalAffectionismField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Animal's Affectionism", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Barely Affectionate)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Somewhat Affectionate)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (Moderately Affectionate)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4 (Affectionate)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5 (Very Affectionate)", Q_NULLPTR)
        );
        animalIndividualismField->clear();
        animalIndividualismField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Animal's Individualism", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Barely Independent)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Somewhat Independent)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (Moderately Independent)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4 (Independent)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5 (Very Independent)", Q_NULLPTR)
        );
        animalTraitsTitleLabel->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; color:#2e3436;\">Character Traits</span></p></body></html>", Q_NULLPTR));
        animalDisciplineField->clear();
        animalDisciplineField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Animal's Discipline", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Barely Disciplined)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Somewhat Disciplined)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (Moderately Disciplined)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4 (Disciplined)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5 (Very Disciplined)", Q_NULLPTR)
        );
        animalSpaciousnessField->clear();
        animalSpaciousnessField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Animal's Spaciousness", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Barely Spacious)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Somewhat Spacious)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (Moderately Spacious)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4 (Spacious)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5 (Very Spacious)", Q_NULLPTR)
        );
        animalHabitatField->clear();
        animalHabitatField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Animal's Habitat Preference", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Cold)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Cool)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (Mild)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4 (Warm)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5 (Hot))", Q_NULLPTR)
        );
        animalEnergeticField->clear();
        animalEnergeticField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Animal's Energetic", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Barely Energetic)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Somewhat Energetic)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (Moderately Energetic)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4 (Energetic)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5 (Very Energetic)", Q_NULLPTR)
        );
        animalAppetiteField->clear();
        animalAppetiteField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Animal's Appetite", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Small Appetite)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Moderate Appetite)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (Normal Appetite)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4 (Big Appetite)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5 (Huge Appetite)", Q_NULLPTR)
        );
        animalAssertivenessField->clear();
        animalAssertivenessField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Animal's Assertiveness", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Barely Assertive)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Somewhat Assertive)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (Moderately Assertive)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4 (Assertive)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5 (Very Assertive)", Q_NULLPTR)
        );
        animalActivenessField->clear();
        animalActivenessField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Animal's Activeness", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Barely Active)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Somewhat Active)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (Moderately Active)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4 (Active)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5 (Very Active)", Q_NULLPTR)
        );
        animalPlayfulnessField->clear();
        animalPlayfulnessField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Animal's Playfulness", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Barely Playful)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Somewhat Playful)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (Moderately Playful)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4 (Playful)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5 (Very Playful)", Q_NULLPTR)
        );
        animalDiurnalField->clear();
        animalDiurnalField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Animal's Diurnal-Nocturnal", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Barely Nocturnal)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Somewhat Nocturnal)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (Moderately Nocturnal)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4 (Nocturnal)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5 (Very Nocturnal)", Q_NULLPTR)
        );
        animalNextPhysBtn->setText(QApplication::translate("MainWindow", "next", Q_NULLPTR));
        animalPhysHeadline->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:600; color:#2e3436;\">Animal Phys. Attributes</span></p></body></html>", Q_NULLPTR));
        animalPhysFurLengthField->clear();
        animalPhysFurLengthField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Animal's Furlength", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (short)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (medium)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (long)", Q_NULLPTR)
        );
        animalPhysFurColourField->clear();
        animalPhysFurColourField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Animal's Furcolour", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Dark Brown)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Light Brown)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (Blonde)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4 (White)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5 (Polka Dot)", Q_NULLPTR)
        );
        animalPhysBodyPatternField->clear();
        animalPhysBodyPatternField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Animal's Bodypattern", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (dotted pattern)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Striped)", Q_NULLPTR)
        );
        animalPhysBodyLengthField->clear();
        animalPhysBodyLengthField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Animal's Bodylength", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (short)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (medium)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (long)", Q_NULLPTR)
        );
        animalPhysWingSpanField->clear();
        animalPhysWingSpanField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Animal's Wingspan", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (short)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (medium)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (long)", Q_NULLPTR)
        );
        animalPhysBeakLengthField->clear();
        animalPhysBeakLengthField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Animal's Beaklength", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (short)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (medium)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (long)", Q_NULLPTR)
        );
        animalPhysBeakColourField->clear();
        animalPhysBeakColourField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Animal's Beakcolour", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (red)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (orange)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (yellow)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4 (black)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5 (blue)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "6 (mixed)", Q_NULLPTR)
        );
        animalPhysScaleTypeField->clear();
        animalPhysScaleTypeField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Animal's Scaletype", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (smooth)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (jagged)", Q_NULLPTR)
        );
        animalPhysFinnSizeField->clear();
        animalPhysFinnSizeField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Animal's Finnsize", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (short)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (medium)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (long)", Q_NULLPTR)
        );
        backToNonPhysBtn->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        animalPhysBuildField->clear();
        animalPhysBuildField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Animal's Build", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (thin)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (average)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (bulky)", Q_NULLPTR)
        );
#ifndef QT_NO_ACCESSIBILITY
        addClientPopUp->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
        addClientPopUp->setTitle(QString());
        saveClientBtn->setText(QApplication::translate("MainWindow", "Save Client", Q_NULLPTR));
        closeClientBtn->setText(QApplication::translate("MainWindow", "Close", Q_NULLPTR));
        clientTitlePopUp->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt; font-weight:600; color:#2e3436;\">Adding A Client</span></p></body></html>", Q_NULLPTR));
        clientFNameField->setPlaceholderText(QApplication::translate("MainWindow", "First name: ex. Abraham", Q_NULLPTR));
        clientLNameField->setPlaceholderText(QApplication::translate("MainWindow", "Last name: ex. Salim", Q_NULLPTR));
        clientAgeField->setPlaceholderText(QApplication::translate("MainWindow", "Your Age. Ex \"18\" or \"21\"", Q_NULLPTR));
        clientEmailField->setPlaceholderText(QApplication::translate("MainWindow", "Your email Ex. someone123@gmail.com", Q_NULLPTR));
        clientPhoneField->setPlaceholderText(QApplication::translate("MainWindow", "Your phone number, example 613-413-2509", Q_NULLPTR));
        clientGenderFIeld->clear();
        clientGenderFIeld->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Select Gender", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Male", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Female", Q_NULLPTR)
        );
        nextInfoBtn->setText(QApplication::translate("MainWindow", "Next", Q_NULLPTR));
        clientContactInfoTitleLabel->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600; color:#2e3436;\">Contact Info</span></p></body></html>", Q_NULLPTR));
        clientActivenessField->clear();
        clientActivenessField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Your Activeness", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Barely Active)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Somewhat Active)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (Moderately Active)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4 (Active)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5 (Very Active)", Q_NULLPTR)
        );
        clientAffectionismField->clear();
        clientAffectionismField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Your Affectionism", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Barely Affectionate)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Somewhat Affectionate)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (Moderately Affectionate)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4 (Affectionate)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5 (Very Affectionate)", Q_NULLPTR)
        );
        clientHabitatPreferenceField->clear();
        clientHabitatPreferenceField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Your Habitat Preference", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Cold)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Cool)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (Mild)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4 (Warm)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5 (Hot)", Q_NULLPTR)
        );
        clientDiurnalField->clear();
        clientDiurnalField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Your Diurnal-Nocturnal", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Barely Nocturnal)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Somewhat Nocturnal)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (Moderately Nocturnal)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4 (Nocturnal)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5 (Very Nocturnal)", Q_NULLPTR)
        );
        clientTraitsTitleLabel->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; color:#2e3436;\">Character Traits</span></p></body></html>", Q_NULLPTR));
        backInfoBtn->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        nextToClientNonPhysPreBtn->setText(QApplication::translate("MainWindow", "Next", Q_NULLPTR));
        clientNonPhysPreEnergeticField->clear();
        clientNonPhysPreEnergeticField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Animal's Energetic", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Barely Energetic)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Somewhat Energetic)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (Moderately Energetic)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4 (Energetic)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5 (Very Energetic)", Q_NULLPTR)
        );
        clientNonPhysPreAppetiField->clear();
        clientNonPhysPreAppetiField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Animal's Appetite", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Small Appetite)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Moderate Appetite)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (Normal Appetite)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4 (Big Appetite)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5 (Huge Appetite)", Q_NULLPTR)
        );
        clientNonPhysPreIntelliField->clear();
        clientNonPhysPreIntelliField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Animal's Intelligence", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Barely Intelligent)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Somewhat Intelligent)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (Moderately Intelligent)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4 (Intelligent)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5 (Very Intelligent)", Q_NULLPTR)
        );
        clientNonPhysPreSpaciousField->clear();
        clientNonPhysPreSpaciousField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Animal's Spaciousness", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Barely Spacious)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Somewhat Spacious)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (Moderately Spacious)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4 (Spacious)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5 (Very Spacious)", Q_NULLPTR)
        );
        clientNonPhysPreIndividField->clear();
        clientNonPhysPreIndividField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Animal's Individualism", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Barely Independent)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Somewhat Independent)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (Moderately Independent)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4 (Independent)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5 (Very Independent)", Q_NULLPTR)
        );
        clientNonPhysPreAssertField->clear();
        clientNonPhysPreAssertField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Animal's Assertiveness", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Barely Assertive)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Somewhat Assertive)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (Moderately Assertive)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4 (Assertive)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5 (Very Assertive)", Q_NULLPTR)
        );
        clientNonPhysPreDiscipField->clear();
        clientNonPhysPreDiscipField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Animal's Discipline", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Barely Disciplined)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Somewhat Disciplined)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (Moderately Disciplined)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4 (Disciplined)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5 (Very Disciplined)", Q_NULLPTR)
        );
        clientNonPhysPrePlayfulField->clear();
        clientNonPhysPrePlayfulField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Animal's Playfulness", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Barely Playful)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Somewhat Playful)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (Moderately Playful)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4 (Playful)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5 (Very Playful)", Q_NULLPTR)
        );
        backToCharacterTraitsBtn->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        clientTraitsTitleLabel_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#2e3436;\">Non-Physical Preferences For An Animal</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:600; color:#2e3436;\"><br /></p></body></html>", Q_NULLPTR));
        clientErrMessage->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#cc0000;\">Oops! Something went wrong. Please try again, make sure to fill out all the forms correclty as specified in the place holders for each text field. You also need to press next in order to fill the attributes </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:600; color:#cc0000;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; "
                        "-qt-block-indent:0; text-indent:0px; font-weight:600; color:#cc0000;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:600; color:#cc0000;\"><br /></p></body></html>", Q_NULLPTR));
        clientSucessMessage->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#73d216;\">The client has been successfully added.</span></p></body></html>", Q_NULLPTR));
        animalsListTitle->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">Animals Availiable For Adoption</span></p></body></html>", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = animalsListTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = animalsListTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Type", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = animalsListTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Species", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = animalsListTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Colour", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = animalsListTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Age", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = animalsListTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Gender", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = animalsListTable->verticalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        viewAnimalDetailsBtn->setText(QApplication::translate("MainWindow", "View Details", Q_NULLPTR));
        editAnimalDetailsBtn->setText(QApplication::translate("MainWindow", "Edit Animal", Q_NULLPTR));
        animalInfoDetailsBox->setTitle(QString());
        animalNameDetail->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">leo</p></body></html>", Q_NULLPTR));
        nameAnimalDetailLabel->setText(QApplication::translate("MainWindow", "Name:", Q_NULLPTR));
        animalTypeDetailLabel->setText(QApplication::translate("MainWindow", "Type:", Q_NULLPTR));
        animalSpeciesDetailLabel->setText(QApplication::translate("MainWindow", "Species:", Q_NULLPTR));
        animalColourDetailLabel->setText(QApplication::translate("MainWindow", "Colour:", Q_NULLPTR));
        animalAgeDetailLabel->setText(QApplication::translate("MainWindow", " Age:", Q_NULLPTR));
        animalGenderDetailLabel->setText(QApplication::translate("MainWindow", "Gender:", Q_NULLPTR));
        animalColourDetail->setText(QApplication::translate("MainWindow", "red", Q_NULLPTR));
        animalTypeDetail->setText(QApplication::translate("MainWindow", "dog", Q_NULLPTR));
        animalSpeciesDetail->setText(QApplication::translate("MainWindow", "pitbull", Q_NULLPTR));
        animalAgeDetail->setText(QApplication::translate("MainWindow", "1-2 YO", Q_NULLPTR));
        animalGenderDetail->setText(QApplication::translate("MainWindow", "male", Q_NULLPTR));
        animalPhysicalAttrBox->setTitle(QString());
        animalHeadLineAttrbView->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#555555;\">Physical Attributes</span></p></body></html>", Q_NULLPTR));
        beakColourLabel->setText(QApplication::translate("MainWindow", "BeakColour:", Q_NULLPTR));
        bodyLengthLabel->setText(QApplication::translate("MainWindow", "BodyLength:", Q_NULLPTR));
        furColourLabel->setText(QApplication::translate("MainWindow", "FurColour:", Q_NULLPTR));
        beakLengthLabel->setText(QApplication::translate("MainWindow", "BeakLength:", Q_NULLPTR));
        buildLabel->setText(QApplication::translate("MainWindow", "Build:", Q_NULLPTR));
        finnsizeLabel->setText(QApplication::translate("MainWindow", "FinnSize:", Q_NULLPTR));
        scaleTypeLabel->setText(QApplication::translate("MainWindow", "ScaleType:", Q_NULLPTR));
        bodyPatternLabel->setText(QApplication::translate("MainWindow", "BodyPattern:", Q_NULLPTR));
        wingSpanLabel->setText(QApplication::translate("MainWindow", "WingSpan:", Q_NULLPTR));
        furLengthLabel->setText(QApplication::translate("MainWindow", "FurLength:", Q_NULLPTR));
        animalAttributeOneField->setText(QApplication::translate("MainWindow", "flat", Q_NULLPTR));
        animalAttributeTwoField->setText(QApplication::translate("MainWindow", "lazp", Q_NULLPTR));
        animalAttributeThreeField->setText(QApplication::translate("MainWindow", "wing", Q_NULLPTR));
        animalNonPhysicalAttrBox->setTitle(QString());
        animalNonPhysLabel1->setText(QApplication::translate("MainWindow", " Individualism:", Q_NULLPTR));
        animalNonPhysLabel2->setText(QApplication::translate("MainWindow", " Activeness:", Q_NULLPTR));
        animalNonPhysLabel3->setText(QApplication::translate("MainWindow", " Intelligence:", Q_NULLPTR));
        animalNonPhysLabel4->setText(QApplication::translate("MainWindow", " Affectionism:", Q_NULLPTR));
        animalNonPhysLabel5->setText(QApplication::translate("MainWindow", " Discipline:", Q_NULLPTR));
        animalNonPhysLabel6->setText(QApplication::translate("MainWindow", " Assertiveness:", Q_NULLPTR));
        animalNonPhysLabel9->setText(QApplication::translate("MainWindow", "Energetic:", Q_NULLPTR));
        animalNonPhysLabel8->setText(QApplication::translate("MainWindow", "Spaciousness:", Q_NULLPTR));
        animalNonPhysLabel10->setText(QApplication::translate("MainWindow", "Diurnal Noct. :", Q_NULLPTR));
        animalNonPhysLabel11->setText(QApplication::translate("MainWindow", "Habitat Pref. :", Q_NULLPTR));
        animalNonPhysLabel12->setText(QApplication::translate("MainWindow", "Playfulness:", Q_NULLPTR));
        animalNonPhysLabel12_2->setText(QApplication::translate("MainWindow", "Appetite: ", Q_NULLPTR));
        animalNonPhysicalAttr1->setText(QApplication::translate("MainWindow", "Attrubte#", Q_NULLPTR));
        animalNonPhysicalAttr2->setText(QApplication::translate("MainWindow", "Attrubte#", Q_NULLPTR));
        animalNonPhysicalAttr3->setText(QApplication::translate("MainWindow", "Attrubte#", Q_NULLPTR));
        animalNonPhysicalAttr4->setText(QApplication::translate("MainWindow", "Attrubte#", Q_NULLPTR));
        animalNonPhysicalAttr5->setText(QApplication::translate("MainWindow", "Attrubte#", Q_NULLPTR));
        animalNonPhysicalAttr6->setText(QApplication::translate("MainWindow", "Attrubte#", Q_NULLPTR));
        animalNonPhysicalAttr7->setText(QApplication::translate("MainWindow", "Attrubte#", Q_NULLPTR));
        animalNonPhysicalAttr8->setText(QApplication::translate("MainWindow", "Attrubte#", Q_NULLPTR));
        animalNonPhysicalAttr9->setText(QApplication::translate("MainWindow", "Attrubte#", Q_NULLPTR));
        animalNonPhysicalAttr10->setText(QApplication::translate("MainWindow", "Attrubte#", Q_NULLPTR));
        animalNonPhysicalAttr11->setText(QApplication::translate("MainWindow", "Attrubte#", Q_NULLPTR));
        animalNonPhysicalAttr12->setText(QApplication::translate("MainWindow", "Attrubte#", Q_NULLPTR));
        backViewAnimalsBtn->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        animalOverViewHeadLine_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#555555;\">Animal Non Physical Attributes</span></p></body></html>", Q_NULLPTR));
        saveAnimalsEditsBtn->setText(QApplication::translate("MainWindow", "Save Edits", Q_NULLPTR));
        animalOverViewHeadLine->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#555555;\">Animal Overview</span></p></body></html>", Q_NULLPTR));
        animalViewTitle->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:26pt;\">Animal Details</span></p></body></html>", Q_NULLPTR));
        animalEditTitle->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt;\">Editing Animal</span></p></body></html>", Q_NULLPTR));
        viewClientsTitle->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt; font-weight:600; color:#2e3436;\">Clients List</span></p></body></html>", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = clientListTable->horizontalHeaderItem(0);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "First Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = clientListTable->horizontalHeaderItem(1);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "Last Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = clientListTable->horizontalHeaderItem(2);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "Phone Number", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = clientListTable->horizontalHeaderItem(3);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "Email Address", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = clientListTable->horizontalHeaderItem(4);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "Age", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = clientListTable->horizontalHeaderItem(5);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "Gender", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = clientListTable->verticalHeaderItem(0);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        viewClientDetailsBtn->setText(QApplication::translate("MainWindow", "View Details", Q_NULLPTR));
        clientNonPhysHeadLine->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#555555;\">Client Non Physical Attributes</span></p></body></html>", Q_NULLPTR));
        clientBasicInfoBox->setTitle(QString());
        clientFNameDetailsField->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">leo</p></body></html>", Q_NULLPTR));
        clientLNameDetailsField->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">dog</p></body></html>", Q_NULLPTR));
        clientPhoneNumberField->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">pitbull</p></body></html>", Q_NULLPTR));
        clientEmailAddressDetailsField->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">red</p></body></html>", Q_NULLPTR));
        clientAgeDetailsField->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1-2 YO</p></body></html>", Q_NULLPTR));
        clientGenderDetailsField->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">male</p></body></html>", Q_NULLPTR));
        clientFNameLabel->setText(QApplication::translate("MainWindow", "First Name:", Q_NULLPTR));
        clientLNameLabel->setText(QApplication::translate("MainWindow", "Last Name:", Q_NULLPTR));
        clientPhoneLabel->setText(QApplication::translate("MainWindow", "Phone:", Q_NULLPTR));
        clientEmailLabel->setText(QApplication::translate("MainWindow", "Email:", Q_NULLPTR));
        clientAgeLabel->setText(QApplication::translate("MainWindow", " Age:", Q_NULLPTR));
        clientGenderLabel->setText(QApplication::translate("MainWindow", "Gender:", Q_NULLPTR));
        clientNonPhysAttributesBox->setTitle(QString());
        clientHabitatPreferenceDetailsField->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Attrubute#</p></body></html>", Q_NULLPTR));
        clientActivenessDetailsField->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Attrubute#</p></body></html>", Q_NULLPTR));
        clientNocturnalDetailsField->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Attrubute#</p></body></html>", Q_NULLPTR));
        clientAffectionismDetailsField->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Attrubute#</p></body></html>", Q_NULLPTR));
        clientHabitatLabel->setText(QApplication::translate("MainWindow", "Habitat Pref. :", Q_NULLPTR));
        clientActivenessLabel->setText(QApplication::translate("MainWindow", " Activeness:", Q_NULLPTR));
        clientNocturnalLabel->setText(QApplication::translate("MainWindow", "Nocturnal :", Q_NULLPTR));
        clientAffectionismLabel->setText(QApplication::translate("MainWindow", " Affectionism:", Q_NULLPTR));
        clientOverViewHeadline->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#555555;\">Client Overview</span></p></body></html>", Q_NULLPTR));
        backtoClientsListBtn->setText(QApplication::translate("MainWindow", "back", Q_NULLPTR));
        clientHeadLineViewDetail->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600; color:#555555;\">Client Info(Detailed)</span></p></body></html>", Q_NULLPTR));
        backToMenuFromStaffBtn->setText(QApplication::translate("MainWindow", "Main Menu", Q_NULLPTR));
        ClientMenu->setTitle(QString());
        clientMenuText->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600; color:#555555;\">User Menu</span></p></body></html>", Q_NULLPTR));
        clientMenuBox->setTitle(QString());
        clientProfileBtn->setText(QApplication::translate("MainWindow", "View/Edit Profile", Q_NULLPTR));
        clientAnimalsBtn->setText(QApplication::translate("MainWindow", "View Animals List", Q_NULLPTR));
        groupBox_5->setTitle(QString());
        labelForUserLoggedIn->setText(QApplication::translate("MainWindow", "Current User logged in:", Q_NULLPTR));
        userLoggedIn->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">{USER}</p></body></html>", Q_NULLPTR));
        ClientCanvas->setTitle(QString());
        animalHeadlineLabel->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">Animals Availiable For Adoption</span></p></body></html>", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = animalsListFromClientView->horizontalHeaderItem(0);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = animalsListFromClientView->horizontalHeaderItem(1);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "Type", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = animalsListFromClientView->horizontalHeaderItem(2);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "Species", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = animalsListFromClientView->horizontalHeaderItem(3);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "Colour", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = animalsListFromClientView->horizontalHeaderItem(4);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWindow", "Age", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = animalsListFromClientView->horizontalHeaderItem(5);
        ___qtablewidgetitem19->setText(QApplication::translate("MainWindow", "Gender", Q_NULLPTR));
        animalViewDetailClientBtn->setText(QApplication::translate("MainWindow", "View Details", Q_NULLPTR));
        animalNonPhysicalAttrBoxToclient->setTitle(QString());
        animalNonPhysicalAttr1ToClient->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Attrubute#</p></body></html>", Q_NULLPTR));
        animalNonPhysicalAttr2ToClient->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Attrubute#</p></body></html>", Q_NULLPTR));
        animalNonPhysicalAttr3ToClient->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Attrubute#</p></body></html>", Q_NULLPTR));
        animalNonPhysicalAttr4ToClient->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Attrubute#</p></body></html>", Q_NULLPTR));
        animalNonPhysicalAttr5ToClient->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Attrubute#</p></body></html>", Q_NULLPTR));
        animalNonPhysicalAttr6ToClient->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Attrubute#</p></body></html>", Q_NULLPTR));
        animalNonPhysicalAttr7ToClient->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Attrubute#</p></body></html>", Q_NULLPTR));
        animalNonPhysicalAttr8ToClient->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Attrubute#</p></body></html>", Q_NULLPTR));
        animalNonPhysicalAttr9ToClient->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Attrubute#</p></body></html>", Q_NULLPTR));
        animalNonPhysicalAttr10ToClient->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Attrubute#</p></body></html>", Q_NULLPTR));
        animalNonPhysicalAttr11ToClient->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Attrubute#</p></body></html>", Q_NULLPTR));
        animalNonPhysicalAttr12ToClient->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Attrubute#</p></body></html>", Q_NULLPTR));
        animalNonPhysLabel1_3->setText(QApplication::translate("MainWindow", " Individualism:", Q_NULLPTR));
        animalNonPhysLabel2_3->setText(QApplication::translate("MainWindow", " Activeness:", Q_NULLPTR));
        animalNonPhysLabel3_3->setText(QApplication::translate("MainWindow", " Intelligence:", Q_NULLPTR));
        animalNonPhysLabel4_3->setText(QApplication::translate("MainWindow", " Affectionism:", Q_NULLPTR));
        animalNonPhysLabel5_3->setText(QApplication::translate("MainWindow", " Discipline:", Q_NULLPTR));
        animalNonPhysLabel6_3->setText(QApplication::translate("MainWindow", " Assertiveness:", Q_NULLPTR));
        animalNonPhysLabel9_3->setText(QApplication::translate("MainWindow", "Energetic:", Q_NULLPTR));
        animalNonPhysLabel8_3->setText(QApplication::translate("MainWindow", "Spaciousness:", Q_NULLPTR));
        animalNonPhysLabel10_3->setText(QApplication::translate("MainWindow", "Diurnal Noct. :", Q_NULLPTR));
        animalNonPhysLabel11_3->setText(QApplication::translate("MainWindow", "Habitat Pref. :", Q_NULLPTR));
        animalNonPhysLabel12_5->setText(QApplication::translate("MainWindow", "Playfulness:", Q_NULLPTR));
        animalNonPhysLabel12_6->setText(QApplication::translate("MainWindow", "Appetite: ", Q_NULLPTR));
        animalInfoDetailsBoxToClient->setTitle(QString());
        animalNameDetailToClient->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">leo</p></body></html>", Q_NULLPTR));
        animalTypeDetailToClient->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">dog</p></body></html>", Q_NULLPTR));
        animalSpeciesDetailToClient->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">pitbull</p></body></html>", Q_NULLPTR));
        animalColourDetailToClient->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">red</p></body></html>", Q_NULLPTR));
        animalAgeDetailToClient->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1-2 YO</p></body></html>", Q_NULLPTR));
        animalGenderDetailToClient->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">male</p></body></html>", Q_NULLPTR));
        nameAnimalDetailLabel_3->setText(QApplication::translate("MainWindow", "Name:", Q_NULLPTR));
        animalTypeDetailLabel_3->setText(QApplication::translate("MainWindow", "Type:", Q_NULLPTR));
        animalSpeciesDetailLabel_3->setText(QApplication::translate("MainWindow", "Species:", Q_NULLPTR));
        animalColourDetailLabel_3->setText(QApplication::translate("MainWindow", "Colour:", Q_NULLPTR));
        animalAgeDetailLabel_3->setText(QApplication::translate("MainWindow", " Age:", Q_NULLPTR));
        animalGenderDetailLabel_3->setText(QApplication::translate("MainWindow", "Gender:", Q_NULLPTR));
        backViewAnimalsToClientBtn->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        animalOverViewHeadLineToClient_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#555555;\">Animal Overview</span></p></body></html>", Q_NULLPTR));
        animalPhysicalAttrBoxToClient->setTitle(QString());
        animalAttributeThreeFieldToClient->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">wing</p></body></html>", Q_NULLPTR));
        animalAttributeOneFieldToClient->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">flat</p></body></html>", Q_NULLPTR));
        animalAttributeTwoFieldToClient->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">lazp</p></body></html>", Q_NULLPTR));
        animalHeadLineAttrbViewToClient->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#555555;\">Physical Attributes</span></p></body></html>", Q_NULLPTR));
        beakColourLabelClient->setText(QApplication::translate("MainWindow", "BeakColour:", Q_NULLPTR));
        bodyLengthLabelClient->setText(QApplication::translate("MainWindow", "BodyLength:", Q_NULLPTR));
        furColourLabelClient->setText(QApplication::translate("MainWindow", "FurColour:", Q_NULLPTR));
        beakLengthLabelClient->setText(QApplication::translate("MainWindow", "BeakLength:", Q_NULLPTR));
        buildLabelClient->setText(QApplication::translate("MainWindow", "Build:", Q_NULLPTR));
        finnsizeLabelClient->setText(QApplication::translate("MainWindow", "FinnSize:", Q_NULLPTR));
        scaleTypeLabelClient->setText(QApplication::translate("MainWindow", "ScaleType:", Q_NULLPTR));
        bodyPatternLabelClient->setText(QApplication::translate("MainWindow", "BodyPattern:", Q_NULLPTR));
        wingSpanLabelClient->setText(QApplication::translate("MainWindow", "WingSpan:", Q_NULLPTR));
        furLengthLabelClient->setText(QApplication::translate("MainWindow", "FurLength:", Q_NULLPTR));
        animalHeadLineForClient->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:600; color:#555555;\">Animal Info(Detailed)</span></p></body></html>", Q_NULLPTR));
        animalOverViewHeadLineToClient->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#555555;\">Animal Non Physical Attributes</span></p></body></html>", Q_NULLPTR));
        viewClientProfileHeadLine->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt;\">Profile Page</span></p></body></html>", Q_NULLPTR));
        editClientProfileBtn->setText(QApplication::translate("MainWindow", "Edit Profile", Q_NULLPTR));
        setAnimalPreferencesBtn->setText(QApplication::translate("MainWindow", "Set Ranks", Q_NULLPTR));
        clientViewActivenessField->setText(QApplication::translate("MainWindow", "activeness", Q_NULLPTR));
        clientViewAffectionisimField->setText(QApplication::translate("MainWindow", "affecintionsim", Q_NULLPTR));
        clientViewHabitatPreField->setText(QApplication::translate("MainWindow", "habitat preference", Q_NULLPTR));
        clientViewNocturnalField->setText(QApplication::translate("MainWindow", "Nocturnal", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Activeness   :", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Affectionism :", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Habitat Pref. :", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Nocturnal     :", Q_NULLPTR));
        groupBox->setTitle(QString());
        clientViewFNameField->setText(QApplication::translate("MainWindow", "first name", Q_NULLPTR));
        clientViewLNameField->setText(QApplication::translate("MainWindow", "last name", Q_NULLPTR));
        clientViewAgeField->setText(QApplication::translate("MainWindow", "age ", Q_NULLPTR));
        clientViewEmailField->setText(QApplication::translate("MainWindow", "email address", Q_NULLPTR));
        clientViewPhoneNumField->setText(QApplication::translate("MainWindow", "phone number", Q_NULLPTR));
        clientViewGenderField->setText(QApplication::translate("MainWindow", "gender", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "first name     :", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "last name     :", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "age               :", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "email            :", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "phone           :", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "gender          :", Q_NULLPTR));
        saveClientProfileEditsBtn->setText(QApplication::translate("MainWindow", "Save Edits", Q_NULLPTR));
        cancelClientEditsBtn->setText(QApplication::translate("MainWindow", "Cancel Edits", Q_NULLPTR));
        clientBasicHeadLine->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Basic Info</span></p></body></html>", Q_NULLPTR));
        clientPhysHeadLine->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">character traits</span></p></body></html>", Q_NULLPTR));
        setPhysPreferencesBtn->setText(QApplication::translate("MainWindow", "Set Preferences", Q_NULLPTR));
        nonPhysPreBox->setTitle(QString());
        clientNonPhysPreAnimalHeadLine->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Non-Physical Preferences For An Animal</span></p></body></html>", Q_NULLPTR));
        clientNonPhysPreOut1->setText(QApplication::translate("MainWindow", "Individualism", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Discipline       :", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", " Intelligence   : ", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Assertiveness :", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", " Individualism :", Q_NULLPTR));
        clientNonPhysPreOut2->setText(QApplication::translate("MainWindow", " Intelligence", Q_NULLPTR));
        clientNonPhysPreOut3->setText(QApplication::translate("MainWindow", "Discipline", Q_NULLPTR));
        clientNonPhysPreOut4->setText(QApplication::translate("MainWindow", "Assertiveness", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "Spaciousness  :", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "Energetic        :", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", "Appetite          :", Q_NULLPTR));
        label_23->setText(QApplication::translate("MainWindow", "Playfullness    :", Q_NULLPTR));
        clientNonPhysPreOut6->setText(QApplication::translate("MainWindow", "Energetic", Q_NULLPTR));
        clientNonPhysPreOut8->setText(QApplication::translate("MainWindow", "Appetite ", Q_NULLPTR));
        clientNonPhysPreOut7->setText(QApplication::translate("MainWindow", "Spaciousness", Q_NULLPTR));
        clientNonPhysPreOut5->setText(QApplication::translate("MainWindow", "Playfullness", Q_NULLPTR));
        viewRanksAndPreferencesBtn->setText(QApplication::translate("MainWindow", "View Ranks/Preferences", Q_NULLPTR));
        savePreferencesBtn->setText(QApplication::translate("MainWindow", "Save Ranks", Q_NULLPTR));
        backPrefenecesBtn->setText(QApplication::translate("MainWindow", "Back To Profile", Q_NULLPTR));
        preferncesHeadLine->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt;\">Set Ranks For Animals</span></p></body></html>", Q_NULLPTR));
        preferenceDogField->setText(QString());
        preferenceDogField->setPlaceholderText(QApplication::translate("MainWindow", "Your Rank For Dogs?", Q_NULLPTR));
        preferenceCatField->setText(QString());
        preferenceCatField->setPlaceholderText(QApplication::translate("MainWindow", "Your Rank for Cats?", Q_NULLPTR));
        preferenceFrogField->setText(QString());
        preferenceFrogField->setPlaceholderText(QApplication::translate("MainWindow", "Your Rank for Frogs?", Q_NULLPTR));
        preferenceGoldfisheField->setText(QString());
        preferenceGoldfisheField->setPlaceholderText(QApplication::translate("MainWindow", "Your Rank for Goldfishes?", Q_NULLPTR));
        preferenceSalamanderField->setText(QString());
        preferenceSalamanderField->setPlaceholderText(QApplication::translate("MainWindow", "Your Rank for Salamanders?", Q_NULLPTR));
        preferenceSnakeField->setText(QString());
        preferenceSnakeField->setPlaceholderText(QApplication::translate("MainWindow", "Your Rank for Snakes?", Q_NULLPTR));
        preferenceParrotField->setText(QString());
        preferenceParrotField->setPlaceholderText(QApplication::translate("MainWindow", "Your Rank for Parrots?", Q_NULLPTR));
        preferenceFinchField->setText(QString());
        preferenceFinchField->setPlaceholderText(QApplication::translate("MainWindow", "Your Rank for Finches?", Q_NULLPTR));
        preferenceLizardField->setText(QString());
        preferenceLizardField->setPlaceholderText(QApplication::translate("MainWindow", "Your Rank for Lizards?", Q_NULLPTR));
        preferenceBettaField->setText(QString());
        preferenceBettaField->setPlaceholderText(QApplication::translate("MainWindow", "Your Rank for Betta?", Q_NULLPTR));
        dogFurBuildField->clear();
        dogFurBuildField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Build For Dog", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Thin)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Average)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (Bulky)", Q_NULLPTR)
        );
        physicalAttributesHeadLine->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt;\">Set Physical Attributes</span></p></body></html>", Q_NULLPTR));
        dogFurColourField->clear();
        dogFurColourField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Fur Colour For Dog", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Dark Brown)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Light Brown))", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (Blonde)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4 (White)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5 (Polka Dot)", Q_NULLPTR)
        );
        dogFurLengthField->clear();
        dogFurLengthField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Fur Length For Dog", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Short)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Medium)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (Long)", Q_NULLPTR)
        );
        catFurColourField->clear();
        catFurColourField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Fur Colour For Cat", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Dark Brown)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Light Brown))", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (Blonde)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4 (White)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5 (Polka Dot)", Q_NULLPTR)
        );
        catFurLengthField->clear();
        catFurLengthField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Fur Length For Cat", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Short)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Medium)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (Long)", Q_NULLPTR)
        );
        catFurBuildField->clear();
        catFurBuildField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Build For Cat", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Thin)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Average)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (Bulky)", Q_NULLPTR)
        );
        snakeScaleTypeField->clear();
        snakeScaleTypeField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Scale Type For Snake", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Smooth)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Jagged)", Q_NULLPTR)
        );
        snakeBodyLengthField->clear();
        snakeBodyLengthField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Body Length For Snake", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Short)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Medium)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (Long)", Q_NULLPTR)
        );
        snakeBodyPatternField->clear();
        snakeBodyPatternField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Body Pattern For Snake", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Dotted)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Stripped)", Q_NULLPTR)
        );
        lizardBodyLengthField->clear();
        lizardBodyLengthField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Body Length For Lizard", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Short)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Medium)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (Long)", Q_NULLPTR)
        );
        lizardScaleTypeField->clear();
        lizardScaleTypeField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Scale Type For Lizard", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Smooth)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Jagged)", Q_NULLPTR)
        );
        lizardBodyPatternField->clear();
        lizardBodyPatternField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Body Pattern For Lizard", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Dotted)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Stripped)", Q_NULLPTR)
        );
        bettaBodyLengthField->clear();
        bettaBodyLengthField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Body Length For Betta", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Short)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Medium)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (Long)", Q_NULLPTR)
        );
        bettaFinnSizeField->clear();
        bettaFinnSizeField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Finn Size For Betta", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Short)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Medium)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (Long)", Q_NULLPTR)
        );
        bettaBodyPatternField->clear();
        bettaBodyPatternField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Body Pattern For Betta", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Dotted)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Stripped)", Q_NULLPTR)
        );
        goldfishFinnSizeField->clear();
        goldfishFinnSizeField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Finn Size For Goldfish", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Short)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Medium)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (Long)", Q_NULLPTR)
        );
        goldfishBodyLengthField->clear();
        goldfishBodyLengthField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Body Length For Goldfish", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Short)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Medium)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (Long)", Q_NULLPTR)
        );
        goldfishBodyPatternField->clear();
        goldfishBodyPatternField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Body Pattern For Goldfish", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Dotted)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Stripped)", Q_NULLPTR)
        );
        salamanderBuildField->clear();
        salamanderBuildField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Build  For Salamander", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Thin)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Average)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (Bulky)", Q_NULLPTR)
        );
        frogBuildField->clear();
        frogBuildField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Build For Frog", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Thin)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Average)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (Bulky)", Q_NULLPTR)
        );
        frogBodyLengthField->clear();
        frogBodyLengthField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Body Length For Frog", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Short)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Medium)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (Long)", Q_NULLPTR)
        );
        salamanderBodyPatternField->clear();
        salamanderBodyPatternField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Body Pattern For Salamander", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Dotted)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Stripped)", Q_NULLPTR)
        );
        salamanderBodyLengthField->clear();
        salamanderBodyLengthField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Body Length For Salamander", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Short)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Medium)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (Long)", Q_NULLPTR)
        );
        frogBodyPatternField->clear();
        frogBodyPatternField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Body Pattern For Frog", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Dotted)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Stripped)", Q_NULLPTR)
        );
        parrotWingSpanField->clear();
        parrotWingSpanField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Wing Span For Parrot", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Short)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Medium)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (Long)", Q_NULLPTR)
        );
        finchWingSpanField->clear();
        finchWingSpanField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Wing Span For Finch", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Short)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Medium)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (Long)", Q_NULLPTR)
        );
        parrotBeakLengthField->clear();
        parrotBeakLengthField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Beak Length For Parrot", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Short)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Medium)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (Long)", Q_NULLPTR)
        );
        finchBeakLengthField->clear();
        finchBeakLengthField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Beak Length For Finch", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Short)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Medium)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (Long)", Q_NULLPTR)
        );
        parrotBeakColourField->clear();
        parrotBeakColourField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Beak Colour For Parrot", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Red)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Orange)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (Yellow)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4 (Black)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5 (Blue)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "6 (Mixed)", Q_NULLPTR)
        );
        finchBeakColourField->clear();
        finchBeakColourField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Beak Colour For Finch", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 (Red)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 (Orange)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 (Yellow)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4 (Black)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5 (Blue)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "6 (Mixed)", Q_NULLPTR)
        );
        backToProfileFromPhysPageBtn->setText(QApplication::translate("MainWindow", "Back To Profile", Q_NULLPTR));
        saveClientPhysicalPreferencesBtn->setText(QApplication::translate("MainWindow", "Save Preferences", Q_NULLPTR));
        preferencesBox->setTitle(QString());
        dogPreferenceField->setText(QApplication::translate("MainWindow", "NULL", Q_NULLPTR));
        catPreferenceField->setText(QApplication::translate("MainWindow", "NULL", Q_NULLPTR));
        goldfishPreferenceField->setText(QApplication::translate("MainWindow", "NULL", Q_NULLPTR));
        salamanderPreferenceField->setText(QApplication::translate("MainWindow", "NULL", Q_NULLPTR));
        bettaPreferenceField->setText(QApplication::translate("MainWindow", "NULL", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Dog Rank :</span></p></body></html>", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Cat Rank         :</span></p></body></html>", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Goldfish Rank:</span></p></body></html>", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600;\">Salamander Rank:</span></p></body></html>", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Betta Rank:</span></p></body></html>", Q_NULLPTR));
        snakePreferenceField->setText(QApplication::translate("MainWindow", "NULL", Q_NULLPTR));
        label_29->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Parrot Rank:</span></p></body></html>", Q_NULLPTR));
        finchPreferenceField->setText(QApplication::translate("MainWindow", "NULL", Q_NULLPTR));
        label_30->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Snake Rank:</span></p></body></html>", Q_NULLPTR));
        label_31->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Finch Rank:</span></p></body></html>", Q_NULLPTR));
        frogPreferenceField->setText(QApplication::translate("MainWindow", "NULL", Q_NULLPTR));
        label_32->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\"> Frog Rank  :</span></p></body></html>", Q_NULLPTR));
        parrotPreferenceField->setText(QApplication::translate("MainWindow", "NULL", Q_NULLPTR));
        lizardPreferenceField->setText(QApplication::translate("MainWindow", "NULL", Q_NULLPTR));
        label_34->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Lizard Rank:</span></p></body></html>", Q_NULLPTR));
        dogFurColourOutField->setText(QApplication::translate("MainWindow", "NULL", Q_NULLPTR));
        label_41->setText(QApplication::translate("MainWindow", "Build         :", Q_NULLPTR));
        dogFurLengthOutField->setText(QApplication::translate("MainWindow", "NULL", Q_NULLPTR));
        dogBuildOutField->setText(QApplication::translate("MainWindow", "NULL", Q_NULLPTR));
        label_42->setText(QApplication::translate("MainWindow", "FurLength  :", Q_NULLPTR));
        label_43->setText(QApplication::translate("MainWindow", "FurColour  :", Q_NULLPTR));
        label_57->setText(QApplication::translate("MainWindow", "Build        :", Q_NULLPTR));
        catFurLengthOutField->setText(QApplication::translate("MainWindow", "NULL", Q_NULLPTR));
        catFurColourOutField->setText(QApplication::translate("MainWindow", "NULL", Q_NULLPTR));
        label_58->setText(QApplication::translate("MainWindow", "FurColour :", Q_NULLPTR));
        catBuildOutField->setText(QApplication::translate("MainWindow", "NULL", Q_NULLPTR));
        label_59->setText(QApplication::translate("MainWindow", "FurLength :", Q_NULLPTR));
        label_60->setText(QApplication::translate("MainWindow", "Body Length :", Q_NULLPTR));
        snakeBodyPatternOutField->setText(QApplication::translate("MainWindow", "NULL", Q_NULLPTR));
        label_61->setText(QApplication::translate("MainWindow", "Scale Type  :", Q_NULLPTR));
        snakeBodyLengthOutField->setText(QApplication::translate("MainWindow", "NULL", Q_NULLPTR));
        label_62->setText(QApplication::translate("MainWindow", "Body Pattern :", Q_NULLPTR));
        snakeScaleTypeOutField->setText(QApplication::translate("MainWindow", "NULL", Q_NULLPTR));
        lizardBodyLengthOutField->setText(QApplication::translate("MainWindow", "NULL", Q_NULLPTR));
        label_82->setText(QApplication::translate("MainWindow", "Scale Type  :", Q_NULLPTR));
        label_83->setText(QApplication::translate("MainWindow", "Body Length :", Q_NULLPTR));
        lizardBodyPatternOutField->setText(QApplication::translate("MainWindow", "NULL", Q_NULLPTR));
        label_84->setText(QApplication::translate("MainWindow", "Body Pattern :", Q_NULLPTR));
        lizardScaleTypeOutField->setText(QApplication::translate("MainWindow", "NULL", Q_NULLPTR));
        label_85->setText(QApplication::translate("MainWindow", "WingSpan   :", Q_NULLPTR));
        parrotBeakLengthOutField->setText(QApplication::translate("MainWindow", "NULL", Q_NULLPTR));
        parrotBeakColourOutField->setText(QApplication::translate("MainWindow", "NULL", Q_NULLPTR));
        label_86->setText(QApplication::translate("MainWindow", "BeakColour  : ", Q_NULLPTR));
        parrotWingSpanOutField->setText(QApplication::translate("MainWindow", "NULL", Q_NULLPTR));
        label_87->setText(QApplication::translate("MainWindow", "BeakLength :", Q_NULLPTR));
        finchBeakLengthOutField->setText(QApplication::translate("MainWindow", "NULL", Q_NULLPTR));
        label_88->setText(QApplication::translate("MainWindow", "WingSpan   :", Q_NULLPTR));
        finchBeakColourOutField->setText(QApplication::translate("MainWindow", "NULL", Q_NULLPTR));
        finchWingSpanOutField->setText(QApplication::translate("MainWindow", "NULL", Q_NULLPTR));
        label_89->setText(QApplication::translate("MainWindow", "BeakColour  : ", Q_NULLPTR));
        label_90->setText(QApplication::translate("MainWindow", "BeakLength :", Q_NULLPTR));
        label_91->setText(QApplication::translate("MainWindow", "Body Pattern :", Q_NULLPTR));
        frogBodyLengthOutField->setText(QApplication::translate("MainWindow", "NULL", Q_NULLPTR));
        label_92->setText(QApplication::translate("MainWindow", "Build             :", Q_NULLPTR));
        frogBuildOutField->setText(QApplication::translate("MainWindow", "NULL", Q_NULLPTR));
        frogBodyPatternOutField->setText(QApplication::translate("MainWindow", "NULL", Q_NULLPTR));
        label_93->setText(QApplication::translate("MainWindow", "Body Length :", Q_NULLPTR));
        label_94->setText(QApplication::translate("MainWindow", "Body Pattern :", Q_NULLPTR));
        salamanderBuildOutField->setText(QApplication::translate("MainWindow", "NULL", Q_NULLPTR));
        salamanderBodyLengthOutField->setText(QApplication::translate("MainWindow", "NULL", Q_NULLPTR));
        salamanderBodyPatternOutField->setText(QApplication::translate("MainWindow", "NULL", Q_NULLPTR));
        label_95->setText(QApplication::translate("MainWindow", "Build             :", Q_NULLPTR));
        label_96->setText(QApplication::translate("MainWindow", "Body Length :", Q_NULLPTR));
        label_97->setText(QApplication::translate("MainWindow", "Body Pattern :", Q_NULLPTR));
        label_98->setText(QApplication::translate("MainWindow", "Body Length :", Q_NULLPTR));
        label_99->setText(QApplication::translate("MainWindow", "Finn Size       :", Q_NULLPTR));
        goldfishFinnSizeOutField->setText(QApplication::translate("MainWindow", "NULL", Q_NULLPTR));
        goldfishBodyPatternOutField->setText(QApplication::translate("MainWindow", "NULL", Q_NULLPTR));
        goldfishBodyLengthOutField->setText(QApplication::translate("MainWindow", "NULL", Q_NULLPTR));
        bettaBodyLengthOutField->setText(QApplication::translate("MainWindow", "NULL", Q_NULLPTR));
        bettaBodyPatternOutField->setText(QApplication::translate("MainWindow", "NULL", Q_NULLPTR));
        label_100->setText(QApplication::translate("MainWindow", "Body Length :", Q_NULLPTR));
        label_101->setText(QApplication::translate("MainWindow", "Finn Size       :", Q_NULLPTR));
        label_102->setText(QApplication::translate("MainWindow", "Body Pattern :", Q_NULLPTR));
        bettaFinnSizeOutField->setText(QApplication::translate("MainWindow", "NULL", Q_NULLPTR));
        backToProfileFromViewRanksAndPrefecnesBtn->setText(QApplication::translate("MainWindow", "Back To Profile", Q_NULLPTR));
        viewRanksAndPreferencesHeadLine->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt;\">Ranks And Preferences</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:24pt;\"><br /></p></body></html>", Q_NULLPTR));
        backToMainMenuFromClientViewBtn->setText(QApplication::translate("MainWindow", "Main Menu", Q_NULLPTR));
        LoginBox->setTitle(QString());
        textBrowser->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:22pt; font-weight:600;\">Login Using Email</span></p></body></html>", Q_NULLPTR));
        loginBtn->setText(QApplication::translate("MainWindow", "Log In", Q_NULLPTR));
        label_24->setText(QApplication::translate("MainWindow", "Email:", Q_NULLPTR));
        textBrowser_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600;\">Available Clients</span></p></body></html>", Q_NULLPTR));
        mainMenuBtnFromLogin->setText(QApplication::translate("MainWindow", "Main Menu", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
