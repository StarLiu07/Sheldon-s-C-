#include<iostream>
using namespace std;
#include<string>

//���ã��ṹ���еĳ�Ա��������һ���ṹ��
//���磺ÿ����ʦ����һ��ѧԱ��һ����ʦ�Ľṹ���У���¼һ��ѧ���Ľṹ��

//����ѧ���ṹ��
struct student
{
	string name;
	int age;
	int score;

};

//������ʦ�ṹ��
struct teacher
{
	int id;
	string name;
	int age;
	struct student stu;
};

int main4() {

	//������ʦ
	teacher t;
	t.id = 10000;
	t.name = "����";
	t.age = 50;
	t.stu.name = "����";
	t.stu.age = 18;
	t.stu.score = 100;
	cout << "��ʦ������" << t.name << " ��ʦ��ţ�" << t.id << " ��ʦ���䣺" << t.age << endl;
	cout << "ѧ��������" << t.stu.name << " ѧ�����䣺" << t.stu.age << " ѧ��������" << t.stu.score << endl;

	system("pause");

	return 0;
}