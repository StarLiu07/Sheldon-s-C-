#include<iostream>
using namespace std;

//ʵ�ͣ������ͣ����������ڱ�ʾС��
/*�����ͱ�����Ϊ���֣�
* 1.�����ȣ�float��8�ֽ�  7λ��Ч����
* 2.˫���ȣ�double��8�ֽ� 15=16λ��Ч����
* ���ߵ��������ڱ�ʾ����Ч���ַ�Χ��ͬ
*/

int mainc() {

	//Ĭ������� ���һ��С��������ʾ6λ��Ч����

	//1.������ float
	float f1 = 3.14f;//ͨ�����ڱ���ֵ���f�����������ͻ�Ϊfloat(Ĭ��double)

	cout << "f1=" << f1 << endl;

	//2.˫���� double
	double d1 = 3.14;

	cout << "d1=" << d1 << endl;

	//ͳ��float��double��ռ�õĿռ�
	cout << "float��ռ�õĿռ䣺" << sizeof(float) << endl;
	cout << "double��ռ�õĿռ䣺" << sizeof(double) << endl;

	//��ѧ������
	float f2 = 3e2;//3*10^2;
	cout << f2 << endl;

	float f3 = 3e-2;//3*0.1^2
	cout << f3 << endl;

	system("pause");

	return 0;
}