#include <iostream>
using namespace std;
#include <vector>

//����ԭ�ͣ�swap(vec);  ��vec�뱾���Ԫ�ػ���

void printvector5(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;
}

//1.����ʹ��
void test06()
{	
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	cout << "����ǰ" << endl;
	printvector5(v1);

	vector<int> v2;
	for (int i = 10; i > 0; i--)
	{
		v2.push_back(i);
	}
	printvector5(v2);

	cout << "������" << endl;
	v1.swap(v2);
	printvector5(v1);
	printvector5(v2);;
}

//2.ʵ����;
//����swap���������ڴ�ռ�
void test07()
{
	vector<int> v3;
	for (int i = 0; i < 100000; i++)
	{
		v3.push_back(i);
	}

	cout << "v3������Ϊ��" << v3.capacity() << endl;
	cout << "v3�Ĵ�СΪ��" << v3.size() << endl;

	v3.resize(3);  //����ָ����С
	cout << "v3������Ϊ��" << v3.capacity() << endl;
	cout << "v3�Ĵ�СΪ��" << v3.size() << endl;

	//����swap
	vector<int>(v3).swap(v3);

	cout << "v3������Ϊ��" << v3.capacity() << endl;
	cout << "v3�Ĵ�СΪ��" << v3.size() << endl;
}

int main6() {

	test06();
	test07();

	system("pause");

	return 0;
}