#include<iostream>
using namespace std;

//�������������ã����߱������������Ƽ���ε��ú�����������ʵ��������Ե�������
//���������������ж�Σ��������Ķ���ֻ����һ��

//�ȽϺ�����ʵ�����������໥�Ƚϣ����ҷ��ؽϴ��ֵ

//��ǰ���߱����������Ĵ��ڣ��������ú�������������Ȼvs2019�Ѿ�����ˣ�
int max(int a, int b);

int main5() {

	int a = 10;
	int b = 20;
	int c = max(a, b);
	cout << "�ϴ��ֵΪ��" << c << endl;

	system("pause");

	return 0;
}

int max(int a, int b)
{
	return a > b ? a : b;
}
