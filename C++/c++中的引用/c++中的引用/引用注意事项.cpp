#include<iostream>
using namespace std;

/*����ע�����
1.���ñ����ʼ��
2.�����ڳ�ʼ���󣬲����Ըı�
*/

int main2() {

	int a = 10;


	//1.���ñ����ʼ��
	//int& b;//���󣬱���Ҫ��ʼ��
	int& b = a;

	//2.�����ڳ�ʼ���󲻿��Ըı�

	int c = 20;
	b = c;//��ֵ�����������Ǹ�������

	//�����������20����Ϊ c��ֵ��ֵ����b����b��aָ��ͬһ����ַ�����޸���b��ֵa��ֵҲ����֮�޸�
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	system("pause");

	return 0;
}