#include<iostream>
using namespace std;

//���ã�����ָ����������е�Ԫ��

int main6() {

	//����ָ����������е�Ԫ��
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	cout << arr[0] << endl;

	int* p = arr;//arr����������׵�ַ

	cout << "����ָ����ʵ�һ��Ԫ�� " << *p << endl;

	p++;//��ָ�����ƫ��4���ֽ�

	cout << "����ָ����ʵڶ���Ԫ�� " << *p << endl;

	//����ָ���������
	int* p2 = arr;
	for (int i = 0; i < 10; i++)
	{
		cout << *p2 << endl;
		p2++;
	}
	
	system("pause");

	return 0;
}