#include<iostream>
using namespace std;

//while������ã�����ѭ��������ִ��ѭ�����
//�﷨��while(ѭ������){ѭ�����}
//���ͣ�ֻҪѭ���������Ϊ���ִ��ѭ�����

int maindd() {

	//����Ļ�д�ӡ0~9ʮ������
	int num = 0;
	//С����������ѭ��������
	//ע��������������ѭ��
	while (num < 10)
	{
		cout << num++ << endl;
	}

	system("pause");

	return 0;
}