#pragma once
#define M 10
#define N 10


//��ͼ��
class Map
{
public:
	Map(); //���캯��
	~Map(); //��������
	void Init();

	void ReadMapFile(int map[M][N], int size, const char* filename);
	void WriteMapFile(int map[M][N], int size, const char* filename);
private:

};