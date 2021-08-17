#include <iostream>
using namespace std;
#include <string>

//��ǰ�ñ�����֪��person����
template<class T1, class T2>
class person;

//����ʵ��
template<class T1, class T2>
void printperson2(person<T1, T2> p1)
{
	cout << "����ʵ��" << "������" << p1.m_name << " ���䣺" << p1.m_age << endl;
}

//ͨ��ȫ�ֺ�����ӡperson1��Ϣ

template<class T1,class T2>
class person
{
	//ȫ�ֺ��� ����ʵ��
	friend void printperson1(person<T1, T2> p1)
	{
		cout << "������" << p1.m_name << " ���䣺" << p1.m_age << endl;
	}

	//ȫ�ֺ�������ʵ��
	//�ӿ�ģ������б�
	//���ȫ�ֺ��� ������ʵ�� ��Ҫ�ñ�������ǰ֪����������Ĵ���
	friend void printperson2<>(person<T1, T2> p1);

public:

	person(T1 name, T2 age)
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
	person<string, int> p("Tom", 20);

	printperson1(p);
}

//ȫ�ֺ����������
void test03()
{
	person<string, int>p("Jerry", 20);

	printperson2(p);
}

int main2() {

	test02();

	test03();

	system("pause");

	return 0;
}