#include<iostream>
using namespace std;

/*���ã�1.�鿴��ά�����ڴ�ռ�
* 2.��ȡ��ά�����׵�ַ
* */


int main7() {

	//1.�鿴��ά�����ڴ�ռ�
	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	cout << "��ά����ռ�õ��ڴ�ռ�Ϊ��" << sizeof(arr) << endl;
	cout << "��ά�����һ��ռ�õ��ڴ�ռ�Ϊ��" << sizeof(arr[0]) << endl;
	cout << "��ά�����һ��Ԫ��ռ�õ��ڴ�Ϊ��" << sizeof(arr[0][0]) << endl;

	cout << "��ά���������Ϊ��" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "��ά���������Ϊ��" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	//2.��ȡ��ά�����׵�ַ
	cout << "��ά������׵�ַΪ��" << (int)arr << endl;
	cout << "��ά�����е�һ���׵�ַ��" << (int)arr[0] << endl;
	cout << "��ά�����еڶ����׵�ַ��" << (int)arr[1] << endl;

	cout << "��ά�����һ��Ԫ���׵�ַ" << (int)&arr[0][0] << endl;
	cout << "��ά����ڶ���Ԫ���׵�ַ" << (int)&arr[0][1] << endl;

	system("pause");

	return 0;
}