#include<iostream>
using namespace std;

/*C++���������ٸ�һ�������4������
1.Ĭ�Ϲ��캯��(�޲Σ�������Ϊ��)
2.Ĭ����������(�޲Σ�������Ϊ��)
3.Ĭ�Ͽ������캯���������Խ���ֵ����
4.��ֵ�����operator=,�����Խ���ֵ����
�������������ָ�����������ֵ����ʱҲ�������ǳ��������*/

class person3
{
public:

	person3(int age)
	{
		m_age = new int(age);
	}

	~person3()
	{
		//����ԭ�򣺶����ڴ��ظ��ͷ�
		//���������ͨ��������ǳ����������
		if (m_age != NULL)
		{
			delete m_age;
			m_age = NULL;
		}

	}

	//���� ��ֵ�����
	//����Ҫ����һ��ָ�룬�������ֵ�Ļ��ͻ��ٿ���һ��
	person3 & operator=(person3& p)
	{

		//���ж��Ƿ��������ڶ���������о����ͷŸɾ����ڽ������
		if (m_age != NULL)
		{
			delete m_age;
			m_age = NULL;
		}

		//�������
		m_age = new int(*p.m_age);

		//��������
		return *this;
	}

	int * m_age;
};

void test07()
{
	person3 p1(10);

	person3 p2(20);

	person3 p3(30);

	p3 = p1 = p2;//��ֵ����

	cout << "p1������Ϊ��" << *p1.m_age << endl;

	cout << "p2������Ϊ��" << *p2.m_age << endl;

	cout << "p3������Ϊ��" << *p3.m_age << endl;
}

int main5() {

	test07();

	system("pause");

	return 0;
}