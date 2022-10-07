#include "����ʵ��.h"
#include "Ա��.h"
#include "����.h"
#include "����.h"
#include "�ϰ�.h"
#include <cstdlib>

//���캯��
workermanger::workermanger()
{

	//�ж��ļ��Ƿ�Ϊ��

	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	if (!ifs.is_open())
	{
		//cout << "�ļ�������" << endl;

		//��ʼ������
		//��ʼ����¼����
		this->emp_num = 0;
		//��ʼ������ָ��
		this->workerarry = NULL;
		//��ʼ���ļ��Ƿ�Ϊ��
		this->emp_file = true;


		ifs.close();
		return;
	}

	//�ļ����ڣ�����Ϊ��
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//	cout << "�ļ�Ϊ��" << endl;
	}
	
	int num = this->get_empnum();
	this->emp_num = num;

	this->workerarry = new worker * [this->emp_num];

	duqu();

	//for (int i = 0; i < 1; i++)
	//{
	//	cout << "��ţ�" << this->workerarry[i]->m_id << " "
	//		<< "������" << this->workerarry[i]->m_name << " "
	//		<< "ְλ��" << this->workerarry[i]->m_num << endl;

	//}
}

//��ʾ�˵�
void workermanger::showmenu()
{
	cout << "**********************************" << endl;
	cout << "*******��ӭʹ��Ա������ϵͳ*******" << endl;
	cout << "***********1.����Ա��*************" << endl;
	cout << "***********2.��ʾԱ��*************" << endl;
	cout << "***********3.ɾ��Ա��*************" << endl;
	cout << "***********4.�޸�Ա��*************" << endl;
	cout << "***********5.����Ա��*************" << endl;
	cout << "***********6.�������*************" << endl;
	cout << "***********7.���Ա��*************" << endl;
	cout << "**********************************" << endl;
	cout << endl;
	cout << "��ѡ����Ҫ���еĲ���" << endl;
}

//�˳��˵�
void workermanger::tui()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
	
}

//����Ա��
void workermanger::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);

	for (int i = 0; i < this->emp_num; i++)
	{
		ofs << this->workerarry[i]->m_id << "  "
		 << this->workerarry[i]->m_name << "  "
		 << this->workerarry[i]->m_num << endl;
	}

	ofs.close();
}

int workermanger::get_empnum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int did;

	int num = 0;

	while (ifs >> id && ifs >> name && ifs >> did)
	{
		num++;
	}

	ifs.close();

	return num;
}

//��ȡԱ��
void workermanger::duqu()
{
	//��ȡ�ļ�
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	
	int id;
	string name;
	int did;

	int index = 0;

	while (ifs >> id && ifs >> name && ifs >> did)
	{
		worker* worker = NULL;

		if (did == 1)
		{
			worker = new employee(id, name, did);
		}
		else if (did == 2)
		{
			worker == new manager(id, name, did);
		}
		else
		{
			worker = new boss(id, name, did);	
		}

		this->workerarry[index] = worker;

		index++;
	}

	ifs.close();
}

//����Ա��
void workermanger::addemp()
{
	int empnum;
	cout << "������Ҫ���ӵ�����" << endl;
	cin >> empnum;
	
	//�����¿ռ��С
	int newsize = this->emp_num + empnum;

	//�����¿ռ�
	worker** newspace = new worker * [newsize];

	//��ԭ���ռ��µ����ݿ������¿ռ�
	if (this->workerarry != NULL)
	{
		for (int i = 0; i < this->emp_num; i++)
		{
			newspace[i] = this->workerarry[i];
		}
	}


	for (int i = 0; i < empnum; i++)
	{
		int id;
		cout << "������Ա�����" << endl;
		cin >> id;

		string name;
		cout << "������Ա��������" << endl;
		cin >> name;

		int did;
		cout << "��ѡ��Ա������" << endl;
		cout << "1.Ա��" << endl;
		cout << "2.����" << endl;
		cout << "3.�ϰ�" << endl;
		cin >> did;

		worker* worker = NULL;
		switch (did)
		{
		case 1:
			worker = new employee(id, name, did);
			break;
		case 2:
			worker = new manager(id, name, did);
			break;
		case 3:
			worker = new boss(id, name, did);
		}
		newspace[this->emp_num + i] = worker;
	}
	//�ͷ�ԭ�пռ�
	delete[] this->workerarry;

	//�����¿ռ�ָ��
	this->workerarry = newspace;

	//����ְ������
	this->emp_num = newsize;

	this->save();


	system("pause");
	system("cls");
}

//��ʾԱ��
void workermanger::show_emp()
{
	//duqu();

	if (emp_file)
	{
		cout << "�ļ������ڻ��ļ�Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < this->emp_num; i++)
		{
			this->workerarry[i]->showemp();
		}
	}

	system("pause");
	system("cls");

}

//ɾ��Ա��
void workermanger::delete_emp()
{
	int id;
	cout << "������Ҫɾ����Ա�����" << endl;
	cin >> id;

	for (int i = 0; i < this->emp_num; i++)
	{
		if (id == workerarry[i]->m_id)
		{
			for (int j = 1; j < this->emp_num - 1; i++)
			{
				this->workerarry[i] = this->workerarry[i + 1];
			}
			this->emp_num--;

			this->save();
		}
	}

	system("pause");
	system("cls");
}

//�޸�Ա�� 
void workermanger::xiygai()
{
	int id = 0;
	cout << "������Ҫ�޸ĵ�Ա���ı��" << endl;
	cin >> id;

	for (int i = 0; i < this->emp_num; i++)
	{
		if (id == this->workerarry[i]->m_id)
		{
			cout << "���ҵ���Ա������Ա������Ϊ��" << this->workerarry[i]->m_name << endl;
			
			cout << "�������޸ĺ�ı�ţ�" << endl;
			cin >> this->workerarry[i]->m_id;

			cout << "�������޸ĺ��������" << endl;
			cin >> this->workerarry[i]->m_name;

			cout << "�������޸ĺ�Ĳ��ţ�" << endl;
			cout << "1.Ա��" << endl;
			cout << "2.����" << endl;
			cout << "3.�ϰ�" << endl;
			cin >> this->workerarry[i]->m_num;

			cout << "�޸ĺ����ϢΪ��" << endl;
			this->workerarry[i]->showemp();
		}
		else
		{
			cout << "δ�ҵ���Ա�������ʵ���ı��" << endl;
		}
	}

	this->save();

	system("pause");
	system("cls");
}

//����Ա��
void workermanger::find_emp()
{
	int id = 0;
	cout << "��������Ҫ���ҵ���Ա���" << endl;
	cin >> id;

	for (int i = 0; i < this->emp_num; i++)
	{
		if (id == this->workerarry[i]->m_id)
		{
			this->workerarry[i]->showemp();
		}
	}

	system("pause");
	system("cls");
}

//�������
void workermanger::sort_emp()
{
	int choose = 0;

	cout << "��ѡ����Ҫ���еķ�ʽ" << endl;
	cout << "1.��ְ����Ž�������" << endl;
	cout << "2.��ְ����Ž��н���" << endl;
	cin >> choose;

	for (int i = 0; i < this->emp_num; i++)
	{
		//�϶����ֵ����Сֵ
		int max = i;

		for (int j = i + 1; j < this->emp_num; j++)
		{
			//����
			if (choose == 1)
			{
				if (this->workerarry[max]->m_id > this->workerarry[j]->m_id)
				{
					max = j;
				}
			}
			//����
			else if (choose == 2)
			{
				if (this->workerarry[max]->m_id < this->workerarry[j]->m_id)
				{
					max = j;
				}

			}

			if (max != i)
			{
				worker* temp = this->workerarry[i];
				this->workerarry[i] = this->workerarry[max];
				this->workerarry[max] = temp;
			}
		}
	}

	cout << "�������" << endl;
	this->save();
	this->show_emp();
}

//�������
void workermanger::clean()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::trunc);//��ԭ���ļ�ɾ�����´���

	//ɾ��Ա��
	for (int i = 0; i < this->emp_num; i++)
	{
		delete this->workerarry[i];
		this->workerarry[i] = NULL;
	}

	this->workerarry = NULL;
	this->emp_num = 0;

	system("pause");
	system("cls");
}

//��������
workermanger::~workermanger()
{
	if (this->workerarry != NULL)
	{
		delete[] this->workerarry;
		this->workerarry = NULL;
	}
}