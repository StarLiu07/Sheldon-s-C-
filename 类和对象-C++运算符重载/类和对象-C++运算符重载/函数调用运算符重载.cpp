#include<iostream>
using namespace std;

/*���������������()Ҳ��������
���������غ�ʹ�õķ�ʽ�ǳ������ĵ��ã���˳�Ϊ�º���
���º���û�й̶�д�����ǳ����*/

//��ӡ�����
class myprint
{
public:

	//���غ������������
	void operator()(string test)
	{
		cout << test << endl;
	}
};

void test09()
{
	myprint myprint;

	myprint("hello world");//����ʹ�������ǳ������ں������ã����Գ�Ϊ�º���
}

//�º����ǳ���û�й̶���д��
//�ӷ���
class add
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};

void test10()
{
	add p;
	cout << p(1, 2) << endl;

	//������������
	cout << add()(1, 2) << endl;
}

int main() {

	test09();

	test10();

	system("pause");

	return 0;
}