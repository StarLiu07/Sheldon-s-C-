#pragma once
#include<iostream>
using namespace std;
#include"point.h "

//Բ��
class circle
{
public:
	//���ð뾶
	void setr(int r);

		//��ȡ�뾶
	int getr();

		//����Բ��
	void setcenter(point center);

		//��ȡԲ��
	point getcenter();


private:
	int m_r;//�뾶

	//�����У���������һ������Ϊ��Ա
	point m_center;//Բ��
};