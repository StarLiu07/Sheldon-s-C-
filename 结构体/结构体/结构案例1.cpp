#include<iostream>
using namespace std;
#include<string>
#include<ctime>

/*��������:
ѧУ������������Ŀ��ÿ����ʦ����5��ѧ�����ܹ���3����ʦ����������
���ѧ������ʦ�Ľṹ�壬��������ʦ�Ľṹ���У�
����ʦ������һ�����5��ѧ����������Ϊ��Աѧ���ĳ�Ա�����������Է�����
����������3����ʦ��ͨ��������ÿ����ʦ��������ѧ����ֵ���մ�ӡ����ʦ�����Լ���ʦ������ѧ�����ݡ�*/

//����ѧ���ṹ��
struct student1
{
	string name;
	int score;
};

//������ʦ�ṹ��
struct teacher1
{
	string name2;
	struct student1 arr[5];
};

//����ʦ��ѧ����ֵ�ĺ���	
void allocate(struct teacher1 a[], int len)

{
	string nameseed = "ABCDE";
	for (int i = 0; i < len; i++)
	{

		//����ʦ��ֵ
		a[i].name2 = "teacher_";
		a[i].name2 += nameseed[i];

		//ͨ��ѭ����ÿ����ʦ������ѧ����ֵ
		for (int j = 0; j < 5; j++)
		{
			a[i].arr[j].name = "studen_";
			a[i].arr[j].name += nameseed[j];
			int random = rand() % 61 + 40;//40~100
			a[i].arr[j].score = random;
		}
	}
}

//��ӡ�����˵���Ϣ
void print(struct teacher1 t_arr[], int len)
{
	for(int i = 0;i < len;i++)
	{
		cout << "��ʦ������" << t_arr[i].name2 << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\tѧ��������" << t_arr[i].arr[j].name << " \tѧ��������" << t_arr[i].arr[j].score << endl;
		}
	}
}

int main7() {


	//���������
	srand((unsigned int)time(NULL));

	//������λ��ʦ������
	struct teacher1 t_arr[3];

	//ͨ����������λ��ʦ����Ϣ��ֵ��������ʦ����ѧ������Ϣ��ֵ
	allocate(t_arr, 3);  

	//��ӡ������ʦ������ѧ����Ϣ
	print(t_arr, 3);

	system("pause");

	return 0;
}