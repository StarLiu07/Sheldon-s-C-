#include<iostream>
using namespace std;

//��̬��Ա�����ڳ�Ա�����ͳ�Ա����ǰ���Ϲؼ���static����Ϊ��̬��Ա
/*��̬��Ա��Ϊ:
1.��̬��Ա����
�����ж�����ͬһ������
���ڱ���׶η����ڴ�
o���������������ʼ��

2.��̬��Ա����
�����ж�����ͬһ������
����̬��Ա����ֻ�ܷ��ʾ�̬��Ա����*/

class people
{
public:
	//��̬��Ա����
	static void func()
	{
		m_a = 100;//��̬��Ա�������Է��ʾ�̬��Ա����
		//m_b = 200;//��̬��Ա���������Է��ʷǾ�̬��Ա����  ��Ϊ�޷����ֵ������Ǹ������m_b����
		cout << "static void func()�ĵ���" << endl;
	}
	static int m_a;//��̬��Ա����
	int m_b;

	//��̬��Ա����Ҳ���з���Ȩ�޵�
private:
	static void func2()
	{
		cout << "static void func2()�ĵ���" << endl;
	}
};
int people::m_a = 1;

void test1()
{
	//1.ͨ���������
	people p;
	p.func();

	//2.ͨ����������
	people::func();
	//people::func2();
}

int main3() {

	test1();

	system("pause");

	return 0;
}