#include<iostream>
using namespace std;

/*C++�п������캯������ʱ��ͨ�����������
��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
��ֵ���ݵķ�ʽ������������ֵ
����ֵ��ʽ���ؾֲ�����*/



class person2
{
public:
	person2() //�޲ι���
	{
		cout << "person2�޲ι��캯������" << endl;
	}
	person2(int age) //�вι���
	{
		m_age = age;
		cout << "person�вι��캯������" << endl;
	}

	person2(const person2& p)
	{
		m_age = p.m_age;
		cout << "person�������캯������" << endl;
	}

	~person2()
	{
		cout << "person������������" << endl;
	}
	int m_age;
};

//1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void test03()
{
	person2 p1(20);
	person2 p2(p1);
	cout << "p2������Ϊ��" << p2.m_age << endl;
}

//2.ֵ���ݵķ�ʽ������������ֵ
void dowork(person2 p)
{
		
}

void test04()
{
	person2 p1;
	dowork(p1);
}

//3.��ֵ��ʽ���ؾֲ�����
person2 work2()
{
	person2 p1;
	cout << (int)&p1 << endl;
	return p1;
}
void test05()
{
	person2 a = work2();
	cout << (int)&a << endl;
}

int main3() {

	//test03();
	//test04();
	//test05();

	system("pause");

	return 0;
}