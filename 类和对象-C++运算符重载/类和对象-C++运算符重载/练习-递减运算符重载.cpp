#include<iostream>
using namespace std;

//����һ��������
class myinteger1
{
	friend ostream& operator<< (ostream& cout, myinteger1 myint);

public:

	//ǰ�õݼ�
	myinteger1& operator--()
	{
		m_num--;

		return *this;
	}

	//���õݼ�
	myinteger1 operator--(int)//��int��ռλ
	{
		//������ʱ����
		myinteger1 temp = *this;

		//��m_num���еݼ�����
		m_num--;

		//����ֵ ��Ϊ���ﷵ��һ���ֲ����������ֲ������ں��������ᱻ�ͷţ�����ֻ����ֵ
		return temp;
	}

	myinteger1()
	{
		m_num = 1;
	}

private:
	int m_num;
};

//ȫ�ֺ��������������������
ostream& operator<< (ostream & cout,myinteger1 myint)
{
	cout << myint.m_num;

	return cout;
}

void test05()
{
	myinteger1 myint;

	cout << myint << endl;
}

void test06()
{
	myinteger1 myint;
	//ǰ�õݼ�
	cout << --myint << endl;

	//���õݼ�
	cout << myint-- << endl;
	cout << myint << endl;
}

int main4() {

	cout << "���Ϊtest05" << endl;
	test05();

	cout << "\n���Ϊtest06" << endl;
	test06();

	//:)
	system("pause");

	return 0;
}