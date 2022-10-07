#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

/*
* �㷨��Ҫ����ͷ�ļ�<algorithm><functional><numeric> ���
* <algorithm>������STLͷ�ļ�������һ������Χ�漰���Ƚϡ����������ҡ��������������ơ��޸ĵȵ�
* <numeric>�����С��ֻ��������������������м���ѧ����ĺ���ģ��
* <functional>������һЩ��ģ�壬����������������
*/

//��ͨ����
void print01(int val)
{
	cout << val << "  ";
}

//�º���
class print02
{
public:
	void operator()(int val)
	{
		cout << val << "  ";
	}
};

//for_each
void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	for_each(v.begin(), v.end(), print01);
	cout << endl;

	for_each(v.begin(), v.end(), print02());
	cout << endl;
}

int main1() {

	test01();

	system("pause");

	return 0;
}