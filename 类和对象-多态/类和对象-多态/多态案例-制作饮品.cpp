#include<iostream>
using namespace std;

//����������������Ʒ�Ĵ�������Ϊ����ˮ-����-���뱭��-���븨��
//���ö�̬����ʵ�ֱ��������ṩ����������Ʒ���࣬�ṩ�����������ȺͲ�Ҷ

class abstactdringk
{
public:
	//��ˮ
	virtual void boil() = 0;

	//����
	virtual void brew() = 0;

	//���뱭��
	virtual void pourincup() = 0;

	//���븨��
	virtual void putsomething() = 0;

	void makedrink()
	{
		
		boil();
		brew();
		pourincup();
		putsomething();
		
	}

};

class coffee : public abstactdringk
{
public:
	//��ˮ
	virtual void boil()
	{
		cout << "��ˮ" << endl;
	}

	//����
	virtual void brew()
	{
		cout << "���ݿ���" << endl;
	}

	//���뱭��
	virtual void pourincup()
	{
		cout << "���뱭��" << endl;
	}

	//���븨��
	virtual void putsomething()
	{
		cout << "���Ǻ�ţ��" << endl;
	}

};

class tea : public abstactdringk
{
public:
	//��ˮ
	virtual void boil()
	{
		cout << "��ˮ" << endl;
	}

	//����
	virtual void brew()
	{
		cout << "���ݲ�Ҷ" << endl;
	}

	//���뱭��
	virtual void pourincup()
	{
		cout << "���뱭��" << endl;
	}

	//���븨��
	virtual void putsomething()
	{
		cout << "������" << endl;
	}
};

void test05()
{
	//����
	abstactdringk* abc = new coffee;
	abc->makedrink();
	delete abc;

	cout << "����������������������������" << endl;

	//��
	abc = new tea;
	abc->makedrink();
	delete abc;
}
//��)

int main4() {

	test05();

	system("pause");

	return 0;
}