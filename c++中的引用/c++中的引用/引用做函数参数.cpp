#include<iostream>
using namespace std;

//���ã���������ʱ�������������õļ������β�����ʵ��
//�ŵ㣺���Լ�ָ���޸�ʵ��

//��������

//1.ֵ����
void myswap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

//2.��ַ����
void myswap02(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

}

//3.���ô���
void myswap03(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main3() {

	int a = 10;
	int b = 20;
	myswap01(a, b);//ֵ���ݣ��ββ�������ʵ��

	cout << "ֵ����" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	myswap02(&a, &b);//��ַ���ݣ��βλ�����ʵ��

	cout << "��ַ����" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	myswap03(a, b);//���ô��ݣ��βλ�����ʵ��

	cout << "���ô���" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");

	return 0;
}