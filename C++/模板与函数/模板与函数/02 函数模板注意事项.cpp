#include<iostream>
using namespace std;

template<class T>//typename �����滻�� class 
void myswap1(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

/*
1.�Զ������Ƶ�������Ҫ�Ƶ���һ�µ���������T����ʹ��
2.ģ�����Ҫȷ����T���������Ͳ���ʹ��
*/

//1.�Զ������Ƶ�������Ҫ�Ƶ���һ�µ���������T����ʹ��
void test02()
{
	int a = 10;
	int b = 20;
	char c = 'c';

	myswap1(a, b);
	//myswap(a, c);//����


	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

//2.ģ�����Ҫȷ����T���������Ͳ���ʹ��
template<typename T>
void func()
{
	cout << "func����" << endl;
}

void test03()
{
	func<int>();
}

int main2() {

	test02();

	system("pause");

	return 0;
}