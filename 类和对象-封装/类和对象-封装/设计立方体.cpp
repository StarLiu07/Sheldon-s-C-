#include<iostream>
using namespace std;

/*������ϰһ��
����������ࣨcube��
������������������
�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����
*/

class cube
{
public:
	//���������a*a
	int mj(int a)
	{
		if (a < 0)
		{
			cout << "�߳�����Ϊ����" << endl;
			return 0;
		}
		else
		{
			m_a = a;
			return a * a;
		}
	}

	//���������a*a*a
	int tj(int a)
	{
		if (a < 0)
		{
			cout << "�������Ϊ����" << endl;
			return 0;
		}
		else
		{
			m_a = a;
			return a * a * a;
		}
	}

	//��Ա�����Ƚϴ�С
	void m_than(int a, int b)
	{
		if (a != b)
		{
			cout << "�������������岻���" << endl;
		}
		else
		{
			cout << "�����������������" << endl;
		}
	}

private:
	//�߳�
	int m_a;
};

//ȫ�ֺ����Ƚϴ�С
void than(int a, int b)
{
	if (a != b)
	{
		cout << "�������������岻���" << endl;
	}
	else
	{
		cout << "�����������������" << endl;
	}
}

int main5() {

	//������1
	cube l1;
	int t1 = l1.tj(3);
	cout << "������1�����Ϊ��" << t1 << endl;
	cout << "������1�����Ϊ��" << l1.mj(3) << endl;

	//������2
	cube l2;
	int t2 = l2.tj(5);
	cout << "\n������2�����Ϊ��" << t2 << endl;
	cout << "������2�����Ϊ��" << l2.mj(5) << endl;

	//ȫ�ֺ����Ƚϴ�С
	cout << "\nʹ��ȫ�ֺ����Ƚϴ�С" << endl;
	than(t1, t2);

	//��Ա�����Ƚϴ�С
	cout << "\nʹ�ó�Ա�����Ƚϴ�С" << endl;
	cube bi;
	bi.m_than(t1, t2);

	system("pause");

	return 0;
}
//ohhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh