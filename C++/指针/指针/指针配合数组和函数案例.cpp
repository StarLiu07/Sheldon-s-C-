#include<iostream>
using namespace std;

//������������װһ������������ð������ʵ�ֶ������������������

void print(int* p,int len)
{
	for (int a = 0; a < len; a++)
	{
		cout << *(p + a) << endl;
	}
}

//ð��������
void bubble(int *arr,int len)
{
	for(int i = 0; i < len - 1; i ++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (*(arr+j) > *(arr + j +1))
			{
				int temp = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = temp;
			}
		}
	}
}

int main() {

	//1.��������
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };

	//���鳤��
	int len = sizeof(arr) / sizeof(arr[0]);

	//2.����������ʵ��ð������
	bubble(arr, len);

	//3.��ӡ���������
	print(arr, len);

	system("pause");

	return 0;
}