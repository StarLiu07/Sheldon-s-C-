#include <iostream>
using namespace std;
#include "speechManager.h"
#include <ctime>

int main() {

	//���������
	srand((unsigned int)time(NULL));

	//�������������
	speechManager sm;

	//����12��ѡ�ִ���
	//for (map<int, speaker>::iterator it = sm.m_speaker.begin(); it != sm.m_speaker.end(); it++)
	//{
	//	cout << "ѡ�ֱ�ţ�" << it->first << "������" << it->second.m_name << "������" << it->second.m_score[0] << endl;
	//}

	int choice = 0; //���ڴ洢�û�����

	while (true)
	{
		sm.show_menu();

		cout << "����������ѡ��" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1: //��ʼ����
			sm.startspeech();
			break;
		case 2: //�鿴�����¼
			sm.showrecord();
			break;
		case 3: //��ձ�����¼
			sm.clearRecord();
			break;
		case 0: //�˳�ϵͳ
			sm.exitsystem();
			break;
		default:
			system("cls"); //����
			break;
		}
	}

	system("pause");

	return 0;
}