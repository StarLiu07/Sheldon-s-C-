#include<iostream>
using namespace std;

//������������������һ��5��Ԫ�ص����飬���ҽ�Ԫ������

int main4() {

	int arr[5] = { 1,2,3,4,5 };
	for (int i = 4; i <= 5 && i >= 0; i--)
	{
		cout << arr[i] << "  ";
	}

	system("pause");

	return 0;
}