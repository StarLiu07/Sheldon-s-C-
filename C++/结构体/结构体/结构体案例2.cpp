#include<iostream>
using namespace std;

/*����������
���һ��Ӣ�۵Ľṹ�壬������Ա���������䣬�Ա�;�����ṹ�����飬�����д��5��Ӣ�ۡ�
ͨ��ð��������㷨���������е�Ӣ�۰���������������������մ�ӡ�����Ľ����*/
/*��λӢ����Ϣ���£�
{"����" ,23,"��"},{"����" ,22,"��"},
{"����",21,"�С�},{"����",19,"Ů"},
{"�ŷɡ�,20, "��"}*/

//����һ��Ӣ�۽ṹ��
struct hero
{
	string name;
	int age;
	string sex;
};

//����һ��ð������ĺ���
void bubble(struct hero arr[], int len)
{
	for (int i = 0; i < len-1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j].age > arr[j + 1].age)
			{
				struct hero temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

}

int main() {

	//����һ���ṹ�����飬���ڴ���Ӣ����Ϣ
	struct hero arr[5] = { {"����",23,"��"},{"����" ,22,"��"},{"�ŷ�",20,"��"},{"����",21,"��"},{"����",19,"Ů"} };

	//ͨ��ð������ʵ�ֶ�Ӣ���������������
	
	bubble(arr, 5);

	//�������������
	for (int a = 0; a < 5; a++)
	{
		cout << "������" << arr[a].name << " ���䣺" << arr[a].age << " �Ա�" << arr[a].sex << endl;
	}
	//ohhhhhhhhhhhhhhhhhhhhhhhh

	system("pause");

	return 0;
}