#include<iostream>
using namespace std;

//����������ˮ�ɻ�����ָһ����λ��������ÿ��λ���ϵ����ֵ�3�η���������������do...while������������λ���е�ˮ�ɻ���


int mainde() {
	
	//1. ��ӡ������λ����
	int num = 100;

	do
	{//2. �����е���λ�������ҵ�ˮ�ɻ���
		int a = 0;
		int b = 0;
		int c = 0;

		a = num % 10;
		b = num / 10 % 10;
		c = num / 100;
		if(a*a*a + b*b*b + c*c*c == num)//�����ˮ�ɻ����Ŵ�ӡ
		cout << num << endl;
		num++;
	} while (num < 1000);

	//2. �����е���λ�������ҵ�ˮ�ɻ���

	system("pause");

	return 0;
}