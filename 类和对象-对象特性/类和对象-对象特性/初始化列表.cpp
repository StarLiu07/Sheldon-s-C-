#include<iostream>
using namespace std;

//���ã�C++�ṩ�˳�ʼ���б��﷨��������ʼ������
//�﷨�����캯��():����1(ֵ1)������2(ֵ2)...{}

class newpeople
{
public:

	//��ͳ��ʼ������
	//newpeople(int a, int b, int c)
	//{
	//	m_a = a;
	//	m_b = b;
	//	m_c = c;
	//}

	//��ʼ���б��ʼ������
	newpeople(int a,int b,int c) :m_a(a), m_b(b), m_c(c)
	{

	}

	int m_a;
	int m_b;
	int m_c;
};

void newexam1()
{
	//newpeople p(1,2,3);
	newpeople p(10,20,30);

	cout << "a��ֵΪ��" << p.m_a << " b��ֵΪ��" << p.m_b << " c��ֵΪ��" << p.m_c << endl;
}

int main() {

	newexam1();

	system("pause");

	return 0;
}