#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

/*
* ����������
* ������ͳ��Ԫ�ظ���
* 
* ����ԭ�ͣ�
* count_if(iterator beg,iterator end,_pred);
* ������ͳ��Ԫ�س��ִ���
* beg ��ʼ������
* end ����������
* _pred ν��
*/

//ͳ��������������

class greater20
{
public:
	bool operator()(int val)
	{
		return val > 20;
	}
};

void test09()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(20);

	int num = count_if(v.begin(), v.end(), greater20());

	cout << "����20��Ԫ�ظ���Ϊ��" << num << endl;
}

//ͳ���Զ�����������
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

class agegreater20
{
public:
	bool operator()(const person& p)
	{
		return p.m_age > 20;
	}
};

void test10()
{
	vector<person> v;

	person p1("����", 35);
	person p2("����", 35);
	person p3("�ŷ�", 35);
	person p4("����", 40);
	person p5("�ܲ�", 20);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	//ͳ�� ����20�����Ա����
	int num = count_if(v.begin(), v.end(), agegreater20());

	cout << "����20�����Ա����Ϊ��" << num << endl;
}

int main() {

	//test09();
	test10();

	system("pause");

	return 0;
}