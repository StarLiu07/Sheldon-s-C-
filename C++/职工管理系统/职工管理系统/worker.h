#pragma once
#include<iostream>
using namespace std;

class worker
{
public:
	//��ʾ������Ϣ
	virtual void showinfo() = 0;

	//��ȡ��������
	virtual string getdeptname() = 0;

	//ְ�����
	int m_id;
	//ְ������
	string m_name;
	//������Ϣ
	int m_deptid;
};