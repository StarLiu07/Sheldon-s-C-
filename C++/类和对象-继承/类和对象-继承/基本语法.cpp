#include<iostream>
using namespace std;

//��ͨʵ��ҳ��

//JAVA��ҳ
//class java
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Σ���¼��ע��...������ͷ����" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ģ�����������վ�ڵ�ͼ...�������ײ���" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,C++...(���������б�)" << endl;
//	}
//	void content()
//	{
//		cout << "Java��ѧ��Ƶ" << endl;
//	}
//};
//
////Pythonҳ��
//class python
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Σ���¼��ע��...������ͷ����" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ģ�����������վ�ڵ�ͼ...�������ײ���" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,C++...(���������б�)" << endl;
//	}
//	void content()
//	{
//		cout << "python��ѧ��Ƶ" << endl;
//	}
//};
//
////c++ҳ��
//class cpp
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Σ���¼��ע��...������ͷ����" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ģ�����������վ�ڵ�ͼ...�������ײ���" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,C++...(���������б�)" << endl;
//	}
//	void content()
//	{
//		cout << "C++��ѧ��Ƶ" << endl;
//	}
//};

//�̳�ʵ��ҳ��
class basepage
{
public:
	void header()
	{
		cout << "��ҳ�������Σ���¼��ע��...������ͷ����" << endl;
	}
	void footer()
	{
		cout << "�������ģ�����������վ�ڵ�ͼ...�������ײ���" << endl;
	}
	void left()
	{
		cout << "Java,Python,C++...(���������б�)" << endl;
	}
};

/*�̳еĺô��������ظ�����
�﷨�� class ���� : �̳з�ʽ ����
���� Ҳ��Ϊ ������
���� Ҳ��Ϊ ����*/

//Javaҳ��
class java : public basepage
{
public:
	void content()
	{
		cout << "Javaѧ����Ƶ" << endl;
	}
};

//Pythonҳ��
class python : public basepage
{
public:
	void content()
	{
		cout << "pythonѧ����Ƶ" << endl;
	}
};

//c++ҳ��
class cpp : public basepage
{
public:
	void content()
	{
		cout << "C++ѧ����Ƶ" << endl;
	}
};


void test01()
{
	cout << "Java������Ƶҳ�����£�" << endl;
	java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();

	cout << "��������������������������������" << endl;
	cout << "Python������Ƶҳ�����£�" << endl;
	python py;
	py.header();
	py.footer();
	py.left();
	py.content();

	cout << "��������������������������������" << endl;
	cout << "C++������Ƶҳ�����£�" << endl;
	cpp c;
	c.header();
	c.footer();
	c.left();
	c.content();
}

int main1() {

	test01();

	system("pause");

	return 0;
}