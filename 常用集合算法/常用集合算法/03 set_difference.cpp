#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

/*
* ����������
* �������ϼ��Ĳ
* 
* ����ԭ�ͣ�
* set_difference(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest);
* �������ϼ��Ĳ
* ע�⣺�������ϱ�������������
* beg1 ����1��ʼ������
* end1 ����1����������
* beg2 ����2��ʼ������
* end2 ����2����������
* dest Ŀ��������ʼ������
*/

void myprint3(int val)
{
	cout << val << "  ";
}

void test03()
{
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}

	//�����Ŀ������
	vector<int> vtarget;
	//��Ŀ���������ٿռ�
	//����������  ��������û�н���  ȡ���������д��size��ΪĿ���������ٿռ�
	vtarget.resize(v1.size(),v2.size());

	cout << "v1��v2�ĲΪ��" << endl;

	vector<int>::iterator itend = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vtarget.begin());

	for_each(vtarget.begin(), itend, myprint3);
	cout << endl;

	cout << "��������������������������������" << endl;
	cout << "v2��v1�ĲΪ��" << endl;

	itend = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vtarget.begin());

	for_each(vtarget.begin(), itend, myprint3);
	cout << endl;

}

int main() {

	test03();

	system("pause");

	return 0;
}