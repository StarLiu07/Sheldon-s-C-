#include<iostream>
using namespace std;

//��ǳ���������Ծ������⣬Ҳ�ǳ����ġ�����
//ǳ����:�򵥵ĸ�ֵ��������
//���:�ڶ�����������ռ䣬���п�������

class newperson
{
public:
	newperson()
	{
		cout << "newperson��Ĭ�Ϲ��캯������" << endl;
	}

	newperson(int age,int height)
	{
		m_height = new int(height);
		m_age = age;
		cout << "newperson���вι��캯������" << endl;
	}

	newperson(const newperson& p)
	{
		m_age = p.m_age;
		//m_height = p.m_height://������Ĭ��ִ�еľ������е���
		
		//���
		m_height = new int(*p.m_height);
	}

	~newperson()
	{
		//���������ٵ��������ͷŲ���
		if (m_height != NULL)
		{
			delete m_height;
			m_height = NULL;
		}

		cout << "newperson��������������" << endl;
	}

	int m_age;
	int* m_height;
};

void exam01()
{
	newperson p1(10 , 160);
	cout << "p1������Ϊ��" << p1.m_age << "���Ϊ��" << *p1.m_height << endl;

	newperson p2(p1);
	cout << "p2������Ϊ��" << p2.m_age << "���Ϊ��" << *p1.m_height << endl;
}

int main5() {

	exam01();

	system("pause");

	return 0;
}