#include <iostream>
using namespace std;

//string& insert(int pos,const char& s);  �����ַ�
//string& insert(int pos,const string& str);  �����ַ�
//string& insert(int pos,int n,char c);  ��ָ��λ�ò���n���ַ�c
//string& erase(int pos,int n = npos);  ɾ����pos��ʼ��n���ַ�

void test08()
{
	string str = "hello";

	//����
	str.insert(1, "111");

	cout << "str = " << str << endl;

	//ɾ��
	str.erase(1, 3);

	cout << "str = " << str << endl;
}

int main7() {

	test08();

	system("pause");

	return 0;
}