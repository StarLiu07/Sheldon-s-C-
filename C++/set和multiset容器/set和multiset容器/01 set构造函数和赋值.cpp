#include <iostream>
using namespace std;
#include <set>

/*
* ���죺
* set<T> st;  Ĭ�Ϲ��캯��
* set(const set &st);  �������캯��
* 
* ��ֵ��
* set& operator=(const set &st);  ���صȺŲ�����
*/

void printset(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;
}

void test01()
{
	set<int> s1;

	//��������ֻ�� insert��ʽ
	s1.insert(10);
	s1.insert(40);
	s1.insert(30);
	s1.insert(20);
	s1.insert(30);


	//��������
	//set�����ص㣺����Ԫ�ز���ʱ���Զ�������
	//set��������������ظ�ֵ
	printset(s1);

	//��������
	set<int> s2(s1);

	printset(s2);

	//��ֵ
	set<int> s3;
	s3 = s2;
	printset(s3);
}

int main1() {

	test01();

	system("pause");

	return 0;
}