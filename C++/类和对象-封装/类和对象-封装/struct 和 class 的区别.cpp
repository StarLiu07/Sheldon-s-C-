#include<iostream>
using namespace std;

/*��C++��struct �� class Ψһ�����������Ĭ�ϵķ���Ȩ�޲�ͬ
����
struct Ĭ��Ȩ��Ϊ����
class  Ĭ��Ȩ��Ϊ˽��
*/

class c1
{
	int m_a;//Ĭ��Ȩ��Ϊ˽��Ȩ��
};

struct c2
{
	int m_a;//Ĭ��Ȩ��Ϊ����Ȩ��	
};

int main3() {

	c1 c1;
	//c1.m_a = 1; //��class��Ĭ��Ȩ��Ϊ˽�У���˲��ܷ���

	c2 c2;
	c2.m_a = 1;   //��struct��Ĭ��Ȩ��Ϊ��������˿��Է���

	system("pause");

	return 0;
}