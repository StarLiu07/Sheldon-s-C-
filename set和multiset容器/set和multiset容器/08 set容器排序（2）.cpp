#include <iostream>
using namespace std;
#include <set>

//set�������򣬴���Զ�����������


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

class compareperson
{
public:
	bool operator()(const person& p1, const person& p2)const
	{
		//�������� ����
		return p1.m_age > p2.m_age;
	}
};


void test10()
{
	//�Զ����������� ����ָ���������
	set<person,compareperson> s;

	//����person����
	person p1("����", 24);
	person p2("����", 28);
	person p3("�ŷ�", 25);
	person p4("����", 21);

	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);

	for (set<person,compareperson>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << "������" << it->m_name << " ���䣺" << it->m_age << endl;
	}
}

int main() {

	test10();

	system("pause");

	return 0;
}