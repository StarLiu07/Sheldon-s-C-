#include "speechManager.h"

//���캯��
speechManager::speechManager()
{
	//��ʼ������������
	this->initspeech();

	//����12��ѡ��
	this->createspeaker();

	//���������¼
	this->loadrecord();
}

//�˵�����
void speechManager::show_menu()
{
	cout << "*****************************" << endl;
	cout << "******��ӭ�μ��ݽ�����*******" << endl;
	cout << "*******1.��ʼ�ݽ�����********" << endl;
	cout << "*******2.�鿴�����¼********" << endl;
	cout << "*******3.��ձ�����¼********" << endl;
	cout << "*******0.�˳���������********" << endl;
	cout << "*****************************" << endl;
	cout << endl;
}

//�˳�ϵͳ
void speechManager::exitsystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
}

//��ʼ������������
void speechManager::initspeech()
{
	//�������ÿ�
	this->v1.clear();
	this->v2.clear();
	this->vvicitory.clear();
	this->m_speaker.clear();

	//��ʼ����������
	this->m_index = 1;

	//��ʼ����¼����
	this->m_record.clear();
}

//����12��ѡ��
void speechManager::createspeaker()
{
	string nameseed = "ABCDEFGHIJKL";
	for (int i = 0; i < nameseed.size(); i++)
	{
		string name = "ѡ��";
		name += nameseed[i];

		//�����˾���ѡ��
		speaker sp;
		sp.m_name = name;

		for (int j = 0; j < 2; j++)
		{
			sp.m_score[j] = 0;
		}

		//����ѡ�ֱ�� ���ҷ��뵽v1������
		this->v1.push_back(i + 10001);

		//ѡ�ֱ���Լ���Ӧѡ�� ���뵽map������
		this->m_speaker.insert(make_pair(i + 10001, sp));

	}
}

//��ʼ���� �����������̿��ƺ���
void speechManager::startspeech()
{
	//��һ�ֿ�ʼ����

	//1.��ǩ
	this->speechdraw();

	//2.����
	this->speechcontest();

	//3.��ʾ�������
	this->showscore();

	//�ڶ��ֿ�ʼ����
	this->m_index++;
	
	//1.��ǩ
	this->speechdraw();

	//2.����
	this->speechcontest();

	//3.��ʾ���ս��
	this->showscore();

	//4.����������ļ���
	this->saverecord();

	//���ñ�������ȡ��¼
	//��ʼ������������
	//this->initspeech();
	this->m_index = 1;

	//����12��ѡ��
	this->createspeaker();

	//���������¼
	this->loadrecord();



	cout << "�����������" << endl;
	system("pause");
	system("cls");


}

//��ǩ
void speechManager::speechdraw()
{
	cout << "�� << " << this->m_index << " >> �ֱ���ѡ�����ڳ�ǩ" << endl;
	cout << "������������������������������������" << endl;
	cout << "��ǩ���ݽ�˳�����£�" << endl;

	if (this->m_index == 1)
	{
		//��һ�ֱ���
		random_shuffle(v1.begin(), v1.end());
		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
		{
			cout << *it << "  ";
		}
		cout << endl;
	}
	else
	{
		//�ڶ��ֱ���
		random_shuffle(v2.begin(), v2.end());
		for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
		{
			cout << *it << "  ";
		}
		cout << endl;
	}

	cout << "������������������������������������" << endl;
	system("pause");
}
//����
void speechManager::speechcontest()
{
	cout << "��������������" << this->m_index << "�ֱ�����ʽ��ʼ:����������������" << endl;

	//׼����ʱ���� ���С��ɼ�
	multimap<double, int, greater<double>> groupscore;

	int num = 0; //����ͳ����Ա���� 6��һ��

	vector<int> v_src;//����ѡ������
	if (this->m_index == 1)
	{
		v_src = v1;
	}
	else
	{
		v_src = v2;
	}

	//��������ѡ�ֽ��б���
	for (vector<int>::iterator it = v_src.begin(); it != v_src.end(); it++)
	{
		num++;
		//��ί���
		deque<double> d;
		for (int i = 0; i < 10; i++)
		{
			double score = (rand() % 401 + 600) / 10.f; //600~1000
			//cout << score << "  ";
			d.push_back(score);
		}
		//cout << endl;

		sort(d.begin(), d.end(), greater<double>()); //����
		d.pop_front(); //ȥ����߷�
		d.pop_back(); //ȥ����ͷ�

		double sum = accumulate(d.begin(), d.end(), 0.0f); //�ܷ�
		double avg = sum / (double)d.size(); //ƽ����

		//��ӡƽ����
		//cout << "��ţ�" << *it << "������" << this->m_speaker[*it].m_name << "��ȡƽ���֣�" << avg << endl;

		//��ƽ���� ���뵽 map������
		this->m_speaker[*it].m_score[this->m_index] = avg;

		//��������� ���뵽��ʱС��������
		groupscore.insert(make_pair(avg, *it)); //keyʹ�÷� value�Ǿ���ѡ�ֱ��
		//ÿ6��ȥ��ǰ����
		if (num % 6 == 0)
		{
			cout << "��" << num / 6 << "С��ı������ʣ�" << endl;
			for (multimap<double, int, greater<double>>::iterator it = groupscore.begin(); it != groupscore.end(); it++)
			{
				cout << "��ţ�" << it->second << "������" << this->m_speaker[it->second].m_name << "�ɼ���"
					<< this->m_speaker[it->second].m_score[this->m_index] << endl;
			}

			//ȡ��ǰ����
			int count = 0;
			for (multimap<double, int, greater<double>>::iterator it = groupscore.begin(); it != groupscore.end() && count < 3; it++,count++)
			{
				if (this->m_index == 1)
				{
					v2.push_back((*it).second);
				}
				else
				{
					vvicitory.push_back((*it).second);
				}
			}

			groupscore.clear(); //С���������
			cout << endl;
		}
	}

	cout << "����������������������" << this->m_index << "�ֱ�������ϡ�������������������" << endl;
	system("pause");

}

//��ʾ�÷�
void speechManager::showscore()
{
	cout << "������������������" << this->m_index << "�ֽ���ѡ�����£���������������������" << endl;

	vector<int> v;
	if (this->m_index == 1)
	{
		v = v2;
	}
	else
	{
		v = vvicitory;
	}

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "ѡ�ֱ�ţ�" << *it << "������" << this->m_speaker[*it].m_name << "�÷֣�" 
			<< this->m_speaker[*it].m_score[this->m_index] << endl;
	}
	cout << endl;

	//this->loadrecord();

	system("pause");
	system("cls");
	this->show_menu();
}

//����÷�
void speechManager::saverecord()
{
	ofstream ofs;
	ofs.open("speech.csv", ios::out | ios::app); //��׷�ӵķ�ʽд�ļ�

	//��ÿ��ѡ������ д�뵽�ļ���
	for (vector<int>::iterator it = vvicitory.begin(); it != vvicitory.end(); it++)
	{
		ofs << *it << "," << this->m_speaker[*it].m_score[1] << ",";
	}
	ofs << endl;

	//�ر�
	ofs.close();
	cout << "��¼�Ѿ�����" << endl;

	//�����ļ���Ϊ��״̬
	this->fileisempty = false;
}

//��ȡ��¼
void speechManager::loadrecord()
{
	ifstream ifs("speech.csv", ios::in); //���ļ�
	if (!ifs.is_open())
	{
		this->fileisempty = true;
		//cout << "�ļ�������" << endl;
		ifs.close();
		return;
	}

	//�ļ���������
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//cout << "�ļ�Ϊ��" << endl;
		this->fileisempty = true;
		ifs.close();
		return;
	}

	//�ļ���Ϊ��
	this->fileisempty = false;

	ifs.putback(ch); //�������ȡ�ĵ����ַ� �Ż���

	string data;
	int index = 0;

	while (ifs >> data)
	{
		//cout << data << endl;

		vector<string> v; //���6��string�ַ���

		int pos = -1; //�鵽������λ�õı���
		int start = 0;

		while (true)
		{
			pos = data.find(",", start);
			if (pos == -1)
			{
				//û���ҵ������
				break;
			}
			string temp = data.substr(start, pos - start);
			//cout << temp << endl;
			v.push_back(temp);

			start = pos + 1;
		}

		this->m_record.insert(make_pair(index, v));
		index++;
	}

	ifs.close();

	//for (map<int, vector<string>>::iterator it = this->m_record.begin(); it != m_record.end(); it++)
	//{
	//	cout << it->first << "�ھ���ţ�" << it->second[0] << "������" << it->second[1] << endl;
	//}
}

//��ʾ�����¼
void speechManager::showrecord()
{
	if (this->fileisempty)
	{
		cout << "�ļ�Ϊ�ջ��ļ�������" << endl;
	}
	else
	{
		for (int i = 0; i < this->m_record.size(); i++)
		{
			cout << "��" << i + 1 << "��"
				<< "�ھ���ţ�" << this->m_record[i][0] << "�÷֣�" << this->m_record[i][1] << "  "
				<< "�Ǿ���ţ�" << this->m_record[i][2] << "�÷֣�" << this->m_record[i][3] << "  "
				<< "������ţ�" << this->m_record[i][3] << "�÷֣�" << this->m_record[i][5] << endl;
		}
	}

	////���ñ�������ȡ��¼
	////��ʼ������������
	//this->initspeech();

	////����12��ѡ��
	//this->createspeaker();

	////���������¼
	//this->loadrecord();

	system("pause");
	system("cls");
}

//����ļ���
void speechManager::clearRecord()
{
	cout << "�Ƿ�ȷ������ļ���" << endl;
	cout << "1.��" << endl;
	cout << "2.��" << endl;

	int select = 0;

	cin >> select;

	if (select == 1)
	{
		//ȷ�����
		ofstream ofs("speech.csv", ios::trunc);
		ofs.close();

		//��ʼ������������
		this->initspeech();

		//����12��ѡ��
		this->createspeaker();

		//���������¼
		this->loadrecord();

		cout << "��ճɹ�" << endl;
	}
	system("pause");
	system("cls");
}

//��������
speechManager::~speechManager()
{

}