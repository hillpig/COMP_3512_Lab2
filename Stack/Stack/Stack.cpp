// Stack.cpp : Defines the entry point for the console application.
//
#include "Stack.hpp"

class Stack
{
	int container[10];
	int topElement;
public:
	Stack();
	void push(int input);
	void pop();
	const int top();
	const bool empty();
	const bool full();
	void print();
private:

};

Stack::Stack()
{
	topElement = -1;
}

void Stack::push(int input)
{
	if (topElement < 9) {
		container[++topElement] = input;
	}
	else {
		cout << "Stack overflow." << endl;
	}

}

void Stack::pop()
{
	if (topElement != -1) {
		topElement--;
	}
	else {
		cout << "Empty Stack." << endl;
	}
}

const int Stack::top()
{
	return topElement;
}

const bool Stack::empty()
{
	return topElement == -1?true:false;
}

const bool Stack::full()
{
	return topElement == 9?true:false;
}

void Stack::print()
{
	if (!empty()) {
		for (int i = 0; i <= topElement; i++)
			cout << container[i] << endl;
	}
}


