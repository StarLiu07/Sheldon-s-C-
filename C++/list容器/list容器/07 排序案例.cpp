#include <iostream>
using namespace std;
#include <list>

//������������person�Զ����������ͽ�������person�������������䣬����
//������򣺰�����������������������ͬ������߽��н���

class person
{
public:

	person(string name,int age,int height)
	{
		this->m_name = name;
		this->m_age = age;
		this->m_height = height;
	}

	string m_name;//����;
	int m_age;//����
	int m_height;//���
};

//ָ���������
bool compareperson(person& p1,person& p2)
{
	//�������� ����
	if (p1.m_age == p2.m_age)
	{
		//������ͬ ������߽���
		return p1.m_height > p2.m_height;
	}
	return p1.m_age < p2.m_age;
}

void test09()
{
	list<person> l;  //��������

	//׼������
	person p1("����", 35, 175);
	person p2("�ܲ�", 45, 180);
	person p3("��Ȩ", 40, 179);
	person p4("����", 25, 190);
	person p5("�ŷ�", 35, 160);
	person p6("����", 35, 200);

	//��������
	l.push_back(p1);
	l.push_back(p2);
	l.push_back(p3);
	l.push_back(p4);
	l.push_back(p5);
	l.push_back(p6);

	for (list<person>::iterator it = l.begin(); it != l.end(); it++)
	{
		cout << "����Ϊ��" << (*it).m_name << " ����Ϊ��" << (*it).m_age << " ���Ϊ��" << (*it).m_height << endl;
	}

	//����
	cout << "������������������������������������" << endl;
	cout << "�����" << endl;
	l.sort(compareperson);
	for (list<person>::iterator it = l.begin(); it != l.end(); it++)
	{
		cout << "����Ϊ��" << (*it).m_name << " ����Ϊ��" << (*it).m_age << " ���Ϊ��" << (*it).m_height << endl;
	}
}

int main() {

	test09();

	system("pause");

	return 0;
}