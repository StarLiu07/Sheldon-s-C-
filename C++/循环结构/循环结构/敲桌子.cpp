#include<iostream>
using namespace std;

/*
* ��1��ʼ��������100��������ָ�λ����7������ʮλ���ֺ���7�����߸�������7�ı��������Ǵ�ӡ�����ӣ���������ֱ�Ӵ�ӡ���
*/

int mainew() {

	for (int num = 1; num < 101; num++)
	{
		if (num % 7 == 0)
		{
			cout << "������" << endl;
		}
		else if (num % 10 == 7)
		{
			cout << "������" << endl;
		}
		else
		{
			cout << num << endl;
		}
	}
	//ohhhhhhhhhhhhhhhhhhhhhhhhh

	system("pause");

	return 0;
}