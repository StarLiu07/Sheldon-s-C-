#include<iostream>
using namespace std;

//���ã����ṹ����Ϊ���������д���
/*���ݷ�ʽ�����֣�
1.ֵ����
2.��ַ����*/

//����ѧ���ṹ
struct student
{
	string name;
	int age;
	int score;
};

//1.ֵ����
void print1(struct student a)
{
	cout << "�Ӻ����� ������" << a.name << " ���䣺" << a.age << " ������" << a.score << endl;
}

//2.��ַ����
void print2(struct student *p)
{
	//cout << "�Ӻ���2�� ������" << (*p).name << " ���䣺" << (*p).age << " ������" << (*p).score << endl;
	//���淽��Ҳ�У���ͨ����->
	cout << "�Ӻ���2�� ������" << p->name << " ���䣺" << p->age << " ������" << p->score << endl;
}

int main5() {

	//�ṹ������������
	//��ѧ�����뵽һ�������У���ӡѧ���������е���Ϣ

	//�����ṹ�����
	struct student s;
	s.name = "����";
	s.age = 18;
	s.score = 100;

	cout << "��main�����д�ӡ ������" << s.name
		<< " ���䣺" << s.age
		<< " ������" << s.score << endl;

	print1(s);
	print2(&s);

	system("pause");

	return 0;
}