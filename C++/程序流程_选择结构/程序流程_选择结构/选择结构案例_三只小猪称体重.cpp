#include<iostream>
using namespace std;

//����ֻС��ABC����ֱ�������ֻС������أ����ж���ֻС������ 

/*int main() {

	//������ֻС�������
	double a = 0;
	double b = 0;
	double c = 0;
	cout << "������AС�������" << endl;
	cin >> a;
	cout << "������BС�������" << endl;
	cin >> b;
	cout << "������CС�������" << endl;
	cin >> c;

	//�Ƚ�A��B�����ش�С
	if (a >= b)
	{
		if (b >= c)
		{
			cout << "AС�� >= BС�� >= CС��" << endl;
		}
		else
		{
			cout << "AС�� >= CС�� >= BС��" << endl;
		}
	}
	else
	{
		if (a >= c)
		{
			cout << "BС�� >= AС�� >= CС��" << endl;
		}
		else
		{
			cout << "BС�� >= CС�� >= AС��" << endl;
		}
	}

	system("pause");

	return 0;
}*/
int mainhh() {

	//����ʹ���߼�������ɴ���
	double a = 0;
	cout << "������AС�������" << endl;
	cin >> a;
	double b = 0;
	cout << "������BС�������" << endl;
	cin >> b;
	double c = 0;
	cout << "������CС�������" << endl;
	cin >> c;

	//�Ƚ�
	if (a >= b && b >= c)
	{
		cout << "AС�� >= BС�� >= CС��" << endl;
	}
	else if (a >= c && c >= b)
	{
		cout << "AС�� >= CС�� >= BС��" << endl;
	}
	else if (b >= a && a >= c)
	{
		cout << "BС�� >= AС�� >= CС��" << endl;
	}
	else if (b >= c && c >= a)
	{
		cout << "BС�� >= С�� >= AС��" << endl;
	}
	else if (c >= a && a >= b)
	{
		cout << "CС�� >= AС�� >= BС��" << endl;
	}
	else
	{
		cout << "CС�� >= BС�� >= AС��" << endl;
	}
	//ohhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh
	//nb!!!!!!!!nb

	system("pause");

	return 0;
}