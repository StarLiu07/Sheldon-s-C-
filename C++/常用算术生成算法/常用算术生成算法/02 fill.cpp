#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <numeric>

/*
* ����������
* �����������ָ����Ԫ��
* 
* ����ԭ�ͣ�
* fill(iterator beg,iterator end,value);
* �����������Ԫ��
* beg ��ʼ������
* end ����������
* value ����ֵ
*/

void myprint(int val)
{
	cout << val << "  ";
}

void test02()
{
	vector<int> v;
	v.resize(10);

	//�����������
	fill(v.begin(), v.end(), 100);

	for_each(v.begin(), v.end(), myprint);
	cout << endl;
}

int main() {

	test02();

	system("pause");

	return 0;
}