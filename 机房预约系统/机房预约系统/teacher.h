#pragma once
#include <iostream>
using namespace std;
#include "Identity.h"

class Teacher : public Identity
{
public:

	//Ĭ�Ϲ���
	Teacher();

	//�вι���
	Teacher(int empid, string name, string pwd);

	//�˵�����
	virtual void opermenu();

	//�鿴����ԤԼ
	void showallorder();

	//���ԤԼ
	void validorder();

	//ְ����
	int m_empid;
};