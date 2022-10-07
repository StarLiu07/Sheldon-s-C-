#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

/*
* ����������
* ����������Ԫ��
* 
* ����ԭ�ͣ�
* find_if(iterator beg,iterator end,_pred);
* ��ֵ����Ԫ�أ��ҵ�����ָ��λ�õ��������Ҳ������ؽ���������λ��
* beg��ʼ������
* end����������
* _pred��������ν��(����bool���͵ķº���)
*/

class greaterfive
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}
};

//1.����������������
void test03()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int>::iterator it = find_if(v.begin(), v.end(), greaterfive());
	if (it == v.end())
	{
		cout << "û���ҵ�" << endl;
	}
	else
	{
		cout << "�ҵ�����5������Ϊ��" << *it << endl;
	}
}

//2.�����Զ�����������
class person
{
public:

	person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}

	string m_name;
	int m_age;
};

class greater20
{
public:
	bool operator()(person& p)
	{
		return p.m_age > 20;
	}
};

void test04()
{
	vector<person> v;

	//��������
	person p1("a", 10);
	person p2("b", 20);
	person p3("c", 30);
	person p4("d", 40);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	//���������20����
	vector<person>::iterator it = find_if(v.begin(), v.end(), greater20());
	if (it == v.end())
	{
		cout << "û���ҵ�" << endl;
	}
	else
	{
		cout << "�ҵ�������" << it->m_name << "  ����Ϊ��" << it->m_age << endl;
	}
}

int main2() {

	//test03();
	test04();

	system("pause");

	return 0;
}