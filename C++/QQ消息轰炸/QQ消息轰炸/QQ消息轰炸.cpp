#include <iostream>
using namespace std;
#include<stdio.h>
#include <windows.h>

int main() {

	int select = 0;//��¼ѡ��
	cout << "1.������ը" << endl;
	cout << "2.Ⱥ���ը" << endl;
	cout << "3.�˳�" << endl;

	cin >> select;

	if (select == 1)
	{
		//������ը

		char name[30] = {0}; //��¼��ը���������
		int times = 0; //��¼��ը�Ĵ���


		cout << "��������Ҫ��ը�Ķ���" << endl;
		cin >> name;
		cout << "��������Ҫ��ը�Ĵ���" << endl;
		cin >> times;

		//���ھ��
		//���ڵ�ID
		HWND qqhwnd;  //����һ������ ���һ�����ڵ�ID

		//��������Ѱ�Ҵ���
		qqhwnd = FindWindowA(NULL,name);

		//������Ϣ
		//��ĳһ�����ڷ�����Ϣ
		for (int i = 0; i < times; i++)
		{
			SendMessage(qqhwnd, WM_PASTE, 0, 0);
			SendMessage(qqhwnd, WM_KEYDOWN, VK_RETURN, 0);
		}


	}
	else if (select == 2)
	{
		//Ⱥ���ը

		HWND qqhwnd;

		while (1)
		{
			//�õ�QQ������Ĵ���ID
			qqhwnd = FindWindowA(NULL, "QQ");

			//1.ѡ��������
			//2.TAB TAB
			//3.���ϰ��س����¼� �򿪶Ի���
			//4.ճ��
			//5.����
			//6.�رնԻ���

			SetForegroundWindow(qqhwnd); //��QQ��������Ϊ��ǰ

			keybd_event(VK_TAB, 0, 0, 0); //����TAB��
			Sleep(70);
			keybd_event(VK_TAB, 0, 2, 0); //����TAB��
			Sleep(70);

			keybd_event(VK_TAB, 0, 0, 0); //����TAB��
			Sleep(70);
			keybd_event(VK_TAB, 0, 2, 0); //����TAB��
			Sleep(70);

			while (1)
			{
				keybd_event(VK_RETURN, 0, 0, 0); //����TAB��
				Sleep(70);
				keybd_event(VK_RETURN, 0, 2, 0); //����TAB��
				Sleep(70);

				keybd_event(VK_DOWN, 0, 0, 0); //����TAB��
				Sleep(70);
				keybd_event(VK_DOWN, 0, 2, 0); //����TAB��
				Sleep(70);

				if (qqhwnd != GetForegroundWindow())
				{
					break;
				}
				//
			}

			//ճ��
			keybd_event(VK_CONTROL, 0, 0, 0); //����TAB��
			Sleep(70);
			keybd_event('V', 0, 0, 0); //����TAB��
			Sleep(70);

			keybd_event('V', 0, 2, 0); //����TAB��
			Sleep(70);
			keybd_event(VK_CONTROL, 0, 2, 0); //����TAB��
			Sleep(70);

			//����
			keybd_event(VK_RETURN, 0, 0, 0); //����TAB�� 
			Sleep(70);
			keybd_event(VK_RETURN, 0, 2, 0); //����TAB��
			Sleep(70);

			//�رնԻ���
			keybd_event(VK_ESCAPE, 0, 0, 0); //����TAB��
			Sleep(70);
			keybd_event(VK_ESCAPE, 0, 2, 0); //����TAB��
			Sleep(70);


			//MoveWindow(qqhwnd, 0, 0, 800, 800, true);

			
		}

		
	}		
	else
	{
		
	}

	system("pause");

	return 0;
}