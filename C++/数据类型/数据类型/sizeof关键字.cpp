#include<iostream>
using namespace std;

//sizeof�ؼ��ֿ���ͳ������������ռ�ڴ��С
int maindd() {

	//���ͣ�short(2) int(4) long(4)   long long(8)
	//��������sizeof�����������ռ���ڴ��С
	//�﷨��sizeof(��������/����)

	short num1 = 10;
	cout << "shortռ�õ��ڴ�ռ䣺" << sizeof(num1) << endl;

	int num2 = 10;
	cout << "intռ�õ��ڴ�ռ䣺" << sizeof(num2) << endl;

	long num3 = 10;
	cout << "longռ�õ��ڴ�ռ䣺" << sizeof(num3) << endl;

	long long num4 = 10;
	cout << "long longռ�õ��ڴ�ռ䣺" << sizeof(num4) << endl;

	system("pause");

	return 0;
}