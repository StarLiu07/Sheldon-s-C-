#include<iostream>
using namespace std;

/*
1.�������ģ�����ͨ���������Ե��ã����ȵ�����ͨ����
2.����ͨ����ģ������б� ǿ�Ƶ��� ����ģ��
3.����ģ����Է�����������
4.�������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��
*/

//����ṩ�˺���ģ�壬��ò�Ҫ�ṩ��ͨ�������������׳��ֶ�����

void myprint(int a, int b)
{
	cout << "���õ���ͨ����" << endl;
}

template<class T>
void myprint(T a, T b)
{
	cout << "���õ�ģ��" << endl;
}

template<class T>
void myprint(T a, T b,T c)
{
	cout << "���õ����ص�ģ��" << endl;
}

void test07()
{
	int a = 10;
	int b = 20;

	myprint(a, b);

	//ͨ����ģ��Ĳ����б�ǿ�Ƶ��ú���ģ��
	myprint<>(a, b);

	myprint(a, b, 100);

	//�������ģ��������õ�ƥ�䣬���ȵ��ú���ģ��
	char c1 = 'a';
	char c2 = 'b';

	myprint(c1, c2);
}

int main() {

	test07();

	system("pause");

	return 0;
}