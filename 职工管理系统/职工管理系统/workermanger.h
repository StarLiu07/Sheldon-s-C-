#pragma once  //��ֹͷ�ļ��ظ�����
#include<iostream> //��׼���������
using namespace std; //��׼�����ռ�
#include "worker.h"
#include "boss.h"
#include "employee.h"
#include "manager.h"

#include<fstream>
#define  FILENAME "empfile.txt"

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

	//����ְ��
	void save();

	//�ж��ļ��Ƿ�Ϊ�� ��־
	bool m_fileisempty;

	//��������
	~workermanger();
};