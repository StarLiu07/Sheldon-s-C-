#include<iostream>
using namespace std;

//���ã�����ʱ������Ϊ�����ķ���ֵ���ڵ�
//ע�⣺��Ҫ���ؾֲ���������
//�÷�������������Ϊ��ֵ

//1.��Ҫ���ؾֲ���������
int& test01()
{
	int a = 10;//�ֲ���������������е� ջ��
	return a;
}

//����������Ϊ��ֵ
int& test02()
{
	static int a = 10;//��̬�����������ȫ������ȫ�����������ڳ����������ϵͳ�ͷ�
	return a;
}

int main4() {

	//int& ref = test01();
	//cout << "ref = " << ref << endl;//��һ����ȷ������Ϊ���������˱���
	//cout << "ref = " << ref << endl;//�ڶ��δ�����Ϊa���ڴ��Ѿ����ͷ� 

	int& ret = test02();
	cout << "ret = " << ret << endl;
	cout << "ret = " << ret << endl;

	test02() = 1000;//��������ķ���ֵ�����ã���ô�������������Ϊ��ֵ
	cout << "ret = " << ret << endl;
	cout << "ret = " << ret << endl;

	system("pause");

	return 0;
}