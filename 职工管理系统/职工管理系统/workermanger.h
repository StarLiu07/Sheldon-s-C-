#pragma once  //��ֹͷ�ļ��ظ�����
#include<iostream> //��׼���������
using namespace std; //��׼�����ռ�
#include "worker.h"

class workermanger
{
public:
	
	//���캯��
	workermanger();

	//չʾ�˵�
	void show_menu();

	//�˳�����
	void exitsystem();

	//��¼ְ������
	int m_empnum;

	//ְ������ָ��
	worker** m_emparry;

	//���ְ��
	void add_emp();

	//��������
	~workermanger();
};