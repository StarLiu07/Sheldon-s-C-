#include<iostream>
using namespace std;

/*���μ̳и���:
����������̳�ͬһ������
����ĳ����ͬʱ�̳�������������
���ּ̳б���Ϊ���μ̳У�������ʯ�̳�I
*/

//������
class animal
{
public:
	int m_age;
};

//������̳� ������μ̳е�����
// �̳�֮ǰ ���Ϲؼ��� virtual ��Ϊ��̳�
// animal�� ��Ϊ ����� 
//����
class sheep :virtual public animal {};

//����
class tuo :virtual public animal {};

//������
class sheeptuo : public sheep,public tuo{};

void test12()
{
	sheeptuo st;

	st.sheep::m_age = 18;
	st.tuo::m_age = 28;

	//�����μ̳У���������ӵ����ͬ�����ݣ���Ҫ��������������
	cout << "st.sheep::m_age = " << st.sheep::m_age << endl;
	cout << "st.tuo::m_age = " << st.tuo::m_age << endl;
	cout << "st.m_age = " << st.m_age << endl;
}

int main() {

	system("pause");

	return 0;
}