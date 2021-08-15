#include<iostream>
using namespace std;

/*1.ָ����������� ����ֱ����ʾ�������������
2.����ģ�廯 �����������еĲ�����Ϊģ����д���
3.������ģ�廯 ����������������� ģ�廯���д���*/

template <class T1,class T2>
class person5
{
public:
	person5(T1 name, T2 age)
	{
		this->m_name = name;
		this->m_age = age;
	}

	void showperson()
	{
		cout << "������" << this->m_name << " ���䣺" << this->m_age << endl;
	}

	T1 m_name;
	T2 m_age;
};

//1.ָ����������

void printperson1(person5<string,int> & p)
{
	p.showperson();
}

void test07()
{
	person5<string, int> p("�����", 100);

	printperson1(p);
}

//2.����ģ�廯

template<class T1,class T2>
void printperson2(person5<T1, T2>& p)
{
	p.showperson();
	cout << "T1 ������Ϊ��" << typeid(T1).name() << endl;
	cout << "T2������Ϊ��" << typeid(T2).name() << endl;
}

void test08()
{
	person5<string, int> p("��˽�", 90);

	printperson2(p);
}

//3.�����඼ģ�廯

template<class T>
void printperson3(T & p)
{
	p.showperson();
	cout << "T����������Ϊ��" << typeid(T).name() << endl;
}

void test09()
{
	person5<string, int> p("��ɮ", 30);
	printperson3(p);
}

int main5() {

	test07();
	test08();
	test09();

	system("pause");

	return 0;
}