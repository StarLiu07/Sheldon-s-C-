//#include"workermanger.h"
//#include "employee.h"
//#include "manager.h"
//#include "boss.h"
#include "workermanger.h"

workermanger::workermanger()
{
	//�ж��ļ��Ƿ�Ϊ��

	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	if (!ifs.is_open())
	{
		cout << "�ļ�������" << endl;

		//��ʼ������
		//��ʼ����¼����
		this->m_empnum = 0;
		//��ʼ������ָ��
		this->m_emparry = NULL;
		//��ʼ���ļ��Ƿ�Ϊ��
		this->m_fileisempty = true;


		ifs.close();
		return;
	}

	//�ļ����ڣ�����Ϊ��
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "�ļ�Ϊ��" << endl;
	}


}

void workermanger::show_menu()
{
	cout << "*********************************" << endl;
	cout << "******��ӭʹ��ְ������ϵͳ*******" << endl;
	cout << "*********0.�˳��������**********" << endl;
	cout << "*********1.����ְ����Ϣ**********" << endl;
	cout << "*********2.��ʾְ����Ϣ**********" << endl;
	cout << "*********3.ɾ����ְְ��**********" << endl;
	cout << "*********4.�޸�ְ����Ϣ**********" << endl;
	cout << "*********5.����ְ����Ϣ**********" << endl;
	cout << "*********6.���ձ������**********" << endl;
	cout << "*********7.��������ĵ�**********" << endl;
	cout << "*********************************" << endl;
	cout << endl;
}

//�˳�����
void workermanger::exitsystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
}

//���ְ��
void workermanger::add_emp()
{
	cout << "��������Ҫ��ӵ�ְ������" << endl;
	int add_num = 0;
	cin >> add_num;

	if (add_num > 0)
	{
		//���
		//�����¿ռ��С
		int newsize = this->m_empnum + add_num;

		//�����¿ռ�
		worker** newspace = new worker* [newsize];

		//��ԭ���ռ��µ����ݿ������¿ռ�
		if (this->m_emparry != NULL)
		{
			for (int i = 0; i < this->m_empnum; i++)
			{
				newspace[i] = this ->m_emparry[i];
			}
		}

		for (int i = 0; i < add_num; i++)
		{
			int id;
			string name;
			int dselect;

			cout << "�������" << i + 1 << "���˵ı��" << endl;
			cin >> id;

			cout << "�������" << i + 1 << "���˵�����" << endl;
			cin >> name;

			cout << "�������" << i + 1 << "���˵�ְλ" << endl;
			cout << "1.Ա��" << endl;
			cout << "2.����" << endl;
			cout << "3.�ϰ�" << endl;
			cin >> dselect;

			worker* worker = NULL;
			switch (dselect)
			{
			case 1:
				worker = new employee(id,name,dselect);
				break;
			case 2:
				worker = new manager(id, name, dselect);
				break;
			case 3:
				worker = new boss(id, name, dselect);
				break;
			default:
				break;
			}
			//������ְ��ְ�𣬱��浽������
			newspace[this->m_empnum + i] = worker;
		}
		//�ͷ�ԭ�пռ�	
		
		delete[] this->m_emparry;

		//�����¿ռ�ָ��
		this->m_emparry = newspace;

		//�����µ�ְ������
		this->m_empnum = newsize;

		//��ʾ��ӳɹ�	
		cout << "�ɹ����" << add_num << "����Ա��" << endl;
		
		this->save();
		
	}
	else
	{
		cout << "��������" << endl;
	}

	//��������������ص��ϼ�Ŀ¼
	system("pause");
	system("cls");
}

//����Ա��
void workermanger::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);//������ķ�ʽ�򿪡���д�ļ�

	//�����ݱ���
	for (int i = 0; i < this->m_empnum; i++)
	{
		ofs << this->m_emparry[i]->m_id << "  "
			<< this->m_emparry[i]->m_name << "  "
			<< this->m_emparry[i]->m_deptid << endl;
	}

	//�ر�
	ofs.close();
}

workermanger::~workermanger()
{
	if (this->m_emparry != NULL)
	{
		delete[] this->m_emparry;
		this->m_emparry = NULL;
	}
}