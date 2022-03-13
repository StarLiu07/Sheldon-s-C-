#include <iostream>
using namespace std;
#include <stdio.h>
#include <graphics.h> //ͼ�λ�����
#include <stack>//����ջ

//�����ͼ�ĳ�����ĺ곣��
#define ROWS 10 //��
#define CLOS 10 //��
//���崰�ڴ�С�ĺ곣��
#define SPACE 60

//׼��ͼƬ����
IMAGE road, wall, pos, ren;

//����һ��ö��������¼�����̽�ⷽ��
enum direct{p_up,p_down,p_left,p_right};

//׼����������ǵ�����
struct pathNode {
	int dir;//����   0��������
	bool isFind;//�Ƿ��߹�   0����û���߹���1�����߹�
};
//����һ�������ͣ���¼�����յ�
struct MyPoint {
	int row;//x
	int clo;//y
};

//��ӡ��ͼ
void printMap(int map[ROWS][CLOS]);
//ͼ�ν������
void showMap(int map[ROWS][CLOS]);

int  main() {

	//����һ������
	initgraph(ROWS * SPACE, CLOS * SPACE,1);

	//����ͼƬ
	//ǰ���roadΪ�����������������roadΪ�ļ���������SPACE�ֱ��ʾ������
	loadimage(&road, L"road.bmp",SPACE,SPACE,true);
	loadimage(&wall, L"wall.bmp",SPACE,SPACE,true);
	loadimage(&pos, L"pos.bmp",SPACE/2,SPACE/2,true);
	loadimage(&ren, L"ren.bmp",SPACE,SPACE,true);

	//����һ����ͼ�Ķ�ά����
	//1��ǽ��0��·
	int map[ROWS][CLOS]{
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 0, 1, 0, 1, 1, 0, 0, 0, 1 },
		{ 1, 0, 1, 0, 1, 1, 0, 1, 0, 1 },
		{ 1, 0, 1, 0, 0, 1, 0, 1, 0, 1 },
		{ 1, 0, 0, 0, 1, 1, 0, 1, 0, 1 },
		{ 1, 0, 1, 0, 1, 1, 0, 1, 0, 1 },
		{ 1, 0, 1, 0, 0, 0, 0, 1, 0, 1 },
		{ 1, 0, 1, 0, 1, 1, 1, 1, 0, 1 },
		{ 1, 0, 1, 0, 0, 1, 1, 0, 0, 1 },
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }
	};

	//����һ����ǵ����飬ȫ����ֵΪ0
	pathNode pathNode[ROWS][CLOS] = { 0 };

	//���
	MyPoint begPos = { 1,1 };
	//�յ�
	MyPoint endPos = { 8,7 };

	//�������߹�
	pathNode[begPos.row][begPos.clo].isFind = true;

	//��ǰ��
	MyPoint currentPos = begPos;
	//����
	MyPoint searchPos;

	//����һ��MyPoint���͵�ջ
	stack<MyPoint> stack;
	//�����ջ
	stack.push(begPos);

	//�ж������Ƿ��ҵ��յ�
	bool isFindEnd = false;

	printMap(map);
	showMap(map);
	

	while (1) {
		//ȷ������
		searchPos = currentPos;
		switch (pathNode[currentPos.row][currentPos.clo].dir)
		{
		case p_up:
			searchPos.row--;
			//�ı���ⷽ��
			pathNode[currentPos.row][currentPos.clo].dir++;
			if (map[searchPos.row][searchPos.clo] == 0 && pathNode[searchPos.row][searchPos.clo].isFind == false)
			{
				currentPos = searchPos; 
				//��ջ
				stack.push(currentPos);
				//����߹�
				pathNode[currentPos.row][currentPos.clo].isFind = true;
			}
			break;
		case p_down:
			searchPos.row++;
			//�ı���ⷽ��
			pathNode[currentPos.row][currentPos.clo].dir++;
			if (map[searchPos.row][searchPos.clo] == 0 && pathNode[searchPos.row][searchPos.clo].isFind == false)
			{
				currentPos = searchPos;
				//��ջ
				stack.push(currentPos);
				//����߹�
				pathNode[currentPos.row][currentPos.clo].isFind = true;
			}
			break;
		case p_left:
			searchPos.clo--;
			//�ı���ⷽ��
			pathNode[currentPos.row][currentPos.clo].dir++;
			if (map[searchPos.row][searchPos.clo] == 0 && pathNode[searchPos.row][searchPos.clo].isFind == false)
			{
				currentPos = searchPos;
				//��ջ
				stack.push(currentPos);
				//����߹�
				pathNode[currentPos.row][currentPos.clo].isFind = true;
			}
			break;
		case p_right:
			searchPos.clo++;
			//�ı���ⷽ��
			//pathNode[currentPos.row][currentPos.clo].dir++;
			if (map[searchPos.row][searchPos.clo] == 0 && pathNode[searchPos.row][searchPos.clo].isFind == false)
			{
				currentPos = searchPos;
				//��ջ
				stack.push(currentPos);
				//����߹�
				pathNode[currentPos.row][currentPos.clo].isFind = true;
			}
			//����ͬ
			else {
				stack.pop();//ɾ��ջ��Ԫ��
				currentPos = stack.top();//�ѵ�ǰ���趨Ϊ�µ�ջ��Ԫ��

			}
			break;
		default:break;
		}

		//�жϵ�ǰ���Ƿ�����յ�
		if (currentPos.row == endPos.row && currentPos.clo == endPos.clo)
		{
			isFindEnd = true;
			break;//����ѭ��
		}
		else if (stack.empty())
		{
			break;//ջ��ͬ������ѭ��
		}

		

	}
	//�ж��Ƿ��ҵ��յ�
	if (isFindEnd == true)
	{
		cout << "�ҵ��յ�����";
		//��ӡ·����Ҳ���Ǵ�ӡջ
		while (!stack.empty())
		{
			//cout << stack.top().row,stack.top().clo;
			printf("(%d,%d) ", stack.top().row, stack.top().clo);
			stack.pop();
		}
		cout << endl;
	}
	else
	{
		cout << "���ź�û���ҵ�" << endl;
	}

	//cout << "����";

	//while (1);
	
	system("pause");
	return 0;
}

//��ӡ��ͼ
void printMap(int map[ROWS][CLOS]) {
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < CLOS; j++)
		{
			if (map[i][j] == 0)//��ӡ·
			{
				cout << "  ";
			}
			else//��ӡǽ
			{
				cout << "ǽ";
			}
		}
		cout << endl;//��ӡ��һ�к���
	}
}

//ͼ�ν������
void showMap(int map[ROWS][CLOS]) {
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < CLOS; j++)
		{
			if (map[i][j] == 0)//��ӡ·
			{
				putimage(j * SPACE, i * SPACE, &road);
			}
			else//��ӡǽ
			{
				putimage(j * SPACE, i * SPACE, &wall);
			}
		}
		cout << endl;//��ӡ��һ�к���
	}
}
