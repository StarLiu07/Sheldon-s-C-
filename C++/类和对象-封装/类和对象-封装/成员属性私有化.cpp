#include<iostream>
using namespace std;

//�ŵ�1�������г�Ա��������Ϊ˽�У������Լ����ƶ�дȨ��
//�ŵ�2������дȨ�ޣ����ǿ��Լ�����ݵ���Ч��

//�������
class person
{
public:
	//д����
	void setname(string name)
	{
		m_name = name;
	}

	//������
	string getname()
	{
		return m_name;
	}

	//��ȡ����
	int getage()
	{
		m_age = 0;//��ʼ������
		return m_age;
	}
	//��������
	void setage(int age)
	{
		if (age < 0 || age > 150)
		{
			m_age = 0;
			cout << "��Ǹ��������" << endl; 
			return;
		}
		m_age = age;
	}

	//�������� ��д
	void setlover(string lover)
	{
		lover = m_lover;
	}

private:
	//���� �ɶ���д
	string m_name;

	//���� �ɶ���д ������޸�(����ķ�Χ������0~150֮��)
	int m_age ;

	//���� ֻд
	string m_lover;
};

int mai4n() {

	person p;
	//p.m_name = "����";
	p.setname("����");
	cout <<"����Ϊ��" <<  p.getname() << endl;

	p.setage(1000);
	cout << "����Ϊ��" << p.getage() << endl;

	p.setlover("����");

	system("pause");

	return 0;
}