#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

/*
* ����������
* ��������ָ����Χ�ľ�Ԫ�ظ�Ϊ��Ԫ��
* 
* ����ԭ�ͣ�
* replace(iterator beg,iterator end,oldvalue,newvalue);
* �������ھ�Ԫ�� �滻�� ��Ԫ��
* beg ��ʼ������
* end ����������
* oldvalue ��Ԫ��
* newvalue ��Ԫ��
*/

class myprint
{
public:
	void operator()(int val)
	{
		cout << val << "  ";
	}
};

void test02()
{
	vector<int> v1;

	v1.push_back(20);
	v1.push_back(20);
	v1.push_back(40);
	v1.push_back(30);
	v1.push_back(50);

	cout << "�滻ǰ��" << endl;
	for_each(v1.begin(), v1.end(), myprint());
	cout << endl;

	cout << "�滻��" << endl;
	replace(v1.begin(), v1.end(), 20, 10);

	for_each(v1.begin(), v1.end(), myprint());
	cout << endl;
}

int main2() {

	test02();

	system("pause");

	return 0;
}