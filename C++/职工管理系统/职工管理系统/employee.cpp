#include "employee.h"

//���캯��
employee::employee(int id, string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_deptid = did;
}

//��ʾ������Ϣ
 void employee::showinfo()
{
	 cout << "ְ�����Ϊ��" << this->m_id ;
	 cout << "\tְ������Ϊ��" << this->m_name ;
	 cout << "\tְ������Ϊ��" << this->getdeptname() ;
	 cout << "\t��λְ����ɾ�����������" << endl;
}

//��ȡ��������
 string employee::getdeptname()
{
	 return string("Ա��");
}