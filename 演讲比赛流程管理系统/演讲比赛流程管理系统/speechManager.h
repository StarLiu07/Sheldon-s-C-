#pragma once
#include <iostream>
using namespace std;
#include <vector>
#include <map>
#include "speaker.h"
#include <algorithm>

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