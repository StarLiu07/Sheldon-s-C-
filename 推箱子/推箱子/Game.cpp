#include "Game.h"

void Game::ShowMap(int map[M][N])
{

	//0Ϊ�յ�  1Ϊǽ��  2Ϊ���  3Ϊ����  4ΪĿ���  5Ϊ����+Ŀ���  6Ϊ��+Ŀ���
	//��ӡ��ͼ
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			switch (map[i][j])
			{
			case 0:
				cout << "  ";
				break;
			case 1: //ǽ��
				cout << "��";
				break;
			case 2: //���
				cout << "��";
				break;
			case 3: //����
				cout << "��";
				break;
			case 4: //Ŀ���
				cout << "��";
				break;
			case 5: //����+Ŀ���
				cout << "*";
				break;
			case 6: //��+Ŀ���
				cout << "G";
				break;
			default:
				break;
			}
		}
		//��ӡ��һ�к���
		cout << endl;
	}
}

//�����ƶ�
void Game::Move(int map[M][N],char select)
{
	//���彫Ҫ�ƶ�������
	int x, y;
	//���ݰ����ƶ�λ��
	switch (select)
	{
	case 'a':case 'A': //�����ƶ�
		x = 0; y = -1;
		break;
	case 's':case 'S':
		x = -1; y = 0;
		break;
	case 'd':case 'D':
		x = 0; y = 1;
		break;
	case 'w':case 'W':
		moveUp(map);
		break;
	default:
		break;
	}


}

//�ҵ���������
void Game::FindPlayer(int map[M][N])
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			//�жϸ������Ƿ�Ϊ�˻���+Ŀ���
			if (map[i][j] == 2 || map[i][j] == 6)
			{
				Px = i;
				Py = j;
			}
		}
	}
}

//������
void Game::moveUp(int map[M][N])
{
	//ǰ���ǿյ�
	if (map[Px - 1][Py] == 0)
	{
		map[Px - 1][Py] = map[Px][Py]; //�ƶ�����
		map[Px][Py] = 0; //������֮ǰ���ڵ������Ϊ0(�յ�)
	}
}