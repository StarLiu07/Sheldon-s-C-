#include<iostream>
using namespace std;
#include "����ʵ��.h"
#include <fstream>
#define FILENAME "person.txt"

//0.�˳�ϵͳ  1.����ְ��  2.��ʾְ��  3.ɾ��ְ��  4.�޸�ְ��  5.����ְ��   6.�������  7.����ĵ�

int main() {

	
	workermanger wm;


	while (true)
	{
		//��ʾ�˵�
		wm.showmenu();

		int choose = 0;
		cin >> choose;

		switch (choose)
		{
		case 0://�Ƴ��˵�
			wm.tui();
			break;
		case 1://����Ա��
			wm.addemp();
			break;
		case 2://��ʾְ��
			wm.show_emp();
			break;
		case 3://ɾ��ְ��
			wm.delete_emp();
			break;
		case 4: //�޸�ְ��
			wm.xiygai();
			break;
		case 5: //����ְ��
			wm.find_emp();
			break;
		case 6: //�������
			wm.sort_emp();
			break;
		case 7:
			wm.clean();
			break;
		}
	}

	system("pause");

	return 0;
}