#include<iostream>
using namespace std;

//���ã���������Զ�����������

class person2
{
	friend ostream& operator<<(ostream& cout, person2& p);
	friend void test02();

private:

	//���ó�Ա�������� ��������� p.operator<<(cout) �򻯰汾p << cout 
	//�������ó�Ա�������� << ����� ,��Ϊ�޷�ʵ��cout �����
	//void operator<< (cout)
	//{

	//}

	int m_a;
	int m_b;
};

//ֻ������ȫ�ֺ����������������
ostream & operator<<(ostream& cout, person2& p)//����operator<<(cout , p),��Ϊ cout << p;
{
	cout << "m_a = " << p.m_a << "  m_b = " << p.m_b;

	return cout;
}

void test02()
{
	person2 p1;
	p1.m_a = 10;
	p1.m_b = 10;

	cout << p1 << endl;
	//�������Ҫ���л��л��Ĳ�����Ҫ����ostream & ���ҷ���cout ����һ����ʽ���
}

int main2() {

	test02();

	system("pause");

	return 0;
}