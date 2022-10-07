#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

/*
* ����������
* ����ָ��Ԫ�أ��ҵ�����ָ��Ԫ�صĵ��������Ҳ������ؽ���������
* 
* ����ԭ��:
* find(iterator beg,iterator end,vlaue);
* ��ֵ����Ԫ�أ��ҵ�����ָ��λ�õ��������Ҳ������ؽ�����������λ��
* beg��ʼ������
* end����������
* value���ҵ�Ԫ��
*/

//���� ������������
void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//�����������Ƿ��� 5 ���Ԫ��
	vector<int>::iterator it = find(v.begin(), v.end(), 5);
	if (it == v.end())
	{
		cout << "û���ҵ�" << endl;
	}
	else
	{
		cout << "�ҵ�Ԫ�� ��" << *it << endl;
	}
}

class person
{
public:

	person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}

	//���� == �õײ�find֪����ζ԰�person��������
	bool operator==(const person& p)
	{
		if (this->m_name == p.m_name && this->m_age == p.m_age)
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

//���� �Զ�����������
void test02()
{
	vector<person> v;
	//��������
	person p1("aaa", 10);
	person p2("bbb", 20);
	person p3("ccc", 30);
	person p4("ddd", 40);

	//���뵽������
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	person pp("bbb", 20);

	vector<person>::iterator it = find(v.begin(), v.end(), p2);
	if (it == v.end())
	{
		cout << "û���ҵ�" << endl;
	}
	else
	{
		cout << "�ҵ�Ԫ�� ������" << it->m_name << "  ���䣺" << it->m_age << endl;
	}
}

int main1() {

	//test01();
	test02();

	system("pause");

	return 0;
}