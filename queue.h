#pragma once

#ifndef QUEUE_H
#define QUEUE_H
//普通的队列

template<typename T>

class queue
{
private:
	int _size;
	int contain_size;

//感觉数组不如循环链表
	queue* next;
	queue* head;
	T value;

public:
	//默认构造
	queue() :_size(0), next(nullptr),head(nullptr), contain_size(0){}
	
	//入队
	
	void push(T& x)
	{
		
		

	}


	//出队

	

	//取队头元素

	//取队尾元素

	//判断是否为空

	//计算队中元素个数

	//析构函数
	~queue()
	{

	}

};


#endif // !QUEUE_H



