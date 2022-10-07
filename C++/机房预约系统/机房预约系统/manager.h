#pragma once
#include <iostream>
using namespace std;
#include "identity.h"
#include <fstream>
#include "globalfile.h"
#include <vector>
#include "student.h"
#include "teacher.h"
#include <algorithm>
#include "computerRoom.h"

//����Ա��
class Manager : public Identity
{
public:
	
	//Ĭ�Ϲ���
	Manager();

	//�вι���
	Manager(string name,string pwd);

	//�˵�����
	virtual void opermenu();

	//����˺�
	void addperson();

	//�鿴�˺�
	void showperson();

	//�鿴������Ϣ
	void showcomputer();

	//���ԤԼ��¼
	void cleanfile();

	//��ʼ������
	void initVector();

	//����ظ� ����1 ���ѧ��/ְ����  ����2 �������
	bool checkRepeat(int id, int type);

	//ѧ������
	vector<Student> vStu;

	//��ʦ����
	vector<Teacher> vTea;

	//������Ϣ����
	vector<ComputerRoom> vCom;
};