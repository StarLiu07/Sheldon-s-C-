#include<iostream>
using namespace std;

//�ַ��������ã����ڱ�ʾһ���ַ�
//c����ַ�����char ������[]="�ַ���ֵ"
//c++����ַ����� string ������="�ַ���ֵ"
//�ַ��ʹ����õ����ţ��ַ����ʹ�����˫���ţ�ע�����֣�

int mainr() {

	//1.c����ַ���
	//ע�����char ������[]
	//ע������2���Ⱥź���Ҫ��˫���ţ����������ַ���
	char str1[] = "hello world";
	cout << "hello world\t" <<str1<< endl;

	//2.c++����ַ���
	string str2 = "hello world";
	cout << str2 << endl;

	system("pause");

	return 0;
}