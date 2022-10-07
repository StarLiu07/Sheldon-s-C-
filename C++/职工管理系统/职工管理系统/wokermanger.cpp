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
		//cout << "�ļ�������" << endl;

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
		//	cout << "�ļ�Ϊ��" << endl;
	}

	//�ļ����ڣ����Ҽ�¼����
	int num = this->get_num();
	//cout << "ְ������Ϊ��" << num << endl;

	this->m_empnum = num;

	//���ٿռ�
	this->m_emparry = new worker * [this->m_empnum];
	init_emp();

	//���Դ���
	//for (int i = 0; i < this->m_empnum; i++)
	//{
	//	cout << "ְ����ţ�" << this->m_emparry[i]->m_id << "  ְ��������" << this->m_emparry[i]->m_name
	//		<< "  ���ű�ţ�" << this->m_emparry[i]->m_deptid << endl;
	//}
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

int workermanger::get_num()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int did;

	int num = 0; //��¼����
	
	while (ifs >> id && ifs >> name && ifs >> did)
	{
		num++;  //ͳ������
	}

	ifs.close();

	return num;
}

//��ʼ��Ա��
void workermanger::init_emp()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int did;

	int index = 0;
	
	while (ifs >> id && ifs >> name && ifs >> did)
	{
		worker* worker = NULL;
		if (did == 1)//��ְͨ��
		{
			worker = new employee(id, name, did);
		}
		else if (did == 2) //����
		{
			worker = new manager(id, name, did);
		}
		else //�ϰ�
		{
			worker = new boss(id, name, did);
		}

		this->m_emparry[index] = worker;

		index++;
	}

	ifs.close();
}

//��ʾְ��
void workermanger::showemp()
{
	//�ж��ļ��Ƿ�Ϊ��
	if (this->m_fileisempty)
	{
		cout << "�ļ�Ϊ�ջ򲻴���" << endl;
	}
	else
	{
		for (int i = 0; i < m_empnum; i++)
		{
			this->m_emparry[i]->showinfo();
		}
	}
	system("pause");
	system("cls");
}

//ɾ��ְ��
void workermanger::del_emp()
{
	if (this->m_fileisempty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}

	cout << "��������Ҫɾ����ְ���ı��" << endl;
	int id = 0;
	cin >> id;

	int index = this->isexist(id);

	if (index != -1)//˵��ְ�����ڣ�����Ҫɾ����indexλ���ϵ�ְ��
	{
		//����ǰ��
		for (int i = index; i < this->m_empnum - 1; i++)
		{
			this->m_emparry[i] = this->m_emparry[i + 1];
		}
		this->m_empnum--;//���������м�¼����Ա����

		//����ͬ�����µ��ļ���
		this->save();

		cout << "ɾ���ɹ�" << endl;
	}
	else
	{
		cout << "ɾ��ʧ�ܣ�δ�ҵ���ְ��" << endl;
	}

	//��������
	system("pause");
	system("cls");
}

//�ж�ְ���Ƿ���ڣ�������ڷ���ְ�����������е�λ�ã������ڷ���-1

int workermanger::isexist(int id)
{
	int index = -1;

	for (int i = 0; i < m_empnum; i++)
	{
		if (this->m_emparry[i]->m_id == id)
		{
			//�ҵ�ְ��
			index = i;
			break;
		}

	}
	return index;
}

//�޸�ְ��
void workermanger::mod_emp()
{
	if (this->m_fileisempty)
	{
		cout << "�ļ�Ϊ�ջ򲻴���" << endl;
	}
	else
	{
		cout << "��������Ҫ�޸ĵ�ְ���ı��" << endl;
		int id = 0;
		cin >> id;

		int index = this->isexist(id);

		if (index != -1) //�ҵ�ְ��
		{
			delete this->m_emparry[index];

			int newid;
			string newname;
			int newdid;

			cout << "���ҵ�" << id << "��Ա�����������µ�ְ�����" << endl;
			cin >> newid;

			cout << "�������µ�����" << endl;
			cin >> newname;

			cout << "�������µĲ��ű��" << endl;
			cout << "1.Ա��" << endl;
			cout << "2.����" << endl;
			cout << "3.�ϰ�" << endl;

			cin >> newdid;

			worker* worker = NULL;
			switch (newdid)
			{
			case 1:
				worker = new employee(newid, newname, newdid);
				break;
			case 2:
				worker = new manager(newid, newname, newid);
				break;
			case 3:
				worker = new boss(newid, newname, newid);
				break;
			}
			cout << "��ӳɹ�" << endl;
			this->m_emparry[index] = worker;

			this->save();
		}
		else
		{
			cout << "δ�ҵ���ְ��" << endl;
		}

	}
	system("pause");
	system("cls");
}

void workermanger::find_emp()
{
	if (this->m_fileisempty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else
	{
		cout << "��������ҷ�ʽ" << endl;
		cout << "1.��ְ����Ų���" << endl;
		cout << "2.��ְ����������" << endl;

		int select = 0;
		cin >> select;

		if (select == 1)//��Ų�
		{
			int id;
			cout << "������Ҫ���ҵ�ְ�����" << endl;
			cin >> id;

			int ret = isexist(id);
			if (ret != -1)
			{
				//�ҵ�ְ��
				cout << "���ҳɹ���ְ����Ϣ���£�" << endl;
				this->m_emparry[ret]->showinfo();
			}
			else
			{
				cout << "����ʧ�ܣ����޴���" << endl;
			}
		}
		else if (select == 2)//������
		{
			string name;
			cout << "��������ҵ�����" << endl;
			cin >> name;

			//�����ж��Ƿ�鵽�ı�־
			bool flag = false;//Ĭ��Ϊ�ҵ�

			for (int i = 0; i < this->m_empnum; i++)
			{
				if (this->m_emparry[i]->m_name == name)
				{
					cout << "���ҳɹ���ְ�����Ϊ��" << this->m_emparry[i]->m_id << "��ְ����Ϣ����" << endl;
					this->m_emparry[i]->showinfo();
					flag = true;
				}

			}
			if (flag == false)
			{
				cout << "����ʧ�ܣ����޴���" << endl;
			}
 		}
		else
		{
			cout << "����ѡ������" << endl;
		}
	}

	system("pause");
	system("cls"); 
}

//���������
void workermanger::sort_emp()
{
	if (this->m_fileisempty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "��ѡ������ʽ" << endl;
		cout << "1.����ְ���������" << endl;
		cout << "2.����ְ����Ž���" << endl;

		int select = 0;
		cin >> select;

		for (int i = 0; i < m_empnum; i++)
		{
			int mainormax = i;//������Сֵ�����ֵ�±�
			for (int j = i + 1; j < this->m_empnum; j++)
			{
				if (select == 1)
				{
					if (this->m_emparry[mainormax]->m_id > this->m_emparry[j]->m_id)
					{
						mainormax = j;
					}
				}
				else
				{
					if (this->m_emparry[mainormax]->m_id < this->m_emparry[j]->m_id)
					{
						mainormax = j;
					}
				}
			}
			//�ж�һ��ʼ�϶��� ��Сֵ �� ���ֵ �ǲ��Ǽ�������� ��Сֵ �����ֵ ������� ��������
			if (i != mainormax)
			{
				worker* temp = this->m_emparry[i];
				this->m_emparry[i] = this->m_emparry[mainormax];
				this->m_emparry[mainormax] = temp;
			}

		}
	}
	cout << "����ɹ����������" << endl;
	this->save();//����	
	this->showemp();//��ʾ
}

//����ļ�
void workermanger::clean_file()
{
	cout << "ȷ�������" << endl;
	cout << "1.ȷ��" << endl;
	cout << "2.����" << endl;

	int select = 0;
	cin >> select;

	if (select == 1)
	{
		ofstream ofs;
		ofs.open(FILENAME, ios::trunc);//ɾ���ļ������´���
		ofs.close();

		if (this->m_emparry != NULL)
		{
			//ɾ��������ÿ��ְ������
			for (int i = 0; i < this->m_empnum; i++)
			{
				delete this->m_emparry[i];
				m_emparry[i] = NULL;
			}

			//ɾ����������ָ��
			delete[] this->m_emparry;
			m_emparry = NULL;
			this->m_empnum = 0;
			this->m_fileisempty = true;
		}
		cout << "��ճɹ�" << endl;
	}
	system("pause");
	system("cls");

}

workermanger::~workermanger()
{
	if (this->m_emparry != NULL)
	{
		delete[] this->m_emparry;
		this->m_emparry = NULL;
	}
}