#include <iostream>
using namespace std;

/*����������
���ú���ģ���װһ������ĺ��������ԶԲ�ͬ�������ݽ�������
����Ӵ�С
ѡ������
�ֱ�����char���ݺ�int���ݲ���*/

//��������ģ��
template<class T>
void myswap2(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

//�����㷨
template<class T>
void mysort(T arr[],int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;//�϶����ֵ�±�
		for (int j = i + 1; j < len; j++)
		{
			//�϶������ֵ�ȱ���������ֵҪС��˵��j�±��Ԫ�ز������������ֵ
			if (arr[max] < arr[j])
			{
				max = j;
			}

		}
		if (max != i)
		{
			//����max��i�±��Ԫ��
			myswap2(arr[max], arr[i]);
		}
	}
}

//�ṩ��ӡ����ģ��
template<class T>
void printarry(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void test04()
{
	//����char����
	char chararry[] = "badcfe";
	int num = sizeof(chararry) / sizeof(char);

	mysort(chararry, num);
	printarry(chararry, num);
}

void test05()
{
	int intarr[] = { 7,5,1,3,6 };

	int num = sizeof(intarr) / sizeof(int);

	mysort(intarr, num);

	printarry(intarr, num);
}

int main3() {

	test04();

	test05();

	system("pause");

	return 0;
}