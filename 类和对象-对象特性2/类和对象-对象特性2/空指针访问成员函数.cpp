#include<iostream>
using namespace std;

//C++�п�ָ��Ҳ�ǿ��Ե��ó�Ա�����ģ�����ҲҪע����û���õ�thisָ��
//����õ�thisָ�룬��Ҫ�����жϱ�֤����Ľ�׳��

class person01
{
public:
	void showclassname()
	{
		cout << "this is personclass" << endl;
	}

	void showpersonage()
	{
		//����ԭ������Ϊ�����ָ��ΪNULL

		if (this == NULL)
		{
			return;
		}

		cout << "age = " << m_age << endl;
	}

	int m_age;
};

void test()
{
	person01* p = NULL;
	p->showclassname();
	p->showpersonage();
}

int main6() {

	test();

	system("pause");

	return 0;
}