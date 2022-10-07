#include <iostream>
using namespace std;
#include <map>

/*
* size();  ����������Ԫ�ص���Ŀ
* empty();  �ж������Ƿ�Ϊ��
* swap(st);  ����������������
*/

void printmap1(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << "  value = " << it->second << endl;
	}
}

//��С
void test02()
{
	map<int, int> m1;

	m1.insert(pair<int, int>(1, 10));
	m1.insert(pair<int, int>(2, 20));
	m1.insert(pair<int, int>(3, 30));

	if (m1.empty())
	{
		cout << "m1Ϊ��" << endl;
	}
	else
	{
		cout << "m1��Ϊ��" << endl;
		cout << "m1�Ĵ�СΪ��" << m1.size() << endl;
	}
}

//����
void test03()
{
	map<int, int> m1;

	m1.insert(pair<int, int>(1, 10));
	m1.insert(pair<int, int>(2, 20));
	m1.insert(pair<int, int>(3, 30));

	map<int, int> m2;

	m2.insert(pair<int, int>(4, 40));
	m2.insert(pair<int, int>(5, 50));
	m2.insert(pair<int, int>(6, 60));

	cout << "����ǰ��" << endl;

	printmap1(m1);
	cout << endl;
	printmap1(m2);

	cout << "��������������������" << endl;
	m1.swap(m2);

	cout << "������" << endl;
	printmap1(m1);
	cout << endl;
	printmap1(m2);
}

int main2() {

	//test02();

	test03();

	system("pause");

	return 0;
}