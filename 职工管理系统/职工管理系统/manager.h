#pragma once
#include<iostream>
using namespace std;
#include "worker.h"

class manager : public worker
{
public:
	//���캯��
	manager(int id, string name, int did);

	//��ʾ������Ϣ
	virtual void showinfo();

	//��ȡ��������
	virtual string getdeptname();
};