#pragma once
#include <iostream>
using namespace std;

template <typename T>
class Stack
{	
	T* array;
	int size;
	int top;

public:
	Stack(int size);
	~Stack();

	void Push(T data);
	void pop();
	T Top();
	void print();
	int retsize();
	bool isEmpty();
	bool isFull();
};