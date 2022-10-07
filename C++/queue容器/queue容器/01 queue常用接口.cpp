#include <iostream>
using namespace std;
#include <queue>

/*
* ���캯��
* queue<T> que;  queue����ģ����ʵ�֣�queue�����Ĭ�Ϲ�����ʽ
* queue(const queue &que)  �������캯��
* 
* ��ֵ����
* queue& operator=(const queue &que);  ���صȺŲ�����
* 
* ���ݴ�ȡ
* push(elem);  ����β���Ԫ��
* pop();  �Ӷ�ͷ�Ƴ���һ��Ԫ��
* back();  �������һ��Ԫ��
* front();  ���ص�һ��Ԫ��
* 
* ��С����
* empty();  �ж϶�ջ�Ƿ�Ϊ��
* size();  ����ջ�Ĵ�С
*/

class person
{
public:
	person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}

	string m_name;
	int m_age;
};

void test01()
{
	//��������
	queue<person> q;

	//׼������
	person p1("��ɮ", 30);
	person p2("�����", 1000);
	person p3("��˽�", 900);
	person p4("ɳɮ", 800);

	//���
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	cout << "���д�СΪ��" << q.size() << endl;

	//�ж�ֻҪ���в�Ϊ�գ��鿴��ͷ���鿴��β������
	while (!q.empty())
	{
		//�鿴��ͷ
		cout << "��ͷԪ�� ���� ������" << q.front().m_name << " ���䣺" << q.front().m_age << endl;

		//�鿴��β
		cout << "��βԪ�� ���� ������" << q.back().m_name << " ���䣺" << q.back().m_age << endl;

		//����
		q.pop();
	}

	cout << "���д�СΪ��" << q.size() << endl;
}

int main() {

	test01();

	system("pause");

	return 0;
}