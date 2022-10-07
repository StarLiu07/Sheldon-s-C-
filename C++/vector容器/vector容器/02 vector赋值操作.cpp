#include <iostream>
using namespace std;
#include <vector>

/*����ԭ��
vector& operator=(const vector &vec);  ���صȺŲ�����
assign(beg,end);  ��[beg,end]�����е����ݿ�����ֵ������
assign(n,elem);  ��n��elem������ֵ������*/

void printvector1(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;
}

void test02()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printvector1(v1);

	//��ֵ
	vector<int> v2;
	v2 = v1;
	printvector1(v2);

	//assign
	vector<int> v3;
	v3.assign(v1.begin(), v1.end());
	printvector1(v3);

	//n��elem��ʽ��ֵ
	vector<int> v4;
	v4.assign(10, 100);
	printvector1(v4);
}

int main2() {

	test02();

	system("pause");

	return 0;
}