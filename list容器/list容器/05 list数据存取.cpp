#include <iostream>
using namespace std;
#include <list>

/*
* ����ԭ��
* front();  ���ص�һ��Ԫ��
* back();  �������һ��Ԫ��
*/

void test06()
{
	list<int> l1;

	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);

	//l1[0] //��������[]����list�����е�Ԫ��

	//l1.at(0);  //��������at��ʽ����list�����е�Ԫ��

	//ԭ����list�������������������Կռ�洢���ݣ�������Ҳ�ǲ�֧��������ʵ�

	cout << "��һ��Ԫ��Ϊ��" << l1.front() << endl;
	cout << "���һ��Ԫ��Ϊ��" << l1.back() << endl;

	//��֤��������֧���������
	list<int>::iterator it = l1.begin();

	it++; //֧��˫��
	it--;

	//it = it + 1;  
}

int main5() {

	test06();

	system("pause");

	return 0;
}