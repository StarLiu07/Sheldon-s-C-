#pragma once
#include <iostream>
using namespace std;

//��ͼ����
#define M 10
#define N 10

class Game
{
public:
	//�洢��������
	int Px, Py;
	//��ӡ��ͼ
	void ShowMap(int map[M][N]);
	//�����ƶ�
	void Move(int map[M][N],char select);
	//�ҵ���������
	void FindPlayer(int map[M][N]);
	//������
	void moveUp(int map[M][N]);
	//������
	void moveDown(int map[M][N]);
	//������
	void moveLeft(int map[M][N]);
	//������
	void moveRight(int map[M][N]);
};