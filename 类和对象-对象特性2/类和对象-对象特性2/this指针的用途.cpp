#include<iostream>
using namespace std;

//thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
/*thisָ��ʱ����ÿһ���Ǿ�̬��Ա�����ڵ�һ��ָ��
thisָ�벻��Ҫ���壬ֱ��ʹ�ü���*/

/*thisָ����;��
1.���βκͳ�Ա����ͬ��ʱ������thisָ��������
2.����ķǾ�̬��Ա�����з��ض�������ʹ��return*this
*/

class person2
{
public:

	person2(int age)
	{
		//thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
		this->age = age;
	}

	//����&���ؾֲ����������������п�������p2'�����أ����Է��صĲ�����p2
	person2& personadd(person2& p)
	{
		this->age += p.age;

		//thisָ�����p2
		return *this;
	}

	int age;
};

//1.������Ƴ�ͻ
void exam3()
{
	person2 p1(18);
	cout << "p1������Ϊ��" << p1.age << endl;
}

//���ض�������*this
void exam4()
{
	person2 p2(10);

	person2 p3(10);

	//��ʽ���˼��
	p2.personadd(p3).personadd(p3).personadd(p3);

	cout << "p2������Ϊ��" << p2.age << endl;
}

int main5() {

	//exam3();
	exam4();

	system("pause");

	return 0;
}