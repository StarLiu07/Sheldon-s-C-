#include <iostream>
using namespace std;
#include <deque>

/*
* ����ԭ�ͣ�
* push_back(elem);  ������β�����һ������
* push_front(elem);  ������ͷ������һ������
* pop_back();  ɾ���������һ������
* pop_front();  ɾ��������һ������
* 
* ָ��λ�ò�����
* insert(pos,elem);  ��posλ�ò���һ��elemԪ�صĿ��������������ݵ�λ��
* insert(pos,n,elem);  ��posλ�ò���n��elem���ݣ��޷���ֵ
* insert(pos,beg,end);  ��posλ�ò���[beg,end]��������ݣ��޷���ֵ
* clear();  �����������������
* erase(beg,end);  ɾ��[beg,end]��������ݣ�������һ�����ݵ�λ��
* erase(pos);  ɾ��posλ�õ����ݣ�������һ�����ݵ�λ��
*/

void printdeque4(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;
}

//���˲���
void test04()
{
	deque<int> d1;

	//β��
	d1.push_back(10);
	d1.push_back(20);

	//ͷ��
	d1.push_front(100);
	d1.push_front(200);

	printdeque4(d1);

	//βɾ
	d1.pop_back();
	printdeque4(d1);

	//ͷɾ
	d1.pop_front();
	printdeque4(d1);
}

void test05()
{
	deque<int> d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);

	printdeque4(d1);

	//insert����
	d1.insert(d1.begin(), 1000);
	printdeque4(d1);

	d1.insert(d1.begin(), 2, 10000);
	printdeque4(d1);

	//����������в���
	deque<int> d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);

	d1.insert(d1.begin(),  d2.begin(), d2.end());
	printdeque4(d1);
}

void test06()
{
	deque<int> d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);

	//ɾ��
	deque<int>::iterator it = d1.begin();
	it++;
	d1.erase(it);

	//��������ķ�ʽɾ��
	//d1.erase(d1.begin(), d1.end());
	//���
	d1.clear();

	printdeque4(d1);
}

int main4() {
	
	test04();
	test05();
	test06();

	system("pause");

	return 0;
}