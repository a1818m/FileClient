#ifndef USERREGISTER_H
#define USERREGISTER_H

#include <QDialog>
#include "ui_UserRegister.h"

class UserRegister : public QDialog
{
	Q_OBJECT

public:
	UserRegister(QWidget *parent = 0);
	~UserRegister();

private slots:
	int on_RegOk();  
	int on_RegCancel();

public:
	QString m_username;  //�û���
	QString m_password;  //�û�����

private:
	Ui::UserRegister ui;
};

#endif // USERREGISTER_H
