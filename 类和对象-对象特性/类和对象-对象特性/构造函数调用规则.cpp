#include<iostream>
using namespace std;

/*����һ���࣬c++���������ÿ�������������������
1.Ĭ�Ϲ��� ����ʵ�֣�
2.�������� ����ʵ�֣�
3.�������� ��ֵ������
*/

/*���캯�̵��ù�������:
������û������вι��캯����c++�����ṩĬ���޲ι��죬���ǻ��ṩĬ�Ͽ�������
������û����忽�����캯����C++�������ṩ�������캯��*/

class people
{
public:
	//people()
	//{
	//	cout << "peopleĬ�Ϲ������" << endl;
	//}

	//people(int age)
	//{
	//	m_age = age;
	//	cout << "people�вκ�������" << endl;
	//}

	people(const people& p)
	{
		m_age = p.m_age;
		cout << "������������" << endl;
	}

	~people()
	{

		cout << "people������������" << endl;
	}

	int m_age;
};

//void newtest01()
//{
//	people p(10);
//	p.m_age = 10;
//
//	people p1(p);//���ܰ������Զ���Ŀ������캯��ע�͵���������������18����Ϊ�������������ṩ�Ŀ������캯�������ֵ����
//	cout << "p1������Ϊ��" << p1.m_age << endl;
//}

//void newtest02()
//{
//	people p(18);
//
//	people p2(p);
//	 
//	cout << "p2������Ϊ��" << p2.m_age << endl;
//}

int main4() {

	//newtest01();
/*	newtest02()*/;

	system("pause");

	return 0;
}