#include<iostream>
using namespace std;

class building
{
	friend  class goodgay;//goodgay���Ǳ���ĺ����ѣ����Է���˽�г�Ա	

public:
	building();

public:
	string m_sittingroom; //����

private:
	string m_bedroom; //����
};

class goodgay
{
	

public:
	goodgay();

public:


	void visit();//�ιۺ��� ����building�е�����

	building* Building;
};

//����д��Ա����
building::building()
{
	m_sittingroom = "����";
	m_bedroom = "����";
}

goodgay::goodgay()
{
	//�������������
	Building = new building;
}

void goodgay::visit()
{
	cout << "�û������ڷ��ʣ�" << Building->m_sittingroom << endl;
	cout << "�û������ڷ��ʣ�" << Building->m_bedroom << endl;
}

void test02()
{
	goodgay gg;
	gg.visit();
}

int main2() {

	test02();

	system("pause");

	return 0;
}