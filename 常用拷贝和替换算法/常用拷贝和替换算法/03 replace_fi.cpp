#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

/*
* ����������
* ������������������Ԫ�أ��滻��ָ��Ԫ��
* 
* ����ԭ�ͣ�
* replace_if(iterator beg,iterator end,_pred,newvalue);
* �������滻Ԫ�أ������������滻��ָ��Ԫ��
* beg ��ʼ������
* end ����������
* _pred ν��
* newvalue �滻����Ԫ��
*/

class myprint03
{
public:
	void operator()(int val)
	{
		cout << val << "  ";
	}
};

class greater30
{
public:
	bool operator()(int val)
	{
		return val >= 30;
	}
};

void test03()
{
	vector<int> v1;
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(40);
	v1.push_back(40);
	v1.push_back(50);

	cout << "�滻ǰ��" << endl;
	for_each(v1.begin(), v1.end(), myprint03());
	cout << endl;

	//�����ڵ���30 �滻Ϊ3000
	replace_if(v1.begin(), v1.end(), greater30(), 3000);
	cout << "�滻��" << endl;
	for_each(v1.begin(), v1.end(), myprint03());
	cout << endl;
}

int main3() {

	test03();

	system("pause");

	return 0;
}