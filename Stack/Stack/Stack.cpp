// Stack.cpp : a stack which can contain 10 integers at most.
//
#include "Stack.hpp"


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
			cout << "The " << i << " element is: "<< right << setw(20) << container[i] << endl;
	}
	else {
		cout << "The stack is empty." << endl;
	}
}


