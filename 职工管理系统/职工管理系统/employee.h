//��ְͨ��
#pragma once
#include<iostream>
using namespace std;
#include"worker.h"

class employee : public worker
{
public:
	//���캯��
	employee(int id, string name, int did);

	//��ʾ������Ϣ
	virtual void showinfo();

	//��ȡ��������
	virtual string getdeptname();
};