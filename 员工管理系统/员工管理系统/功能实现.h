#pragma once;
#include<iostream>
using namespace std;
#include <fstream>
#define FILENAME "person.txt"
#include<cstdlib>

#include "����.h"
#include "����.h"
#include "�ϰ�.h"
#include "Ա��.h"

class workermanger
{
public:
	//���캯��
	workermanger();

	//��ʾ�˵�
	void showmenu();

	//�˳��˵�
	void tui();

	//����Ա��
	void save();

	int get_empnum();

	//��ȡ�ļ�
	void duqu();

	//����Ա��
	void addemp();

	//��ʾԱ��
	void show_emp();

	//ɾ��ְ��
	void delete_emp();

	//�޸�Ա��
	void xiygai();

	//����Ա��
	void find_emp();

	//�������
	void sort_emp();


	//����ļ�
	void clean();

	//��������
	~workermanger();

	int emp_num;
	bool emp_file;
	worker** workerarry;
};
