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

//�����ӡ
//����һ����ά�����һ���ؿ���
void Game::Drop(int map[M][N], int c)
{
	cout << "\t\t" << "**********************�� " << c << " ��**************************" << endl;
	cout << "\t\t" << "***************W-w:����  S-s:����*****************" << endl;
	cout << "\t\t" << "***************A-a:����  D-d:����*****************" << endl;
	cout << endl;

	//Ƕ��ѭ����Ϊ�˱��������ά����
	for (int i = 0; i < M; i++)
	{
		cout << "	";
		for (int j = 0; j < N; j++)
		{
			switch (map[i][j])
			{
				//��ӡ�յ�
			case 0:
				cout << " ";
				break;
				//��ӡǽ��
			case 1:
				cout << "��";
				break;
				//��ӡ���
			case 2:
				cout << "��";
				posX = i;
				posY = j;
				break;
				//��ӡ����
			case 3:
				cout << "��";
				break;
				//��ӡ�յ�
			case 4:
				cout << "��";
				break;
			case 6:
				cout << "��";
				posX = i;
				posY = j;
				break;
			case 7:
				cout << "��";
				break;
			default:
				break;
			}
		}
		cout << endl; //����
	}
}

//�ж���Ϸʤ������
int Game::juide(int map[M][N])
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (4 == map[i][j] || 6 == map[i][j]) //��ͼ�л������ص�/�յ�+��
				return 1;
		}
	}
	return 0;
}