#pragma once
#ifndef VECTOR_H
#define VECTOR_H

template<typename T>

class vector
{
private:

	int contain_size, _size;//�����ռ�  ��  Ԫ����Ŀ

	T* _a;//����

public:

	//Ĭ�Ϲ���
	vector() :contain_size(0), _size(0), _a(nullptr) {}

	//��������
	vector(const vector& x):contain_size(x.contain_size), _size(x._size)
	{
		_a = new T[contain_size];
		for (int i = 0; i < _size; i++)
		{
			_a[i] = x._a[i];
		}
	}


	T& operator[] (const T& x)
	{
		return _a[x];
	}

	//��������
	void push_back(const T x)
	{
		//�жϿռ��Ƿ����
		if (_size == contain_size)resize(_size * 2);

		_a[_size++] = x;

	}


	int size()//����Ԫ�ظ���
	{
		return _size;
	}


	vector& operator= (const vector& x)
	{
		clear();
		resize(x.contain_size);
		_size = x._size;

		for (int i = 0; i < x.size(); i++)
		{
			_a[i] = x._a[i];
		}
	}


	//����ռ�
	void clear()
	{
		if (contain_size)
		{
			delete[] _a;
			contain_size = 0;
			_size = 0;
		}
		return;
	}



	//�������Ŀռ�
	void resize(int x)
	{
		if (!x)x = 1;
		contain_size = x;
		T* node = new T[contain_size];
		for (int i = 0; i < _size; i++)
		{
			node[i] = _a[i];
		}
		delete[] _a;
		_a = node;
	}


	//ɾ��Ԫ��

	void pop_back()
	{
		--_size;
	}


	//��������
	~vector()
	{
		clear();
	}


};




#endif // !VECTOR.H



