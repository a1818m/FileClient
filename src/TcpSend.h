#ifndef _TCP_SENDER_H
#define _TCP_SENDER_H

#include "../afos/AfSocket.h"

/* 自定义封包的发送
*/

class TcpSend
{
public:
	TcpSend(AfTcpSocket sock):m_sock(sock)
	{		
	}
	// 发送: <=0 发送失败(socket可能已经断开), >0 发送成功
	// length: 数据字节的长度，可以为0
	int send (unsigned short type, unsigned short length, const void* data)
	{
		unsigned char header[4];
		putUint16(header, type);
		putUint16(header+2, length);
		m_sock.Send(header, 4);  // 发送头部

		if(length <= 0) return 0; // 数据部分是0个字节

		return m_sock.Send(data, length); // 发送数据部分
	}

private:

	void putUint16(unsigned char* buf, unsigned short val)
	{
		buf[0] = (unsigned char) (val >> 8);
		buf[1] = (unsigned char) val ;
	}

private:
	AfTcpSocket m_sock;


};


#endif

