#include "Game.h"

//�������������ƶ�
int Game::Move(int map[M][N], char ch)
{
	static int step = 0;
	//��������
	int offsetx = 0;
	int offsety = 0;
	switch (ch)
	{
		//�����ƶ�
	case 'w':case 'W':
		offsetx = -1;
		offsety = 0;
		if (push(map, offsetx, offsety) == 1)
			step++; //������һ
		break;
		//�����ƶ�
	case 's':case 'S':
		offsetx = 1;
		offsety = 0;
		if (push(map, offsetx, offsety) == 1)
			step++;
		break;
		//�����˶�
	case 'a':case 'A':
		offsetx = 0;
		offsety = -1;
		if (push(map, offsetx, offsety) == 1)
			step++;
		break;
		//�����˶�
	case 'd':case 'D':
		offsetx = 0;
		offsety = 1;
		if (push(map, offsetx, offsety) == 1)
			step++;
		break;
	default:
		break;
	}
	return step;
}