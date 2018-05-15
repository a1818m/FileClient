#ifndef _TCP_SENDER_H
#define _TCP_SENDER_H

#include "../afos/AfSocket.h"

/* �Զ������ķ���
*/

class TcpSend
{
public:
	TcpSend(AfTcpSocket sock):m_sock(sock)
	{		
	}
	// ����: <=0 ����ʧ��(socket�����Ѿ��Ͽ�), >0 ���ͳɹ�
	// length: �����ֽڵĳ��ȣ�����Ϊ0
	int send (unsigned short type, unsigned short length, const void* data)
	{
		unsigned char header[4];
		putUint16(header, type);
		putUint16(header+2, length);
		m_sock.Send(header, 4);  // ����ͷ��

		if(length <= 0) return 0; // ���ݲ�����0���ֽ�

		return m_sock.Send(data, length); // �������ݲ���
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

