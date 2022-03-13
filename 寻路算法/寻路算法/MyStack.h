#pragma once

template<class T>
class MyStack{
	T*		pBuff;	//�ڴ��׵�ַ
	size_t	len;	//Ԫ�ظ���
	size_t	maxLen; //�ڴ��С
public:
	MyStack(){ pBuff = NULL; len = maxLen = 0; }
	~MyStack(){ if (pBuff) delete[] pBuff; pBuff = NULL; len = maxLen = 0; }

	//��ջ
	void push(const T& data);
	//��ջ
	void pop(){ len--; }
	//��ȡջ��Ԫ��
	T getTop(){ return pBuff[len - 1]; }
	//�ж�ջ�Ƿ�Ϊ��
	bool isEmpty(){ return (len == 0); }
};

template<class T>
//��ջ
void MyStack<T>::push(const T& data){
	//1 �ж��Ƿ���Ҫ�ؿ��ڴ�
	if (len <= maxLen){
		//2 ��ȡ�¿��ڴ��С
		maxLen = maxLen + (((maxLen >> 1) > 1) ? (maxLen >> 1) : 1);
		//3 �¿��ڴ�
		T* pTemp = new T[maxLen];
		//4 �Ƿ�ԭ�����ڴ�
		if (pBuff){
			//5 ����ԭ��������
			memcpy(pTemp, pBuff, sizeof(T)*len);
			//6 �ͷ�ԭ���ڴ�
			delete[] pBuff;
		}

		//7 pBuffָ���¿��ڴ�
		pBuff = pTemp;
	}

	//8 �����ݽ�ջ
	pBuff[len++] = data;
}