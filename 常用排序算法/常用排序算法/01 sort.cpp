#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <functional>

/*
* ����������
* ��������Ԫ�ؽ�������
* 
* ����ԭ�ͣ�
* sort(iterator beg,iterator end,_pred);
* ��ֵ����Ԫ�أ��ҵ�����ָ��λ�õ��������Ҳ������ؽ�����������λ��
* beg  ��ʼ������
* end  ����������
* _pred  ν��
*/

void myprint(int val)
{
	cout << val << "  ";
}

void test01()
{
	vector<int> v;

	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);

	//����sort��������
	sort(v.begin(), v.end());
	for_each(v.begin(), v.end(),myprint);
	cout << endl;

	//�ı�Ϊ ����
	sort(v.begin(), v.end(), greater<int>());
	for_each(v.begin(), v.end(), myprint);
	cout << endl;
}

int main1() {

	test01();

	system("pause");

	return 0;
}