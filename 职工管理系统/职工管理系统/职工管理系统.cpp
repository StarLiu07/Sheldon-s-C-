#include<iostream>
using namespace std;
#include "workermanger.h"
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
#include <cstdlib>

int main() {

	////���Դ��룺
	//worker* worker = NULL;
	//worker = new employee(1,"����",1);
	//worker->showinfo();



	//ʵ���������߶���
	workermanger wm;

	//��¼�û�ѡ��
	int choose = 0;

	//

	while (true)
	{
		//����show_menu����
		wm.show_menu();

		cout << "��ѡ����Ҫ���еĲ���" << endl;
		cin >> choose;

		switch (choose)
		{
		case 0://�˳�ϵͳ
			wm.exitsystem();
			break;

		case 1://����ְ��
			wm.add_emp();
			break;

		case 2://��ʾְ��
			break;

		case 3://ɾ��ְ��
			break;

		case 4://�޸�ְ��
			break;

		case 5://����ְ��
			break;

		case 6://�������
			break;

		case 7://����ĵ�
			break;

		default:
			system("cls");

		}
	}



	system("pause");

	return 0;
}