#include<iostream>
using namespace std;

//��if����У�������Ƕʹ��if��䣬�ﵽ����׼�������ж�

int maindd() {

	//1.��ʾ����߿�����
	int score = 0;
	cout << "������߿�����" << endl;
	cin >> score;

	//2.��ʾ�߿�����
	cout << "���ĸ߿�����Ϊ" << score << endl;

	//3.�ж�
	//�������600һ��
	if (score > 600)
	{
		if (score > 700)
		{
			cout << "��ϲ���ϱ�����ѧ" << endl;
		}
		else if (score > 650)
		{
			cout << "��ϲ�����廪��ѧ" << endl;
		}
		else if (score > 600)
		{
			cout << "��ϲ�����й������ѧ" << endl;
		}
	}

	//�������500����
	else if (score > 500)
	{
		cout << "��ϲ���϶���" << endl;
	}

	//�������400����
	else if (score > 400)
	{
		cout << "��ϲ��������" << endl;
	}

	//��������δ����
	else
	{
		cout << "���ź�δ����" << endl;
	}

	system("pause");

	return 0;
}