#include<iostream>
using namespace std;

template<class T1 ,class T2>
class person11
{
public:

	person11(T1 name, T2 age);
	//{
	//	this->m_name = name;
	//	this->m_age = age;
	//}

	void showperson();
	//{
	//	cout << "������" << this->m_name << "���䣺" << this->m_age << endl;
	//}

	T1 m_name;
	T2 m_age;
};

//���캯������ʵ��
template<typename T1,typename T2>
person11<T1,T2>:: person11(T1 name, T2 age)
{
	this->m_name = name;
	this->m_age = age;
}

//��Ա����������ʵ��
template<typename T1,typename T2>
void person11<T1,T2>::showperson()
{
	cout << "������" << this->m_name << "���䣺" << this->m_age << endl;
}

void test12()
{
	person11<string, int>p("Tom", 20);
	p.showperson();
}


int mian() {

	test12();

	system("pause");

	return 0;
}