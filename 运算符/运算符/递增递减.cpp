#include<iostream>
using namespace std;

//ǰ�õ���&���õ�����++   ǰ�õݼ�&���õݼ���--

int maine() {

	//1.ǰ�õ���
	int a = 10;
	++a;//�ñ�������+1�Ĳ���
	cout << "a = " << a << endl;

	//2.���õ���
	int b = 10;
	b++;//�ñ���+1
	cout << "b = " << b << endl;

	//3.ǰ�õ�������õ���������
	//ǰ�õ��� ���ñ�����1 Ȼ����б��ʽ����
	int a2 = 10;
	int b2 = ++a2 * 10;
	cout << "a2 = " << a2 << " \nb2 = " << b2 << endl;

	//���õ��� �Ƚ��б��ʽ���� ���ñ�����1
	int a3 = 10;
	int b3 = a3++ * 10;
	cout << "a3 = " << a << endl;
	cout << "b3 = " << b3 << endl;

	//ǰ�õݼ�
	int num_1 = 10;
	int num_2 = --num_1*10;
	cout << "num_1 = " << num_1 << endl;
	cout << "num_2 = " << num_2 << endl;

	//���õݼ�
	int n1 = 10;
	int n2 = n1--*10;
	cout << "n1 =" << n1 << endl;
	cout << "n2 =" << n2 << endl;

	system("pause");

	return 0;
}