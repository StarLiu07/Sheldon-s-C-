#include <iostream>
using namespace std;
#include <set>

/*
* ���ִ�����ʽ
* pair<type,type> p (value1,value2);
* pair<type,type> p =  make_pair(value1,value2);
*/

void test08()
{
	//��һ��
	pair<string, int> p("Tom", 20);

	cout << "������" << p.first << " ���䣺" << p.second << endl;
	
	//�ڶ���
	pair<string, int> p2 = make_pair("Jerry", 30);
	cout << "������" << p2.first << " ���䣺" << p2.second << endl;
}

int main6() {

	test08();

	system("pause");

	return 0;
}