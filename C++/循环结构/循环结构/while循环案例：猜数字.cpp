#include<iostream>
#include <ctime>
using namespace std;

int mainq() {

	/*����������ϵͳ�������һ��1��100֮������֣���ҽ��в²⣬����´���ʾ������ֹ�����С������¶�
	* ����Ҿ���ʤ����ϲ�������˳���Ϸ
	*/

	//�������������� �������õ�ǰϵͳʱ���������������ֹÿ���������һ��
	srand((unsigned int)time(NULL));

	//1.ϵͳ�������һ�������
	int num = rand() % 100 + 1;  //����0��99�������

	//2.��ҽ��в²�
	int c = 0;
	int val = 0;
	cout << "������һ������" << endl;
	cin >> val;

	//3.�ж���ҵĲ²�
	//�¶�  �˳�
	if (val == num)
	{
		cout << "��ϲ�¶���" << endl;
	}

	//�´�  ��ʾ�µĽ��������С�������½��в²�
	else
	{
		while (val != num)
		{
			if (c != 5)
			{
				if (val < num)
				{
					cout << "���ֹ�С,ʣ�ࣺ" << 5 - c << "�λ���" << endl;
					c++;
					cin >> val;
				}
				else
				{
					cout << "���ֹ���ʣ�ࣺ" << 5 - c << "�λ���" << endl;
					cin >> val;
					c++;
				}
			}
			else
			{
				cout << "���ź��������þ�" << endl;
				break;
			}
		}
		if (val == num)
		{
			cout << "��ϲ���" << endl;
		}
	}
	//ohhhhhhhhhhhhhhhhhhhhhhhhhhhh

	system("pause");

	return 0;
}