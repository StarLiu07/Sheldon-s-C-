#include<iostream>
using namespace std;

//ת���ַ����ã�����һЩ������ʾ������ASCII�ַ�
/*�ֽ׶γ��ã�
* \n(���У�����ǰλ�û�����һ�п�ͷ)
* \\������һ����б���ַ�"\"��
* \t(ˮƽ�Ʊ����������һ��TABλ��)
*/

int mainff() {

	//���з���\n
	
	cout << "hello world" << endl;//��������Ч�����
	cout << "hello world\n";

	//��б��:\\
	
	//cout<<"\"<<endl;
	cout << "\\" << endl;//��һ����б�ܸ��߱�����Ҫ���һ�������ַ����ڶ�����б�����

	//ˮƽ�Ʊ����\t

	cout << "aaaa\thello world" << endl;//һ��\t��8���ո��ж����Ч����
	cout << "a\thello world" << endl;
	cout << "aaaaa\thello world" << endl;



	system("pause");

	return 0;
}