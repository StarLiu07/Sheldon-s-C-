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

//������Ϸ
int Game::push(int map[M][N], int offsetX, int offsetY)
{
	Postion(map); //ȷ����������
	if (map[posX + offsetX][posY + offsetY] == 0) //��һ���ǿյ�
	{
		map[posX][posY] -= 2;
		map[posX + offsetX][posY + offsetY] += 2; //��һ���Ϊ�˻���+�յ�
		//�ı��˵�����
		posX += offsetX;
		posY += offsetY;
	}
	else if (map[posX + offsetX][posY + offsetY] == 3) //��һ��������
	{
		if (map[posX + offsetX * 2][posY + offsetY * 2] == 0
			|| map[posX + offsetX * 2][posY + offsetY * 2] == 4) //�������ǿյ�/�յ�
		{
			map[posX][posY] -= 2; //��һ���Ϊ�յ�/�յ�
			map[posX + offsetX][posY + offsetY] == 2; //��һ���Ϊ��
			map[posX + offsetX * 2][posY + offsetY * 2] == 3; //�������Ϊ����/����+�յ�
			posX += offsetX;
			posY += offsetY;
		}
	}
	else if (map[posX + offsetX][posY + offsetY] == 4) //��һ�����յ�
	{
		map[posX][posY] -= 2;
		map[posX + offsetX][posY + offsetY] == 6; //��һ���Ϊ��+�յ�
		posX += offsetX;
		posY += offsetY;
	}
	else if (map[posX + offsetX][posY + offsetY] == 7) //��һ��������+�յ�
	{
		if (map[posX + offsetX * 2][posY + offsetY * 2] == 8
			|| map[posX + offsetX * 2][posY + offsetY * 2] == 4) //�������ǿյ�/�յ�
		{
			map[posX][posY] -= 2;
			map[posX + offsetX][posY + offsetY] = 6; //��һ���Ϊ��+�յ�
			map[posX + offsetX * 2][posY + offsetY * 2] += 3; //�������Ϊ����/����+�յ�
			posX += offsetX;
			posY += offsetY;
		}
	}
	else //���ﲻ���ƶ�
		return 0;
	return 1;
}

//�ҵ���������
void Game::Postion(int map[M][N])
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (2 == map[i][j] || 6 == map[i][j]) //��ͼ�д����յ�/�յ�+��
			{
				//���������긳ֵ
				posX = i;
				posY = j;
			}
		}
	}
}