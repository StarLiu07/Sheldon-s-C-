#include<iostream>
using namespace std;

/*����ģ�������̳�ʱ����Ҫע��һ�¼���:
��������̳еĸ�����һ����ģ��ʱ��������������ʱ��Ҫָ����������T������
�������ָ�����������޷�����������ڴ�
����������ָ����������T�����ͣ�����Ҳ���Ϊ��ģ�� */

template<class T>
class base
{
public:
	T m;
};

//class son : public base //���󣬱���Ҫ֪�������е�T���ͣ����ܼ̳и���
class son : public base<int>
{

};

void test10()
{
	son s1;
}

//��������ָ��������T���ͣ�����Ҳ��Ҫ����ģ��
template<class T1,class T2>
class son2 : public base<T2>
{
public:
	son2()
	{
		cout << "T1������Ϊ��" << typeid(T1).name() << endl;
		cout << "T2������Ϊ��" << typeid(T2).name() << endl;
	}

	T1 obj;
};

void test11()
{
	son2<int,char> s2;
}

int main6() {

	system("pause");
	
	return 0;
}