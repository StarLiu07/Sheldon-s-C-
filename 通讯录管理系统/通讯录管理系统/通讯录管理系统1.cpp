#include<iostream>
using namespace std;
#define MAX 1000 //���ֵ

//�����˵��������û�ѡ���ܵĽ���
void showmenu()
{
	cout << "************************" << endl;
	cout << "***** 1.�����ϵ�� *****" << endl;
	cout << "***** 2.��ʾ��ϵ�� *****" << endl;
	cout << "***** 3.ɾ����ϵ�� *****" << endl;
	cout << "***** 4.������ϵ�� *****" << endl;
	cout << "***** 5.�޸���ϵ�� *****" << endl;
	cout << "***** 6.�����ϵ�� *****" << endl;
	cout << "***** 0.�˳�ͨѶ¼ *****" << endl;
	cout << "************************" << endl;
}

//��ϵ�˽ṹ��
struct person
{
	string name;
	string sex;
	int age;
	string phone;
	string home;
};

//ͨѶ¼�ṹ��
struct addressbooks
{
	//ͨѶ¼�б������ϵ������
	struct person personarry[MAX];

	//ͨѶ¼�е�ǰά������ϵ�˸���
	int m_size;
};

//1.�����ϵ��
void addperson(addressbooks* p)
{
	//�ж�ͨѶ¼�Ƿ�������������˾Ͳ������
	if (p->m_size == MAX)
	{
		cout << "ͨѶ¼�������޷���ӣ�" << endl;
	}
	else
	{
		//�����ϵ��
		//����
		string name;
		cout << "������һ��������" << endl;
		cin >> name;
		p->personarry[p->m_size].name = name;//��->��ԭ���ǵ�ָ����Ҫ���ʽṹ�����������Ҫ��->
		
		//�Ա�
		string sex;
		cout << "������һ���Ա�" << endl;
		cin >> sex;
		p->personarry[p->m_size].sex = sex;


		//����
		int age;
		cout << "������һ�����䣺" << endl;
		cin >> age;
		p->personarry[p->m_size].age = age;


		//��ϵ��ʽ
		string phone;
		cout << "������һ���绰���룺" << endl;
		cin >> phone;
		p->personarry[p->m_size].phone = phone;

		//��ͥ��ַ
		string address;
		cout << "������һ��סַ��" << endl;
		cin >> address;
		p->personarry[p->m_size].home = address;

		p->m_size++;

		cout << "��ӳɹ�" << endl;

		system("pause");

		system("cls");
	}
}

//��ʾ��ϵ�˵ĺ���
void showperson(addressbooks* abs)
{
	if (abs->m_size == 0)
	{
		cout << "����ͨѶ¼��û���ˣ��밴1���" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_size; i++)
		{

			cout << "������" << abs->personarry[i].name << " �Ա�" << abs->personarry[i].sex
				<< " ���䣺" << abs->personarry[i].age << " ��ϵ��ʽ��" << abs->personarry[i].phone
				<< " סַ��" << abs->personarry[i].home << endl;
		}
	}
	system("pause");
	system("cls");
}

//�����ϵ���Ƿ���ڣ�������ڣ�������ϵ���������е�λ�ã������ڣ�����-1
int isexist(addressbooks* p1,string name)
{
	for (int i = 0; i < p1->m_size; i++)//����������˶�����һ��
	{
		if (p1->personarry[i].name == name)//��ͨѶ¼���������ҪѰ�ҵ����ֽ��жԱ�
		{
			return i;//���ش����������е��±�
		}
	}
	return -1;//�����û�ҵ��ͷ���-1
}

//ɾ��ָ������ϵ��
void deleteperson(addressbooks* abs)
{
	cout << "��������Ҫɾ������ϵ�˵�����" << endl;

	string name;
	cin >> name;
	int ret = isexist(abs, name);
	if (ret != -1)
	{
		//�鵽
		for (int i = ret; i < abs->m_size; i++)
		{
			abs->personarry[i] = abs->personarry[i + 1];
		}
		abs->m_size--;
		cout << "ɾ���ɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}


//������ϵ�˺���
void findperson(addressbooks* abs)
{
	cout << "��������Ҫ���ҵ���Ա������" << endl;
	string name;
	cin >> name;

	int num = isexist(abs, name);
	if (num != -1)
	{
		cout << "������" << abs->personarry[num].name << " �Ա�" << abs->personarry[num].sex
			<< " ���䣺" << abs->personarry[num].age << " ��ϵ��ʽ��" << abs->personarry[num].phone
			<< " סַ��" << abs->personarry[num].home << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}

//�޸���ϵ�˺���
void modifyperson(addressbooks* abs)
{
	cout << "��������Ҫ�޸ĵ���Ա����" << endl;
	string name;
	cin >> name;
	int i = isexist(abs, name);
	if (i != -1)
	{
		//����
		cout << "�������޸ĺ�����֣�" << endl;
		string name1;
		cin >> name1;
		abs->personarry[i].name = name1;

		//�Ա�
		cout << "�������޸ĺ���Ա�" << endl;
		string sex;
		cin >> sex;
		abs->personarry[i].sex = sex;

		//����
		cout << "�������޸ĺ�����䣺" << endl;
		int age;
		cin >> age;
		abs->personarry[i].age = age;

		//��ϵ��ʽ
		cout << "�������޸ĺ����ϵ��ʽ��" << endl;
		string phone;
		cin >> phone;
		abs->personarry[i].phone = phone;

		//סַ
		cout << "�������޸ĺ��סַ��" << endl;
		string home;
		cin >> home;
		abs->personarry[i].home = home;

		system("pause");
		system("cls");
	}
	else
	{
		cout << "���޴���" << endl;
	}
}

//�����ϵ�˺���
void cleanperson(addressbooks* abs)
{
	abs->m_size = 0;
	cout << "ͨѶ¼�����" << endl;
	system("psuse");
	system("cls");
}

int main() {

	//����ͨѶ¼�ṹ�����
	addressbooks abs;
	//��ʼ��ͨѶ¼�е�ǰ����Ա����
	abs.m_size = 0;

	
	int select = 0;

	while (true)
	{
		showmenu();
		cin >> select;  //�ռ��û�������

		if (select == 1)//�����ϵ��
		{
			addperson(&abs);//���õ�ַ���ݿ�������ʵ��
		}
		else if (select == 2)//��ʾ��ϵ��
		{
			showperson(&abs);
		}
		else if (select == 3)//ɾ����ϵ��
		{
			deleteperson(&abs);
		}
		else if (select == 4)//������ϵ��
		{
			findperson(&abs);
		}
		else if (select == 5)//�޸���ϵ��
		{
			modifyperson(&abs);
		}
		else if (select == 6)//�����ϵ��
		{
			cleanperson(&abs);
		}
		else //�˳�ͨѶ¼
		{
			cout << "��ӭ�´�ʹ��" << endl;
			break;
		}
	}

	system("pause");

	return 0;
}