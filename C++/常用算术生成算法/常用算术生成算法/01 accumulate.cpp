#include <iostream>
using namespace std;
#include <vector>
#include <numeric>

//ע�⣺���������㷨����С���㷨��ʹ��ʱ������ͷ�ļ�Ϊ #include <numeric>

/*
* ����������
* ��������������Ԫ���ۼ��ܺ�
* 
* ����ԭ�ͣ�
* accumulate<iterator beg,iterator end,value>;
* ��������Ԫ���ۼ��ܺ�
* beg ��ʼ������
* end ����������
* value ��ʼֵ
*/

void test01()
{
	vector<int> v;

	for (int i = 0; i <= 100; i++)
	{
		v.push_back(i);
	}
	//����3 ��ʼ�ۼ�ֵ
	int total = accumulate(v.begin(), v.end(), 0);

	cout << "total = " << total << endl;
}

int main1() {

	test01();

	system("pause");

	return 0;
}