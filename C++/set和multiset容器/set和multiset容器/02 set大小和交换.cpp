#include <iostream>
using namespace std;
#include <set>

/*
* ����ԭ�ͣ�
* size();  ����������Ԫ�ص���Ŀ
* empty();  �ж������Ƿ�Ϊ��
* swap(st);  ����������������
*/

void printset1(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;
}

//��С
void test02()
{
	set<int> s1;

	//��������
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	//��ӡ����
	printset1(s1);

	//�ж��Ƿ�Ϊ��
	if (s1.empty())
	{
		cout << "s1Ϊ��" << endl;
	}
	else
	{
		cout << "s1��Ϊ��" << endl;
		cout << "s1�Ĵ�СΪ��" << s1.size() << endl;
	}
}

//����
void test03()
{
	set<int> s1;

	//��������
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	set<int> s2;

	//��������
	s1.insert(100);
	s1.insert(300);
	s1.insert(200);
	s1.insert(400);

	cout << "����ǰ��" << endl;
	printset1(s1);
	printset1(s2);

	cout << "����������������������������" << endl;
	cout << "������" << endl;
	s1.swap(s2);
	printset1(s1);
	printset1(s2);
}

int main2() {

	test02();

	test03(); 

	system("pause");

	return 0;
}