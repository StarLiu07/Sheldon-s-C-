#include<iostream>
using namespace std;

//���ã�����������Ҫ���������βΣ���ֹ�����
//�ں����β��б��У����Լ�const�����βΣ���ֹ�βθı�ʵ��

//��ӡ���ݺ���
void show(const int& val)
{
	//val = 1000;
	cout << "val = " << val << endl;
}

int main() {

	//int a = 10;

	//����const֮�󣬱������������Ϊ int temp = 10; int& ref = temp;
	//const int& ref = 10;//���ñ�������һ��Ϸ����ڴ�ռ䣨���ÿ��޸ĵ���ֵ��
	//ref = 20;//������ᱨ����Ϊ����const���Ϊֻ���������޸�

	int a = 100;
	show(a);

	system("pause");

	return 0;
}