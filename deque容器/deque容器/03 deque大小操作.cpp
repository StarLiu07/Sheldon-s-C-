#include <iostream>
using namespace std;
#include <deque>

/*
* ����ԭ�ͣ�
* deque.empty();  �ж������Ƿ�Ϊ��
* deque.size();  ����������Ԫ�ظ���
* deque.resize(num);  ����ָ�������ĳ���num���������䳤������Ĭ��ֵ�����λ��
*                     ����������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
* deque.resize(num,elem);  ����ָ�������ĳ���Ϊnum���������䳤������elem�����λ��
*                          ���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
*/

void printdeque3(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;
}

void test03()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printdeque3(d1);

	if (d1.empty())
	{
		cout << "d1Ϊ��" << endl;
	}
	else
	{
		cout << "d1��Ϊ��" << endl;
		cout << "d1�Ĵ�С��" << d1.size() << endl;
		//deque����û����������
	}

	//����ָ����С
	d1.resize(15,1);
	printdeque3(d1);

	d1.resize(5);
	printdeque3(d1);
}

int main3() {

	test03();

	system("pause");

	return 0;
}