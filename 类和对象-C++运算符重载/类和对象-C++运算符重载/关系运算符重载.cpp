#include<iostream>
using namespace std;

//���ã����ع�ϵ��������������Զ������Ͷ�����жԱȲ���

class person4
{
public:

	//����==�����
	bool operator== (person4& p)
	{
		if (this->m_name == p.m_name && this->m_age == p.m_age)
		{
			return true;
		}
		return false;
	}

	//����!=�����
	bool operator!= (person4& p)
	{
		if (this->m_name != p.m_name || (this->m_age != p.m_age))
		{
			return true;
		}
		return false;
	}

	person4(string name,int age)
	{
		m_name = name;
		m_age = age;
	}

	string m_name;
	int m_age;
};

void test08()
{
	person4 p1("Tom", 18);

	person4 p2("Jerry", 18);

	// ==���غ�ʹ��
	//if (p1 == p2)
	//{
	//	cout << "p1 �� p2 ���" << endl;
	//}
	//else
	//{
	//	cout << "p1 �� p2 �����" << endl;
	//}

	// !=���غ�ʹ��
	if (p1 != p2)
	{
		cout << "p1 �� p2 �����" << endl;
	}
	else
	{
		cout << "p1 �� p2 ���" << endl;
	}
}

int main6() {

	test08();

	system("pause");

	return 0;
}