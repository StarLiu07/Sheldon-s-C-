#include<iostream>
using namespace std;

/*��ģ���г�Ա��������ͨ���г�Ա��������ʱ�����������
1.��ͨ���еĳ�Ա����һ��ʼ�Ϳ��Դ���
2.��ģ���еĳ�Ա�����ڵ���ʱ�Ŵ���*/

class person3
{
public:
	void showperson3()
	{
		cout << "person3 show" << endl;
	}
};

class person4
{
public:
	void showperson4()
	{
		cout << "person4 show" << endl;
	}
};

template<class T>
class myclass
{
public:

	T obj;

	//��ģ���еĳ�Ա����
	void func1()
	{
		obj.showperson3();
	}
	void func2()
	{
		obj.showperson4(); 
	}
};

void test06()
{
	myclass<person3> m;
	m.func1();
	// m.func2();
}

int main4() {

	test06();

	system("pause");

	return 0;
}