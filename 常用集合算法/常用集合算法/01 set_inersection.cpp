#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

/*
* ����������
* �����������Ľ���
* 
* ����ԭ�ͣ�
* set_intersection(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest);
* ���������ϵĽ���
* ע�⣺�������ϱ�������������
* beg1 ����1��ʼ������
* end1 ����1����������
* beg2 ����2��ʼ������
* end2 ����2����������
* dest Ŀ��������ʼ������
*/

void myprint(int val)
{
	cout << val << "  ";
}

void test01()
{
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);//0`9
		v2.push_back(i + 5);//5`14
	}

	vector<int> vtarget;
	//Ŀ��������Ҫ��ǰ���ٿռ�
	//��������� ����������С����  ���ٿռ� ȡС������size����
	vtarget.resize(min(v1.size(), v2.size()));

	//��ȡ����
	vector<int>::iterator itend = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vtarget.begin());

	for_each(vtarget.begin(), itend, myprint);
	cout << endl;
}

int main1() {

	test01();

	system("pause");

	return 0;
}