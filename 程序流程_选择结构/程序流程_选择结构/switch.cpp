#include<iostream>
using namespace std;

//switch������ã�ִ�ж�������֧���

int main() {

	//switch���
	//����Ӱ���д��
	//10~9 ����
	//8~7 �ǳ���
	//6~5 һ��
	//5һ�� ��Ƭ

	//1.��ʾ�û�����Ӱ����
	cout << "����û����д��" << endl;
	//2.�û���ʼ���д��
	int score = 0;
	cin >> score;
	cout << "������ķ���Ϊ��" << score << endl;
	//�����û�����ķ�������ʾ�û����Ľ��

	switch (score)
	{
	case 10:
		cout << "����Ϊ�Ǿ����Ӱ" << endl;
		break;//�˳���ǰ��֧
	case 9:
		cout << "����Ϊ�Ǿ����Ӱ" << endl;
		break;
	case 8:
		cout << "����Ϊ��Ӱ�ǳ���" << endl;
		break;
	case 7 :
		cout << "����Ϊ��Ӱ�ǳ���" << endl;
		break;
	case 6:
		cout << "����Ϊ��Ӱһ��" << endl;
		break;
	case 5 :
		cout << "����Ϊ��Ӱһ��" << endl;
	default :
		cout << "����Ϊ��Ӱ����Ƭ" << endl;

	}

	//if...else �� switch ����
	//switchȱ�㣬�ж���ֻ�������ͻ��ַ��ͣ���������һ������
	//switch�ŵ㣬�ṹ������ִ��Ч�ʸ�

	system("pause");

	return 0;
}