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
	int Connect(const char* server,int port);//连接服务器
	int titel_init(); //标题栏初始化
	int titel_action_init(); //标题栏动作初始化
	int button_init(); //按钮控件初始化
private slots:
	    int on_Conn();   //连接服务器
		int on_Login();  //登录服务器账号
		int on_Cancel();   //断开连接
		int on_Select();   //选择下载文件
		int on_Register();  //注册用户账号
		int on_Put();     //上传文件
		int on_Path();    //切换文件路径
		int on_List();     //显示文件列表
		int on_Help();     //操作帮助咨询
		int on_Get();      //下载文件
		int on_ContextMenu(const QPoint& pt);  //文件列表菜单
		void on_windowclosed();   //关闭窗口
		void on_windowmin();    //窗口最小化
		void on_windowmax();    //窗口最大化
private:
	Ui::MyClientClass ui;
	QMessageBox m_msgBox;
	AfTcpSocket m_sock;
	bool m_pressedFlag; 
	bool m_connFlag;  //连接标志位
	bool m_loginFlag; //登录标志位
	int m_bytesread; //读取多少字节
	int m_filesize; //文件总字节数
	int m_timerId; //定时器ID
	QString m_filepath; //文件路径
	QPoint m_curPos;   //当前位置点
};

#endif // MYCLIENT_H
