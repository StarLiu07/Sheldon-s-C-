#include"circle.h"


	//���ð뾶
	void circle::setr(int r)
	{
		m_r = r;
	}
	//��ȡ�뾶
	int circle::getr()
	{
		return m_r;
	}
	//����Բ��
	void circle::setcenter(point center)
	{
		m_center = center;
	}
	//��ȡԲ��
	point circle::getcenter()
	{
		return m_center;
	}

