#include<iostream>
using namespace std;

//break������ã���������ѡ��ṹ����ѭ���ṹ
/*
* breakʹ�õ�ʱ����
* ������switch��������У���������ֹcase������switch
* ������ѭ������У�������������ǰ��ѭ�����
* ������Ƕ��ѭ���У�����������ڲ�ѭ�����
*/

int mainewr() {
//
//	//1.������switch�����
//	cout << "��ѡ�񸱱��Ѷ�" << endl;
//	cout << "1.��ͨ" << endl;
//	cout << "2.�е�" << endl;
//	cout << "3,����" << endl;
//
//	int select = 0;//����ѡ�����ı���
//
//	cin >> select;//��ʾ�û�����
//	switch (select)
//	{
//		case 1:
//			cout << "��ѡ�������ͨ�Ѷ�" << endl;
//			break;
//		case 2:
//			cout << "��ѡ������е��Ѷ�" << endl;
//			break;
//		case 3:
//			cout << "��ѡ����������Ѷ�" << endl;
//			break;
//		default:
//			break;
//
//	}


	//2.������ѭ�������
	//for (int i = 0; i < 10; i++)
	//{
	//	//���i����5���˳�ѭ�������ٴ�ӡ
	//	if (i == 5)
	//	{
	//		break;
	//	}
	//	cout << i << endl;
	//}

	//3.������Ƕ��ѭ�������
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 5)
			{
				break;//�Ƴ��ڲ�ѭ��
			}
			cout << "* ";
		}
		cout << endl;
	}


	system("pause");

	return 0;
}