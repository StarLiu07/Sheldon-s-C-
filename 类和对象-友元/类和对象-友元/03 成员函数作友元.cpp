#include<iostream>
using namespace std;

class building11;
class goodgay1
{
public:
	goodgay1();
	
	void nvisit();//��visit���Է���building1�е�˽�г�Ա
	void visit2();//��visit2�����Է���building1�е�˽�г�Ա

	building11* Building;
};

class building11
{
	//���߱����� goodgay���µ�visit��Ա��������Ϊ����ĺ����ѣ����Է���˽�г�Ա
	friend void goodgay1::nvisit();

public:
	building11();

public:
	string m_sittingroom;

private:
	string m_bedroom;
};

//����д��Ա����
building11::building11()
{
	m_sittingroom = "����";
	m_bedroom = "����";
}

goodgay1::goodgay1()
{
	Building = new building11;
}

void goodgay1::nvisit()
{
	cout << "nvisit���ڷ���:" << Building->m_sittingroom << endl;
	cout << "nvisit���ڷ���:" << Building->m_bedroom << endl;
}


void goodgay1::visit2()
{
	cout << "visit2���ڷ���:" << Building->m_sittingroom << endl;
	//cout << "visit2���ڷ���:" << Building->m_bedroom << endl;
}

void test03()
{
	goodgay1 gg1;
	gg1.nvisit();
	gg1.visit2();
}

int main() {

	test03();

	system("pause");

	return 0;
}