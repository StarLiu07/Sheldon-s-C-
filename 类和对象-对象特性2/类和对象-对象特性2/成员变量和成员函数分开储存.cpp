#include<iostream>
using namespace std;

//��C++�У����ڵĳ�Ա�����ͳ�Ա�����ֿ��洢
//ֻ�зǾ�̬��Ա������������Ķ�����

class person1
{
	int m_a;//�Ǿ�̬��Ա���� ������Ķ�����
	static int m_b;//��̬��Ա���� ��������Ķ�����

	void func3(){} //�Ǿ�̬��Ա���� �������������

	static void func4(){} //��̬��Ա���� ��������Ķ�����
};
int person1::m_b = 100;

void exam1()
{
	person1 p;

	//ռ��1���ֽ�
	//C++���������ÿ���ն���Ҳ����һ���ֽڿռ䣬��Ϊ�����ֿն���ռ�ڴ��λ��
	//ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ
	cout << "size of p = " << sizeof(p) << endl;
}

void exam2()
{
	person1 p1;
	cout << "size of p1 = " << sizeof(p1) << endl;
}

int main4() {

	//exam1();
	exam2();

	system("pause");

	return 0;
}