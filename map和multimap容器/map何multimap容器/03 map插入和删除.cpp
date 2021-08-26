#include <iostream>
using namespace std;
#include <map>

/*
* ����ԭ�ͣ�
* insert(elem);  �������в�������
* clear();  �������Ԫ��
* erase(pos);  ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�����
* erase(beg,end);  ɾ������[beg,end]������Ԫ�أ�������һ��Ԫ�صĵ�����
* erase(key);  ɾ��������ֵΪkey��Ԫ��
*/

void printmap2(map<int,int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << "  value = " << it->second << endl;
	}
	cout << endl;
}

void test04()
{
	map<int, int> m1;

	//����
	//��һ��
	m1.insert(pair<int, int>(1, 10));

	//�ڶ���
	m1.insert(make_pair(2, 20));

	//������
	m1.insert(map<int, int>::value_type(3, 30));

	//������
	m1[4] = 40;

	//[]��������룬��; ������key���ʵ�value
	//cout << m1[4] << endl;

	printmap2(m1);

	//ɾ��
	m1.erase(m1.begin());
	printmap2(m1);

	m1.erase(3); //����keyɾ��
	printmap2(m1);

	//���
	//m1.erase(m1.begin(), m1.end());
	m1.clear();
	printmap2(m1);

}

int main3() {

	test04();

	system("pause");

	return 0;
}