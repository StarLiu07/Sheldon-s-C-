#include<iostream>
using namespace std;

//ȫ�����ʹ��������Ǵ���ִ��ǰ������

//ȫ���������ȫ�ֱ����;�̬�����Լ��������ַ�����������������
//������������ڳ���������ɲ���ϵͳ�ͷ�

//ȫ�ֱ���(���ں�������)
int g_a = 10;
int g_b = 10;

//const���ε�ȫ�ֱ���,ȫ�ֳ���
int c_g_a = 10;
int c_g_b = 10;

int main2() {

	//ȫ�ֱ�������̬����������

	//������ͨ�ֲ�����
	int a = 10;
	int b = 10;

	cout << "�ֲ�����a�ĵ�ַΪ��" << (int)&a << endl;
	cout << "�ֲ�����b�ĵ�ַΪ��" << (int)&b << endl;

	cout << "ȫ�ֱ���g_a�ĵ�ַΪ��" << (int)&g_a << endl;
	cout << "ȫ�ֱ���g_b�ĵ�ַΪ��" << (int)&g_b << endl;

	//��̬���� �ھֲ�����ǰ��һ��static�����ھ�̬����
	static int s_a = 10;
	static int s_b = 10;

	cout << "��̬����s_a��ַ��" << (int)&s_a << endl;
	cout << "��̬����s_b��ַ��" << (int)&s_b << endl;

	//����
	//�ַ�������  ��˫������������
	cout << "�ַ��������ĵ�ַ��" << (int)&"hello word" << endl;

	//const���α���
	//const����ȫ�ֱ���
	cout << "ȫ�ֳ���c_g_a�ĵ�ַΪ��" << (int)&c_g_a << endl;
	cout << "ȫ�ֳ���c_g_b�ĵ�ַΪ��" << (int)&c_g_b << endl;

	//const���ξֲ�����
	const int c_l_a = 10; //c-const g-global(ȫ��) l-local(�ֲ�)
	const int c_l_b = 10; 

	cout << "�ֲ�����c_l_a�ĵ�ַΪ��" << (int)&c_l_a << endl;
	cout << "�ֲ�����c_l_b�ĵ�ַΪ��" << (int)&c_l_b << endl;


	system("pause");

	return 0;
}