#include <iostream>
using namespace std;

//����һ��ͨ�õ��࣬���г�Ա���Ϳ��Բ����嶨�ƣ���һ����������������

template<class nametype,class agetype>
class person1
{
public:
	person1(nametype name,agetype age)
	{
		this->m_name = name;
		this->m_age = age;
	}

	void showperosn()
	{
		cout << "name:" << this->m_name << " age:" << this->m_age << endl;
	}

	nametype m_name;
	agetype m_age;
};

void test03()
{
	person1<string, int> p1("�����", 999);
	p1.showperosn();
}

int main2() {

	system("pause");

	return 0;
}