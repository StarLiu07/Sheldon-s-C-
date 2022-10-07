#include <iostream>
using namespace std;
#include <list>

/*
* ����ԭ�ͣ�
* size();  ����������Ԫ�صĸ���
* empty();  �ж������Ƿ�Ϊ��
* resize(num);  ����ָ�������ĳ���Ϊnum���������߳�������Ĭ��ֵ�����λ��
*               ���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
* resize(num,elem);  ����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ��
*                    ���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
*/

void printlist2(const list<int>& l)
{
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;
}

void test04()
{
	list<int> l1;

	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);

	printlist2(l1);

	//�ж������Ƿ�Ϊ��
	if (l1.empty())
	{
		cout << "l1Ϊ��" << endl;
	}
	else
	{
		cout << "l1��Ϊ��" << endl;
		cout << "l1��Ԫ�ظ���Ϊ��" << l1.size() << endl;
	}

	//����ָ����С
	l1.resize(10,10000);
	printlist2(l1);

	l1.resize(2);
	printlist2(l1);
}

int main3() {

	test04();

	system("pause");

	return 0;
}