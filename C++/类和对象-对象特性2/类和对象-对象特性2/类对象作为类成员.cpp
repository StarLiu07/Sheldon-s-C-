#include<iostream>
using namespace std;

//C++���еĳ�Ա��������һ��Ķ������ǳƸó�ԱΪ�����Ա

//�ֻ���
class phone
{
public:

	phone(string name)
	{
		cout << "phone���вι��캯������" << endl;
		pname = name;
	}

	~phone()
	{
		cout << "phone��������������" << endl;
	}

	string pname;
};

//����
class nperson
{
public:

	nperson(string name, string phone) :m_name(name), m_phone(phone)
	{
		cout << "nperson���вι��캯������" << endl;
	}

	~nperson()
	{
		cout << "nperson��������������" << endl;
	}

	//����
	string m_name;

	//�ֻ�
	phone m_phone;
};

//�������������Ϊ�����Ա������ʱ���ȹ���������ڹ�������  ������˳���빹���෴

void ntest1()
{
	nperson p("����", "ƻ��MAX");

	cout << p.m_name << "���ţ�" << p.m_phone.pname << endl;
}

int main1() {

	ntest1();

	system("pause");

	return 0;
}