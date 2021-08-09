#include<iostream>
using namespace std;

/*������Ҫ��ɲ���ΪCPU (���ڼ���)���Կ�(������ʾ)���ڴ���(���ڴ洢)
��ÿ�������װ��������࣬�����ṩ��ͬ�ĳ���������ͬ�����,����Intel�� �̺�Lenovo����
�����������ṩ�õ��Թ����ĺ��������ҵ���ÿ����������Ľӿ�
����ʱ��װ��̨��ͬ�ĵ��Խ��й���*/

//cpu����
class cpu
{
public:
	virtual  void calculate() = 0;
};

//�Կ�����
class videocard
{
public:
	virtual void display() = 0;
};

//�ڴ�������
class memory
{
public:
	virtual void storage() = 0;
};

//������
class computer
{
public:
	virtual void dowork() = 0;

};

//intel
//cpu���ࣨintel��
class intelcpu : public cpu
{
public:
	void calculate()
	{
		cout << "intel-cpu���ڼ���" << endl;
	}
};

//videocard���ࣨintel��
class intelvideocard : public videocard
{
public:
	void display()
	{
		cout << "intel-videocard������ʾ" << endl;
	}
};

//memory���ࣨintel��
class intelmemory : public memory
{
public:
	void storage()
	{
		cout << "intel-memory���ڴ洢" << endl;
	}
};

//lenovo
//cpu���ࣨlenovo��
class lenovocpu : public cpu
{
public:
	void calculate()
	{
		cout << "lenovo-cpu���ڼ���" << endl;
	}
};

//videocard���ࣨlenovo��
class lenovovideocard : public videocard
{
public:
	void display()
	{
		cout << "lenovo-videocard������ʾ" << endl;
	}
};

//memory���ࣨlenovo��
class lenovomemory : public memory
{
public:
	void storage()
	{
		cout << "lenovo-memory���ڴ洢" << endl;
	}
};

//����1
class computer1 : public computer
{
	void dowork()
	{
		//cpu
		cpu* c = new intelcpu;
		c->calculate();
		delete c;

		//�Կ�
		videocard* v = new intelvideocard;
		v->display();
		delete v;

		//�ڴ���
		memory* m = new intelmemory;
		m->storage();
		delete m;
	}
};

//����2
class computer2 : public computer
{
	void dowork()
	{
		//cpu
		cpu* c = new lenovocpu;
		c->calculate();
		delete c;

		//�Կ�
		videocard* v = new lenovovideocard;
		v->display();
		delete v;

		//�ڴ���
		memory* m = new lenovomemory;
		m->storage();
		delete m;
	}
};

//����3
class computer3 : public computer
{
	void dowork()
	{
		//cpu
		cpu* c = new intelcpu;
		c->calculate();
		delete c;

		//�Կ�
		videocard* v = new lenovovideocard;
		v->display();
		delete v;

		//�ڴ���
		memory* m = new lenovomemory;
		m->storage();
		delete m;
	}
};

void test07()
{
	cout << "����1" << endl;
	computer* c1 = new computer1;
	c1->dowork();
	delete c1;

	cout << "\n����������������������������" << endl;

	cout << "\n����2" << endl;
	computer* c2 = new computer2;
	c2->dowork();
	delete c2;

	cout << "\n����������������������������" << endl;

	cout << "\n����3" << endl;
	computer* c3 = new computer3;
	c3->dowork();
	delete c3;
}

int main() {

	test07();

	system("pause");

	return 0;
}
//ohhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh

