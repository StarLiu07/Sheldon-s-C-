#include<iostream>
using namespace std;

class base5
{
public:
	base5()
	{
		cout << "base5�Ĺ��캯��" << endl;
	}
	~base5()
	{
		cout << "base5����������" << endl;
	}
};

class son5 : public base5
{
public:
	son5()
	{
		cout << "son5���캯��" << endl;
	}
	~son5()
	{
		cout << "son5��������" << endl;
	}
};

void test06()
{
	//base5 b;

	//�̳��еĹ��������˳������
	//�ȹ��츸�࣬�ٹ������࣬����˳��͹����˳���෴
	son5 s;
}

int main4() {

	system("pause");

	return 0;
}