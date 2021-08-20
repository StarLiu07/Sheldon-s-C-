#include <iostream>
using namespace std;
#include <vector>

//���ܣ�vector���ݽṹ�ǳ����ƣ�Ҳ��Ϊ��������
//vector����ͨ�������𣺲�֮ͬ�����������Ǿ�̬�ռ䣬��vector���Զ�̬��չ
//��̬��չ����������ԭ�ռ�֮������¿ռ䣬�����Ҹ�����ڴ�ռ䣬Ȼ��ԭ���ݿ������¿ռ䣬�ͷ�ԭ�ռ�

/*
����ԭ�ͣ�
vector<T> v;  ����ģ��ʵ����ʵ�֣�Ĭ�Ϲ��캯��
vector(v.begin(),v.endl())  ��v[begin(),end()]�����е�Ԫ�ؿ���������
vector(n,elem);  ���캯����n��elem����������
vector(const vector &vec);  �������캯��
*/

void printvector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;
}

void test01() {

	vector<int> v1; //Ĭ�Ϲ���

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);

	}
	printvector(v1);

	//ͨ�����䷽ʽ���й���
	vector<int> v2(v1.begin(), v1.end());

	printvector(v2);

	//n��elem��ʽ����
	vector<int> v3(10, 100);
	printvector(v3);

	//��������
	vector<int> v4(v3);
	printvector(v4);
}

int main1() {

	test01();

	system("pause");

	return 0;
}