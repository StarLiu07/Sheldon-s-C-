#include<iostream>
using namespace std;

//�����������ã����ڴӼ��̻�ȡ����
//�ؼ��֣�cin   �﷨��cin>>����

int main() {

	//1.����
	int a = 0;
	cout << "������ͱ���a��ֵ:" << endl;
	cin >> a;
	cout << "���ͱ���a=" << a << endl;

	//2.������
	float b = 3.14f;
	cout << "�������b��ֵ��" << endl;
	cin >> b;
	cout << "����b=" << b << endl;

	//3.�ַ���
	char ch = 'a';
	cout << "����ַ�ch��ֵ��" << endl;
	cin >> ch;
	cout << "�ַ�ch=" << ch << endl;

	//4.�ַ�����
	string str = "hello world";
	cout << "����ַ���str��ֵ��" << endl;
	cin >> str;
	cout << "�ַ���str=" << str << endl;

	//5.��������
	bool flag = false;
	cout << "���������flag��ֵ" << endl;
	cin >> flag;//bool���� ֻҪ�Ƿ�0��ֵ�������棨�Զ�����С����
	cout << "������flag=" << flag << endl;

	system("pause");

	return 0;
}