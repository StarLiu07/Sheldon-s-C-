#include <iostream>
using namespace std;
#include <vector>

//��������������vector�ڶ�̬��չ����ʱ����չ����

//����ԭ�ͣ�reserve(int len);  //����Ԥ��len��Ԫ�س��ȣ�Ԥ��λ�ò���ʼ����Ԫ�ز��ɷ���

void test08()
{
	vector<int> v1;

	//����reserveԤ���ռ�
	v1.reserve(100000);

	int num = 0; //ͳ�ƿ��ٵĴ���
	int* p = NULL;
	for (int i = 0; i < 100000; i++)
	{
		v1.push_back(i);

		if (p != &v1[0])
		{
			p = &v1[0];
			num++;
		}
	}

	cout << "num = " << num << endl;

}

int main() {

	test08();

	system("pause");

	return 0;
}