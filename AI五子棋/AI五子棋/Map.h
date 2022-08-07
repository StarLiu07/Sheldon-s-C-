#pragma once
#include <string>
#include <vector>

#define LAY 801  //��
#define STAND 802 //��
#define MAIN 803 //���Խ�  �����ϵ�����
#define VICE 804 //���Խ�  �����µ�����

#define BLACK 811 //����
#define WHITE 812 //����
#define NONE 813 //??

#define ERROR -124 //����

struct Chess
{
	int color; //��ɫ
	int atkValue; //������
	int defValue; //���ط���
	int row; //������
	int col; //������
	bool isBoundry; //�Ƿ��ڱ߽紦
	Chess() { this->isBoundry = false; }; //һ������¶����Ǳ߽磬ֻ���ڳ�ʼ��ֵ��������б߽�
	Chess(int color, int atkValue, int defValue, int x, int y, bool isBoundry)
	{
		this->color = color;
		this->atkValue = atkValue;
		this->defValue = defValue;
		this->row = x;
		this->col = y;
		this->isBoundry = isBoundry;
	}
	Chess(int color, int atkValue, int defValue)
	{
		this->color = color;
		this->atkValue = atkValue;
		this->defValue = defValue;
		this->isBoundry = false;
	}
	Chess(int color)
	{
		this->color = color;
		this->isBoundry = false;
	}
	Chess(int x,int y)
	{
		this->row = x;
		this->col = y;
		this->isBoundry = false;
	}
	Chess(std::string error)
	{
		this->color = ERROR;
		this->atkValue = ERROR;
		this->defValue = ERROR;
		this->row = ERROR;
		this->col = ERROR;
		this->isBoundry = true;
	}
};

//��ͼ��
class Map
{
private:
	int size; //�ߴ�
	Chess** map; //??
	int friendColor; //�ѷ���ɫ
	int enemyColor; //�з���ɫ
	int num;//��¼ȫ��������
public:
	Map(void); //����
	~Map(void); //����
	void iniMap(int size);
	int getSize();
	int getFriendColor();
	int getNum();
	int numPlus();
	void setAtkValue(Chess ce, int atkValue);
	void setDefValue(Chess ce, int defValue);
	int getAtkValue(Chess ce);
	int getDefValue(Chess ce);
};