#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <ctime>

/*
* ����������
* ϴ��  ָ����Χ�ڵ�Ԫ�������������
* 
* ����ԭ�ͣ�
* random_shuffle(iterator beg,iterator end);
* ָ����Χ�ڵ�Ԫ�������������
* beg��ʼ������
* end����������
*/

void myprint01(int val)
{
	cout << val << "  ";
}

void test02()
{
	srand((unsigned int)time(NULL));

	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//����ϴ���㷨 ����˳��
	random_shuffle(v.begin(), v.end());

	for_each(v.begin(), v.end(), myprint01);
	cout << endl;
}

int main2() {

	test02();

	system("pause");

	return 0;
}