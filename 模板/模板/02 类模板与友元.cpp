#include <iostream>
using namespace std;
#include <string>

//ͨ��ȫ�ֺ�����ӡperson1��Ϣ

template<class T1,class T2>
class person1
{
	//ȫ�ֺ��� ����ʵ��
	friend void printperson1(person1<T1, T2> p1)
	{
		cout << "������" << p1.m_name << " ���䣺" << p1.m_age << endl;
	}

public:

	person1(T1 name, T2 age)
	{
		this->m_name = name;
		this->m_age = age;
	}

private:
	T1 m_name;
	T2 m_age;
};

//1.ȫ�ֺ���������ʵ��
void test02()
{
	person1<string, int> p("Tom", 20);

	printperson1(p);
}

int mian() {

	test02();

	system("pause");

	return 0;
}