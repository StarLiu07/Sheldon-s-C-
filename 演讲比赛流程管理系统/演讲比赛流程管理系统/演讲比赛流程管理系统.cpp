#include <iostream>
using namespace std;
#include "speechManager.h"

int main() {

	//�������������
	speechManager sm;

	int choice = 0; //���ڴ洢�û�����

	while (true)
	{
		sm.show_menu();

		cout << "����������ѡ��" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1: //��ʼ����
			break;
		case 2: //�鿴�����¼
			break;
		case 3: //��ձ�����¼
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