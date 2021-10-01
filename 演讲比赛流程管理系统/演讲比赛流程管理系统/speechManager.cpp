#include "speechManager.h"

//���캯��
speechManager::speechManager()
{
	//��ʼ������������
	this->initspeech();

	//����12��ѡ��
	this->createspeaker();
}

//�˵�����
void speechManager::show_menu()
{
	cout << "*****************************" << endl;
	cout << "******��ӭ�μ��ݽ�����*******" << endl;
	cout << "*******1.��ʼ�ݽ�����********" << endl;
	cout << "*******2.�鿴�����¼********" << endl;
	cout << "*******3.��ձ�����¼********" << endl;
	cout << "*******0.�˳���������********" << endl;
	cout << "*****************************" << endl;
	cout << endl;
}

//�˳�ϵͳ
void speechManager::exitsystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
}

//��ʼ������������
void speechManager::initspeech()
{
	//�������ÿ�
	this->v1.clear();
	this->v2.clear();
	this->vvicitory.clear();
	this->m_speaker.clear();

	//��ʼ����������
	this->m_index = 1;
}

//����12��ѡ��
void speechManager::createspeaker()
{
	string nameseed = "ABCDEFGHIJKL";
	for (int i = 0; i < nameseed.size(); i++)
	{
		string name = "ѡ��";
		name += nameseed[i];

		//�����˾���ѡ��
		speaker sp;
		sp.m_name = name;

		for (int j = 0; j < 2; j++)
		{
			sp.m_score[j] = 0;
		}

		//����ѡ�ֱ�� ���ҷ��뵽v1������
		this->v1.push_back(i + 10001);

		//ѡ�ֱ���Լ���Ӧѡ�� ���뵽map������
		this->m_speaker.insert(make_pair(i + 10001, sp));

	}
}

//��ʼ���� �����������̿��ƺ���
void speechManager::startspeech()
{
	//��һ�ֿ�ʼ����

	//1.��ǩ
	this->speechdraw();

	//2.����

	//3.��ʾ�������

	//�ڶ��ֿ�ʼ����
	
	//1.��ǩ

	//2.����

	//3.��ʾ���ս��

	//4.����������ļ���
}

//��ǩ
void speechManager::speechdraw()
{
	cout << "�� << " << this->m_index << " >> �ֱ���ѡ�����ڳ�ǩ" << endl;
	cout << "������������������������������������" << endl;
	cout << "��ǩ���ݽ�˳�����£�" << endl;

	if (this->m_index == 1)
	{
		//��һ�ֱ���
		random_shuffle(v1.begin(), v1.end());
		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
		{
			cout << *it << "  ";
		}
		cout << endl;
	}
	else
	{
		//�ڶ��ֱ���
		random_shuffle(v2.begin(), v2.end());
		for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
		{
			cout << *it << "  ";
		}
		cout << endl;
	}

	cout << "������������������������������������" << endl;
	system("pause");
}


//��������
speechManager::~speechManager()
{

}