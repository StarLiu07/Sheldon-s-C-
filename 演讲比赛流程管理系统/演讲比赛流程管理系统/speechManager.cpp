#include "speechManager.h"

//���캯��
speechManager::speechManager()
{

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

//��������
speechManager::~speechManager()
{

}