#pragma once
#include<iostream>
using namespace std;

//����
class point
{
public:
	//����x
	void setx(int num_x);


		//��ȡx
		int getx();


		//����y
		void sety(int num_y);


		//��ȡy
		int gety();


private:
	int m_x;
	int m_y;
};