#include <iostream>
using namespace std;

/*
��ͨ��������ʱ���Է����Զ�����ת������ʽ����ת����
����ģ�����ʱ����������Զ������Ƶ������ᷢ����ʽ����ת��
���������ʽָ�����͵ķ�ʽ�����Է�����ʽ����ת��
*/

//��ͨ����
int myadd(int a,int b)
{
	return a + b;
}

//����ģ��
template<class T>
T myadd2(T a, T b)
{
	return a + b;
}

void test06()
{
	int a = 10;
	int b = 20;
	char c = 'c';

	cout << myadd(a, c) << endl;

	//1.�Զ������Ƶ�
	cout << myadd2(a, b) << endl;
	//cout << myadd2(a, c) << endl;

	//��ʽָ������
	cout << myadd2<int>(a, c) << endl;
}

int main4() {

	test06();

	system("pause");

	return 0;
}