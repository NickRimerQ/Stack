#include "Header.h"
#include "Stack.cpp"

int main()
{
	Stack<int> art(10);
	for (int i = 0; i < 10; i++) {
		art.Push(i);
	}
	art.pop();
	art.print();
	cout << "Last element of the stack is " << art.Top() << endl;
	art.isEmpty();
	art.isFull();
	return 0;
}