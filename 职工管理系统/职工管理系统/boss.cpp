#include "boss.h"

//���캯��
boss::boss(int id, string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_deptid = did;
}

//��ʾ������Ϣ
void boss::showinfo()
{
	cout << "ְ�����Ϊ��" << this->m_id;
	cout << "\tְ������Ϊ��" << this->m_name;
	cout << "\tְ������Ϊ��" << this->getdeptname();
	cout << "\t��λְ�𣺹���˾��������" << endl;
}

//��ȡ��������
string boss::getdeptname()
{
	return string("�ϰ�");
}