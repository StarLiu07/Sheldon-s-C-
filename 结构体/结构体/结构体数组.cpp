#include<iostream>
using namespace std;

//�ṹ���������ã����Զ���Ľṹ����������з���ά��
//�﷨��struct �ṹ���� ������[Ԫ�ظ���] = {{},{},...{}}

//1.����ṹ��
struct student
{
	string name;

	int age;

	int score;
};


int main2() {

//2.�����ṹ������
	struct student arr[] =
	{
		{"����",18,100},
		{"����",19,80},
		{"����",20,60}
	};

//3.���ṹ�������е�Ԫ�ظ�ֵ
	arr[2].name = "����";
	arr[2].age = 30;
	arr[2].score = 66;

//4.�����ṹ������
	for (int i = 0; i < 3; i++)
	{
		cout << "������" << arr[i].name << " ���䣺" << arr[i].age << " ������" << arr[i].score << endl;
	}


	system("pause");

	return 0;
}