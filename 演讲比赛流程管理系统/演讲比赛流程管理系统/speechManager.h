#pragma once
#include <iostream>
using namespace std;
#include <vector>
#include <map>
#include "speaker.h"
#include <algorithm>
#include <deque>
#include <functional>
#include <numeric>
#include <fstream>

/*
* ����������
* �ṩ�˵��������û�����
* ���ݽ��������̽��п���
* ���ļ��Ķ�д����
*/

//����ݽ�����������
class speechManager
{
public:
	
	//���캯��
	speechManager();

	//�˵�����
	void show_menu();

	//�˳�ϵͳ
	void exitsystem();

	//��������
	~speechManager();

	//��ʼ������������
	void initspeech();

	//����12��ѡ��
	void createspeaker();

	//��ʼ���� �����������̿��ƺ���
	void startspeech();

	//��ǩ
	void speechdraw();

	//����
	void speechcontest();

	//��ʾ�÷�
	void showscore(); 

	//����÷�
	void saverecord();

	//��ȡ��¼
	void loadrecord();

	//��ʾ�����¼
	void showrecord();

	//�ж��ļ��Ƿ�Ϊ��
	bool fileisempty;

	//��������¼������
	map<int, vector<string>>m_record;

	//��Ա����
	//�����һ�ֱ���ѡ�ֵ�����
	vector<int> v1;
	
	//��һ�ֽ���ѡ�ֱ������
	vector<int> v2;

	//ʤ��ǰ����ѡ�ֱ������
	vector<int> vvicitory;

	//��ű���Լ���Ӧ����ѡ������
	map<int, speaker>m_speaker;

	//��ű�������
	int m_index;

};