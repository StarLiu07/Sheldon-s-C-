#include<iostream>
using namespace std;

/*const����ָ�������������
1.const����ָ�롪������ָ��
2,const���ǳ�������ָ�볣��
3.const������ָ�룬�����γ���*/

int main5() {

	//const����ָ�� 
	int a = 10;
	int b = 10;

	const int* p = &a;//����ָ��
	//ָ��ָ���ֵ�����Ըģ�ָ����Ը�
	//*p = 20; ����
	p = &b;//��ȷ

	//const���γ���
	int* const p2 = &a;//ָ�볣��
	//ָ�򲻿����޸ģ�ָ��ָ���ֵ�����޸�
	*p2 = 20;
	//p2 = &b;//����

	//const����ָ��ͳ���
	const int* const p3 = &a;
	//ָ���ָ���ָ��ָ���ֵ�������Ը�
	//*p = 40;
	//p = &b;


	system("pause");

	return 0;
}