#include "UserRegister.h"

UserRegister::UserRegister(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	connect(ui.btnRegOk,SIGNAL(clicked()),this,SLOT(on_RegOk()));
	connect(ui.btnRegCancel,SIGNAL(clicked()),this,SLOT(on_RegCancel()));
}

UserRegister::~UserRegister()
{

}

int UserRegister::on_RegCancel()
{
	reject();
	return 0;
}

int UserRegister::on_RegOk()
{
	m_username = ui.lineRegUser->text();
	m_password = ui.lineRegPass->text();

	accept();
	return 0;
}