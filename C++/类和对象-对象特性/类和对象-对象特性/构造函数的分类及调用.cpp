#include<iostream>
using namespace std;

/*���ַ��෽ʽ:
��������Ϊ:�вι�����޲ι���
�����ͷ�Ϊ:��ͨ����Ϳ�������
���ֵ��÷�ʽ:
���ŷ�
��ʾ��
��ʾ����ʽת����*/

//1.����
class person
{
public:
	//���캯��
	person() //�޲ι��� ��Ҳ��Ĭ�Ϲ��죩
	{
		cout << "person�޲ι��캯������" << endl;
	}
	person(int a) //�вι���
	{
		age = a;
		cout << "person�вι��캯������" << endl;
	}

	//�������캯��
	person(const person& p)
	{
		//��������������������Կ�����������
		age = p.age;
		cout << "�������캯���ĵ���" << endl;
	}

	//��������
	~person()
	{
		cout << "person������������" << endl;
	}
	int age;
};
//����
void test01()
{
	//1.���ŷ�
	//person p; //Ĭ�Ϲ��캯������
	//person p2(10); //�����вι��캯��
	//person p3(p2); //���ÿ�����������

	//ע������
	//����Ĭ�Ϲ����ʱ�򣬲�Ҫ��(),��Ϊ����������Ϊ��һ����������
	//person p();

	//cout << "p2�����䣺" << p2.age << endl;
	//cout << "p3�����䣺" << p3.age << endl;

	//2.��ʾ��
	person p1;
	person p2 = person(10);
	person p3 = person(p2);

	//	person(10);//��������  �ص㣺��ǰ��ִ�н�����ϵͳ���������յ���������
	//ע������2����Ҫ���ÿ������캯������ʼ����������  ����������Ϊperson (p3) == person p3;

	//��ʽת����
	person p4 = 10; // �൱��д�� person p4 = person(10); �вι���
	person p5 = p4; // ��������	 
}

int main2() {

	test01();

	system("pause");

	return 0;
}