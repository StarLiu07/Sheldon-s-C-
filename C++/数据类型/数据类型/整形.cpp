#include<iostream>
using namespace std;

//C++�ڴ���һ����������ʱ�������ƶ�����Ӧ���������ͣ������޷������������ڴ�
/*
* ���ͣ����ã����ͱ�����ʾ��ʱ�������͵�����
* 1.short(������)��2�ֽ�
* int�����ͣ���4�ֽ�
* long�������ͣ���4�ֽ�
* long long���������ͣ���8�ֽ�
*/
int maind() {

	//������(-32768-32767)
	short num1 = 10;

	//����
	int num2 = 10;

	//������
	long num3 = 10;

	//��������
	long long num4 = 10;

	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	cout << "num3=" << num3 << endl;
	cout << "num4=" << num4 << endl;

	system("pause");

	return 0;
}