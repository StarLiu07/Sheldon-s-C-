#include <iostream>
using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>//windows���ͷ�ļ�
#include <time.h>//��ӭ��ҵ�QQȺ660142320ѧϰ����
#include <conio.h>//����̨�������ͷ�ļ�

#define MAPWIDTH 78//��ͼ�Ŀ��
#define MAPHIGHT 24//��ͼ�߶�
#define SNAKESIZE 100//�ߵĳ���



//ʳ������
struct {

	int x;
	int y;
}food;

//������
struct {
	int len;//�ߵĳ���
	int speed;//�ߵ��ƶ��ٶ�
	int x[SNAKESIZE];//����ĺ�����
	int y[SNAKESIZE];//�����������
}snake;

//����ʾ�ߵ��ƶ�����
int key = 72;

//�ж����Ƿ����ʳ��
int changeFlag = 0;

//���Ƶ�ͼ
void DrawMap();

//gotoxy
void gotoxy(int x, int y);

//���Ʒ���
void keyDown();


int main() {

	//����һ����ͼ
	DrawMap();

	while (1)
	{
		//���Ʒ���
		keyDown();
	}



	system("pause");
	return 0;
}

//������ƶ�������̨��(x,y)����㴦
void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

//���Ƶ�ͼ
void DrawMap()
{
	//��ӡ���¿�  ���
	for (int i = 0; i <= MAPWIDTH;i += 2)//i+2����Ϊ��ռ����
	{
		gotoxy(i, 0);
		cout << "��";
		gotoxy(i, MAPHIGHT);
		cout << "��";
	}

	//��ӡ���ұ߿�  
	for (int i = 1; i < MAPHIGHT; i++)
	{
		gotoxy(0, i);
		cout << "��";
		gotoxy(MAPWIDTH, i);
		cout << "��";
	}

	//�������ʳ��
	while (1)
	{
		srand((unsigned int)time(NULL));
		food.x = rand() % (MAPWIDTH - 4) + 2;
		food.y = rand() % (MAPHIGHT - 2) + 1;

		if (food.x % 2 == 0)
		{
			break;
		}

	}

	//��ӡʳ��
	gotoxy(food.x, food.y);
	cout << "��";

	//��ʼ���ߵ�����
	snake.len = 3;//�ߵĳ���
	snake.speed = 3;//�ߵ��ٶ�

	//����Ļ�м�������ͷ
	snake.x[0] = MAPWIDTH / 2 + 1;
	snake.y[0] = MAPHIGHT / 2;

	//��ӡ��ͷ
	gotoxy(snake.x[0], snake.y[0]);
	cout << "��";

	int temp = snake.x[0] + 2;
	//��������
	for (int i = 1; i < snake.len; i++)
	{
		//������+2�������겻��
		snake.x[i] = temp;
		gotoxy(snake.x[i], snake.y[0]);
		cout << "��";
		temp += 2;
	}

	//��ӡ���ѹ�����õ����Ϸ�
	gotoxy(MAPWIDTH - 2, 0);
	return;
}

//�����ߵķ���
void keyDown()
{
	int pre_key = key;//��¼ǰһ������
	if (_kbhit())
	{
		fflush(stdin);//�������������

		//getch()��ȡ�������ʱ��᷵�����Σ���һ�η���0��224���ڶ��η��صĲ���ʵ�ʵ�ֵ
		key = _getch();
		key = _getch();
	}

	/*
	* �ƶ��ߵ�ʱ�������
	* changeFlag == 0,��ôҪ�������һ�ڣ���Ӫ���ƶ�Ч��
	* changeFlag !==0,��ô����������Ӫ��ӳ���Ч��
	*/

	if (changeFlag == 0)
	{
		gotoxy(snake.x[snake.len - 1], snake.y[snake.len - 1]);
		cout << "  ";//��ӡ�հ��Դ�����β
	}

	//���ߵ�����������ǰ�ƶ�һ�ڣ���ͷ���⣩
	for (int i = snake.len - 1; i > 0; i--)
	{
		snake.x[i] = snake.x[i - 1];
		snake.y[i] = snake.y[i - 1];
	}

	//�жϰ����Ƿ���ǰһ�εİ����෴
	/**
	*����̨���������������
	*��������72
	*��������80
	*��������75
	*��������77
	*/

	if (pre_key == 72 && key == 80)
	{
		key = 72;
	}
	else if (pre_key == 80 && key == 72)
	{
		key = 80;
	}
	else if (pre_key == 75 && key == 77)
	{
		key = 75;
	}
	else if (pre_key == 77 && key == 75)
	{
		key = 77;
	}

	//�ж���ͷӦ�����Ǹ�����
	switch (key)
	{
	case 72: //����
		snake.y[0]--;
		break;
	case 80: //����
		snake.y[0]++;
		break;
	case 77: //����
		snake.x[0] += 2;
		break;
	case 75: //����
		snake.x[0] -= 2;
	}

	//��ӡ��ͷ
	gotoxy(snake.x[0], snake.y[0]);
	cout << "��";
	//���ص��Ϸ�
	gotoxy(MAPWIDTH - 2, 0);
	//����û�гԵ�ʳ�changeFlagΪ0
	changeFlag = 0;
	return;
}