#include <iostream>
using namespace std;
#include <list>

/*
* ����ԭ�ͣ�
* push_back(elem);  ������β������һ��Ԫ��
* pop_back();  ɾ���������һ��Ԫ��
* push_front(elem);  ��������ͷ����һ��Ԫ��
* pop_front();  ��������ͷ�Ƴ���һ��Ԫ��
* insert(pos,elem);  ��posλ�ò���elemԪ�صĿ��������������ݵ�λ��
* insert(pos,n,elem);  ��posλ�ò���n��elem���ݣ��޷���ֵ
* insert(pos,beg,end);  ��posλ�ò���[beg,end]��������ݣ��޷���ֵ
* clear();  �Ƴ��������е�����
* erase(beg,end);  ɾ��[beg,end]��������ݣ�������һ�����ݵ�λ��
* erase(pos);  ɾ��posλ�õ����ݣ�������һ�����ݵ�λ��
* remove(elem);  ɾ��������������elemֵƥ���Ԫ��
*/

void printlist3(const list<int>& l)
{
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;
}

void test05()
{
	list<int> l;

	//β��
	l.push_back(10);
	l.push_back(20);
	l.push_back(30);

	//ͷ��
	l.push_front(100);
	l.push_front(200);
	l.push_front(300);

	printlist3(l);

	//βɾ
	l.pop_back();
	printlist3(l);

	//ͷɾ
	l.pop_front();
	printlist3(l);

	//insert����
	l.insert(l.begin(), 1000);
	printlist3(l);

	//ɾ��
	l.erase(l.begin());
	printlist3(l);

	//�Ƴ�
	l.push_back(10000);
	l.push_back(10000);
	printlist3(l);
	l.remove(10000);
	printlist3(l);

	//���
	l.clear();
	printlist3(l);
}

int main4() {

	test05();

	system("pause");

	return 0;
}