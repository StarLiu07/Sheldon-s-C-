#include<iostream>;
using namespace std;
#include<fstream>

class person1
{
public:
	char m_name[64];//����
	int m_age;//����
};

void test04()
{
	//1.����ͷ�ļ�

	//2.����������
	ifstream ifs;
	
	//3.���ļ�  �ж��ļ��Ƿ�򿪳ɹ�
	ifs.open("person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}

	//4.���ļ�
	person1 p;
	ifs.read((char*)&p, sizeof(person1));

	cout << "������" << p.m_name << endl;
	cout << "���䣺" << p.m_age << endl;

	//5.�ر��ļ�
	ifs.close();
}

int main() {

	test04();

	system("pause");

	return 0;
}