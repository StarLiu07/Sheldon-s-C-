#pragma once
#include <iostream>
using namespace std;
#include "identity.h"

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

};