#include<iostream>
using namespace std;

//��c++�У��������β��б��е��β��ǿ�����Ĭ��ֵ��
//�﷨������ֵ���� ������ ������ = Ĭ��ֵ��{}


//��������Լ����������ݣ������Լ������ݣ����û�У�����Ĭ��ֵ
int func(int a , int b = 20, int c = 30)
{
	return a + b + c;
}
//ע�����
//1.���ĳ��λ���Ѿ�����Ĭ�ϲ�������ô�����λ�����󣬴����Ҷ�������Ĭ��ֵ
//int func2(int a = 10, int b, int c, int d)
//{
//	return a + b + c + d;
//}

//2.�����������������Ĭ�ϲ���������ʵ�־Ͳ�����Ĭ�ϲ���(��������ʵ��ֻ����һ��Ĭ�ϲ���)
int func3(int a = 10, int b = 10);//����

int func3(int a, int b)//ʵ��
{
	return a + b;
}

int main1() {

	cout << func(10,20,30) << endl;

	system("pause");

	return 0;
}