#include<iostream>
using namespace std;

//�����ĵ��ù��ܣ�ʹ�ö���õĺ���
//�﷨����������������

//����ӷ�����
//��������ʱ��num1��num2��û����ʵ���ݣ�����ֻ��һ����ʽ�ϵĲ�������ƣ��β�
int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}

int main2() {

	//main�����е���add����
	int a = 10;
	int b = 20;

	//���������﷨���������ƣ�������
	//a��b��Ϊʵ�ʲ�������ƣ�ʵ��
	int c = add(a, b);
	cout << c << endl;

	system("pause");

	return 0;
}