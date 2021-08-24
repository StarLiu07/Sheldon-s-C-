#include <iostream>
using namespace std;
#include <list>
#include <algorithm>

/*
* ����ԭ��
* reverse()  ��ת�б�
* sort();  ��������
*/

void printlist4(const list<int>& l)
{
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;
}

void test07()
{
	//��ת
	list<int> l1;

	l1.push_back(20);
	l1.push_back(10);
	l1.push_back(50);
	l1.push_back(40);
	l1.push_back(30);

	cout << "��תǰ��" << endl;
	printlist4(l1);

	//��ת
	l1.reverse();
	cout << "��ת��" << endl;
	printlist4(l1);
}

bool mycompare(int v1,int v2)
{
	//����  ���õ�һ�������ڵڶ�����
	return v1 > v2;
}

//����
void test08()
{
	list<int> l1;

	l1.push_back(20);
	l1.push_back(10);
	l1.push_back(50);
	l1.push_back(40);
	l1.push_back(30);

	//����
	cout << "����ǰ��" << endl;
	printlist4(l1);

	//���в�֧��������ʵ�������������ʹ�ñ�׼�㷨
	//��֧��������ʵ��������������ڲ����ṩ��Ӧ��һЩ�㷨
	l1.sort(); //Ĭ��������� ��С����  ����
	cout << "�����" << endl;
	printlist4(l1);

	l1.sort(mycompare);
	printlist4(l1);
}

int main6() {

	test07();
	test08();

	system("pause");

	return 0;
}