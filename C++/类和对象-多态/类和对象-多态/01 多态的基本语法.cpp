#include<iostream>
using namespace std;

/*��̬��Ϊ����
����̬��̬:�������غ�������������ھ�̬��̬�����ú�����
��̬��̬:��������麯��ʵ������ʱ��̬
��̬��̬�Ͷ�̬��̬����:
����̬��̬�ĺ�����ַ��󶨨C����׶�ȷ��������ַ
����̬��̬�ĺ�����ַ��󶨨C���н׶�ȷ��������ַ
*/

//������
class animal
{
public:
	//�麯��
	virtual void speak()
	{
		cout << "������˵��" << endl;
	}
};

//è��
class cat : public animal
{
public:
	//��д  ��������ֵ����  ������  �����б�  ��ȫ��ͬ
	void speak()
	{
		cout << "Сè��˵��" << endl;
	}
};

//����
class dog : public animal
{
public:
	void speak()
	{
		cout << "С����˵��" << endl;
	}
};

//ִ��˵���ĺ���
//��ַ���  �ڱ���׶�ȷ��������ַ
//�����ִ����è˵������ô���������ַ�Ͳ�����ǰ�󶨣���Ҫ�����н׶ν��а󶨣���ַ���

/*��̬��̬��������
1.�м̳й�ϵ
2.������д������麯��
*/

//��̬��̬ʹ��
//�����ָ��������� ָ���������

void dospeak(animal& animal)
{
	animal.speak();
}

void test01()
{
	cat cat;
	dospeak(cat);

	dog dog;
	dospeak(dog);
}

int main1() {

	test01();

	system("pause");

	return 0;
}