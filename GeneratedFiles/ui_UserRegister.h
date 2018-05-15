/********************************************************************************
** Form generated from reading UI file 'UserRegister.ui'
**
** Created: Mon May 14 18:46:29 2018
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERREGISTER_H
#define UI_USERREGISTER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UserRegister
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineRegUser;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineRegPass;
    QFrame *line;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnRegOk;
    QPushButton *btnRegCancel;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *UserRegister)
    {
        if (UserRegister->objectName().isEmpty())
            UserRegister->setObjectName(QString::fromUtf8("UserRegister"));
        UserRegister->resize(268, 151);
        verticalLayout = new QVBoxLayout(UserRegister);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(UserRegister);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineRegUser = new QLineEdit(UserRegister);
        lineRegUser->setObjectName(QString::fromUtf8("lineRegUser"));
        lineRegUser->setStyleSheet(QString::fromUtf8("background:rgb(172, 172, 172)"));

        horizontalLayout->addWidget(lineRegUser);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(UserRegister);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineRegPass = new QLineEdit(UserRegister);
        lineRegPass->setObjectName(QString::fromUtf8("lineRegPass"));
        lineRegPass->setStyleSheet(QString::fromUtf8("background:rgb(172, 172, 172)"));

        horizontalLayout_2->addWidget(lineRegPass);


        verticalLayout->addLayout(horizontalLayout_2);

        line = new QFrame(UserRegister);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btnRegOk = new QPushButton(UserRegister);
        btnRegOk->setObjectName(QString::fromUtf8("btnRegOk"));
        btnRegOk->setStyleSheet(QString::fromUtf8("color:rgb(250, 250, 250);\n"
"background:rgb(140, 140, 140);\n"
"border:2px groove gray;border-radius:10px;padding:2px 4px;"));

        horizontalLayout_3->addWidget(btnRegOk);

        btnRegCancel = new QPushButton(UserRegister);
        btnRegCancel->setObjectName(QString::fromUtf8("btnRegCancel"));
        btnRegCancel->setStyleSheet(QString::fromUtf8("color:rgb(250, 250, 250);\n"
"background:rgb(140, 140, 140);\n"
"border:2px groove gray;border-radius:10px;padding:2px 4px;"));

        horizontalLayout_3->addWidget(btnRegCancel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(UserRegister);

        QMetaObject::connectSlotsByName(UserRegister);
    } // setupUi

    void retranslateUi(QDialog *UserRegister)
    {
        UserRegister->setWindowTitle(QApplication::translate("UserRegister", "\347\224\250\346\210\267\346\263\250\345\206\214", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("UserRegister", "\347\224\250\346\210\267", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("UserRegister", "\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        btnRegOk->setText(QApplication::translate("UserRegister", "\347\241\256\350\256\244", 0, QApplication::UnicodeUTF8));
        btnRegCancel->setText(QApplication::translate("UserRegister", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UserRegister: public Ui_UserRegister {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERREGISTER_H
