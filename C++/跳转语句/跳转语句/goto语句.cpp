#include<iostream>
using namespace std;

//goto������ã�������������ת���
//�﷨��goto ���;
//���ͣ������ǵ�λ�ô��ڣ�ִ�е�goto���ʱ������ת����ǵ�λ��

int main() {

	//goto���

	cout << "1." << endl;

	cout << "2." << endl;

	goto FLAG;

	cout << "3." << endl;

	cout << "4." << endl;

	FLAG:
	
	cout << "5." << endl;
	//�ڳ����о�������ʹ��goto��䣬������ɳ������̻���

	system("pause");

	return 0;
}