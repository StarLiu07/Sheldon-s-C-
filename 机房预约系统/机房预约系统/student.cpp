#include "student.h"


//Ĭ�Ϲ���
Student::Student()
{

}

//�вι���  ������ ѧ�š�����������
Student::Student(int id, string name, string pwd)
{
	//��ʼ������
	this->m_id = id;
	this->m_name = name;
	this->m_Pwd = pwd;

	//��ʼ��������Ϣ
	ifstream ifs;
	ifs.open(COMPUTER_FILE,ios::in);
	
	ComputerRoom com;
	while (ifs >> com.m_ComId && ifs >> com.m_MaxNum)
	{
		//����ȡ����Ϣ���뵽������
		vCom.push_back(com);
	}

	ifs.close();
}

//�˵�����
void Student::opermenu()
{
	cout << "��ӭѧ������" << this->m_name << "��¼��" << endl;
	cout << "\t\t----------------------------------------\n";
	cout << "\t\t|                                      |\n";
	cout << "\t\t|             1.����ԤԼ               |\n";
	cout << "\t\t|                                      |\n";
	cout << "\t\t|             2.�鿴�ҵ�ԤԼ           |\n";
	cout << "\t\t|                                      |\n";
	cout << "\t\t|             3.�鿴����ԤԼ           |\n";
	cout << "\t\t|                                      |\n";
	cout << "\t\t|             4.ȡ��ԤԼ               |\n";
	cout << "\t\t|                                      |\n";
	cout << "\t\t|             0.ע����¼               |\n";
	cout << "\t\t|                                      |\n";
	cout << "\t\t----------------------------------------\n";
	cout << "��ѡ�����Ĳ�����" << endl;

}

//����ԤԼ
void Student::applyorder()
{
	cout << "������ʼ�ŵ�ʱ��Ϊ ��һ������" << endl;
	cout << "����������ԤԼ��ʱ�䣺" << endl;
	cout << "1.��һ" << endl;
	cout << "2.�ܶ�" << endl;
	cout << "3.����" << endl;
	cout << "4.����" << endl;
	cout << "5.����" << endl;


	int date = 0; //����
	int interval = 0; //ʱ���
	int room = 0; //�������

	while (true)
	{
		cin >> date;
		if (date >= 1 && date <= 5)
		{
			break;
		}
		cout << "������������������" << endl;
	}

	cout << "����������ԤԼ��ʱ���" << endl;
	cout << "1.����" << endl;
	cout << "2.����" << endl;

	while (true)
	{
		cin >> interval;
		if (interval >= 1 && interval <= 2)
		{
			break;
		}
		cout << "������������������" << endl;
	}

	cout << "��ѡ�������" << endl;
	for (int i = 0; i < vCom.size(); i++)
	{
		cout << vCom[i].m_ComId << "�Ż�������Ϊ��" << vCom[i].m_MaxNum << endl;
	}
	
	while (true)
	{
		cin >> room;
		if (room >= 1 && room <= 3)
		{
			break;
		}
		cout << "������������������" << endl;
	}

	cout << "ԤԼ�ɹ��������" << endl;

	ofstream ofs;
	ofs.open(ORDER_FILE, ios::app);

	ofs << "date:" << date << " ";
	ofs << "interval:" << interval << " ";
	ofs << "stuId:" << this->m_id << " ";
	ofs << "stuName:" << this->m_name << " ";
	ofs << "roomId:" << room << " ";
	ofs << "status:" << 1 << endl;

	ofs.close();

	system("pause");
	system("cls");
}

//�鿴����ԤԼ
void Student::showmyorder()
{
	OrderFile of;
	if (of.m_Size == 0)
	{
		cout << "��ԤԼ��¼" << endl;
		system("pause");
		system("cls");
		return;
	}

	for (int i = 0; i < of.m_Size; i++)
	{
		//string ת int
		//string ���� .c_str() ת const char *
		//���� atoi (const char*) ת int
		if (this->m_id == atoi(of.m_orderData[i]["stuId"].c_str())) //�ҵ�����ԤԼ
		{
			cout << "ԤԼ���ڣ���" << of.m_orderData[i]["date"];
			cout << "ʱ��Σ�" << (of.m_orderData[i]["interval"] == "1" ? "����" : "����");
			cout << "�����ţ�" << of.m_orderData[i]["roomId"];
			string status = "״̬��";
			//1 ����� 2��ԤԼ  -1 ԤԼʧ�� 0ȡ��ԤԼ
			if(of.m_orderData[i]["status"] == "1")
			{
				status += "�����";
			}
			else if(of.m_orderData[i]["status"] == "2")
			{
				status += "ԤԼ�ɹ�";
			}
			else if (of.m_orderData[i]["status"] == "-1")
			{
				status += "ԤԼʧ�ܣ����δͨ��";
			}
			else
			{
				status += "ԤԼ��ȡ��";
			}
			cout << status << endl;

		}
	}

	system("pause");
	system("cls");
}

//�鿴����ԤԼ
void Student::showallorder()
{
	OrderFile of;
	if (of.m_Size == 0)
	{
		cout << "��ԤԼ��¼" << endl;
		system("pause");
		system("cls");
		return;
	}

	for (int i = 0; i < of.m_Size; i++)
	{
		cout
	}
}

//ȡ��ԤԼ
void Student::cancelorder()
{

}