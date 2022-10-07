#include <iostream>
using namespace std;
#include <deque>

//���ܣ�˫�����飬���Զ�ͷ�˽��в����ɾ��
/*
* deque��vector����
* vector����ͷ���Ĳ���ɾ��Ч�ʵͣ�������Խ��Ч��Խ��
* deque��Զ��ԣ���ͷ���Ĳ���ɾ���ٶȻ��vector��
* vector����Ԫ��ʱ���ٶȻ��deque�죬�������ڲ�ʵ���й�
*/

/*
* deque���캯��  ����ԭ�ͣ�
* deque<T>deqT;  Ĭ�Ϲ�����ʽ
* deque(beg,end);  ���캯����[beg,end]�����е�Ԫ�ؿ���������
* deque(n,elem);  ���캯����n��elem����������
* deque(const deque &deq);  �������캯��
*/

void printdeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << endl;
	}
	cout << endl;
}

void test01()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printdeque(d1);

	deque<int> d2(d1.begin(), d1.end());
	printdeque(d2);

	deque<int> d3(10, 100);
	printdeque(d3);

	deque<int> d4(d3);
	printdeque(d4);
}

int main1() {

	test01();

	system("pause");

	return 0;
}