#include "MyClient.h"
#include "GBK.h"
#include "string.h"
#include <iostream>
#include <sstream>
using namespace std;


MyClient::MyClient(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);

	m_bytesread = 0;

	QFileSystemModel* model = new QFileSystemModel;
	model->setRootPath(QDir::currentPath());

	ui.treeFile->setModel(model);
	ui.treeFile->setRootIndex(model->index(QDir::currentPath()));

	titel_init();
	ui.treeList->setContextMenuPolicy(Qt::CustomContextMenu);
	connect(ui.treeList, SIGNAL(customContextMenuRequested(const QPoint&)),
		this, SLOT(on_ContextMenu(const QPoint&)));

	titel_action_init();
	button_init();
	m_timerId = startTimer(1000);
}

MyClient::~MyClient()
{

}
void MyClient::timerEvent ( QTimerEvent * event )
{
	if(event->timerId() == m_timerId)
	{
		if(ui.outEdit->blockCount()>7)  
		{  
			ui.outEdit->setPlainText("");  
		}  
	}
}
int MyClient::titel_init()
{
	// 不显示标题栏
	setWindowFlags(Qt::FramelessWindowHint | Qt::WindowMinimizeButtonHint |Qt::WindowStaysOnTopHint); 

	ui.btnGet->setEnabled(false);
	ui.btnPut->setEnabled(false);
	ui.btnSelect->setEnabled(false);
	ui.btnPath->setEnabled(false);
	ui.btnCancel->setEnabled(false);
	ui.btnList->setEnabled(false);
	ui.btnLogin->setEnabled(false);
	ui.btnRegister->setEnabled(false);
	ui.actionGet->setEnabled(false);
	ui.actionPut->setEnabled(false);
	ui.actionSelect->setEnabled(false);
	ui.actionPath->setEnabled(false);
	ui.actionCancel->setEnabled(false);
	ui.actionList->setEnabled(false);
	ui.actionLogin->setEnabled(false);
	ui.actionReg->setEnabled(false);


	int wide = width();//获取界面的宽度  
	//构建最小化、最大化、关闭按钮  
	QToolButton *btnMin = new QToolButton(this);  
	QToolButton *btnClose= new QToolButton(this);  
	QToolButton *btnMax= new QToolButton(this);  

	//获取最小化、关闭按钮图标  
	QPixmap minPix  = style()->standardPixmap(QStyle::SP_TitleBarMinButton);  
	QPixmap closePix = style()->standardPixmap(QStyle::SP_TitleBarCloseButton);  
	QPixmap maxPix = style()->standardPixmap(QStyle::SP_TitleBarMaxButton); 

	//设置图标  
	btnMin->setIcon(minPix);  
	btnClose->setIcon(closePix);  
	btnMax->setIcon(maxPix);  

	//设置按钮位置  
	btnMin->setGeometry(wide-65,5,20,20);  
	btnClose->setGeometry(wide-25,5,20,20);  
	btnMax->setGeometry(wide-45,5,20,20);  

	//设置鼠标移至按钮上的提示信息  
	btnMin->setToolTip(tr("最小化"));  
	btnClose->setToolTip(tr("关闭"));  
	btnMax->setToolTip(tr("最大化"));

	//设置最小化、关闭按钮的样式  
	btnMin->setStyleSheet("background-color:transparent;");  
	btnClose->setStyleSheet("background-color:transparent;");  
	btnMax->setStyleSheet("background-color:transparent;");

	connect(btnClose, SIGNAL(clicked()), 
		this, SLOT(on_windowclosed()));  
	connect(btnMin, SIGNAL(clicked()), 
		this, SLOT(on_windowmin()));  
	connect(btnMax, SIGNAL(clicked()), 
		this, SLOT(on_windowmax()));  

	return 0;
}

int MyClient::titel_action_init() 
{
	connect(ui.actionConn,SIGNAL(triggered()),
		this,SLOT(on_Conn()));
	connect(ui.btnConn,SIGNAL(clicked()),
		this,SLOT(on_Conn()));
	connect(ui.actionHelp,SIGNAL(triggered()),
		this,SLOT(on_Help()));
	connect(ui.actionLogin,SIGNAL(triggered()),
		this,SLOT(on_Login()));
	connect(ui.actionReg,SIGNAL(triggered()),
		this,SLOT(on_Register()));
	return 0;
}

int MyClient::button_init()
{
	connect(ui.btnRegister,SIGNAL(clicked()),
		this,SLOT(on_Register()));
	connect(ui.btnLogin,SIGNAL(clicked()),
		this,SLOT(on_Login()));
	connect(ui.btnCancel,SIGNAL(clicked()),
		this,SLOT(on_Cancel()));
	connect(ui.btnSelect,SIGNAL(clicked()),
		this,SLOT(on_Select()));
	connect(ui.btnPut,SIGNAL(clicked()),
		this,SLOT(on_Put()));
	connect(ui.btnPath,SIGNAL(clicked()),
		this,SLOT(on_Path()));
	connect(ui.btnList,SIGNAL(clicked()),
		this,SLOT(on_List()));
	connect(ui.btnGet,SIGNAL(clicked()),
		this,SLOT(on_Get()));

	return 0;
}
//连接服务器
int MyClient::Connect(const char* server,int port)
{
	m_sock.Open();
	if(m_sock.Connect(AfSockAddr(server,port))<0)
	{
		m_sock.Close();
		printf("无法连接服务器(%s:%d), 检查服务器是否关闭了防火墙!\n", server, port);
		return -1;
	}
	return 0;
}

int MyClient::on_Cancel()
{
	//关闭Socket
	m_connFlag = 0;
	m_loginFlag = 0;
	m_sock.Close();
	ui.outEdit->appendPlainText(GBK::ToUnicode("断开连接成功"));
	return 0;
}

int MyClient::on_Conn()
{
	char HostName[18];

	//获取输入框内容
	string host = GBK::FromUnicode(ui.lineHost->text());
	strcpy(HostName,host.c_str());
	int port = ui.linePort->text().toInt();
	
	//连接服务器
	if(Connect(HostName,port) < 0)
	{
		ui.outEdit->appendPlainText(GBK::ToUnicode("连接失败"));
		return -1;
	}
	ui.outEdit->appendPlainText(GBK::ToUnicode("服务器连接成功"));

	ui.btnLogin->setEnabled(true);
	ui.btnRegister->setEnabled(true);
	ui.actionLogin->setEnabled(true);
	ui.actionReg->setEnabled(true);
	return 0;
}

int MyClient::on_Login()
{
	char UserName[10];

	//获取输入框内容
	string user = GBK::FromUnicode(ui.lineUser->text());
	strcpy(UserName,user.c_str());
	int password = ui.linePassward->text().toInt();

	// 构造JSON请求
	Json::Value req;
	Json::FastWriter writer;
	req["username"] = UserName;
	req["password"] = password;
	string jsonreq = writer.write(req);

	// 发送
	TcpSend snd(m_sock);
	int n = snd.send(MSG_LOGIN, jsonreq.length(), jsonreq.c_str());

	// 接收
	TcpRecv rcv(m_sock);
	int rc = rcv.recv();
	if(rc <= 0)
	{
		ui.outEdit->appendPlainText(GBK::ToUnicode("failed to recv response! login failed!\n"));
		throw string("failed to recv response! login failed!\n");	
	}

	// 解析应答
	string jsonresp (rcv.data, rcv.length);
	Json::Reader reader;
	Json::Value resp;
	if (!reader.parse(jsonresp, resp, false))
	{
		ui.outEdit->appendPlainText(GBK::ToUnicode("bad json format! "));
		throw string("bad json format!\n");
	}
	int errorCode = resp["errorCode"].asInt();
	string reason = resp["reason"].asString();
	if(errorCode != 0)
	{
		ui.outEdit->appendPlainText(GBK::ToUnicode(reason));
		throw string(reason);
	}

	ui.outEdit->appendPlainText(GBK::ToUnicode("账户密码登录成功"));

	ui.btnGet->setEnabled(true);
	ui.btnPut->setEnabled(true);
	ui.btnSelect->setEnabled(true);
	ui.btnPath->setEnabled(true);
	ui.btnCancel->setEnabled(true);
	ui.btnList->setEnabled(true);
	ui.actionGet->setEnabled(true);
	ui.actionPut->setEnabled(true);
	ui.actionSelect->setEnabled(true);
	ui.actionPath->setEnabled(true);
	ui.actionCancel->setEnabled(true);
	ui.actionList->setEnabled(true);
	m_connFlag = 1;
	m_loginFlag = 1;
	return 0;
}


int MyClient::on_Select()
{
	//选择发送文件
	m_filepath = QFileDialog::getOpenFileName(this,GBK::ToUnicode("选择文件"));
	if(m_filepath.length() > 0)
	{
		ui.lineSelect->setText(m_filepath);
	}

	return 0;
}


int MyClient::on_Put()
{
	//获取文件名
	QFileInfo file;
	file = QFileInfo(m_filepath);
	const string fileName = GBK::FromUnicode(file.fileName());

	//打开本地文件
	string filepath = GBK::FromUnicode(ui.lineSelect->text());
	FILE* fp = fopen(filepath.c_str(),"rb");
	if(!fp)
	{
		m_msgBox.setText("failed to open local file!");
		m_msgBox.exec();
	}

	// 获取文件大小
	fseek(fp, 0, SEEK_END);
	m_filesize = ftell(fp);
	fseek(fp, 0, SEEK_SET);

	//构造请求
	Json::Value req;
	Json::FastWriter writer;
	req["fileName"] = fileName;
	string jsonreq = writer.write(req);

	//发送
	TcpSend snd(m_sock);
	int aa= snd.send(MSG_PUT,jsonreq.length(),jsonreq.c_str());

	//接收
	TcpRecv rcv(m_sock);
	int n = rcv.recv();
	if(n < 0)
	{
		ui.outEdit->appendPlainText(GBK::ToUnicode("failed to recv response! "));
		throw string("failed to recv response! \n");	
	}

	//解析应答
	string jsonresp (rcv.data,rcv.length);
	Json::Value resp;
	Json::Reader reader;
	if(!reader.parse(jsonresp,resp,false))
	{
		ui.outEdit->appendPlainText(GBK::ToUnicode("bad json format! "));
		throw string("bad json format!\n");
	}
	int errorCode = resp["errorCode"].asInt();
	string reason = resp["reason"].asString();
	if(errorCode != 0)
	{
		ui.outEdit->appendPlainText(GBK::ToUnicode(reason));
		throw string(reason);
	}

	//传送文件
	int bufsize = 1024;
	char* buf = new char[bufsize];
	while(!feof(fp))
	{
		int n = fread(buf,1,bufsize,fp);
		if(n < 0) break;
		if(n == 0) continue;
		if(snd.send(ACK_DATA_CONTINUE,n,fp)<0)
		{
			//网络中断
			break;
		}

		m_bytesread+=n;
		ui.progressBar->setValue(m_bytesread*100/m_filesize);
	}
	fclose(fp);
	delete[] buf;

	//上传完毕
	snd.send(ACK_DATA_FINISH,0,NULL);
	ui.outEdit->appendPlainText(GBK::ToUnicode("上传完毕,总共传送:"));
	ui.outEdit->appendPlainText(QString::number(m_bytesread, 10).append(GBK::ToUnicode("字节")));
	return 0;
}


int MyClient::on_Path()
{
	string path = GBK::FromUnicode(ui.linePath->text());

	while(!path.c_str())
	{
		m_msgBox.setText("请先输入路径，再按下面切换目录按钮");
		m_msgBox.exec();
		string path = GBK::FromUnicode(ui.linePath->text());
	}
	//构造JSON请求
	Json::Value req;
	Json::FastWriter writer;
	req["path"] = path;
	std::string jsonreq = writer.write(req);

	//发送
	TcpSend snd(m_sock);
	snd.send(MSG_CD,jsonreq.length(),jsonreq.c_str());

	//接收
	TcpRecv rcv(m_sock);
	int n = rcv.recv();
	if(n < 0)
	{
		ui.outEdit->appendPlainText(GBK::ToUnicode("failed to recv response! "));
		throw string("failed to recv response! \n");
	}

	//解析应答
	string josnresp(rcv.data,rcv.length);
	Json::Value resp;
	Json::Reader reader;
	if(!reader.parse(josnresp,resp,false))
	{
		ui.outEdit->appendPlainText(GBK::ToUnicode("bad json format! "));
		throw string("bad json format!\n");
	}
	int errorCode = resp["errorCode"].asInt();
	string reason = resp["reason"].asString();
	if(errorCode != 0)
	{
		ui.outEdit->appendPlainText(GBK::ToUnicode(reason));
		throw string(reason);
	}

	ui.outEdit->appendPlainText(GBK::ToUnicode("切换目录成功"));
	return 0;
}


int MyClient::on_List()
{
	// 构造JSON请求
	string jsonreq = "{}";

	// 发送
	TcpSend snd(m_sock);
	snd.send(MSG_LIST, jsonreq.length(), jsonreq.c_str());

	// 接收
	TcpRecv rcv(m_sock);
	int rc = rcv.recv();
	if(rc <= 0)
		throw string("failed to recv response! login failed!\n");	

	// 解析应答
	string jsonresp (rcv.data, rcv.length);
	Json::Reader reader;
	Json::Value resp;
	if (!reader.parse(jsonresp, resp, false))
		throw string("bad json format!\n");
	int errorCode = resp["errorCode"].asInt();
	string reason = resp["reason"].asString();
	if(errorCode != 0)
		throw string(reason);

	//解析文件并显示文件
	Json::Value jresult = resp["result"];
	for(int i=0; i<jresult.size();i++)
	{
		Json::Value& jobj = jresult[i];
		string fileName = jobj["fileName"].asString();
		string fileType = jobj["fileType"].asString();
		bool isDir = jobj["isDir"].asBool();
		long long filesize = jobj["fileSize"].asInt64();

		//转化成string格式
		stringstream stream;
		string fileSize;
		stream << filesize;
		stream >> fileSize;

		QTreeWidgetItem* item = new QTreeWidgetItem(ui.treeList);

		//显示文件列表
		if(!isDir)
		{
			//获取文件后缀
			char fileType[] = "0";
			const char* type = strchr(fileName.c_str(),'.');
			strcpy(fileType,type+1);

			item->setText(0,GBK::ToUnicode(fileName));
			item->setText(2,GBK::ToUnicode(fileType).append("  file"));

			if(filesize > 10000000) 
				item->setText(1,GBK::ToUnicode(fileSize).append("MB"));
			else if(filesize > 10000)
				item->setText(1,GBK::ToUnicode(fileSize).append("KB"));
			else
				item->setText(1,GBK::ToUnicode(fileSize).append("byte"));
		}
		else
		{
			item->setText(0,GBK::ToUnicode(fileName).prepend("+"));
			item->setText(2,GBK::ToUnicode("文件夹"));
		}
	}

	return 0;
}


int MyClient::on_Get()
{
	//获取列表中的文件名和文件大小
	string fileName = GBK::FromUnicode(ui.treeList->currentItem()->text(0));
	string fileSize = GBK::FromUnicode(ui.treeList->currentItem()->text(1));
	m_filesize = atoi(fileSize.c_str());

	//构造请求
	Json::Value req;
	Json::FastWriter writer;
	req["fileName"] = fileName;
	string jsonreq = writer.write(req);

	//发送
	TcpSend snd(m_sock);
	snd.send(MSG_GET,jsonreq.length(),jsonreq.c_str());

	//接收
	TcpRecv rcv(m_sock);
	int n = rcv.recv();
	if(n < 0)
		throw string("failed to recv response! \n");	

	//解析应答
	string jsonresp (rcv.data,rcv.length);
	Json::Value resp;
	Json::Reader reader;
	if(!reader.parse( jsonresp,resp,false))
		throw string("bad json format!\n");
	int errorCode = resp["errorCode"].asInt();
	string reason = resp["reason"].asString();
	if(errorCode != 0)
		throw string(reason);

	string localFileDir = "F:/Project/";

	/* 把/ 换成 \,末尾加\  */
	for(int i=0; i<localFileDir.length() ;i++)
		if(localFileDir[i] == '/') localFileDir[i] = '\\';
	if(localFileDir[localFileDir.length()-1] != '\\') 	
		localFileDir.append("\\");

	//选择本地写入文件
	string localFilePath = localFileDir+fileName;
	FILE* fp = fopen(localFilePath.c_str(),"wb");
	if(!fp)
	{
		m_msgBox.setText("failed to open local file!");
		m_msgBox.exec();
	}

	int m_bytesread = 0;
	while(true)
	{
		// 接收数据
		n = rcv.recv();
		if(n < 0)
			throw string("failed to recv response! \n");
		if(rcv.type == ACK_DATA_FINISH) break;
		if(rcv.type == ACK_DATA_CONTINUE)
		{
			fwrite(rcv.data,1,rcv.length,fp);
			m_bytesread += rcv.length;
			ui.progressBar->setValue(m_bytesread*100/m_filesize);
		}
	}
	fclose(fp);

	ui.outEdit->appendPlainText(GBK::ToUnicode("下载完毕,总共接收:"));
	ui.outEdit->appendPlainText(QString::number(m_bytesread, 10));

	return 0;
}

int MyClient::on_Help()
{
	m_msgBox.setWindowFlags(Qt::WindowStaysOnTopHint);
	m_msgBox.setText(GBK::ToUnicode("先连接ip地址和端口，再输入账户密码点击登录，否则其他按钮无法激活"));
	m_msgBox.exec();
	return 0;
}
int MyClient::on_Register()
{
	UserRegister reg(this);

	//对话框显示，程序阻塞
	int n = reg.exec();
	if(n == QDialog::Accepted)
	{
		string username = GBK::FromUnicode(reg.m_username);
		string password = GBK::FromUnicode(reg.m_password);

		// 构造JSON请求
		Json::Value req;
		Json::FastWriter writer;
		req["username"] = username;
		req["password"] = password;
		string jsonreq = writer.write(req);

		// 发送
		TcpSend snd(m_sock);
		snd.send(MSG_REGISTER, jsonreq.length(), jsonreq.c_str());

		// 接收
		TcpRecv rcv(m_sock);
		int rc = rcv.recv();
		if(rc <= 0)
		{
			ui.outEdit->appendPlainText(GBK::ToUnicode("failed to recv response! login failed!\n"));
			throw string("failed to recv response! login failed!\n");	
		}

		// 解析应答
		string jsonresp (rcv.data, rcv.length);
		Json::Reader reader;
		Json::Value resp;
		if (!reader.parse(jsonresp, resp, false))
		{
			ui.outEdit->appendPlainText(GBK::ToUnicode("bad json format! "));
			throw string("bad json format!\n");
		}
		int errorCode = resp["errorCode"].asInt();
		string reason = resp["reason"].asString();
		if(errorCode != 0)
		{
			ui.outEdit->appendPlainText(GBK::ToUnicode(reason));
			throw string(reason);
		}
		ui.outEdit->appendPlainText(GBK::ToUnicode("账户密码注册成功"));
	}
	return 0;
}

int MyClient::on_ContextMenu(const QPoint& pt)
{
	//选中当前项
	QTreeWidgetItem* selected = ui.treeList->itemAt(pt);

	QMenu menu;
	if(selected)
	{
		menu.addAction(ui.actionGet);
	}

	//显示菜单
	menu.exec(ui.treeList->mapToGlobal(pt));

	return 0;
}

void MyClient::on_windowclosed()
{
	this->close();  
}
void MyClient::on_windowmin()
{
	this->showMinimized();  
}
void MyClient::on_windowmax()
{
	this->showMaximized();  
}

//重写鼠标按下事件  
void MyClient::mousePressEvent(QMouseEvent *event)  
{  
	m_pressedFlag = true;  
	//记录下鼠标相对于窗口的位置  
	//event->globalPos()鼠标按下时，鼠标相对于整个屏幕位置  
	//pos() this->pos()鼠标按下时，窗口相对于整个屏幕位置  
	m_curPos = event->globalPos() - pos();   
}  

//重写鼠标移动事件  
void MyClient::mouseMoveEvent(QMouseEvent *event)  
{  
	//(event->buttons() && Qt::LeftButton)按下是左键  
	//鼠标移动事件需要移动窗口，窗口移动到哪里呢？就是要获取鼠标移动中，窗口在整个屏幕的坐标，然后move到这个坐标，怎么获取坐标？  
	//通过事件event->globalPos()知道鼠标坐标，鼠标坐标减去鼠标相对于窗口位置，就是窗口在整个屏幕的坐标  
	if (m_pressedFlag && (event->buttons() && Qt::LeftButton)  
		&& (event->globalPos()-m_curPos).manhattanLength() > QApplication::startDragDistance())   
	{    
		move(event->globalPos()-m_curPos);  
		m_curPos = event->globalPos() - pos();  
	}   
}  

void MyClient::mouseReleaseEvent(QMouseEvent *event)  
{  
	m_pressedFlag = false;  
}  


