#include<iostream>
using namespace std;
#include<fstream>//ͷ�ļ�����

//ios:.in  Ϊ���ļ������ļ�
//ios:out  Ϊд�ļ������ļ�
//ios:.ate  ��ʼλ��:�ļ�β
//ios:app  ׷�ӷ�ʽд�ļ�
//ios:trunc  ����ļ�������ɾ�����ٴ���
//ios:binary  �����Ʒ�ʽ

void test01()
{
	//1.����ͷ�ļ� fstream

	//2.����������
	
	ofstream ofs;

	//3.ָ���򿪷�ʽ
	ofs.open("test.txt", ios::out);

	//4.д����
	ofs << "����������" << endl;
	ofs << "�Ա���" << endl;
	ofs << "���䣺18" << endl;

	//5.�ر��ļ�
	ofs.close();
}

int main1() {

	test01();

	system("pause");

	return 0;
}