#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

/*
* ����������
* ͳ��Ԫ�ظ���
* 
* count(iterator beg,iterator end,value);
* ͳ��Ԫ�س��ִ���
* beg��ʼ������
* end����������
* valueͳ�Ƶ�Ԫ��
*/

//1.ͳ��������������
void test07()
{
	vector<int> v;

	v.push_back(10);
	v.push_back(40);
	v.push_back(30);
	v.push_back(40);
	v.push_back(20);
	v.push_back(40);

	int num = count(v.begin(), v.end(), 40);

	cout << "40��Ԫ�ظ���Ϊ��" << num << endl;
}

//2.ͳ���Զ�����������
class person
{
public:

	person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}

	bool operator==(const person& p)const 
	{
		if (this->m_age == p.m_age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	string m_name;
	int m_age;
};

void test08()
{
	vector<person> v;

	person p1("����", 35);
	person p2("����", 35);
	person p3("�ŷ�", 35);
	person p4("����", 30);
	person p5("�ܲ�", 40);

	//����Ա���뵽������
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	person p("�����", 35);

	int num = count(v.begin(), v.end(), p);

	cout << "�������ͬ��������Ϊ��" << num << endl;
}

int main5() {

	//test07();
	test08();

	system("pause");

	return 0;
}