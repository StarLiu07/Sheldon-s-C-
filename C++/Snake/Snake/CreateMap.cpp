#include "CreateMap.h"

//չʾ��ͼ
void CreateMap::ShowMap()
{
	//��
	for (int i = 0; i < 60; i+=2)
	{
		Setxy(i,0);
		cout << "��";
		Setxy(i, 29);
		cout << "��";
	}

	//��
	for (int i = 0; i < 30; i++)
	{
		Setxy(0, i);
		cout << "��";
		Setxy(58, i);
		cout << "��";
	}
}

//���ù��
void CreateMap::Setxy(int x,int y)
{
	COORD pos = { x,y }; 

	//�õ�����̨����
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleCursorPosition(hOut, pos);
}