#include<iostream>
using namespace std;

//�Ƚ���������ã����ڱ��ʽ�ıȽϣ�������һ����ֵ���ֵ
/* 
* ==�������   !=��������   <:С��  >:����   <=:С�ڵ���  >=�����ڵ���
*/

int mainqq() {

	//==
	int a = 10;
	int b = 20;
	cout << (a == b) << endl;//��С������Ϊ��ȷ�����ȼ�������a == b������

	//!=
	cout << (a != b) << endl;

	//>
	cout << (a > b) << endl;

	//<
	cout << (a < b) << endl;

	//>=
	cout << (a >= b) << endl;

	//<=
	cout << (a <= b) << endl;

	system("pause");

	return 0;
}