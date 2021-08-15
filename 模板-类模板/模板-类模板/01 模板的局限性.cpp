#include<iostream>
using namespace std;

//ģ���ͨ�Բ��������ܵ�

class person
{
public:
	person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}

	//����
	string m_name;

	//����
	int m_age;
};

//�Ա����������Ƿ����
template<class T>
bool mycompare(T& a, T& b)
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//���þ��廯��person�İ汾ʵ�ִ���,���廯���ȵ���
template<> bool mycompare(person& a, person& b)
{
	if (a.m_name == b.m_name && a.m_age == b.m_age)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void test01()
{
	int a = 10;
	int b = 20;
	
	bool ret = mycompare(a, b);

	if (ret)
	{
		cout << "a == b" << endl;
	}
	else
	{
		cout << "a != b" << endl;
	}
}

void test02()
{
	person p1("Tom",10);
	person p2("Tom", 10);

	bool ret = mycompare(p1, p2);
	
	if (ret)
	{
		cout << "p1 == p2" << endl;
	}
	else
	{
		cout << "p1 != p2" << endl;
	}
}

int main1() {

	test01();

	test02();

	system("pause");

	return 0;
}