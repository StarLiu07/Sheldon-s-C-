#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

/*
* ����������
* ���������ظ�Ԫ��
* 
* ����ԭ�ͣ�
* adjacent_find(iterator beg,iterator end);
* ���������ظ�Ԫ�أ���������Ԫ�صĵ�һ��λ�õĵ�����
* beg��ʼ������
* end����������
*/

void test05()
{
	vector<int> v;

	v.push_back(0);
	v.push_back(2);
	v.push_back(0);
	v.push_back(3);
	v.push_back(1);
	v.push_back(4);
	v.push_back(3);
	v.push_back(3);

	vector<int>::iterator pos = adjacent_find(v.begin(), v.end());

	if (pos == v.end())
	{
		cout << "δ�ҵ������ظ�Ԫ��" << endl;
	}
	else
	{
		cout << "�ҵ������ظ�Ԫ��Ϊ��" << *pos << endl;
	}
}

int main3() {

	test05();

	system("pause");

	return 0;
}