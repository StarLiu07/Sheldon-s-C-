#include<iostream>
using namespace std;

/*ע�����
1.������Ϊ��������
2.����������������Ĭ�ϲ���*/

//������Ϊ���ص�����
void fun(int& a)
{
	cout << "func(int &a�ĵ���)" << endl;
}
void fun(const int &a)
{
	cout << "func(int &a�ĵ���)" << endl;
}

//����������������Ĭ�ϲ���
void func0(int a,int b )//��������������Ĭ�Ϻ���������ֶ����ԣ��ᱨ��
{
	cout << "func(int a )�ĵ���" << endl;
}

void func0(int a)
{
	cout << "func(int a )�ĵ���" << endl;
}

int main() {

	func0(10);

	system("pause");

	return 0;
}