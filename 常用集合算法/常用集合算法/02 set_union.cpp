#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

/*
* ����������
* ���������ϵĲ���
* 
* ����ԭ�ͣ�
* set_union(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest);
* ���������ϵĲ���  �����������������ظ��Ĳ���
* ע�⣺�������ϱ�������������
* beg1 ����1��ʼ������
* end1 ����1����������
* beg2 ����2��ʼ������
* end2 ����2����������
* dest Ŀ��������ʼ������
*/

void myprint2(int val)
{
	cout << val << "  ";
}

void test02()
{
	vector<int> v1;
	vector<int> v2;
	
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}

	vector<int> vtarget;
	//Ŀ��������ǰ���ٿռ�
	//��������� ��������û�н���������������������size���
	vtarget.resize(v1.size() + v2.size());

	vector<int>::iterator itend = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vtarget.begin());

	for_each(vtarget.begin(),itend, myprint2);
	cout << endl;
}

int main2() {

	test02();

	system("pause");

	return 0;
}