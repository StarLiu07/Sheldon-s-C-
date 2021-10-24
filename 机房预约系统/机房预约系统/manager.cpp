#include "manager.h"

//Ĭ�Ϲ���
Manager::Manager()
{

}

//�вι���
Manager::Manager(string name, string pwd)
{
	//��ʼ������Ա��Ϣ
	this->m_name = name;
	this->m_Pwd = pwd;

	//��ʼ������ ��ȡ�������ļ��� ѧ������ʦ��Ϣ
	this->initVector();
}

//�˵�����
void Manager::opermenu()
{
	cout << "��ӭ����Ա��" << this->m_name << "��¼��" << endl;
	cout << "\t\t--------------------------------\n";
	cout << "\t\t|                               |\n";
	cout << "\t\t|           1.����˺�          |\n";
	cout << "\t\t|                               |\n";
	cout << "\t\t|           2.�鿴�˺�          |\n";
	cout << "\t\t|                               |\n";
	cout << "\t\t|           3.�鿴����          |\n";
	cout << "\t\t|                               |\n";
	cout << "\t\t|           4.���ԤԼ          |\n";
	cout << "\t\t|                               |\n";
	cout << "\t\t|           0.ע����¼          |\n";
	cout << "\t\t|                               |\n";
	cout << "\t\t---------------------------------\n";
	cout << "��ѡ����Ĳ�����" << endl;
}

//����˺�
void Manager::addperson()
{
	cout << "����������˺ŵ�����" << endl;
	cout << "1.���ѧ��" << endl;
	cout << "2.�����ʦ" << endl;

	string fileName; //�������ļ���
	string tip; //��ʾid��
	string errorTip; //�ظ�������ʾ

	ofstream ofs;

	int select = 0;
	cin >> select; //�����û�ѡ��

	if (select == 1) 
	{
		//���ѧ��
		fileName = STUDENT_FILE;
		tip = "������ѧ��:";
		errorTip = "ѧ���ظ������������룺";

	}
	else
	{
		fileName = TEACHER_FILE;
		tip = "������ְ����ţ�";
		errorTip = "ְ�����ظ������������룺";
	}

	//����׷�ӵķ�ʽд�ļ�
	ofs.open(fileName, ios::out | ios::app);

	int id; //ѧ�Ż�ְ����
	string name; //����
	string pwd; //����

	cout << tip << endl;
	while (true)
	{
		
		cin >> id;
		bool ret = checkRepeat(id, select);
		if (ret) //���ظ�
		{
			cout << errorTip << endl;
		}
		else
		{
			break;
		}
	}


	cout << "������������" << endl;
	cin >> name;

	cout << "���������룺" << endl;
	cin >> pwd;

	//���ļ����������
	ofs << id << " " << name << " " << pwd << " " << endl;
	cout << "��ӳɹ�" << endl;

	system("pause");
	system("cls");
	
	ofs.close();
}

//�鿴�˺�
void Manager::showperson() 
{

}

//�鿴������Ϣ
void Manager::showcomputer()
{

}

//���ԤԼ��¼
void Manager::cleanfile()
{

}

void Manager::initVector()
{
	//ȷ���ļ����״̬
	vStu.clear();
	vTea.clear();

	//��ȡ��Ϣ  ѧ������ʦ
	ifstream ifs;
	ifs.open(STUDENT_FILE, ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ���ȡʧ��" << endl;
		return;
	}

	Student s;
	while (ifs >> s.m_id && ifs >> s.m_name && ifs >> s.m_Pwd)
	{
		vStu.push_back(s);
	}

	//cout << "��ǰѧ������Ϊ��" << vStu.size() << endl;
	ifs.close();

	//��ȡ��Ϣ  ��ʦ
	ifs.open(TEACHER_FILE, ios::in);
	Teacher t;
	while (ifs >> t.m_empid && ifs >> t.m_name && ifs >> t.m_Pwd)
	{
		vTea.push_back(t);
	}

	//cout << "��ǰ��ʦ����Ϊ��" << vTea.size() << endl;
	ifs.close();
}

bool Manager::checkRepeat(int id, int type)
{
	if (type == 1)
	{
		//���ѧ��
		for (vector<Student>::iterator it = vStu.begin(); it != vStu.end(); it++)
		{
			if (id == it->m_id)
			{
				return true;
			}
		}

	}
	else
	{
		//�����ʦ
		for (vector<Teacher>::iterator it = vTea.begin(); it != vTea.end(); it++)
		{
			if (id == it->m_empid)
			{
				return true;
			}
		}
	}

	return false;
}