#include <iostream>
using namespace std;
#include <map>

/*
* ���죺
* map<T1,T2> mp;  mapĬ�Ϲ��캯��
* map(const map &mp);  �������캯��
* 
* ��ֵ��
* map& operator=(const map &mp);  ���صȺŲ�����
*/

void printmap(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << (*it).first << " value = " << it->second << endl;
	}
}

void test01()
{
	//����map����
	map<int, int> mp;

	mp.insert(pair<int, int>(1, 10));
	mp.insert(pair<int, int>(3, 30));
	mp.insert(pair<int, int>(2, 20));
	mp.insert(pair<int, int>(4, 40));

	printmap(mp);

	//��������
	map<int, int> m2(mp);

	printmap(m2);

	//��ֵ
	map<int, int> m3;
	m3 = m2;

	printmap(m3);
}

int main1() {

	test01();

	system("pause");

	return 0;
}