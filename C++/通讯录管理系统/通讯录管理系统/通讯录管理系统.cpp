#include<iostream>
using namespace std;
#include<string>

//�����˵��������û�ѡ���ܵĽ���
void showmenu1()
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

//�����ϵ�ˣ��������Ա����䣬��ϵ�绰����ͥסַ��
//��ϵ�˽ṹ��
struct people
{
	string name;
	string sex;
	int age;
	int phone;
	string home;
};

//ͨѶ¼�ṹ��
struct phone
{
	struct people perarr[];
};

//�����ϵ�˺���
void more(struct people peoarr[])
{
	for (int i = 0; i < 1000; i++)
	{
		people s;
		cout << "������" << endl;
		cin >> s.name;
		cout << "�Ա�" << endl;
		cin >> s.sex;
		cout << "���䣺" << endl;
		cin >> s.age;
		cout << "��ϵ�绰��" << endl;
		cin >> s.phone;
		cout << "��ͥסַ��" << endl;
		cin >> s.home;
		int temp = 0;
		for (int i = temp; i < 1000; i++)
		{
			peoarr[i].name = s.name;
			peoarr[i].sex = s.sex;
			peoarr[i].age = s.age;
			peoarr[i].phone = s.phone;
			peoarr[i].home = s.home;
			break;
		}
		temp = i;
		break;
	}
}

int main1() {

	/*ͨѶ¼��һ�����Լ�¼���ˡ�������Ϣ�Ĺ��ߡ����̳���Ҫ����C++��ʵ��һ��ͨѶ¼����ϵͳϵͳ����Ҫʵ�ֵĹ�������:
	�������ϵ��:��ͨѶ¼��������ˣ���Ϣ�������������Ա����䡢��ϵ�绰����ͥסַ)����¼1000��
	����ʾ��ϵ��:��ʾͨѶ¼��������ϵ����Ϣ
	��ɾ����ϵ��:������������ɾ��ָ����ϵ��
	��������ϵ��:���������鿴ָ����ϵ����Ϣ
	���޸���ϵ��:�������������޸�ָ����ϵ��
	�������ϵ��:���ͨѶ¼��������Ϣ
	���˳�ͨѶ¼:�˳���ǰʹ�õ�ͨѶ¼*/

	//����ͨѶ¼����
	struct people peoarr[1000];

	

	//�Ƴ����ܣ��˳�ͨѶ¼
	
	int select = 0;

	while (true)
	{
		showmenu1();
		cin >> select;  //�ռ��û�������

		if (select == 1)//�����ϵ��
		{
			more(peoarr);
			break;
		}
		else if (select == 2)//��ʾ��ϵ��
		{
			break;
		}
		else if (select == 3)//ɾ����ϵ��
		{
			break;
		}
		else if (select == 4)//������ϵ��
		{
			break;
		}
		else if (select == 5)//�޸���ϵ��
		{
			break;
		}
		else if (select == 6)//�����ϵ��
		{
			break;
		}
		else //�˳�ͨѶ¼
		{
			cout << "��ӭ�´�ʹ��" << endl;
			break;
		}
	}
	cout << "������" << peoarr[1].name << " �Ա�" << peoarr[1].sex << " ���䣺" << peoarr[1].age
		<< " ��ϵ�绰��" << peoarr[1].phone << " ��ͥסַ��" << peoarr[1].home << endl;
	
	

	system("pause");

	return 0;
}