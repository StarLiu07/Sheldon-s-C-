#include<iostream>
using namespace std;

/*��������ͬ����Ա ֱ�ӷ��ʼ���
  ���ʸ���ͯ����Ա ��Ҫ��������
 */

class base6
{
public:
	base6()
	{
		m_a = 100;
	}

	void func()
	{
		cout << "base6 - func()����" << endl;
	}

	void func(int a)
	{
		cout << "base6 - func(int a)����" << endl;
	}

	int m_a;
};

class son6 : public base6
{
public:
	son6()
	{
		m_a = 200;
	}

	void func()
	{
		cout << "son6 - func()����" << endl;
	}

	int m_a;
};

//ͬ����Ա���Դ���
void test07()
{
	son6 s;
	cout << "son6 �� m_a = " << s.m_a << endl;

	//���ͨ��������� ���ʵ�������ͬ����Ա����Ҫ��������
	cout << "base6 �� m_a = " << s.base6::m_a << endl;
}

//ͬ����Ա��������
void test08()
{
	son6 s;

	s.func();//ֱ�ӵ��� ���õ��������е�ͬ����Ա

	s.base6::func();

	//��������г��ֺ͸���ͬ���ĳ�Ա�����������ͬ����Ա�����ص�����������ͬ����Ա����
	//�������ʵ������б����ص�ͬ����Ա��������Ҫ��������
	s.base6::func(100);
}

int main5() {

	//test07();
	test08();

	system("pause");

	return 0;
}