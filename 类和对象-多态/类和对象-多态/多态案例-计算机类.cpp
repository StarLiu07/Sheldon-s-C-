#include<iostream>
using namespace std;

//��������:�ֱ�������ͨд���Ͷ�̬������ʵ��������������������ļ�������
/*��̬���ŵ�:
������֯�ṹ����
�ɶ���ǿ
����ǰ�ںͺ��ڵ���չ�Լ�ά��*/

//��ͨд��
class calculator
{
public:

	int getresult(string oper)
	{
		if (oper == "+")
		{
			return m_num1 + m_num2;
		}
		else if (oper == "-")
		{
			return m_num1 - m_num2;
		}
		else if (oper == "*")
		{
			return m_num1 * m_num2;
		}
	}
	//�������չ�µĹ��ܣ���Ҫ��Դ��
	//����ʵ������ �ᳫ����ԭ��
	//����ԭ�򣺶���չ���п��������޸Ľ��йر�

	int m_num1;
	int m_num2;
};

void test02()
{
	calculator c;
	c.m_num1 = 1;
	c.m_num2 = 2;
	cout << c.m_num1 << "+" << c.m_num2 << "=" << c.getresult("+") << endl;
}

//���ö�̬ʵ�ּ������

//ʵ�ּ����������
class absstractcalculator
{
public:
	virtual int getresult()
	{
		return 0;
	}

	int m_num1;
	int m_num2;
};

//�ӷ���������
class addcalculator : public absstractcalculator
{
public:
	virtual int getresult()
	{
		return m_num1 + m_num2;
	}

	int m_num1;
	int m_num2;
};

//������������
class subcalculator : public absstractcalculator
{
public:
	virtual int getresult()
	{
		return m_num1 - m_num2;
	}

	int m_num1;
	int m_num2;
};

//�˷���������
class mulcalculator : public absstractcalculator
{
public:
	virtual int getresult()
	{
		return m_num1 * m_num2;
	}

	int m_num1;
	int m_num2;
};

void test03()
{
	//�ӷ�����
	absstractcalculator* abc = new addcalculator;
	abc->m_num1 = 10;
	abc->m_num2 = 10;

	cout << abc->m_num1 << "+" << abc->m_num2 << "=" << abc->getresult() << endl;
	//�����ǵ�����
	delete abc;

	//��������
	abc = new subcalculator;
	abc->m_num1 = 10;
	abc->m_num2 = 10;

	cout << abc->m_num1 << "-" << abc->m_num2 << "=" << abc->getresult() << endl;
	delete abc;

	//�˷�����
	abc = new subcalculator;
	abc->m_num1 = 10;
	abc->m_num2 = 10;

	cout << abc->m_num1 << "*" << abc->m_num2 << "=" << abc->getresult() << endl;
	delete abc;
}

int main2() {

	test02();
	test03();

	system("pause");

	return 0;
}