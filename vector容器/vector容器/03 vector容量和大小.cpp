#include <iostream>
using namespace std;
#include <vector>

/*����ԭ�ͣ�
empty();  �ж������Ƿ�Ϊ��
capacity();  ����������Ԫ�صĸ���
size();  ����������Ԫ�صĸ���
resize(int num);  ����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ��
				  ���������̣���ĩβ�����������ȵ�Ԫ��
resize(int num,elem);  ����ָ�������ĳ���Ϊnum���������䳤����elemֵ�����λ��
				       ���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��*/

void printvector2(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;
}

void test03()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printvector2(v1);

	if (v1.empty()) //Ϊ�� ��������Ϊ��
	{
		cout << "v1Ϊ��" << endl;
	}
	else
	{
		cout << "v1��Ϊ��" << endl;
		cout << "v1������Ϊ��" << v1.capacity() << endl;
		cout << "v1�Ĵ�СΪ��" << v1.size() << endl;
	}

	//����ָ����С
	v1.resize(15,100); //���ø����ذ汾������ָ��Ĭ�����ֵ������2
	printvector2(v1);//�������ָ���Ĺ�����Ĭ����0����µ�λ��

	v1.resize(5);
	printvector2(v1); //�������ָ�����ˣ���ɾ����������
}

int main3() {

	system("pause");

	return 0;
}