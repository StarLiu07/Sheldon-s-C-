#pragma once
#include <iostream>
using namespace std;
#include <Windows.h>
#include "CreateMap.h"
#include <conio.h>

class GameStart
{
public:
	//��ʼ��Ϸ
	void StartGame();

	//������
	void CreateSnake();

	//������Ϸ
	void RunGame();

	//�ƶ���
	void MoveSnake();

	//gotoxy
	void gotoxy(int x, int y);//�Լ�����һ��gotoxy�����������x��y�� 
};