#include <iostream>
using namespace std;
#include "Game.h"
#define M 10
#define N 10

//��ͼ����
int map[M][N] = {
	{1,1,1,1,1,1,1,1,1,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,3,0,2,0,1},
	{1,0,0,0,4,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,1,1,1,1,1,1,1,1,1},
};


int main()
{
	//������Ϸ�����
	Game game;
	game.ShowMap(map);

	while (1)
	{
		//���ڽ����û�ѡ��
		char select;
		cin >> select;

		game.FindPlayer(map); //�ҵ���������
		game.Move(map, select);
		
	}

	system("pause");
	return 0;
}