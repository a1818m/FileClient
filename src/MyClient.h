#ifndef MYCLIENT_H
#define MYCLIENT_H

#include <QtGui/QMainWindow>
#include "ui_myclient.h"
#include "../afos/AfSocket.h"
#include "TcpSend.h"
#include "TcpRecv.h"
#include "UserRegister.h"
#include "MsgDefine.h"
#include "../jsoncpp/json.h"
#include "QFileDialog"
#include "QFileInfo"
#include "QMessageBox"
#include "QMenu"
#include "QTreeWidgetItem"
#include "QFileSystemModel"

class MyClient : public QMainWindow
{
	Q_OBJECT

public:
	MyClient(QWidget *parent = 0, Qt::WFlags flags = 0);
	~MyClient();

	virtual void mousePressEvent(QMouseEvent *event);  
	virtual void mouseMoveEvent(QMouseEvent *event);  
	virtual void mouseReleaseEvent(QMouseEvent *event);
	virtual void timerEvent ( QTimerEvent * event );

private:
	int Connect(const char* server,int port);//���ӷ�����
	int titel_init(); //��������ʼ��
	int titel_action_init(); //������������ʼ��
	int button_init(); //��ť�ؼ���ʼ��
private slots:
	    int on_Conn();   //���ӷ�����
		int on_Login();  //��¼�������˺�
		int on_Cancel();   //�Ͽ�����
		int on_Select();   //ѡ�������ļ�
		int on_Register();  //ע���û��˺�
		int on_Put();     //�ϴ��ļ�
		int on_Path();    //�л��ļ�·��
		int on_List();     //��ʾ�ļ��б�
		int on_Help();     //����������ѯ
		int on_Get();      //�����ļ�
		int on_ContextMenu(const QPoint& pt);  //�ļ��б�˵�
		void on_windowclosed();   //�رմ���
		void on_windowmin();    //������С��
		void on_windowmax();    //�������
private:
	Ui::MyClientClass ui;
	QMessageBox m_msgBox;
	AfTcpSocket m_sock;
	bool m_pressedFlag; 
	bool m_connFlag;  //���ӱ�־λ
	bool m_loginFlag; //��¼��־λ
	int m_bytesread; //��ȡ�����ֽ�
	int m_filesize; //�ļ����ֽ���
	int m_timerId; //��ʱ��ID
	QString m_filepath; //�ļ�·��
	QPoint m_curPos;   //��ǰλ�õ�
};

#endif // MYCLIENT_H
