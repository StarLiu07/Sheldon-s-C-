#include<iostream>
using namespace std;

//��һ�ֽ����ʽ��ֱ�Ӱ���Դ�ļ�
//#include "person.cpp"

//�ڶ��ֽ����ʽ����.h��.cpp�е�����д��һ�𣬽���׺����Ϊ.hpp�ļ�
#include "person.hpp"

//template<class T1,class T2>
//class person
//{
//public:
//
//	person(T1 name, T2 age);
//
//	void showperson();
//
//	T1 m_name;
//	T2 m_age;
//};

//template<class T1,class T2>
//person< T1, T2>::person(T1 name, T2 age)
//{
//	this->m_name = name;
//	this->m_age = age;
//}
//
//template<class T1,class T2>
//void person< T1,  T2>::showperson()
//{
//	cout << "������" << this->m_name << " ���䣺" << this->m_age << endl;
//}
//
void test01()
{
	person<string, int> p("Jerry", 18);
	p.showperson();
}

int main1() {

	test01();

	system("pause");

	return 0;
}