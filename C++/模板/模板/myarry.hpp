// �Լ���ͨ��������
#pragma once 
#include <iostream>
using namespace std;

template<class T>
class myarry
{
public:

	//�вι���  ����  ����
	myarry(int capacity)
	{
		this->m_capacity = capacity;

		this->m_size = 0;

		this->paddress = new T[this->m_capacity];
	}

	//���������С
	int getsize()
	{
		return this->m_size;
	}

	//��������
	myarry(const myarry& arr)
	{
		this->m_capacity = arr.m_capacity;
		this->m_size = arr.m_size;
		
		//���
		this->paddress = new T[arr.m_capacity];

		//��arr�е����ݶ���������
		for (int i = 0; i < this->m_size; i++)
		{
			this->paddress[i] = arr.paddress[i];
		}
	}

	//operator= ��ֹǳ��������
	myarry& operator=(const myarry& arr)
	{
		//���ж�ԭ�������Ƿ������ݣ���������ͷ�
		if (this->paddress != NULL)
		{
			delete[] this->paddress;
			this->m_capacity = 0;
			this->m_size = 0;
		}

		//���
		this->m_capacity = arr.m_capacity;
		this->m_size = arr.m_size;
		this->paddress = new T[arr.m_capacity];
		for (int i = 0; i < this->m_size; i++)
		{
			this->paddress[i] = arr.paddress[i];
		}
		return *this;
	}

	//β�巨
	void push_back(const T& val)
	{
		//�ж������Ƿ���ڴ�С
		if (this->m_capacity == this->m_size)
		{
			return;
		}
		this->paddress[this->m_size] = val; //������ĩβ��������
		this->m_size++; // ���������С
	}

	//βɾ��
	void pop_back()
	{
		//���û����ʲ������һ��Ԫ�أ���Ϊβɾ���߼�ɾ��
		if (this->m_size == 0)
		{
			return;
		}
		this->m_size--;
	}

	//ͨ���±�ķ�ʽ���������е�Ԫ��  arr[0] = 100
	T& operator[](int index)
	{
		return this->paddress[index];
	}

	//�������������
	int getcapacity()
	{
		return this->m_capacity;
	}
	


	//��������
	~myarry()
	{
		if (this->paddress != NULL)
		{
			delete[] this->paddress;
			this->paddress = NULL;
		}
	}

private:

	T* paddress; //ָ��ָ��������ٵ���ʵ����

	int m_capacity; //��������

	int m_size;//���ݴ�С
};