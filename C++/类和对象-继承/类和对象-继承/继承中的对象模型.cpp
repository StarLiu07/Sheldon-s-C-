#include<iostream>
using namespace std;

class base4
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};

class son4 : public base4
{
public:
	int m_d;
};

//���ÿ�����Ա������ʾ���߲鿴����ģ��
//��ת�̷� F:
//��ת�ļ�·��cd����·����
//�鿴����
// c1 / d1 reportSingleClassLayout�����ļ���

void test05()
{
	//���������зǾ�̬��Ա���Զ��ᱻ����̳���ȥ
	//������˽�г�Ա���� �Ǳ��������������ˣ�����Ƿ��ʲ����ģ�����ȷʵ���̳���ȥ��
	cout << "size of son = " << sizeof(son4) << endl;
}

int main3() {

	system("pause");

	return 0;
}