#include<iostream>
using namespace std;

/*��ģ���뺯��ģ��������Ҫ������
1.��ģ��û���Զ������Ƶ���ʹ�÷�ʽ
2.��ģ����ģ������б��п�����Ĭ�ϲ���*/

template<class nametype,class agetype = int>
class person2
{
public:

	person2(nametype name, agetype age)
	{
		this->m_name = name;
		this->m_age = age;
	}

	void showperson()
	{
		cout << "name:" << this->m_name << " age:" << this->m_age << endl;
	}

	nametype m_name;
	agetype m_age;
};

//1.��ģ��û���Զ������Ƶ���ʹ�÷�ʽ
void test04()
{
	//person2 p("�����", 1000);�����޷����Զ������Ƶ�
	person2<string, int> p("�����", 1000);
	p.showperson();
}

//2.��ģ����ģ������б��п�����Ĭ�ϲ���
void test05()
{
	person2<string> p1("��˽�", 999);

	p1.showperson();
}


int main3() {

	test04();

	test05();

	system("pause");

	return 0;
}