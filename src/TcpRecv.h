
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
	// ����һ�������ְ� 
	// ����ֵ: >=0ʱ����ʾ���յ������ݳ���(����Ϊ0��
	// <0ʱ����ʾ���ճ���
	int recv ()
	{
		// ����ͷ��
		unsigned char header[4];
		if( 4 != recvN(sock, (char*)header, 4))
		{
			return -11; // ����head���ֳ���
		}

		// �������ݲ���
		this->type = getUint16(header);
		this->length = getUint16(header+2);
		if(length > BUFSIZE)
		{
			return -12; // ���ݹ���
		}

		// ���ݲ�����0���ֽ�
		if(length == 0)
			return 0;

		// 
		int n = recvN(sock, data, length);
		if (n != length)
		{
			return -13; // ����data���ֳ���
		}
		data[length] = 0; // ĩβ��0, ���㰴C����ַ�������
		return n;
	}

private:

	// ����ָ�����ȵ����� 
	// �����ݲ��㣬�����recvֱ���㹻
	int recvN(AfTcpSocket s, char* buf, int len)
	{
		int bytes_got = 0;

		// �ֶ�ν���, ֱ�����յ�ָ�����ֽ���, ������ղ���������Ϊ����
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

	// ����˶�ȡunsigned short
	unsigned short  getUint16(unsigned char* buf)
	{
		return (buf[0] <<8) + buf[1];
	}

public:
	AfTcpSocket sock;  // socket
	int  BUFSIZE;          // ���ջ�������С
	unsigned short type;   // ���յ�����Ϣ����
	unsigned short length; // ���յ�����Ϣ���ݳ���
	char* data;            // ���յ�������
};


#endif

