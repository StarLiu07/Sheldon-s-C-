#include<iostream>
using namespace std;

//���ã�ͨ�����ص����������ʵ���Լ�����������

class myinteger
{
	friend ostream& operator<< (ostream& cout, myinteger  myint);

public:

	//����ǰ��++�����
	//����������Ϊ��һֱ��һ�������е������� 
	myinteger& operator++()
	{
		//�Ƚ���++����
		m_num++;

		//�ٽ�����������
		return *this;
	}

	//���غ���++�����
	//void operator++(int) int����ռλ������������������ǰ�úͺ���
	myinteger operator++(int)
	{
		//�� ��¼��ʱ���
		myinteger temp = *this;

		//�� ����
		m_num++;

		//��󽫼�¼�������
		return temp;
	}

	myinteger()
	{
		m_num = 0;
	}

private:
	int m_num = 0;
};

//�������������
ostream& operator<< (ostream & cout, myinteger  myint)
{
	cout << myint.m_num;
	return cout;
}

void test03()
{
	myinteger myint;

	cout << myint << endl;

}

void test04()
{
	myinteger myint;
	//ǰ�õ���
	cout << ++myint << endl;

	//���õ���
	cout << myint++ << endl; //����Ҫ��42�е�2���βθ�Ϊ myintgeger myint ����&
	cout << myint << endl;

}



int main3() {

	//test03();
	test04();

	system("pause");

	return 0;
}