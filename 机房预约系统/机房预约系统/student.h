#pragma once
#include <iostream>
using namespace std;
#include "identity.h"

//ѧ����
class Student : public Identity
{
public:

	//Ĭ�Ϲ���
	Student();

	//�вι���  ������ ѧ�š�����������
	Student(int id, string name, string pwd);

	//�˵�����
	virtual void opermenu();

	//����ԤԼ
	void applyorder();

	//�鿴����ԤԼ
	void showmyorder();

	//�鿴����ԤԼ
	void showallorder();

	//ȡ��ԤԼ
	void cancelorder();

	//ѧ��ѧ��
	int m_id;
};