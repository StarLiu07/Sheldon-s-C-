#include "manager.h"

//���캯��
manager::manager(int id, string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_deptid = did;
}

//��ʾ������Ϣ
void manager::showinfo()
{
	cout << "ְ�����Ϊ��" << this->m_id;
	cout << "\tְ������Ϊ��" << this->m_name;
	cout << "\tְ������Ϊ��" << this->getdeptname();
	cout << "\t��λְ������ϰ彻�������񣬲��·������Ա��" << endl;
}

//��ȡ��������
string manager::getdeptname()
{
	return string("����");
}