#include<iostream>
using namespace std;

//do...while����:����ѭ��������ִ��ѭ�����
//�﷨��do{ѭ�����} while{ѭ������}
//��while������do...while����ִ��һ��ѭ����䣬���ж�ѭ������

int maingg() {

	//����Ļ�����0��9ʮ������

	int num = 0;

	do
	{
		cout << num << endl;
		num++;
	} while (num < 10);//ע��do...while���while���ź���Ҫ�ӷֺ�



	while (num < 10)
	{
		cout << num << endl;
		num++;
	}

	//do...while����ִ��һ��ѭ�����

	system("pause");

	return 0;
}