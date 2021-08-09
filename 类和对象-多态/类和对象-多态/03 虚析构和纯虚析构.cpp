#include<iostream>
using namespace std;

/*�������ʹ�����������:
�����Խ������ָ���ͷ��������
����Ҫ�о���ĺ���ʵ��
�������ʹ�����������:
����Ǵ����������������ڶ����࣬�޷�ʵ��������*/

class animal1
{
public:

	animal1()
	{
		cout << "animal1���캯������" << endl;
	}

	//�������������Խ�� ����ָ���ͷ��������ʱ���ɾ�������
	//virtual ~animal1()
	//{
	//	cout << "animal1������������" << endl;
	//}

	//��������
	virtual ~animal1() = 0;

	//���麯��  ��Ҫ����Ҳ��Ҫʵ��
	//���˴��������������Ҳ���ڳ����࣬�޷�ʵ��������
	virtual void speak() = 0;
};
animal1::~animal1()
{
	cout << "animal1����������������" << endl;
}

class cat1 : public animal1
{
public:

	cat1(string name)
	{
		cout << "cat1�Ĺ��캯������" << endl;
		m_name = new string(name);
	}

	~cat1()
	{
		if (m_name != NULL)
		{
			cout << "cat1������������" << endl;
			delete m_name;
			m_name = NULL;
		}
	}

	void speak()
	{
		cout << *m_name << "Сè��˵��" << endl;
	}

	string* m_name;
};

void test06()
{
	animal1* animal = new cat1("Tom");
	animal->speak();
	//����ָ��������ʱ��  ������������е�����������������������ж������ԣ������ڴ�й¶
	delete animal;
}

int main5() {

	test06();

	system("pause");

	return 0;
}