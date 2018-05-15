
#ifndef _TCP_RECVER_H
#define _TCP_RECVER_H

#include "../afos/AfSocket.h"

class TcpRecv
{
public:
	TcpRecv(AfTcpSocket sock):sock(sock)
	{
		BUFSIZE = 128 * 1024;
		data = new char[BUFSIZE];
	}

	~TcpRecv()
	{
		delete[] data;
	}

	void clear()
	{
		type = 0;
		length = 0;
	}
	// 接收一个完整分包 
	// 返回值: >=0时，表示接收到的数据长度(可以为0）
	// <0时，表示接收出错
	int recv ()
	{
		// 接收头部
		unsigned char header[4];
		if( 4 != recvN(sock, (char*)header, 4))
		{
			return -11; // 接收head部分出错
		}

		// 接收数据部分
		this->type = getUint16(header);
		this->length = getUint16(header+2);
		if(length > BUFSIZE)
		{
			return -12; // 数据过长
		}

		// 数据部分是0个字节
		if(length == 0)
			return 0;

		// 
		int n = recvN(sock, data, length);
		if (n != length)
		{
			return -13; // 接收data部分出错
		}
		data[length] = 0; // 末尾补0, 方便按C风格字符串处理
		return n;
	}

private:

	// 接收指定长度的数据 
	// 若数据不足，则持续recv直到足够
	int recvN(AfTcpSocket s, char* buf, int len)
	{
		int bytes_got = 0;

		// 分多次接收, 直到接收到指定的字节数, 如果接收不满，则认为出错
		while(bytes_got < len)
		{
			int n = s.Recv((char*)buf + bytes_got, len - bytes_got);
			if(n <= 0)
			{
				return -1;
			}
			bytes_got += n;
		}

		return bytes_got;
	}

	// 按大端读取unsigned short
	unsigned short  getUint16(unsigned char* buf)
	{
		return (buf[0] <<8) + buf[1];
	}

public:
	AfTcpSocket sock;  // socket
	int  BUFSIZE;          // 接收缓冲区大小
	unsigned short type;   // 接收到的消息类型
	unsigned short length; // 接收到的消息数据长度
	char* data;            // 接收到的数据
};


#endif

