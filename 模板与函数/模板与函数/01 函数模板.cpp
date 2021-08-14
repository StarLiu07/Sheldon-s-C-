#include <iostream>
using namespace std;

/*�﷨��template<typename T>
  ��������*/

//�������ν����ĺ���
void swapint(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

//�������������ͺ���
void swapdouble(double& a, double& b)
{
	double temp = a;
	a = b;
	b = temp;
}

//����ģ��
template<typename T> //����һ��ģ�� ���߱�������������н����ŵ�T��Ҫ����T��һ��ͨ�õ���������
void myswap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
} 

void test01()
{
	int a = 10;
	int b = 20;

	//swapint(a, b);
	//���ú���ģ�彻��
	//���ַ�ʽ
	//1.�Զ������Ƶ�
	//myswap(a, b);

	//2.��ʽָ������
	myswap<int>(a, b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	double c = 1.1;
	double d = 2.2;

	swapdouble(c, d);

	cout << "c = " << c << endl;
	cout << "d = " << d << endl;
}


 
int main1() {

	test01();

	system("pause");

	return 0;
}