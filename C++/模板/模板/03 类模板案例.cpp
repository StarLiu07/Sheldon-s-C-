#include "myarry.hpp"
#include <iostream>
using namespace std;

void printintarry(myarry <int>arr1)
{
	for (int i = 0; i < arr1.getsize(); i++)
	{
		cout << arr1[i] << endl;
	}
}


void test04()
{
	myarry <int>arr1(5);

	for (int i = 0; i < 5; i++)
	{
		//����β�巨�������в�������
		arr1.push_back(i);
		
	}
	//cout << "arr1�Ĵ�ӡ���Ϊ��" << 
	printintarry(arr1);

	cout << "arr1������Ϊ��" << arr1.getcapacity() << endl;
	cout << "arr1������Ϊ��" << arr1.getsize() << endl;

	myarry <int>arr2(arr1);
	cout << "arr2�Ĵ�ӡ���" << endl;

	printintarry(arr2);

	//βɾ
	arr2.pop_back();
	cout << "arr2βɾ��" << endl;
	cout << "arr2��������" << arr2.getcapacity() << endl;
	cout << "arr2�Ĵ�С��" << arr2.getsize() << endl;

	//myarry<int>arr2(arr1);

	//myarry<int>arr3(100);
	//arr3 = arr1;
}

//�����Զ�����������
class person
{
public:

	person()
	{

	}
	person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}

	string m_name;
	int m_age;
};

void printpersonarry(myarry<person>arr)
{
	for (int i = 0; i < arr.getsize(); i++)
	{
		cout << "������" << arr[i].m_name << " ���䣺" << arr[i].m_age << endl;
	}
}

void test05()
{
	myarry<person>arr(10);

	person p1("�����", 999);
	person p2("����", 20);
	person p3("槼�", 20);
	person p4("����", 30);
	person p5("������", 10);

	//�����ݲ��뵽������
	arr.push_back(p1);
	arr.push_back(p2);
	arr.push_back(p3);
	arr.push_back(p4);
	arr.push_back(p5);

	//��ӡ����
	printpersonarry(arr);

	//�������
	cout << "arr������" << arr.getcapacity() << endl;

	//�����С
	cout << "arr��С��" << arr.getsize() << endl;
}


int main() {

	test04();

	test05();

	system("pause");

	return 0;
}