#include<iostream>
using namespace std;

//����ָ����Ϊ�����Ĳ����������޸�ʵ�ε�ֵ

//ʵ�������������н����ĺ���
void swap01(int num1, int num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << num1 << " " << num2 << endl;
}

void swap02(int* p, int* p2)
{
	int temp = *p;
	*p = *p2;
	*p2 = temp; 

}

int main7() {

	//1.ֵ����
	int a = 10;
	int b = 20;
	//swap01(a, b);
	

	//��ַ����
	//����ǵ�ַ���ݣ���������ʵ��
	swap02(&a, &b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");

	return 0;
}