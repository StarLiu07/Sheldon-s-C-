#include<iostream>
using namespace std;
#include"point.h"
#include"circle.h"

//���һ��Բ�ࣨcircle����һ�����ࣨpoinyt�� ��������Բ�Ĺ�ϵ

/*
�㵽Բ�ĵľ��� == �뾶  ����Բ��
�㵽Բ�ĵľ��� >  �뾶  ����Բ��
�㵽Բ�ĵľ��� <  �뾶  ����Բ��
*/
//������ϵ�ϣ�������ľ��������  (x1-x2)^2+(y1-y2)^2������ƽ����

////����
//class point
//{
//public:
//	//����x
//	void setx(int num_x)
//	{
//		m_x = num_x;
//	}
//
//	//��ȡx
//	int getx()
//	{
//		return m_x;
//	}
//
//	//����y
//	void sety(int num_y)
//	{
//		m_y = num_y;
//	}
//
//	//��ȡy
//	int gety()
//	{
//		return m_y;
//	}
//
//private:
//	int m_x;
//	int m_y;
//};

////Բ��
//class circle
//{
//public:
//	//���ð뾶
//	void setr(int r)
//	{
//		m_r = r;
//	}
//	//��ȡ�뾶
//	int getr()
//	{
//		return m_r;
//	}
//	//����Բ��
//	void setcenter(point center)
//	{
//		m_center = center;
//	}
//	//��ȡԲ��
//	point getcenter()
//	{
//		return m_center;
//	}
//
//private:
//	int m_r;//�뾶
//
//	//�����У���������һ������Ϊ��Ա
//	point m_center;//Բ��
//};

//�жϵ��Բ�Ĺ�ϵ����
void isincircle(circle& c, point &point)
{
	//��������֮��ľ���
	int distance = (c.getcenter().getx() - point.getx()) * (c.getcenter().getx() - point.getx()) +
		(c.getcenter().gety() - point.gety()) * (c.getcenter().gety() - point.gety());

	//����뾶��ƽ��
	int rdistance = (c.getr())* (c.getr());

	//�жϹ�ϵ
	if (distance > rdistance)
	{
		cout << "����԰��" << endl;
	}
	else if (distance == rdistance)
	{
		cout << "����Բ��" << endl;
	}
	else
	{
		cout << "����Բ��" << endl;
	}
}

int main() {

	//����Բ
	circle c;
	c.setr(10);

	point c_center;
	c_center.setx(0);
	c_center.sety(10);
	c.setcenter(c_center);

	//������
	point point;
	point.setx(0);
	point.sety(20);

	//�жϹ�ϵ
	isincircle(c, point);

	system("pause");

	return 0;
}