#pragma once

#ifndef QUEUE_H
#define QUEUE_H
//��ͨ�Ķ���

template<typename T>

class queue
{
private:
	int _size;
	int contain_size;

//�о����鲻��ѭ������
	queue* next;
	queue* head;
	T value;

public:
	//Ĭ�Ϲ���
	queue() :_size(0), next(nullptr),head(nullptr), contain_size(0){}
	
	//���
	
	void push(T& x)
	{
		
		

	}


	//����

	

	//ȡ��ͷԪ��

	//ȡ��βԪ��

	//�ж��Ƿ�Ϊ��

	//�������Ԫ�ظ���

	//��������
	~queue()
	{

	}

};


#endif // !QUEUE_H



