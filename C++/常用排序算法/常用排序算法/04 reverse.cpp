#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

/*
* ����������
* ��������Ԫ�ؽ��з�ת
* 
* ����ԭ�ͣ�
* reverse(iterator beg,iterator end);
* ��תָ����Χ��Ԫ��
* beg ��ʼ������
* end ����������
*/

void myprint03(int val)
{
	cout << val << "  ";
}

void test04()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);

	cout << "��תǰ��" << endl;
	for_each(v.begin(), v.end(), myprint03);
	cout << endl;

	cout << "��ת��" << endl;
	reverse(v.begin(),v.end());
	for_each(v.begin(), v.end(), myprint03);
	cout << endl;
}

int main() {

	test04();

	system("pause");

	return 0;
}