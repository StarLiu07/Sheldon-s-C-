#include <iostream>
using namespace std;

//1.����

void test04()
{
	//int find(const string& str, int pos = 0) const;  ����str��һ�γ���λ�ô�pos��ʼ����
	string str1 = "abcdefg";

	int pos = str1.find("de");

	if (pos == -1)
	{
		cout << "δ�ҵ��ַ���" << endl;
	}
	else
	{
		cout << "�ҵ��ַ���" << endl;
		cout << "pos = " << pos << endl;
	}

	//rfind �� find����
	//rfind�����������  find�������Ҳ���
	pos = str1.rfind("de");

	cout << "pos = " << pos << endl;
	
}

//2.�滻
void test05()
{
	//string& replace(int pos,int a, const string& str);  �滻��pos��ʼn���ַ�Ϊ�ַ���str
	string str1 = "abcdefg";

	//��1��λ���� 3���ַ� �滻Ϊ"1111"
	str1.replace(1, 3, "111");

	cout << "str1 = " << str1 << endl;
}

int main4() {

	test04();

	test05();

	system("pause");

	return 0;
}