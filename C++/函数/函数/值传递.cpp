#include<iostream>
using namespace std;

//ֵ���ݣ���������ʱʵ�ν���ֵ������β�
//ֵ����ʱ������βη�����������Ӱ��ʵ��

//���庯����ʵ����������н���

//���һ����������Ҫ����ֵ��������ʱ�����дvoid
void swap1(int num1, int num2)
{
	cout << "����ǰ��" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "������" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;

	return;
}

int main3() {

	int a = 10;
	int b = 20;
	//�������βη����ı䣬������Ӱ��ʵ��
	swap(a, b);

	system("pause");

	return 0;
}