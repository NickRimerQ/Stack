#include "Header.h"

template<typename T>
Stack<T>::Stack(int size_)
{
	array = new T[size_];
	top = -1;
	size = size_;
}

template<typename T>
Stack<T>::~Stack()
{
	delete[] array;
}

template<typename T>
void Stack<T>::Push(T data)
{
	if (top != size - 1)
	{
		top++;
		array[top] = data;
	}
	else {
		cout << "Stack is full" << endl;
	}
}

template<typename T>
void Stack<T>::pop()
{
	if (top != -1)
	{

		top--;

	}
	else {
		cout << "Stack is empty" << endl;
	}

}

template<typename T>
T Stack<T>::Top()
{
	if (top != -1)
	{
		return array[top];
	}
	else
	{
		cout << "Stack is empty" << endl;
		return T();
	}
}

template<typename T>
void Stack<T>::print()
{
	int toptest = top;
	while (toptest != -1) {
		cout << array[toptest] << endl;
		toptest--;
	}
}

template<typename T>
int Stack<T>::retsize()
{
	return size;
}

template<typename T>
bool Stack<T>::isEmpty()
{
	if (top == -1)
	{
		cout << "______________" << endl;
		cout << "Stack is empty" << endl;
		return true;
	}
	else {
		cout << "__________________" << endl;
		cout << "Stack is not empty" << endl;
		return false;
	}
}

template<typename T>
bool Stack<T>::isFull()
{
	if (top == size - 1)
	{
		cout << "_____________" << endl;
		cout << "Stack is full" << endl;
		return true;
	}
	else {
		cout << "_________________" << endl;
		cout << "Stack is not full" << endl;
		return false;
	}
}