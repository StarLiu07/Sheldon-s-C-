#include <iostream>
using namespace std;

/*
* ���
* ���غ������ò��������࣬�����Ϊ��������
* ��������ʹ�����ص�()ʹ����Ϊ���ƺ������ã�Ҳ�зº���
* 
* ���ʣ�
* �������󣨷º�������һ���࣬����һ������
*/

/*
* �ص㣺
* ����������ʹ��ʱ����������ͨ�����������ã������в����������з���ֵ
* �������󳬳���ͨ�����ĸ����������������Լ���״̬
* �������������Ϊ��������
*/

class myadd
{
public:
	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}
};

//1.����������ʹ��ʱ����������ͨ�����������ã������в����������з���ֵ
void test01()
{
	myadd myadd;
	cout << myadd(10, 10) << endl;
}

class myprint
{
public:

	myprint()
	{
		this->count = 0;
	}

	void operator()(string test)
	{
		cout << test << endl;
		this->count++;
	}

	int count; //�ڲ��Լ���״̬
};

//2.�������󳬳���ͨ�����ĸ����������������Լ���״̬
void test02()
{
	myprint myprint;
	myprint("Hello World");
	myprint("Hello World");
	myprint("Hello World");
	myprint("Hello World");

	cout << "myprint���ô���Ϊ��" << myprint.count << endl;
}

//3.�������������Ϊ��������

void doprint(myprint& mp, string test)
{
	mp(test);
}

void test03()
{
	myprint myprint;
	doprint(myprint, "Hello C++");
}

int main() {

	//test01();

	//test02();

	test03();

	system("pause");

	return 0;
}