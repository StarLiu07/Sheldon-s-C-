#include <iostream>
using namespace std;
#include <map>

/*
* ����ԭ�ͣ�
* find(key);  ����key�Ƿ���ڣ������ڣ����ظü���Ԫ�صĵ�����
* count(key);  ͳ��key��Ԫ�ظ���
*/


void test05()
{
	//����
	map<int, int> m1;

	m1.insert(pair<int, int>(1, 10));
	m1.insert(pair<int, int>(2, 20));
	m1.insert(pair<int, int>(3, 30));
	m1.insert(pair<int, int>(3, 30));

	map<int, int>::iterator pos = m1.find(3);

	if (pos != m1.end())
	{
		cout << "���ҵ���Ԫ��  key = " << pos->first << "  value = " << pos->second << endl;
	}
	else
	{
		cout << "δ�ҵ�Ԫ��" << endl;
	}

	//ͳ��
	//map����������ظ�keyԪ�أ�countͳ�ƶ��ԣ����Ҫô��0��Ҫô��1
	//multimap��countͳ�ƿ��ܴ���1
	int num = m1.count(3);
	cout << "num = " << num << endl;
}

int main4() {

	test05();

	system("pause");

	return 0;
}