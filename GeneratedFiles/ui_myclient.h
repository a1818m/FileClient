/********************************************************************************
** Form generated from reading UI file 'myclient.ui'
**
** Created: Mon May 14 18:46:31 2018
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYCLIENT_H
#define UI_MYCLIENT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QScrollBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBar>
#include <QtGui/QToolButton>
#include <QtGui/QTreeView>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyClientClass
{
public:
    QAction *actionLogin;
    QAction *actionReg;
    QAction *actionCancel;
    QAction *actionConn;
    QAction *actionHelp;
    QAction *actionPut;
    QAction *actionGet;
    QAction *actionList;
    QAction *actionSelect;
    QAction *actionPath;
    QWidget *centralWidget;
    QPlainTextEdit *outEdit;
    QLabel *label_6;
    QProgressBar *progressBar;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QLabel *label_8;
    QToolButton *btnPut;
    QToolButton *btnSelect;
    QLineEdit *lineSelect;
    QTreeView *treeFile;
    QLabel *label;
    QWidget *tab_4;
    QTreeWidget *treeList;
    QPushButton *btnList;
    QLabel *label_12;
    QToolButton *btnGet;
    QToolButton *btnPath;
    QLineEdit *linePath;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_9;
    QLineEdit *linePort;
    QPushButton *btnCancel;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineHost;
    QPushButton *btnConn;
    QPushButton *btnRegister;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_10;
    QLineEdit *lineUser;
    QPushButton *btnLogin;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_13;
    QLineEdit *linePassward;
    QFrame *line;
    QScrollBar *verticalScrollBar;
    QMenuBar *menuBar;
    QMenu *menuCaidan;
    QMenu *menu;
    QMenu *menu_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MyClientClass)
    {
        if (MyClientClass->objectName().isEmpty())
            MyClientClass->setObjectName(QString::fromUtf8("MyClientClass"));
        MyClientClass->resize(744, 791);
        MyClientClass->setStyleSheet(QString::fromUtf8("\n"
"QWidget#MyClientClass{\n"
"\n"
" background:qlineargradient(spread:reflect, x1:0.847, y1:0.869, x2:0.129, y2:0.12, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255))\n"
"}"));
        actionLogin = new QAction(MyClientClass);
        actionLogin->setObjectName(QString::fromUtf8("actionLogin"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/MyClient/Resources/\347\231\273\345\275\225.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLogin->setIcon(icon);
        actionReg = new QAction(MyClientClass);
        actionReg->setObjectName(QString::fromUtf8("actionReg"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/MyClient/Resources/\346\263\250\345\206\214.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReg->setIcon(icon1);
        actionCancel = new QAction(MyClientClass);
        actionCancel->setObjectName(QString::fromUtf8("actionCancel"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/MyClient/Resources/\346\226\255\345\274\200\351\223\276\346\216\245.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCancel->setIcon(icon2);
        actionConn = new QAction(MyClientClass);
        actionConn->setObjectName(QString::fromUtf8("actionConn"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/MyClient/Resources/\350\277\236\346\216\245.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConn->setIcon(icon3);
        actionHelp = new QAction(MyClientClass);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/MyClient/Resources/\345\270\256\345\212\251.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHelp->setIcon(icon4);
        actionPut = new QAction(MyClientClass);
        actionPut->setObjectName(QString::fromUtf8("actionPut"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/MyClient/Resources/\344\270\212\344\274\240.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPut->setIcon(icon5);
        actionGet = new QAction(MyClientClass);
        actionGet->setObjectName(QString::fromUtf8("actionGet"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/MyClient/Resources/\344\270\213\350\275\275 (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGet->setIcon(icon6);
        actionList = new QAction(MyClientClass);
        actionList->setObjectName(QString::fromUtf8("actionList"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/MyClient/Resources/\346\230\276\347\244\272.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionList->setIcon(icon7);
        actionSelect = new QAction(MyClientClass);
        actionSelect->setObjectName(QString::fromUtf8("actionSelect"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/MyClient/Resources/\351\200\211\346\213\251\346\226\207\344\273\266 (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelect->setIcon(icon8);
        actionPath = new QAction(MyClientClass);
        actionPath->setObjectName(QString::fromUtf8("actionPath"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/MyClient/Resources/\346\226\207\344\273\266.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPath->setIcon(icon9);
        centralWidget = new QWidget(MyClientClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        outEdit = new QPlainTextEdit(centralWidget);
        outEdit->setObjectName(QString::fromUtf8("outEdit"));
        outEdit->setGeometry(QRect(20, 550, 701, 221));
        outEdit->setStyleSheet(QString::fromUtf8("background:rgb(172, 172, 172)"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 460, 141, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(20);
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("color:rgb(29, 29, 29)"));
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setEnabled(true);
        progressBar->setGeometry(QRect(20, 510, 701, 31));
        QFont font1;
        font1.setPointSize(15);
        progressBar->setFont(font1);
        progressBar->setStyleSheet(QString::fromUtf8("QProgressBar{\n"
"border:2px solid grey;\n"
"border-radius:5px;\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"background-color:#05B8CC;\n"
"width:20px;\n"
"}"));
        progressBar->setMinimum(0);
        progressBar->setValue(0);
        progressBar->setTextVisible(true);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 130, 711, 321));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        label_8 = new QLabel(tab_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(50, 40, 191, 31));
        QFont font2;
        font2.setPointSize(12);
        label_8->setFont(font2);
        label_8->setStyleSheet(QString::fromUtf8("color:rgb(58, 58, 58)"));
        btnPut = new QToolButton(tab_3);
        btnPut->setObjectName(QString::fromUtf8("btnPut"));
        btnPut->setGeometry(QRect(200, 200, 71, 61));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnPut->sizePolicy().hasHeightForWidth());
        btnPut->setSizePolicy(sizePolicy);
        btnPut->setStyleSheet(QString::fromUtf8("color:rgb(250, 250, 250);\n"
"background:rgb(140, 140, 140);\n"
"border:2px groove gray;border-radius:10px;padding:2px 4px;"));
        btnPut->setIcon(icon5);
        btnPut->setIconSize(QSize(30, 30));
        btnPut->setCheckable(false);
        btnPut->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        btnPut->setAutoRaise(false);
        btnSelect = new QToolButton(tab_3);
        btnSelect->setObjectName(QString::fromUtf8("btnSelect"));
        btnSelect->setGeometry(QRect(40, 170, 111, 41));
        btnSelect->setStyleSheet(QString::fromUtf8("background:rgb(140, 140, 140);\n"
"border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"color:rgb(250, 250, 250);"));
        btnSelect->setIcon(icon8);
        btnSelect->setIconSize(QSize(40, 40));
        btnSelect->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        lineSelect = new QLineEdit(tab_3);
        lineSelect->setObjectName(QString::fromUtf8("lineSelect"));
        lineSelect->setGeometry(QRect(40, 100, 231, 41));
        lineSelect->setStyleSheet(QString::fromUtf8("background:rgb(172, 172, 172)"));
        treeFile = new QTreeView(tab_3);
        treeFile->setObjectName(QString::fromUtf8("treeFile"));
        treeFile->setGeometry(QRect(290, 41, 401, 251));
        treeFile->setStyleSheet(QString::fromUtf8("\n"
"QMainWindow#MyClient{\n"
"\n"
" background:rgb(254, 254, 254)\n"
"}"));
        label = new QLabel(tab_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(290, 10, 201, 16));
        label->setFont(font2);
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        treeList = new QTreeWidget(tab_4);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setTextAlignment(0, Qt::AlignLeft|Qt::AlignVCenter);
        treeList->setHeaderItem(__qtreewidgetitem);
        treeList->setObjectName(QString::fromUtf8("treeList"));
        treeList->setGeometry(QRect(300, 70, 381, 201));
        treeList->setLayoutDirection(Qt::LeftToRight);
        treeList->setStyleSheet(QString::fromUtf8("background:rgb(172, 172, 172)"));
        treeList->setIndentation(20);
        treeList->setItemsExpandable(true);
        treeList->header()->setDefaultSectionSize(100);
        treeList->header()->setMinimumSectionSize(26);
        btnList = new QPushButton(tab_4);
        btnList->setObjectName(QString::fromUtf8("btnList"));
        btnList->setGeometry(QRect(540, 20, 131, 41));
        btnList->setStyleSheet(QString::fromUtf8("color:rgb(250, 250, 250);\n"
"background:rgb(172, 172, 172);\n"
"border:2px groove gray;border-radius:10px;padding:2px 4px;"));
        btnList->setIcon(icon7);
        label_12 = new QLabel(tab_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(40, 50, 231, 21));
        label_12->setFont(font2);
        label_12->setStyleSheet(QString::fromUtf8("color:rgb(58, 58, 58)"));
        btnGet = new QToolButton(tab_4);
        btnGet->setObjectName(QString::fromUtf8("btnGet"));
        btnGet->setGeometry(QRect(190, 200, 61, 61));
        QFont font3;
        font3.setPointSize(7);
        btnGet->setFont(font3);
        btnGet->setStyleSheet(QString::fromUtf8("color:rgb(250, 250, 250);\n"
"background:rgb(140, 140, 140);\n"
"border:2px groove gray;border-radius:10px;padding:2px 4px;"));
        btnGet->setIcon(icon6);
        btnGet->setIconSize(QSize(30, 30));
        btnGet->setCheckable(false);
        btnGet->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        btnPath = new QToolButton(tab_4);
        btnPath->setObjectName(QString::fromUtf8("btnPath"));
        btnPath->setGeometry(QRect(30, 170, 111, 41));
        btnPath->setStyleSheet(QString::fromUtf8("background:rgb(140, 140, 140);\n"
"border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"color:rgb(250, 250, 250);"));
        btnPath->setIcon(icon9);
        btnPath->setIconSize(QSize(40, 40));
        btnPath->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        linePath = new QLineEdit(tab_4);
        linePath->setObjectName(QString::fromUtf8("linePath"));
        linePath->setGeometry(QRect(30, 100, 231, 41));
        linePath->setStyleSheet(QString::fromUtf8("background:rgb(172, 172, 172)"));
        tabWidget->addTab(tab_4, QString());
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 80, 183, 23));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_6->addWidget(label_9);

        linePort = new QLineEdit(layoutWidget);
        linePort->setObjectName(QString::fromUtf8("linePort"));
        linePort->setStyleSheet(QString::fromUtf8("background:rgb(172, 172, 172)"));

        horizontalLayout_6->addWidget(linePort);

        btnCancel = new QPushButton(centralWidget);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setGeometry(QRect(240, 80, 81, 23));
        btnCancel->setStyleSheet(QString::fromUtf8("color:rgb(250, 250, 250);\n"
"background:rgb(140, 140, 140);\n"
"border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
""));
        btnCancel->setCheckable(false);
        btnCancel->setAutoDefault(false);
        layoutWidget_2 = new QWidget(centralWidget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(30, 50, 183, 23));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_5->addWidget(label_5);

        lineHost = new QLineEdit(layoutWidget_2);
        lineHost->setObjectName(QString::fromUtf8("lineHost"));
        lineHost->setStyleSheet(QString::fromUtf8("background:rgb(172, 172, 172)"));

        horizontalLayout_5->addWidget(lineHost);

        btnConn = new QPushButton(centralWidget);
        btnConn->setObjectName(QString::fromUtf8("btnConn"));
        btnConn->setGeometry(QRect(240, 50, 81, 23));
        btnConn->setStyleSheet(QString::fromUtf8("color:rgb(250, 250, 250);\n"
"background:rgb(140, 140, 140);\n"
"border:2px groove gray;border-radius:10px;padding:2px 4px;"));
        btnRegister = new QPushButton(centralWidget);
        btnRegister->setObjectName(QString::fromUtf8("btnRegister"));
        btnRegister->setGeometry(QRect(590, 80, 81, 23));
        btnRegister->setStyleSheet(QString::fromUtf8("color:rgb(250, 250, 250);\n"
"background:rgb(140, 140, 140);\n"
"border:2px groove gray;border-radius:10px;padding:2px 4px;"));
        layoutWidget_3 = new QWidget(centralWidget);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(370, 50, 183, 23));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_7->addWidget(label_10);

        lineUser = new QLineEdit(layoutWidget_3);
        lineUser->setObjectName(QString::fromUtf8("lineUser"));
        lineUser->setStyleSheet(QString::fromUtf8("background:rgb(172, 172, 172)"));

        horizontalLayout_7->addWidget(lineUser);

        btnLogin = new QPushButton(centralWidget);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));
        btnLogin->setGeometry(QRect(590, 50, 81, 23));
        btnLogin->setStyleSheet(QString::fromUtf8("color:rgb(250, 250, 250);\n"
"background:rgb(140, 140, 140);\n"
"border:2px groove gray;border-radius:10px;padding:2px 4px;"));
        layoutWidget_4 = new QWidget(centralWidget);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(370, 80, 183, 23));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_8->addWidget(label_13);

        linePassward = new QLineEdit(layoutWidget_4);
        linePassward->setObjectName(QString::fromUtf8("linePassward"));
        linePassward->setStyleSheet(QString::fromUtf8("background:rgb(172, 172, 172)"));

        horizontalLayout_8->addWidget(linePassward);

        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(180, 470, 541, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        verticalScrollBar = new QScrollBar(centralWidget);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(700, 550, 20, 151));
        verticalScrollBar->setSingleStep(10);
        verticalScrollBar->setPageStep(50);
        verticalScrollBar->setOrientation(Qt::Vertical);
        MyClientClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MyClientClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 744, 25));
        menuCaidan = new QMenu(menuBar);
        menuCaidan->setObjectName(QString::fromUtf8("menuCaidan"));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        MyClientClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MyClientClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MyClientClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MyClientClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MyClientClass->setStatusBar(statusBar);

        menuBar->addAction(menuCaidan->menuAction());
        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuCaidan->addAction(actionLogin);
        menuCaidan->addAction(actionReg);
        menuCaidan->addAction(actionConn);
        menuCaidan->addAction(actionCancel);
        menu->addAction(actionPut);
        menu->addAction(actionGet);
        menu->addAction(actionList);
        menu->addAction(actionSelect);
        menu->addAction(actionPath);
        menu_2->addAction(actionHelp);
        mainToolBar->addAction(actionLogin);
        mainToolBar->addAction(actionReg);
        mainToolBar->addAction(actionCancel);
        mainToolBar->addAction(actionConn);
        mainToolBar->addAction(actionHelp);
        mainToolBar->addAction(actionPut);
        mainToolBar->addAction(actionGet);
        mainToolBar->addAction(actionList);
        mainToolBar->addAction(actionSelect);
        mainToolBar->addAction(actionPath);

        retranslateUi(MyClientClass);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MyClientClass);
    } // setupUi

    void retranslateUi(QMainWindow *MyClientClass)
    {
        MyClientClass->setWindowTitle(QApplication::translate("MyClientClass", "MyClient", 0, QApplication::UnicodeUTF8));
        actionLogin->setText(QApplication::translate("MyClientClass", "\347\231\273\345\275\225", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionLogin->setToolTip(QApplication::translate("MyClientClass", "\347\231\273\345\275\225", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionReg->setText(QApplication::translate("MyClientClass", "\346\263\250\345\206\214", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionReg->setToolTip(QApplication::translate("MyClientClass", "\346\263\250\345\206\214", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionCancel->setText(QApplication::translate("MyClientClass", "\346\226\255\345\274\200", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCancel->setToolTip(QApplication::translate("MyClientClass", "\346\226\255\345\274\200", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionConn->setText(QApplication::translate("MyClientClass", "\350\277\236\346\216\245", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionConn->setToolTip(QApplication::translate("MyClientClass", "\350\277\236\346\216\245", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionHelp->setText(QApplication::translate("MyClientClass", "\345\270\256\345\212\251", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionHelp->setToolTip(QApplication::translate("MyClientClass", "\345\270\256\345\212\251", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPut->setText(QApplication::translate("MyClientClass", "\344\270\212\344\274\240", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPut->setToolTip(QApplication::translate("MyClientClass", "\344\270\212\344\274\240", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionGet->setText(QApplication::translate("MyClientClass", "\344\270\213\350\275\275", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionGet->setToolTip(QApplication::translate("MyClientClass", "\344\270\213\350\275\275", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionList->setText(QApplication::translate("MyClientClass", "\346\230\276\347\244\272", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionList->setToolTip(QApplication::translate("MyClientClass", "\346\230\276\347\244\272", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSelect->setText(QApplication::translate("MyClientClass", "\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSelect->setToolTip(QApplication::translate("MyClientClass", "\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPath->setText(QApplication::translate("MyClientClass", "\346\226\207\344\273\266\350\267\257\345\276\204", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPath->setToolTip(QApplication::translate("MyClientClass", "\346\226\207\344\273\266\350\267\257\345\276\204", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("MyClientClass", "\347\212\266\346\200\201\346\230\276\347\244\272", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MyClientClass", "\351\200\211\346\213\251\344\275\240\350\246\201\344\270\212\344\274\240\347\232\204\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        btnPut->setText(QApplication::translate("MyClientClass", "\344\270\212\344\274\240", 0, QApplication::UnicodeUTF8));
        btnSelect->setText(QApplication::translate("MyClientClass", "\351\200\211\346\213\251\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MyClientClass", "\346\230\276\347\244\272\345\275\223\345\211\215\347\233\256\345\275\225\346\226\207\344\273\266\345\210\227\350\241\250", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MyClientClass", "\346\226\207\344\273\266\344\270\212\344\274\240", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeList->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("MyClientClass", "\346\226\207\344\273\266\347\261\273\345\236\213", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("MyClientClass", "\346\226\207\344\273\266\345\244\247\345\260\217", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("MyClientClass", "\346\226\207\344\273\266\345\220\215", 0, QApplication::UnicodeUTF8));
        btnList->setText(QApplication::translate("MyClientClass", "\346\230\276\347\244\272", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MyClientClass", "\350\276\223\345\205\245\344\275\240\350\246\201\344\270\213\350\275\275\347\232\204\347\233\256\345\275\225", 0, QApplication::UnicodeUTF8));
        btnGet->setText(QApplication::translate("MyClientClass", "\344\270\213\350\275\275", 0, QApplication::UnicodeUTF8));
        btnPath->setText(QApplication::translate("MyClientClass", "\347\233\256\345\275\225\345\210\207\346\215\242", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MyClientClass", "\346\226\207\344\273\266\344\270\213\350\275\275", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MyClientClass", "\347\253\257\345\217\243", 0, QApplication::UnicodeUTF8));
        btnCancel->setText(QApplication::translate("MyClientClass", "\346\226\255\345\274\200", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MyClientClass", "\344\270\273\346\234\272", 0, QApplication::UnicodeUTF8));
        btnConn->setText(QApplication::translate("MyClientClass", "\350\277\236\346\216\245", 0, QApplication::UnicodeUTF8));
        btnRegister->setText(QApplication::translate("MyClientClass", "\346\263\250\345\206\214", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MyClientClass", "\347\224\250\346\210\267", 0, QApplication::UnicodeUTF8));
        btnLogin->setText(QApplication::translate("MyClientClass", "\347\231\273\345\275\225", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MyClientClass", "\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        menuCaidan->setTitle(QApplication::translate("MyClientClass", "\350\217\234\345\215\225", 0, QApplication::UnicodeUTF8));
        menu->setTitle(QApplication::translate("MyClientClass", "\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        menu_2->setTitle(QApplication::translate("MyClientClass", "\345\270\256\345\212\251", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MyClientClass: public Ui_MyClientClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYCLIENT_H
