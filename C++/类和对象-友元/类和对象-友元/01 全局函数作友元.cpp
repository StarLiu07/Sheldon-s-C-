#include<iostream>
using namespace std;

//��Ԫ��Ŀ�ľ�����һ������������ ������һ������˽�г�Ա
//��Ԫ�Ĺؼ���Ϊfriend

//��������
class building1
{
	//goodgay �� buildidng �ĺ����ѣ��������˽�г�Ա
	friend void goodgay(building1& house);

public:
	building1()
	{
		sittingroom = "����";
		bedroom = "����";
	}

public:
	string sittingroom;

private:
	string bedroom;
};

void goodgay(building1& house)
{
	cout << "�û������ڷ��ʣ�" << house.sittingroom << endl;
	cout << "�û������ڷ��ʣ�" << house.bedroom << endl;
}

void test01()
{
	building1 house2;
	goodgay(house2);
}

int main1() {

	test01();

	system("pause");

	return 0;
}