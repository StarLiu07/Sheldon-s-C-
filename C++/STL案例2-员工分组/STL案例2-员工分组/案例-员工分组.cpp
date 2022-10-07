#include <iostream>
using namespace std;
#include <vector>
#include <map>
#include <ctime>


/*
* ��˾������Ƹ��10��Ա����ABCDEFGHIJ����10��Ա�����빫˾����Ҫָ��Ա�����Ǹ����Ź���
* Ա����Ϣ�У�����  ������ɣ����ŷ�Ϊ���߻����������з�
* �����10��Ա�����䲿�ź͹���
* ͨ��multimap������Ϣ�Ĳ��룬key(���ű��)value(Ա��)
* �ֲ�����ʾԱ����Ϣ
*/
#define CEHUA 0
#define MEISHU 1
#define YANFA 2
class worker
{
public:

	string m_name;
	int m_salary;
};

void createworker(vector<worker>& v)
{
	string nameseed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		worker worker;
		worker.m_name = "Ա��";
		worker.m_name += nameseed[i];

		worker.m_salary = rand() % 10000 + 10000; //10000 ~ 19999

		v.push_back(worker);  //��Ա���ŵ�������
	}
}

void setgroup(vector<worker>& v, multimap<int, worker>& m)
{
	for (vector<worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		//�����漴���ű��
		int deptid = rand() % 3; //0 1 2

		//��Ա�����뵽������
		//key���ű�ţ�value����Ա��
		m.insert(make_pair(deptid, *it));
	}
}

void showworkergroup(multimap<int, worker>& m)
{
	cout << "�߻�����:" << endl;

	multimap<int,worker>::iterator pos = m.find(CEHUA);
	int count = m.count(CEHUA); //ͳ�ƾ�������
	int index = 0;
	for (; index < count; pos++,index++)
	{
		cout << "������" << pos->second.m_name << "  ���ʣ�" << pos->second.m_salary << endl;
	}

	cout << "������������������������" << endl;
	cout << "�������ţ�" << endl;

	pos = m.find(MEISHU);
	count = m.count(MEISHU);
	index = 0;
	for (; index < count; pos++, index++)
	{
		cout << "������" << pos->second.m_name << "  ���ʣ�" << pos->second.m_salary << endl;
	}

	cout << "������������������������" << endl;
	cout << "�з����ţ�" << endl;
	pos = m.find(YANFA);
	count = m.count(YANFA);
	index = 0;
	for (; index < count; pos++, index++)
	{
		cout << "������" << pos->second.m_name << "  ���ʣ�" << pos->second.m_salary << endl;
	}
}

int main() {

	srand((unsigned int)time(NULL));

	//1.����Ա��
	vector<worker> vworker;
	createworker(vworker);

	//����
	//for (vector<worker>::iterator it = vworker.begin();it != vworker.end();it ++)
	//{
	//	cout << "������" << it->m_name << "  ���ʣ�" << it->m_salary << endl;
	//}

	//2.Ա������
	multimap<int,worker> mworker;
	setgroup(vworker,mworker);

	//3.������ʾԱ��
	showworkergroup(mworker);

	system("pause");

	return 0;
}