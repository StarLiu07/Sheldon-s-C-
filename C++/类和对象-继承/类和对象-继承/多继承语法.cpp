#include<iostream>
using namespace std;

/*C++����һ����̳ж���๤
�﷨:class����U�̳з�ʽ����1���̳з�ʽ����2...
��̳п��ܻ�������������ͬ����Ա���֣���Ҫ������������*/

class base8
{
public:
	base8()
	{
		m_a = 100;
	}

	int m_a;
};

class base9
{
public:
	base9()
	{
		m_a = 200;
	}

	int m_a;
};

//���� ��Ҫ�̳�base8��base9
//�﷨:class����U�̳з�ʽ����1���̳з�ʽ����2...
class son8 : public base8 , public base9
{
public:
	son8()
	{
		m_c = 300;
		m_d = 400;
	}

	int m_c;
	int m_d;
};

void test11()
{
	son8 s;

	cout << "size of s = " << sizeof(s) << endl;

	//�������г���ͬ����Ա����Ҫ������������
	cout << "base8::m_a = " << s.base8::m_a << endl;
	cout << "base9::m_a = " << s.base9::m_a << endl;
}

int main7() {

	test11();

	system("pause");

	return 0;
}