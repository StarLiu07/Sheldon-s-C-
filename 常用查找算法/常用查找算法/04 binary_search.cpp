#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

/*
* ��������
* ����ָ��Ԫ���Ƿ����
* 
* ����ԭ�ͣ�
* bool binary_seach(iterator beg,iterator end,value);
* ����ָ����Ԫ�أ��鵽 ����true ����false
* ע�⣺�����������в�����
* beg��ʼ������
* end����������
* vlaue���ҵ�Ԫ��
*/

void test06()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//�����������Ƿ���9Ԫ��
	//�������������������
	//v.push_back(2);  ������������У����δ֪
	bool ret = binary_search(v.begin(), v.end(), 9);

	if (ret)
	{
		cout << "�ҵ�Ԫ��" << endl;
	}
	else
	{
		cout << "δ�ҵ�" << endl;
	}
}

int main4() {

	test06();

	system("pause");

	return 0;
}