#include<iostream>
using namespace std;

class base7
{
public:
	static int m_a;

	static void func()
	{
		cout << "base - static void func()" << endl;
	}

	static void func(int a)
	{
		cout << "base - static void func(int a)" << endl;
	}
};
int base7::m_a = 100;

class son7 : public base7
{
public:
	static int m_a;

	static void func()
	{
		cout << "son7 - static void func()" << endl;
	}
};
int son7::m_a = 200;

//ͬ����̬��Ա����
void test09()
{
	//1.ͨ���������
	cout << "ͨ���������" << endl;
	son7 s;
	cout << "son7 �� m_a = " << s.m_a << endl;
	cout << "base7 �� m_a = " << s.base7::m_a << endl;

	//2.ͨ����������
	cout << "ͨ����������" << endl;
	cout << "son7 �� m_a = " << son7::m_a << endl;
	//��һ��::����ͨ��������ʽ���� �ڶ���::������ʸ�����������
	cout << "base7 �� m_a = " << son7::base7::m_a << endl;
}

//ͬ����̬��Ա����
void test10()
{
	//1.ͨ���������
	cout << "ͨ���������" << endl;
	son7 s;
	s.func();
	s.base7::func();

	//2.ͨ����������
	cout << "ͨ����������" << endl;
	son7::func();
	son7::base7::func();

	//������ֺ͸���ͬ����̬��Ա������Ҳ�����ظ���������ͬ����Ա����
	//�������ʸ����б�����ͬ����Ա����Ҫ��������
	son7::base7::func(100);
}

int main6() {

	test09();

	system("pause");

	return 0;
}