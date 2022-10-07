#include <iostream>
using namespace std;
#include <vector>
#include <deque>
#include <algorithm>
#include <time.h>

//������������5��ѡ�֣�ѡ��ABCDE��10����ί�ֱ��ÿһ��ѡ�ִ�֣�ȥ����߷֣�ȥ����ί����ͷ֣�ȥƽ����

/*
* ʵ�ֲ���
* 1.��������ѡ�֣��ŵ�vector��
* 2.����vector������ȡ����ÿһ��ѡ�֣�ִ��forѭ�������԰�10�����ִ浽deque������
* 3.sort�㷨��deque�����з�������ȥ����߷ֺ���ͷ�
* 4.deque��������һ�飬�ۼ��ܷ�
* 5.��ȡƽ��ֵ
*/

//ѡ����
class person
{
public:
	person(string name, int score)
	{
		this->m_name = name;
		this->m_score = score;
	}
	
	string m_name; //����
	int m_score; //ƽ����
};

void createperson(vector<person>& v)
{
	string nameseed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "ѡ��";
		name += nameseed[i];

		int score = 0;

		person p(name, score);

		//��������person���� ���뵽������
		v.push_back(p);
	}
}

//���
void setscore(vector<person>& v)
{
	for (vector<person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//����ί�ķ��������뵽deque������
		deque<int> d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60; //60~100
			d.push_back(score);
		}

		//cout << "ѡ�֣�" << it->m_name << "��֣�" << endl;
		//for (int i = 0; i < 10; i++)
		//{
		//	cout << *dit << "  ";
		//}
		//cout << endl;

		//����
		sort(d.begin(), d.end());

		//ȥ����ߺ���ͷ�
		d.pop_back();
		d.pop_front();

		//ȡƽ����
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit; //�ۼ�ÿ����ί�ķ���
		}

		int avg = sum / d.size();

		//��ƽ���ָ�ֵ��ѡ��
		it->m_score = avg;
	}
}

void showscore(vector<person>& v)
{
	for (vector<person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "ѡ�֣�" << it->m_name << " �÷֣�" << it->m_score << endl;
	}
}

int main() {

	//���������
	srand((unsigned int)time(NULL));

	//1.��������ѡ��
	vector<person> v;//���ѡ�ֵ�����
	createperson(v);

	//����
	//for (vector<person>::iterator it = v.begin(); it != v.end(); it++)
	//{
	//	cout << "����" << (*it).m_name << " ������" << (*it).m_score << "  ";
	//}
	//cout << endl;

	//2.������ѡ�ִ��
	setscore(v);

	//3.��ʾ���÷�
	showscore(v);

	system("pause");

	return 0;
}