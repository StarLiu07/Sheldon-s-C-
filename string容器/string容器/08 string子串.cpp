#include <iostream>
using namespace std;

//string substr(int pos = 0,int n = npos) const;  ������pos��ʼ��n���ַ���ɵ��ַ���

void test09()
{
	string str = "abcdef";

	string substr = str.substr(1, 3);

	cout << "substr = " << substr << endl;
}

//ʵ�ò���
void test10()
{
	string email = "zhangsan@sina.com";

	//���ʼ���ַ�� ��ȡ �û�����Ϣ

	int pos = email.find("@");

	string username = email.substr(0, posS);

	cout << "username = " << username << endl;
}

int main() {

	test09();

	test10();

	system("pause");

	return 0;
}