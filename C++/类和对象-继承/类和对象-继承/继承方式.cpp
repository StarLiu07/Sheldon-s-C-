#include<iostream>
using namespace std;

//�﷨��class ���� : �̳з�ʽ ����

/*�̳з�ʽһ�������֣�
1.�����̳�
2.�����̳�
3.˽�м̳�*/

//�����̳�
class base1
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};

class son1 : public base1
{
public:
	void func()
	{
		m_a = 10;//�����еĹ���Ȩ�޳�Ա ����������Ȼ�ǹ���Ȩ��
		m_b = 10;//�����еı���Ȩ�޳�Ա ����������Ȼ�Ǳ���Ȩ��
		//m_c = 10;//�����е�����Ȩ�޳�Ա ������ʲ���

	}
};

void test02()
{
	son1 s1;
	s1.m_a = 100;
	//s1.m_b = 100;//��son1�� m_b �Ǳ���Ȩ�� ������ʲ���
}

//�����̳�
class base2
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};

class son2 : protected base2
{
public:
	void func()
	{
		m_a = 100; //�����й�����Ա���������б�Ϊ����Ȩ��
		m_b = 100; //�����б�����Ա���������б�Ϊ����Ȩ��
		//m_c = 100; //������˽�г�Ա��������ʲ���
	}
};

void test03()
{
	son2 s2;
	//s2.m_a = 1000; //��son2�� m_a ��Ϊ����Ȩ�ޣ����������ʲ���
	//s2.m_b = 1000; //��son2�� m_b ��Ϊ����Ȩ�ޣ����������ʲ���
}

//˽�м̳�
class base3
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};

class son3 : private base3
{
public:
	void func()
	{
		m_a = 100; //�����й�����Ա �������б�Ϊ ˽�г�Ա
		m_b = 100; //�����б�����Ա �������б�Ϊ ˽�г�Ա
		//m_c = 100; //������˽�г�Ա��������ʲ���
	}
};

class grandson3 : public son3
{
public:
	void func()
	{
		//m_a = 1000;//����son3�� m_a��Ϊ˽�У���ʹ�Ƕ��ӣ�Ҳ���ʲ���
		//m_b = 1000;//����son3�� m_a��Ϊ˽�У���ʹ�Ƕ��ӣ�Ҳ���ʲ���
	}
};

void test04()
{
	son3 s3;
	//s3.m_a = 1000;//��son3�� ��Ϊ ˽�г�Ա ������ʲ���
	//s3.m_b = 1000;//��son3�� ��Ϊ ˽�г�Ա ������ʲ���
}

int main2() {

	system("pause");

	return 0;
}