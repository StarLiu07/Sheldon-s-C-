#include<iostream>
using namespace std;

//���ã����ڽ����ʽ��ֵ��������
/*
* =:��ֵ   +=���ӵ���
* -=��������  *=���˵���
* /=��������  %=��������
*/

int mainrr() {

	//��ֵ�����

	// =
	int a = 10;
	a = 100;
	cout << "a = " << a << endl;

	// +=
	a = 10;
	a += 2;//�൱��a = a + 2
	cout << "a = " << a << endl;

	// -=
	a = 10;
	a -= 2;
	cout << "a = " << a << endl;

	// *=
	a = 10;
	a *= 2;
	cout << "a = " << a << endl;

	// /=
	a = 10;
	a /= 2;
	cout << "a = " << a << endl;

	// %=
	a = 10;
	a %= 3;
	cout << "a = " << a << endl;

	system("pause");

	return 0;
}