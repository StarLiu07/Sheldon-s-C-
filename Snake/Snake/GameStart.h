#pragma once
#include <iostream>
using namespace std;
#include <Windows.h>
#include "CreateMap.h"

class GameStart
{
public:
	//��ʼ��Ϸ
	void StartGame();

	//������
	void CreateSnake();

	//gotoxy
	void gotoxy(int x, int y);//�Լ�����һ��gotoxy�����������x��y�� 
};