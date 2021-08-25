#include <iostream>
using namespace std;
#include <set>

/*
* ����ԭ�ͣ�
* insert(elem);  �������в���Ԫ��
* clear();  �������Ԫ��
* erase(pos);  ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�����
* erase(beg,end);  ɾ������[beg,end]������Ԫ�أ�������һ��Ԫ�صĵ�����
* erase(elem);  ɾ��������ֵΪelem��Ԫ��
*/

void printset2(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;
}

void test04()
{
	set<int> s1;

	//����
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	//����
	printset2(s1);

	//ɾ��
	s1.erase(s1.begin());
	printset2(s1);

	//ɾ�������ذ汾
	s1.erase(30);
	printset2(s1);

	//���
	//s1.erase(s1.begin(), s1.end());
	s1.clear();
	printset2(s1);

}

int main3() {

	test04();

	system("pause");

	return 0;
}