#include<iostream>
using namespace std;

/*������:
��Ա�������const�����ǳ�Ϊ�������Ϊ������
���������ڲ������޸ĳ�Ա����
����Ա��������ʱ�ӹؼ���mutable���ڳ���������Ȼ�����޸�*/

/*������:
  ��������ǰ��const�Ƹö���Ϊ
  �����󳣶���ֻ�ܵ��ó�����*/

//������
class Person
{
public:
	//thisָ��ı��ʣ�ָ�볣�� ָ���ָ�򲻿����޸�
	//�ڳ�Ա�����������const�����ε���thisָ�룬��ʱָ��ָ���ֵҲ���ܸ�
	void showperson() const
	{
		this->m_b = 200;
		//this->m_a = 100;
	}

	void func()
	{

	}

	int m_a;
	mutable int m_b;//�����������ʹ�ڳ�������Ҳ�����޸����ֵ ��ӹؼ���mutacle
};

void Test01()
{
	Person p;
	p.showperson();
}

//������
void Test02()
{
	const Person p;//�ڶ���ǰ��const����Ϊ������
	//p.m_a = 300;
	p.m_b = 400;//m_b������������ڳ�������Ҳ���޸�

	//������ֻ�ܵ��ó�����
	p.showperson();
	//p.func();//�������ܵ�����ͨ��Ա��������Ϊ��ͨ��Ա���������޸�����
}

int main() {

	system("pause");

	return 0;
}