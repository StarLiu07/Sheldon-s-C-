#include<iostream>
using namespace std;

//����:ʹ��const����ֹ�����

//const��ʹ�ó���
struct student
{
	string name;
	int age;
	int score;
};

//�������е��βθ�Ϊָ�룬���Լ��ٱ�ռ�õĿռ䣬���Ҳ��Ḵ���µĸ�������
void print(const student *a)
{
	//a->age = 150;//����const��һ���޸ľͻ�����������Է�ֹ�����
	cout << "������" << a->name << " ���䣺" << a->age << " ������" << a->score << endl;
}

int main6() {

	//�����ṹ�����
	struct student s = { "����",18,100 };

	//ͨ��������ӡ�ṹ�������Ϣ
	print(&s);

	system("pause");

	return 0;
}