#include<iostream>
using namespace std;

/*�������ʱ�����԰����Ժ���Ϊ���ڲ�ͬ��Ȩ���£����Կ���
����Ȩ�������֣�
1.public    ����Ȩ��  ���ڿ��Է��ʣ�������Է���
2.protected ����Ȩ��  ���ڿ��Է��ʣ����ⲻ���Է���  ���ӿ��Է��ʸ��׵ı�������
3.private   ˽��Ȩ��  ���ڿ��Է��ʣ����ⲻ���Է���  ���Ӳ����Է��ʸ��׵�˽������
*/

class person
{
	//����Ȩ��
public:
	string name;

	//����Ȩ��
protected:
	string car;

	//˽��Ȩ��
private:
	int password;

public:
	void func()
	{
		name = "����";
		car = "������";
		password = 123456;
	}
};

int main2() {

	person p1;//ʵ�����������

	p1.name = "����";
	//p1.car = "����";//����Ȩ�޵������������޷�����
	//p1.password = 123;//˽��Ȩ�޵������������޷�����

	system("pause");

	return 0;
}