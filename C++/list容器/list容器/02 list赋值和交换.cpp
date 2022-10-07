#include <iostream>
using namespace std;
#include <list>

/*
* ����ԭ�ͣ�
* assign(beg,end);  ��[beg,end]�����е����ݿ�����ֵ������
* assign(n,elem);  ��n��elem������ֵ������
* list& operator=(const list &lst);  ���صȺŲ���
* swap(lst);  ��lst�뱾���Ԫ�غ���
*/

void printlist1(const list<int>& l)
{
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;
}

//��ֵ
void test02()
{
	list<int> l1;

	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);

	printlist1(l1);

	list<int> l2;
	l2 = l1; //operator= ��ʽ��ֵ
	printlist1(l2);

	list<int> l3;
	l3.assign(l2.begin(), l2.end());
	printlist1(l3);

	list<int> l4;
	l4.assign(10, 100);
	printlist1(l4);
}

//����
void test03()
{
	list<int> l1;

	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);

	list<int> l2;
	l2.assign(10, 100);

	cout << "����ǰ��" << endl;
	printlist1(l1);
	printlist1(l2);

	l1.swap(l2);
	cout << "������" << endl;
	printlist1(l1);
	printlist1(l2);
}

int main2() {

	//test02();
	test03();

	system("pause");

	return 0;
}